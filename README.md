# Frontend Mentor - Product preview card component solution

This is a solution to the [Product preview card component challenge on Frontend Mentor](https://www.frontendmentor.io/challenges/product-preview-card-component-GO7UmttRfa). Frontend Mentor challenges help you improve your coding skills by building realistic projects.

## Table of contents

- [Overview](#overview)
  - [The challenge](#the-challenge)
  - [Screenshot](#screenshot)
  - [Links](#links)
- [My process](#my-process)
  - [Built with](#built-with)
  - [What I learned](#what-i-learned)
  - [Continued development](#continued-development)
  - [Useful resources](#useful-resources)
- [Author](#author)

## Overview

### The challenge

Users should be able to:

- View the optimal layout depending on their device's screen size
- See hover and focus states for interactive elements

### Screenshot

image.png

### Links

- Solution URL: https://github.com/vinni-cmd/fem-product-preview-card
- Live Site URL: https://vinni-cmd.github.io/fem-product-preview-card/

## My process

### Built with

- Semantic HTML5 markup
- CSS custom properties
- Flexbox
- Mobile-first workflow
- Javascript (image swap)

### What I learned

After completing the mobile layout I realized I didn't know how to change the 'src' attribute for my product image element using just CSS. After doing some research I learned that this would have been possible if I'd used the image as a 'background' from the start. Because I used an image html element I had to implement some JS. Fortunately I ended up learning about the resize event and Window innerWidth property and how to apply changes selectively so that new markup is only applied when a meaningful change in screen size occurs. In this example it was when the breakpoint is reached.

```js
addEventListener('resize', (event) => {
  const screenWidth = event.target.innerWidth
  const imageURL = productImage.src;
  if(screenWidth >= 680) {
    if (imageURL !== desktopImageURL) {
      changeImage(productImage,desktopImageURL)...
```

My image element ended up being a bit unruly (wish I'd used it as a background instead) but I was reminded of some useful techniques such as setting max dimensions to avoid overflow and object-fit:cover to avoid image distortion.

```css
.product-image {
  border-top-left-radius: inherit;
  border-top-right-radius: inherit;
  max-width: 100%;
  max-height: 100%;
  object-fit: cover;
}
```

Another issue I encountered when I viewed the page on a large window was that the product component kept on growing to fill available space. This was not inline with the design specs and so I rediscovered and used the CSS min function to specify the max-width of the container. After further reflection I could have just specified the max-width with a single pixel value and had the same result.

```css
@media (min-width: 680px) {
  .container {
    display: flex;
    max-width: min(800px,100vw);
  }
```

### Continued development

I'd like to work on writing more efficient and better structured CSS.

I'd like to work on better analyzing designs to determine development approaches that lead to less errors and dry code.

I'd like to learn advanced CSS variable use.

I'd like to better understand semantic html.

### Useful resources

- https://developer.mozilla.org/en-US/docs/Web/API/Window/resize_event - This helped me with my image element 'src' change conundrum. It might come in handy when I need to initialize other types of page behavior based on window width.

- https://www.freecodecamp.org/news/how-to-center-anything-with-css-align-a-div-text-and-more/ - Interesting article since it shows multiple ways to arrive at a centered div.

## Author

- Frontend Mentor - @vinni-cmd https://www.frontendmentor.io/profile/vinni-cmd
