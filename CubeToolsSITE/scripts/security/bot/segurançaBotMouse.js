let lastX = null;
let lastY = null;
let directionChanges = 0;
let lastDirection = null;
let threshold = 10;
let timeoutId = null;
let isMovingStraight = false;

document.addEventListener("mousemove", function (event) {
    if (lastX !== null && lastY !== null) {
        const deltaX = event.clientX - lastX;
        const deltaY = event.clientY - lastY;
        const angle = Math.atan2(deltaY, deltaX) * (180 / Math.PI);

        if (lastDirection !== null && Math.abs(angle - lastDirection) < threshold) {
            directionChanges++;
        } else {
            directionChanges = 0;
        }

        if (directionChanges > 5 && !isMovingStraight) {
            isMovingStraight = true;

            timeoutId = setTimeout(function () {
                location.reload();
            }, 2000);
        }

        if (directionChanges === 0 && isMovingStraight) {
            clearTimeout(timeoutId);
            isMovingStraight = false;
        }

        lastDirection = angle;
    }

    lastX = event.clientX;
    lastY = event.clientY;
});