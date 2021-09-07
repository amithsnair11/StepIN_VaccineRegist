# Requirements
## Introduction
The deployment of covid-19 vaccines in India was done in a sudden burst and thus the tracking became very complicated. 
Due to multiple input and output commands on the server, it resulted in several slow running issues and crashes. 
The Aadhar details were used to allot the vaccines and hence it operated on a central server.
To avoid the use of central server for all commmands, a local server will be loaded with the vaccine-registered data. 
Local verification and completion of vaccination data will be processed locally and will be loaded back to the main server by the end of day.

Each vaccine centre will operate locally to register and allot vaccines. 
The basic registration can be done online and schedules are set as desired by the patient. Assuming a vaccination centre can vaccinate around 100 people in a day. 
The data handling for online basic registration will be mostly done in the day time and the data acquired by the local centres of vaccinated people can be handled in the night.

The local server must store the data of around 100 people where the allocated online registration data will be loaded onto the local server of that local centre. 
Verification of the data is done based on the details provided by the patient. Once completed, the data of the vaccinated will be sent back for future use and reference.
### Advantages
* Smoother data handling.
* Pre data readily available for verification.
* Flexibility to add new registrations limited with server alloted memory.
### Disadvantages
* Cannot add large number of new registrations due to local server limitations.
* Encryption is not enabled to protect the data.
* OTP verification is not activated for new registrations.
## SWOT Analysis
![SWOT analysis](https://user-images.githubusercontent.com/89698000/132307662-0e4d8a61-bc57-4b5a-a1dc-ac773a4d311b.png)
## 4 W's and 1 H
### Who
* Patient who needs to be vaccinated.
### What
* Verify the details of the patient using the alloted data.
### When
* During the time alloted for vaccination.
### Where
* Local vaccination centre.
### How
* Online registration and on field verification using local server.
