### Todo:
- Replace intensecoin image schemes  
- Change "older version graphics" see folders
- Replace intensecoin logos with Lonero Logos  
- Update **CryptoNoteConfig.h**
- Please add more seednode and mark dead ones with // comment
- Update **CryptoNoteCore/Currency.cpp**
- Compile binaries  

---

..................................................................................................

**Forked from:**  
*Luke Copyright (c) 2018-2019, The Crypto Luka Developers*  
*Portions Copyright (c) 2018, The Intense Coin developers*  
*Copyright (c) 2014-2017, The Monero Project Portions*  
*Copyright (c) 2012-2013, The Cryptonote developers*

..................................................................................................

# Lonero Wallet

[![GitHub Issues](https://img.shields.io/github/issues/Lonero-Team/Lonero-Wallet-2.0.svg?style=flat-square)](https://github.com/cryptoluka/cryptoluka/issues)
![Contributions welcome](https://img.shields.io/badge/contributions-welcome-orange.svg?style=flat-square)
![Release](https://img.shields.io/github/release/Lonero-Team/Lonero-Wallet-2.0.svg?style=flat-square)
![Downloads](https://img.shields.io/github/downloads/Lonero-Team/Lonero-Wallet-2.0/latest/total.svg)

<img src="https://raw.githubusercontent.com/Mentors4EDU/Images/master/banner.png">

This is the GUI wallet for Lonero's (LNR) crypto. [Lonero](https://lonero.org) is working on a variety of things from its digital crypto to a decentralized internet. To get started downloding Lonero's GUI wallet, you can view the installation guide below:


## 💾 Installation


```bash
$ apt-get update
$ apt-get upgrade
$ apt-get install qtbase5-dev libssl-dev cmake git libboost1.58-all-dev build-essential g++
$ git clone https://github.com/Lonero-Team/Lonero-Wallet-2.0
$ cd Lonero-Wallet-2.0/
$ cmake CMakeLists.txt
$ make -j 8
$ cd Lonero-Wallet-2.0/
$ make -j 8
```

## Usage

After you compile, click on the binary for Lonero. The node should start synchronizing given you are opening the wallet. Make sure to export your private key before the password is created, and store the key in a safe place.

To start mining, click on the button saying "Start Mining".

<img src="https://raw.githubusercontent.com/Mentors4EDU/Images/master/Untitled%20design(347).png">

## License
The Wallet GUI falls under the *GNU General Public License v3.0*
