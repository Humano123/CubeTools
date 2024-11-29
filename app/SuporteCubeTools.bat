@echo off
setlocal enabledelayedexpansion

echo Bem-vindo(a) ao suporte do CubeTools.
echo Use os comandos: 

:loop
cls

echo Comando - Saber sobre os comandos
echo Duvida - Tirar a duvida basica.
echo FAQ - Perguntas Frequentes.
echo Bug - Reportar bugs.
echo Sobre - Saber sobre o CubeTools
echo.

title Suporte CubeTools

set "palavra_chave_comando=comando"
set "palavra_chave_duvida=duvida"
set "palavra_chave_faq=faq"
set "palavra_chave_bug=bug"
set "palavra_chave_sobre=sobre"

set /p texto="Digite um texto: "

set "texto=!texto: =!"

echo %texto% | findstr /i "%palavra_chave_comando%" >nul
if %errorlevel% equ 0 (
    echo Caso não saiba usar os comandos, use $Help para saber todos os comandos do CubeTools e as suas funcionalidades.
)

echo %texto% | findstr /i "%palavra_chave_duvida%" >nul
if %errorlevel% equ 0 (
    echo Caso tenha duvida, use $Help para saber todos os comandos do CubeTools e suas funcionalidades, saiba o basico: 
    echo $ = Mostrar
    echo + = Executar
    echo vazio = Versão cmd original (batch)
    echo.
    echo Exemplo: $Help MOSTRA todos os comandos, $cmd EXECUTA o cmd.
)

echo %texto% | findstr /i "%palavra_chave_faq%" >nul
if %errorlevel% equ 0 (
    echo O que é CubeTools: App para usar comandos para interagir com seu computador.
    echo.
    echo É pago: Não, o app é totalmente gratuito.
    echo.
    echo É dificil: Não, é facil.
)

echo %texto% | findstr /i "%palavra_chave_sobre%" >nul
if %errorlevel% equ 0 (
	echo CubeTools é um app para usar comandos para interagir com o computador via comandos.
	echo.
	echo Não é possivel usar o CubeTools em celulares, pois usa batch, em sua linguagem.
	echo.
	echo Você pode usar comandos do CubeTools e do batch.
)

echo %texto% | findstr /i "%palavra_chave_bug%" >nul
if %errorlevel% equ 0 (
    echo Caso tenha bugs, reporte no discord do CubeTools
)

pause
goto loop
