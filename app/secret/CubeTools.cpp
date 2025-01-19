#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <windows.h>

void showUsage() {
    std::cout << "============================\n";
    std::cout << "Termos de Condição de Uso - CubeTools\n";
    std::cout << "============================\n";
    std::cout << "Este script é fornecido \"como está\" e sem qualquer garantia.\n";
    std::cout << "Ao continuar, você concorda em usar o CubeTools por sua conta e risco.\n";
    std::cout << "Nenhuma responsabilidade será assumida por quaisquer danos.\n";
    std::cout << "Pressione Enter para aceitar e continuar, ou feche a janela para sair.\n";
    std::cin.get();
}

void menu() {
    while (true) {
        std::string cmd;
        std::cout << "-";
        std::getline(std::cin, cmd);
        if (cmd == "+cmd") {
            system("start cmd");
        } else if (cmd == "$help") {

std::cout << "$cmd - Exibe o terminal de comandos.\n";std::cout << "$info - Exibe informações do sistema.\n";std::cout << "+cmd - Inicia o cmd.\n";std::cout << "+notepad - Abre o Notepad.\n";std::cout << "+novbs - Fecha processos do wscript.\n";std::cout << "+file.reset - Reseta um arquivo específico.\n";std::cout << "$ip - Exibe o IP público.\n";       std::cout << "$local - Exibe informações locais do IP.\n";        std::cout << "brasil - Exibe 'brasil'.\n";         std::cout << "$fakehack - Muda a cor do terminal.\n";          std::cout << "$reset - Reseta o console.\n";           std::cout << "+explorer - Abre o Windows Explorer.\n";            std::cout << "+calc - Abre a Calculadora.\n";             std::cout << "+alert - Exibe um alerta com texto personalizado.\n";              std::cout << "+prompt - Exibe um prompt com texto personalizado.\n";               std::cout << "+browser - Abre uma URL no navegador.\n";                std::cout << "$checkinternet - Verifica conexão com a internet.\n";                 std::cout << "$ram - Exibe a memória física livre.\n";                  std::cout << "$datetime - Exibe a data e hora atual.\n";                   std::cout << "$update - Verifica o serviço de atualização.\n";                    std::cout << "+CubeTools - Abre o site do CubeTools.\n";                     std::cout << "oi - Exibe 'CubeTools: Ola'.\n";                      std::cout << "$credits - Exibe os créditos.\n";                       std::cout << "$version - Exibe a versão.\n";                        std::cout << "+htmlsubstitue - Substitui o conteúdo de um arquivo HTML.\n";                         std::cout << "+htmladd - Adiciona conteúdo a um arquivo HTML.\n";                          std::cout << "+htmllearn - Exibe o conteúdo de um arquivo HTML.\n";                           std::cout << "+localstoragesubstitue - Substitui o conteúdo do local storage.\n";                            std::cout << "+localstorageadd - Adiciona conteúdo ao local storage.\n";                             std::cout << "+localstoragelearn - Exibe o conteúdo do local storage.\n";std::cout << "$learncode - Exibe o conteúdo de um arquivo específico.\n";std::cout << "+copyar - Copia o conteúdo de um arquivo para a área de transferência.\n";


        } else if (cmd == "$cmd") {
            system("cmd");
        } else if (cmd == "+notepad") {
            system("start notepad.exe");
        } else if (cmd == "$info") {
            system("systeminfo");
        } else if (cmd == "+novbs") {
            system("taskkill /f /im wscript.exe >nul 2>&1");
        } else if (cmd == "+file.reset") {
            std::string nomearquivo;
            std::cout << "Nome:";
            std::getline(std::cin, nomearquivo);
            std::ofstream arquivo(nomearquivo);
            arquivo.close();
            std::cout << "O arquivo " << nomearquivo << " foi resetado.\n";
        } else if (cmd == "$ip") {
            system("curl -s ifconfig.me");
        } else if (cmd == "$local") {
            system("curl -s ipinfo.io");
        } else if (cmd == "brasil") {
            std::cout << "brasil\n";
        } else if (cmd == "$fakehack") {
            system("color A");
        } else if (cmd == "$reset") {
            system("cls");
            std::cout << "=========\n";
            std::cout << "CubeTools\n";
            std::cout << "=========\n";
        } else if (cmd == "+explorer") {
            system("start explorer");
        } else if (cmd == "+calc") {
            system("start calc");
        } else if (cmd == "+alert") {
            std::string texto;
            std::cout << "Texto:";
            std::getline(std::cin, texto);
            std::string command = "mshta \"javascript:alert('" + texto + "');close();\"";
            system(command.c_str());
        } else if (cmd == "+prompt") {
            std::string texto;
            std::cout << "Texto:";
            std::getline(std::cin, texto);
            std::string command = "mshta \"javascript:prompt('" + texto + "');close();\"";
            system(command.c_str());
        } else if (cmd == "+browser") {
            std::string url;
            std::cout << "Digite a URL para abrir no navegador:";
            std::getline(std::cin, url);
            std::string command = "start \"\" \"chrome.exe\" \"" + url + "\"";
            system(command.c_str());
        } else if (cmd == "$checkinternet") {
            system("ping -n 1 google.com >nul 2>&1");
        } else if (cmd == "$ram") {
            system("wmic OS get FreePhysicalMemory /Value");
        } else if (cmd == "$datetime") {
            std::time_t t = std::time(nullptr);
            std::tm* now = std::localtime(&t);
            std::cout << (now->tm_year + 1900) << '-'
                      << (now->tm_mon + 1) << '-'
                      << now->tm_mday << "\n";
        } else if (cmd == "$update") {
            system("sc query wuauserv | findstr /i \"RUNNING\"");
        } else if (cmd == "+CubeTools") {
            system("start https://humano123.github.io/CubeTools/");
        } else if (cmd == "oi") {
            std::cout << "CubeTools: Ola\n";
        } else if (cmd == "$credits") {
            std::cout << "Empresa: MeiaHub\n";
            std::cout << "Criador: Thiago bel\n";
            std::cout << "Ideias: Lmfsd\n";
        } else if (cmd == "$version") {
            std::cout << "Versão: 9.1.5.0\n";
        } else if (cmd == "+htmlsubstitue") {
            std::string dentoo;
            std::cout << "-";
            std::getline(std::cin, dentoo);
            std::ofstream htmlfile("MeuSiteCubeTools.html");
            htmlfile << dentoo;
            htmlfile.close();
            system("start MeuSiteCubeTools.html");
        } else if (cmd == "+htmladd") {
            std::string dentoo;
            std::cout << "->";
            std::getline(std::cin, dentoo);
            std::ofstream htmlfile("MeuSiteCubeTools.html", std::ios_base::app);
            htmlfile << dentoo;
            htmlfile.close();
            system("start MeuSiteCubeTools.html");
        } else if (cmd == "+htmllearn") {
            std::string nomedohtml;
            std::cout << "NomeDoHtml (não coloque \".html\" no final):";
            std::getline(std::cin, nomedohtml);
            std::ifstream htmlfile(nomedohtml + ".html");
            std::string linha;
            while (std::getline(htmlfile, linha)) {
                std::cout << linha << "\n";
            }
        } else if (cmd == "+localstoragesubstitue") {
            std::string dentee;
            std::cout << "->>";
            std::getline(std::cin, dentee);
            std::ofstream lsfile("LocalStorageDoCubeTools.txt");
            lsfile << dentee;
            lsfile.close();
        } else if (cmd == "+localstorageadd") {
            std::string dentaa;
            std::cout << "->>";
            std::getline(std::cin, dentaa);
            std::ofstream lsfile("LocalStorageDoCubeTools.txt", std::ios_base::app);
            lsfile << dentaa;
            lsfile.close();
        } else if (cmd == "+localstoragelearn") {
            std::ifstream lsfile("LocalStorageDoCubeTools.txt");
            std::string linha;
            while (std::getline(lsfile, linha)) {
                std::cout << linha << "\n";
            }
        } else if (cmd == "$learncode") {
            std::string codigopralerarq;
            std::cout << "Nome do arquivo (inclua a extensão): ";
            std::getline(std::cin, codigopralerarq);
            std::ifstream arquivo(codigopralerarq);
            std::string linha;
            while (std::getline(arquivo, linha)) {
                std::cout << linha << "\n";
            }
        } else if (cmd == "+copyar") {
            std::cout << "Essa opção foi removida pois era errado fazer isso :(";
        } else {
            std::cout << "Comando em BATCH executado\n";
            system(cmd.c_str());
        }
    }
}

int main() {
    // Verificação da existência do arquivo "CubeTools.bat"

    showUsage();

    std::cout << "=========\n";
    std::cout << "CubeTools\n";
    std::cout << "=========\n";

    menu();

    return 0;
}
