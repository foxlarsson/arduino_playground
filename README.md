### 03.04.2021 | 001_tmp36_thermometer_with_led 

**Context**: I'm working my way through Jeremy Blum's Exploring Arduino book and I got stuck on the thermometer project a while back, so now that I have some free time I decided to take some steps back and reassemble the project on my own, one thing at a time. The tutorial that helped me finally get decent readings from my sensors is [this one](http://arduinolearning.com/amp/code/arduino-tmp36-example.php).

Things I was getting wrong but have more or less figured out:
1. It took me forever to figure out I had mixed up the + and - sides of the sensor, and that in this case sides matter. When you get them wrong your readings go crazy and are all over the place.
2. When I got the sides right I finally got some consistency, but somehow the temperature shown kept being lower than what it should be (consistently, something like 10 degrees or so).
3. Converting the readings the way shedboy71 suggests helped, and now it's both consistent and seems true to life. I feel that has something to do with the "reading * 4.68" part, but I need to talk to somebody physics smart about that.
4. I almost fried the whole thing by attaching the cables before the sensor instead of after it on the breadboard. Good thing it's a temp sensor, the 200+ degrees celsius readings and the crazy whirring of my laptop gave me an indication that I was getting something wrong. Figured it out eventually by rubber ducking the whole thing to a friend.

Combined the stuff from shedboy71's tutorial and from an earlier chapter of the book to get an LED to light up once the temperature is equal to or over 20 degrees. 

Now planning to write my own version of the tricolor LED + temp sensor project in the book using what I've learned.

**Image/video links:** [video of working project](https://twitter.com/foxlarssonart/status/1411434950398812163)
