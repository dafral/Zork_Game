#Zork

##***WARNING: There is a bug when you type "quit". It triggers an assert error. The game is fully playable though and this error don't affect the program at all.

If you like my work, follow me on github to see what I am doing :) (https://github.com/dafral)

##Intro
You wake up in a stretcher inside in a sickroom, full of empty stretchers and empty blood vials hanging on iron supports. 
There is no one around and the room is only illuminated with a few candles. You have a huge headache and you discover you have a gross protuberance in your
hand. You get scared and you hit one of the iron supports making a blood vial falling on the ground. After the noise, you hear a woman voice and you discover 
there is a young woman tied to a chair. She is asking if there is anyone there. You were going to answer but you see she has her head deformed in a very weird way. 
The deformity on her face doesn’t let her see anything so she cannot see you unless you talk to her. The game begins here.


##Controls
(The commands have to be typed in lower case letter, but they can have as many spaces as you want between them.)

- go		+ 	north		------>		Goes to the north
		+	east		------>		Goes to the east
		+	west		------>		Goes to the west
		+	south		------>		Goes to the south

- look		+ 	room 		------>		Gives information about the room you are in
		+ 	inventory	------>		Gives information about your inventory

- pick		+	"item name"	------>		Pick a item. You have to be in the same room and have room in your inventory to pick it. Your inventory has room
							for three items.

- drop		+	"item name"	------>		Drop a item. You only can drop items you have in your inventory. The item will remain in the room you've dropped it.
							Remember you can't drop items you have equipped.

- equip		+	"item name"	------>		Equip a item. You only can equip items you have in your inventory. Some items can't be equipped. If you have a item
							equipped and you equip any other item, the program will unequip automaticly your previous item equipped.
							You only can have one item equipped.

- unequip	+	"item name"	------>		Unequip the item you have equipped. 

- transform				------>		Look the special feature section to know what this does.

- quit					------>		Exits the program. 


##Items location
- Knife		------>		Stretchers room
- Torch		------>		Hallway
- Key		------>		Dark room
- Axe		------>		Julia's secret room
- Lever		------>		Stairs room
- Bag		------>		Experiments room


##Special feature ("transform")
In this version of the zork you will be able to transform yourself... into a beast! Of course you will be able to return to your human figure (at least in this version), 
but each form have different characteristics. First of all, be careful when you transform yourself into the beast, you will drop all your items! Beasts can't carry items.
You won't loose them though, you will be able to pick them again whenever you want. The benefit of the beast is you will have claws! You can't drop your claws or unequip them
(which is very logic, don't you think?).

If you want to go back to your human shape again, don't worry, just use the "transform" command again. You will loose your claws, but you will be able to carry items again.