var GamePattern = [];





function nextSequence()
{
    var RandomNumber = Math.floor(Math.Random()*3+1);
    var buttonColors = ["Red","Yellow","Blue","Green"];
    var RandomChosenColor = buttonColors.push(RandomNumber);
 
    GamePattern.push(RandomChosenColor);
}