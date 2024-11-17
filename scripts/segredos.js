if (window.location.search.includes('?teste')) {
    document.getElementById("E").style.display = "block";
    document.getElementById("ErroMostrar").style.display = "block";
}

if (window.location.href.includes("?meme")) {
    document.getElementById("tuuudo").style.transition = "5s ease";
    document.getElementById("tuuudo").style.transform = "rotateY(180deg)";
}

if (window.location.href.includes("#ops")) {
    const elementos = document.querySelectorAll("p, div, span, h1, h2, h3, h4, h5, h6, a, li");

    elementos.forEach(function(elemento) {
        elemento.textContent = "ops";
    });
}

if (window.location.href.includes("?MeiaHub")) {
    window.location.href = "https://linktr.ee/meiahub"
}

if (window.location.href.includes('?logotipoAntiga')) {
    const favicon = document.getElementById("favicon");
    if (favicon) {
        favicon.href = "design/images/logotipo.png"
    }
} else if (window.location.href.includes('?logotipoExcluida')) {
    const favicon = document.getElementById("favicon");
    if (favicon) {
        favicon.href = "design/images/logotipo2.png"
    }
} else {
    const favicon = document.getElementById("favicon");
    if (favicon) {
        favicon.href = "design/images/logotipo3.png"
    }
}

if (window.location.href.includes('?normal')) {
    document.getElementById("devao").style.display = "none";
    document.getElementById("dev").style.display = "none";
    document.getElementsByTagName("title")[0].innerHTML = "CubeTools";
    console.log("O modo dev foi desabilitado!")
}