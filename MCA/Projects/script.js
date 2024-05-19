const video = document.getElementById("video");

Promise.all([
  faceapi.nets.tnyFaceDetector.loadFromUsri("/models"),
  faceapi.nets.faceLandmark68Net.loadFromUsri("/models"),
  faceapi.nets.faceRecognitionNet.loadFromUsri("/models"),
  faceapi.nets.faceExpressionNet.loadFromUsri("/models"),
]).then(startVideo);

function startVideo() {
  navigator.getUserMedia(
    { video: {} },
    (stream) => (video.srcObject = stream),
    (err) => console.error(err)
  );
}

video.addEventListener("play", () => {
  console.log("Kam kr rha hai bhai");
});
