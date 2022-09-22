[33mcommit 773971fed7859306b890f4c6c1163ef3a7c177ba[m[33m ([m[1;36mHEAD -> [m[1;32mmain[m[33m)[m
Author: Vincent <vinni.xander@gmail.com>
Date:   Thu Sep 22 11:43:18 2022 -0600

    small correction

[33mcommit 2f9e224541d421eb70fe78a7549e607ebb574c95[m[33m ([m[1;31morigin/main[m[33m)[m
Author: Vincent <vinni.xander@gmail.com>
Date:   Thu Sep 22 11:38:34 2022 -0600

    Correct image distortion occurring at breakpoint
    
    Applied object-fit:contain to image so that it scales correctly at
    smaller desktop window sizes.

[33mcommit f87f577c03d8a0eb1b9dbaa38720ac9a3b1b66ad[m
Author: Vincent <vinni.xander@gmail.com>
Date:   Thu Sep 22 11:12:05 2022 -0600

    Implement JS to change image at breakpoint width
    
    Function takes in image element and desired src attribute value.
    
    Resize EventListener added to window object to trigger function call
    at breakpoint width.

[33mcommit d622ee4eda9071b6b0d35acd6e23d0652f08a912[m
Author: Vincent <vinni.xander@gmail.com>
Date:   Thu Sep 22 09:48:46 2022 -0600

    Create desktop layout and center container
    
    Used media query to change layout for larger screens.
    
    Used flex display along with a min height on body to allow for both
    horizontal and vertical alignment.

[33mcommit 1accc9f9d938d0f56f12c52a09967be5827c2e35[m
Author: Vincent <vinni.xander@gmail.com>
Date:   Thu Sep 22 08:18:49 2022 -0600

    Add button hover effects and fix prices alignment
    
    Added a button:hover CSS selector which allows for easy addition of
    effects when cursor hovers over element.
    
    Fixed layout issues between two price elements by changing display of
    parent element to flex which allows for more easy manipulation of
    child elements.

[33mcommit 39b5d021110f30a3caf156e8eafd1fcd6ea37c1a[m
Author: Vincent <vinni.xander@gmail.com>
Date:   Wed Sep 21 15:31:20 2022 -0600

    Add basic styling to h1, sale price and button

[33mcommit 74c2ee9ac8e26f87f15a81c53d60a0dc2db1616a[m
Author: Vincent <vinni.xander@gmail.com>
Date:   Wed Sep 21 14:57:35 2022 -0600

    Add basic styling to product details section
    
    Padding added to all the child elements of the product-details section.
    
    Font color applied to product-type, product-description and
    original-price. Letter and line spacing applied to these
    elements/classes where appropriate.

[33mcommit 37951fb4220589ccf4659f3bfd328e365968551f[m
Author: Vincent <vinni.xander@gmail.com>
Date:   Wed Sep 21 14:24:18 2022 -0600

    Apply std font size to :root

[33mcommit a62abed95e7281eebded199c0e651332fc9490e6[m
Author: Vincent <vinni.xander@gmail.com>
Date:   Wed Sep 21 13:51:15 2022 -0600

    Create basic style sheet with required imports
    
    Fonts imported from google fonts since they are not local.
    
    Basic CSS reset applied and color variables declared to allow for
    easier use and manipulation.
    
    Styled body and container to match design image. Styled product image
    so that top border radius is inherited and set max dimensions on image
    to avoid over-flow but still have responsive sizing

[33mcommit 8926a275c1c7b2b643f1d21f62283aaf8faba61f[m
Author: Vincent <vinni.xander@gmail.com>
Date:   Wed Sep 21 13:00:43 2022 -0600

    Restructure directory to allow for publishing

[33mcommit 38c24cf46250d3c1d727feb6721f792fdf9fc82f[m
Author: Vincent <vinni.xander@gmail.com>
Date:   Wed Sep 21 12:22:54 2022 -0600

    Structure content with html
    
    First placed all the content inside a container which consists of
    two elements, one for the product image and one for product details
    to enable easy desktop layout.
    
    All the other text was placed in appropriate elements/tags.

[33mcommit 47437316712ae4f064fed8a728f5f8e89b30ff93[m
Author: Vincent <vinni.xander@gmail.com>
Date:   Wed Sep 21 11:21:53 2022 -0600

    Add starter pack to repo
