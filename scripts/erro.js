let MobileErro = "O aplicativo não funciona em celulares/tablets :("
let SiteiframeErro = "O é de iframe >:("
let ErroTeste = "Opa! isso é um teste para ver se está tudo certo! se isso apareceu, é por que está correto :)"

document.getElementById("E").style.display = "none";
document.getElementById("ErroMostrar").style.display = "none";

if (/Mobi|Android/i.test(navigator.userAgent)) {
    document.getElementById("E").style.display = "block";
    document.getElementById("ErroMostrar").style.display = "block";
    document.getElementById("error").innerHTML = MobileErro;
}

if (window.top !== window.self) {
    alert(SiteiframeErro);
    window.top.location = window.self.location;
}

if (window.location.href.includes("?ErroTeste")) {
    document.getElementById("E").style.display = "block";
    document.getElementById("ErroMostrar").style.display = "block";
    document.getElementById("error").innerHTML = ErroTeste;
}