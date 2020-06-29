(note: this is a temporary file, to be added-to by anybody, and moved to release-notes at release time)

XBI Core version *version* is now available from:

  <https://github.com/XBIncognito/xbi-4.3.2.1/releases>

Please report bugs using the issue tracker at github:

  <https://github.com/XBIncognito/xbi-4.3.2.1/issues>

Mandatory Update
==============

All wallets must be updated to version 4.4 or higher.

How to Upgrade
==============

How to update your wallet:
- Check the location of your XBI data folder under "tools/wallet repair" (location of your wallet.dat, so location of your data folder is the path without the wallet.dat)
- Close your XBI wallet and wait untill it is fully closed
- Delete everything from your XBI data folder except wallet.dat, masternode.conf, xbi.conf and your backup folder.
- Open your xbi.conf and delete all the addnodes, if there are any
- Place the blocks and chainstate folder from the rar of the latest bootstrap from https://github.com/sub307/XBI-bootstrap/releases in your xbi data folder
- Make sure you are using the latest wallet from https://github.com/XBIncognito/xbi-4.3.2.1/releases (should be version 4.4 or up)
- Open your XBI 4.4 (or up) wallet and let it sync

Compatibility
==============

XBI Core is extensively tested on multiple operating systems using
the Linux kernel, macOS 10.8+, and Windows Vista and later.

Microsoft ended support for Windows XP on [April 8th, 2014](https://www.microsoft.com/en-us/WindowsForBusiness/end-of-xp-support),
No attempt is made to prevent installing or running the software on Windows XP, you
can still do so at your own risk but be aware that there are known instabilities and issues.
Please do not report issues about Windows XP to the issue tracker.

XBI Core should also work on most other Unix-like systems but is not
frequently tested on them.

Notable Changes
===============

Major updates to Masternode consensus and staking consensus.
Extra checks on masternode winner payment and pos kernel
Block dust / spam staking inputs from creating blocks (fork problem)
Reworked previous sync fixes into one fix
Add updated seeds
Bump protocol and version
Ban nodes from console
Add checkpoints

*version* Change log
=================

Detailed release notes follow. This overview includes changes that affect
behavior, not code moves, refactors and string updates. For convenience in locating
the code changes and accompanying discussion, both the pull request and
git merge commit are mentioned.


Credits
=======

Thanks to everyone who directly contributed to this release:
- Remapper
- Sub307


