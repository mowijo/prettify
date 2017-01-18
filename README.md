# prettify

The objective is to prettify chat messages entered in the textview of the application. Upon selecting Text->prettify
the text in the text browser needs to be prettyfied according to these rules:

 * Emojis are to be replaced with a small corresponding icon. The relevant icons are in the icons folder.
 * Urls ( And you can assume all urls starts with http:// ) are to be replaced with a link to the url and the content of the title tag at the destination as text:
    + Clicking the link does not need to open the url in any view or borser.
    
An example can be seen in this image:

![Example](https://raw.githubusercontent.com/mowijo/prettify/master/example.png)

In the first MainWindow a chat message is entered. In the second the prettyfied message is shown.
