function baixar() {
    var link = document.createElement('a');
    link.href = "app/CubeTools.bat";
    link.download = "CubeTools.bat";
    document.body.appendChild(link);
    link.click();
    document.body.removeChild(link);

    setTimeout(function() {
        window.location.href = "agradecimento.html";
    }, 100);
}

function baixarS() {
    var link = document.createElement('a');
    link.href = "app/SuporteCubeTools.bat";
    link.download = "SuporteCubeTools.bat";
    document.body.appendChild(link);
    link.click();
    document.body.removeChild(link);

    setTimeout(function() {
        window.location.href = "agradecimento.html";
    }, 100);
}