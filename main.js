const productImage = document.querySelector('.product-image');
const desktopImageURL = "./images/image-product-desktop.jpg";
const mobileImageURL = "./images/image-product-mobile.jpg";

function changeImage(imageElement,newImageURL) {
  imageElement.setAttribute("src",newImageURL)
}

addEventListener('resize', (event) => {
  const screenWidth = event.target.innerWidth
  const imageURL = productImage.src;
  if(screenWidth >= 680) {
    if (imageURL !== desktopImageURL) {
      changeImage(productImage,desktopImageURL);
    }
  } else if (screenWidth < 680) {
    if(imageURL !== mobileImageURL) {
      changeImage(productImage,mobileImageURL);
  }}
});