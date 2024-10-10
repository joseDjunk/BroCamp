// Get the navbar element
const navbar = document.querySelector(".top-navigation");

// Get the offset position of the navbar
const sticky = navbar.offsetTop;
// Add scroll event listener
window.addEventListener("scroll", function () {
  //Checks whether the scroll offset is larger than the navbar offset
  //If yes add the class 'fixed' else remove 'fixed' class
    if (window.pageYOffset >= sticky) {
    navbar.classList.add("fixed");
  } else {
    navbar.classList.remove("fixed");
  }
});
