# RFscanner aim to save disater victims.

## Sequence
1. Find victims with smartphone by RFscanner
2. Drone rushes to the victim
3. Do triage (sorting and allocating aid on the basis of need) 

## Functions
1. Find cellphone by trilateration of LTE signal<br>
 we use [openairinterface5G](https://gitlab.eurecom.fr/oai/openairinterface5g) and LimeSDR.

2. Do triage by moving and pulse via movie.<br>
 we use face detecting library clmtrackr with the model already learning and measure the ROI, dealing with the signal

3. Detecting the human voice and store the voice text with watson developer cloud SpeechToTextV1 

## Develop history
9/28 The function "Find cellphone is not completed". Base-station is performed. Next, we must get the signal and logs from cellphone.

9/22 call for code hackathon.

before...  Bought LimeSDR 

## Technial behind
1. RTLS using
    1. ToA synced with GPS
    1. TDoA synced with GPS
    1. DoA by Doppler synced with GPS
    1. DoA by Monopulse synced with GPS
1. [OpenAirInterface5G with LimeSDR](https://plus.google.com/photos/photo/106790857831943452518/6294922314878237570)
  we were impressed by this.

## Roadmap
* 2018 Field Experiment
* 2019 Field Experiment with Drone
 
## Cost per unit
 LimeSDR(299$) + PC(500$) = RFscanner(800$)
