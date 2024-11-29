let dev = "DEV CubeTools"
let real = "CubeTools"
let errorTag = "?"
let errorTagConfirm = "INSEGURO CubeTools"

let textoDev = "O modo DEV foi detectado, verifique se não é um site falso, caso seja, saia imediatamente!"
let textoDevDesativado = "O modo DEV foi desativado, verifique se não é um site falso, caso seja, saia imediatamente!"

if (window.top !== window.self) {
    alert("Este site não pode ser carregado dentro de um iframe.");
    window.top.location = window.self.location;
}

if (window.location.href.includes("http://127.0.0.1:5500/")) {
    document.getElementsByTagName("title")[0].innerHTML = dev;
    document.getElementById("dev").style.display = "block";
    document.getElementById("devao").style.display = "block";
    console.log(textoDev);
} else if (window.location.href.includes("https://humano123.github.io/CubeTools/")) {
    document.getElementById("baixarxa").style.display = "block";
    document.getElementsByTagName("title")[0].innerHTML = real;
} else if (window.location.href.includes("#noDev")) {
    document.getElementsByTagName("title")[0].innerHTML = real;
    document.getElementById("dev").style.display = "none";
    document.getElementById("devao").style.display = "none";
    console.log(textoDevDesativado);
} else {
    document.getElementsByTagName("title")[0].innerHTML = errorTag;
    document.getElementById("baixarxa").style.display = "none";
    document.getElementById("ban").style.display = "block";
    document.getElementById("mostt").style.display = "none";
    // document.getElementById("FALSOSITE").style.display = "block";
    document.body.innerHTML = `
                <div id="AvisoRapidoBreve"> 
                <h1>SITE "APAGADO" POR SUA SEGURANÇA!</h1>
                <p>Esse site era <strong style="color: red;">FALSO</strong>, e você possivelmente pegar um virus nele!</p>
                <a href="https://humano123.github.io/CubeTools">Clique aqui para ir para o site verdadeiro!</a>
                </div>
                `;
    // function riscoCont() {
    //     document.getElementById("FALSOSITE").style.display = "none";

    //     document.getElementsByTagName("title")[0].innerHTML = errorTagConfirm;
    //     document.getElementById("baixarxa").style.display = "block";
    //     document.getElementById("ban").style.display = "none";
    //     document.getElementById("mostt").style.display = "block";
    //     document.getElementById("ban2").style.display = "block";
    // }
    // function riscoVer() {
    //     document.getElementById("FALSOSITE").style.display = "none";
    // }
    // const htmlOriginal = document.body.innerHTML;

    // function seguro() {
    //     document.body.innerHTML = '';
    // }
}

console.warn(`
    CUIDADO!!!

    NÃO USE NENHUM COMANDO POR AQUI!!!
    PODE SER PREJUDICIAL AO SITE E PARA VOCÊ!!!
    
    `)