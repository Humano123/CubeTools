const coisinhaemcima = document.getElementById("coisinhaemcima");
const Voltar = document.getElementById("Voltar");

Voltar.style.display = "none";

function tirar() {
    coisinhaemcima.style.display = "none";
    Voltar.style.display = "block";
}
function voltar() {
    coisinhaemcima.style.display = "block";
    Voltar.style.display = "none";
}