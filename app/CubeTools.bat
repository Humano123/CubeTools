@echo off
setlocal enabledelayedexpansion

title CubeTools

echo ================================
echo Termos de Condição de Uso - CubeTools
echo ================================
echo Este script é fornecido "como está" e sem qualquer garantia.
echo Ao continuar, você concorda em usar o CubeTools por sua conta e risco.
echo Nenhuma responsabilidade será assumida por quaisquer danos.
echo Pressione qualquer tecla para aceitar e continuar, ou feche a janela para sair.
pause >nul

echo =========
echo CubeTools
echo =========

:menu

rem ! = inicio
rem !+ = executar
rem !$ = mostrar

set /p cmd="-"

if /i "%cmd%"=="+cmd" (
    start cmd
) else if /i "%cmd%"=="$help" (
    echo $cmd - - Exibe o terminal de comandos.
    echo $info - - Exibe informações do sistema.
    echo $ip - - Exibe o IP público.
    echo $local - - Exibe a localização via IP.
    echo $fakehack - - Altera a cor do terminal para verde.
    echo $reset - - Limpa a tela e exibe o título.
    echo $checkinternet - - Verifica a conexão com a internet.
    echo $ram - - Exibe a quantidade de memória RAM disponível.
    echo $datetime - - Exibe a data e hora atuais.
    echo $update - - Verifica o status do Windows Update.
    echo --------------------------------------------------
    echo +cmd - - Abre o terminal de comandos.
    echo +notepad - - Abre o Bloco de Notas.
    echo +novbs - - Fecha processos de VBScript.
    echo +file.reset - - Reseta o conteúdo de um arquivo.
    echo brasil - - Exibe a palavra "brasil".
    echo +explorer - - Abre o Explorador de Arquivos.
    echo +calc - - Abre a Calculadora.
    echo +alert - - Exibe um alerta no navegador.
    echo +prompt - - Exibe um prompt no navegador.
    echo +browser - - Abre uma URL no navegador.
    echo +cubetools - - Abre o site do CubeTools
) else if /i "%cmd%"=="$cmd" (
    cmd
) else if /i "%cmd%"=="+notepad" (
    if exist notepad.exe (
        echo Abrindo o Bloco de Notas...
        start notepad.exe
    ) else (
        echo ERRO! O Bloco de Notas não foi encontrado.
    )
) else if /i "%cmd%"=="$info" (
    SYSTEMINFO
) else if /i "%cmd%"=="+novbs" (
    taskkill /f /im wscript.exe >nul 2>&1
    if %errorlevel%==0 (
        echo Sucesso! A aba do VBScript foi fechada.
    ) else (
        echo Erro! Nenhuma aba de VBScript está aberta.
    )
) else if /i "%cmd%"=="+file.reset" (
    set /p nomearquivo="Nome:"
    if exist "!nomearquivo!" (
        echo. > "!nomearquivo!"
        echo O arquivo !nomearquivo! foi resetado.
    ) else (
        echo O arquivo !nomearquivo! nao foi encontrado.
    )
) else if /i "%cmd%"=="$ip" (
    for /f "delims=" %%i in ('curl -s ifconfig.me') do echo Seu IP Público é: %%i
) else if /i "%cmd%"=="$local" (
    echo Para obter a localização, utilize um serviço externo como o "ipinfo.io".
    for /f "delims=" %%i in ('curl -s ipinfo.io') do echo %%i
) else if /i "%cmd%"=="brasil" (
    echo brasil
) else if /i "%cmd%"=="$fakehack" (
    color A
) else if /i "%cmd%"=="$reset" (
    cls
    echo =========
    echo CubeTools
    echo =========
) else if /i "%cmd%"=="+explorer" (
    echo Abrindo o Explorador de Arquivos...
    start explorer
) else if /i "%cmd%"=="+calc" (
    echo Abrindo a Calculadora...
    start calc
) else if /i "%cmd%"=="+alert" (
    set /p nnnmmm="Texto:"
    mshta "javascript:alert('!nnnmmm!');close();"
) else if /i "%cmd%"=="+prompt" (
    set /p nnnmmmp="Texto:"
    mshta "javascript:prompt('!nnnmmmp!');close();"
) else if /i "%cmd%"=="+browser" (
    set /p url="Digite a URL para abrir no navegador:"
    start "" "chrome.exe" "%url%"
) else if /i "%cmd%"=="$checkinternet" (
    echo Verificando a conexão com a internet...
    ping -n 1 google.com >nul 2>&1
    if %errorlevel%==0 (
        echo Você está conectado à internet.
    ) else (
        echo Não foi possível conectar à internet.
    )
) else if /i "%cmd%"=="$ram" (
    echo Verificando a memória RAM disponível...
    for /f "skip=1 tokens=2 delims==" %%i in ('wmic OS get FreePhysicalMemory /Value') do (
        set /a ramMB=%%i / 1024
    )
    echo Memória RAM disponível: !ramMB! MB
) else if /i "%cmd%"=="$datetime" (
    echo Data e Hora Atual:
    echo %date% %time%
) else if /i "%cmd%"=="$update" (
    echo Verificando o status do Windows Update...
    sc query wuauserv | findstr /i "RUNNING"
    if %errorlevel%==0 (
        echo O serviço do Windows Update está ativo.
    ) else (
        echo O serviço do Windows Update não está ativo.
    )
) else if /i "%cmd%"=="+CubeTools" (
	    start https://humano123.github.io/CubeTools/
) else if /i "%cmd%"=="oi" (
	echo CubeTools: Ola
) else (
    echo Comando em BATCH executado
    %cmd%
)

goto menu
pause