if (window.location.search.includes('?teste')) {
    document.getElementById("E").style.display = "block";
    document.getElementById("ErroMostrar").style.display = "block";
}

if (window.location.href.includes("#meme")) {
    document.getElementById("tuuudo").style.transition = "5s ease";
    document.getElementById("tuuudo").style.transform = "rotateY(180deg)";
}

if (window.location.href.includes("#ops")) {
    const elementos = document.querySelectorAll("p, div, span, h1, h2, h3, h4, h5, h6, a, li");

    elementos.forEach(function(elemento) {
        elemento.textContent = "ops";
    });
}

if (window.location.href.includes("#MeiaHub")) {
    window.location.href = "https://linktr.ee/meiahub"
}