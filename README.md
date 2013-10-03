New Spinning Icon for iOS 
<img width="25" height="25" src="spinner.gif"/>

BASpinner *spinner = [[BASpinner alloc] initWithFrame:frame andColor:color1 andBackgroundColor:color2];

[self.view addSubview: spinner];



Somewhere in your code:

[spinner start];


When you are done:

[spinner stop];
