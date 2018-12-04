#ifndef BANNED_H
#define BANNED_H
#include <map>

static const std::map<std::string, uint32_t> BANNED_TXIDs =
{
    // { txid , index } // address -> private_key (xbi count)
    { "93fbda2739deffa291dfad6e470424034e7ed404614b8ae1208d9aea80ef55d5", 1 },//BH56ohca4WFbDxiqkvrRxM4uhhKrnkRsv7 -> YUT1AsBfeVaiXA5GswJ3BgZekTRKgNGrwm8WmK84MWqcsCG3dfFV (10 xbi)
    { "aab4222b76df43bcaf6aa6ced12e39c5ace079217b9b284fe870e0075da06377", 1 },//BPN7BUQe6qeGZWfvxMD6t8wdSn2W6LDFBs -> YVzvcAd77qPt1GensQD2MEiYPaiF8oeR8htrhaGBPBnvAZ7FQE4S (1 xbi)
    { "98d576d60d59587be468bf832519ba24f89f2d9840d4b3b7038f9010ac8af4d9", 1 },//BPY6WwUCybVSchHRjDHgUcSmB57fvASHdR -> YTuE2NV3XupT1KkAa7uAHwYnL5hKYTs7fUXi6AvgEwdRREH7G9FT (1 xbi)
    { "d82caec9b2e68071a531c04e10f1f7d1ebc8f6de2b011cd380800f4e259401cb", 1 },//BAdahyoLcAKkC5VnQA2TQmCrhaYiAtYDFa -> YVr29HNeabCkme5mTpwT9fm7UxqgTXJuXhsaRTUNwW178YBibXCs (1 xbi)
    { "73532cf0eecb5e07e8d57967c52151e09481722acc1fcd1443ddf74ebdf9546c", 0 },//BFPHgWWhQUBaLtU8pR7o5xUzqW6qCddAvz -> YUruqFhdMdQA8dY8sD6DyKb1YCujLDDVjrGUks6eiNi5BwG8MUWz (1 xbi)
    { "9b99db7b1f4b13ca1a213e72cfa1ff06e5e83e668b76d3885ce268fb0c49276b", 1 }, //B9bVHN3AxCTqLRXsSPPbfjat1fHefhg2oZ -> YNM49qNUy1CUCHTBmgquW33Ex2eFas7Y9BXf4BRXadidzgt9dRse (1 xbi)

    // this txids have been blocked                                         BUT  this address are still valid, need to hardcode them! otherwise they can receive funds (see walletmodel.cpp|rpcmining.cpp|base58.cpp)
    { "eceb68124302651568acca0e8134edd19b894a4aaf03cbbe46a33847cf538408", 0 },//BTaabHn9syfUyCGUDHCLF6BZNAS63tHd33 -> YRptF35VkHWm1J2XW6jA1Ex54aWobVhEaYTNV7XarrRzDrxn3zoR (0.5 xbi)
    { "25b9b27b66e27db92c0625330c9eeb64f77dceb2f6b4bbd50718ce1aef96694a", 0 },//BFGfgaLuuKDU28QvkPnhzftz53PnCtQePq -> YQs8XxVHJjZ68dZvordiS9tVZ9hX3G6kvo52k9cHugSduvnDhWUx (2 xbi)
    { "cc0434a2a9512ee41047c296b07939fac736a8d9aaf6c62b47463d3ec2e787c4", 1 } //BGX8GPkrTxuwvzc48v34wWjmfyPpy58g12 -> YW95WKpV6Y3pLU5DLVTYE7728hyQbSdL2NVcmjNQujZRbA4HLYok (1.5 xbi)

    // datber 2018 - The XBI team -
};
#endif