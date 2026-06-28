# WashingMachinePump
A simple but effective solution to an expensive alternative.

The washing machine at home is plumbed into a soak-away and with four adults in the household, we can occasionally use the washing machine many times a day up until the point the soak-away no longer soaks-away. The hose which discharges to the soak away was then just put into a 30L bucket, which would often over flow and would make you very wet when you would need to carry it to a normal drain. It was irritating to constantly need to check the bucket to catch it before it was overfilling and without sitting to watch each cycle type, timing when it would discharge the waster to find out when it would discharge - there needed to be a better solution.

I knew boats can be fitted with a bildge pump that sits at the bottom of their keels which will automatically start pumping when a float triggers a microswitch. I thought this may be something that could be repurposed to allow a smaller bucket to be installed and then connect a hose down to the rain water drain.

It wouldn't be sufficient to just connect up a 12V power supply and call it a day, this device was going to be used by my family who definitely deserved a better interface. I did however test out if the concept would work with my 12V becnh power supply however and despite the tight fit of the hose onto the nozzle of the pump - it worked. This was also important feedback to myself as this device wasn't going to be able to live somewhere perminately. The hose and electronics would need to be removable for storage.

Not long before starting this project, I had also been doing some work controlling RF waveguide and Co-ax switches using relays. With this recent experience to hand, I ordered a couple arduino all-in-one boards, a micro-arduino clone and a missle switch as well as a archade style push button. I got it all wired up correctly but the relays weren't changing state. It turned out that I had ordered relays which I thought were the correct sort to handle the 12V3A pump, when in fact they required 12V to energise the coils. Fortunately it was only a few more days to wait before the correct 5V relay module arrived and it worked perfectly.

This sitll left the question of how to connect both the hose and the relays to the pump. The hose connect was resolved with a 90 degree elbow tube I had printed on my BambuLabs P2S along with a little friction fit way of holding the discharge hose to the bucket. The pump has a common ground and two other wires - one for power when in automatic pumping, the second for immediate pumping. I contined the tradition of abusing XLR plug/socket into a small ABS plastic box which contianed the Arduino and barrel jack for a suitable 12V power supply.

It's been working happily ever since! The missle switch is used for off-on (automatic) with the push button for immediate pumping.

## Bill of materials
- Arduino nano
- 5V relays
- Prototyping board
- missle switch
- momentary switch
- 12V eBay bildge punp
- XLR plug/socket
- suitably sized ABS waterproof box

<img width="4284" height="5712" alt="IMG_6963" src="https://github.com/user-attachments/assets/a0a253bc-0d0a-49a1-8cba-53ffbbcfd256" />

