# arduino-radio-rf433

Simple receiver and transmitter config.

## Dependencies

- Arduino UNO or similar board
- RF433 transmitter & receiver
- Console cable
- male/female wires
- two leds
- C++

Optional:
- external antenna
- solder wire
- soldering iron


## Gotchas

The transmitter may need an additional antenna soldered on so that the receives gets a better signal.

Also `upperThreshold` & `lowerThreshold` will need tweaking according to noise in the area.
Don't worry is the receiver's led comes on when the transmitter's is off.
In  this case check in serial if the receiver is picking up signal from elsewhere (most likely!).

Important is they should both turn on/off at the same time (allow a slight delay though.)
