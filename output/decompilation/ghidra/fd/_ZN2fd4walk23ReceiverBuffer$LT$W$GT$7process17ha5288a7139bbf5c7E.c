undefined4 _ZN2fd4walk23ReceiverBuffer_LT_W_GT_7process17ha5288a7139bbf5c7E(long param_1)

{
  undefined4 uVar1;
  
  do {
    uVar1 = _ZN2fd4walk23ReceiverBuffer_LT_W_GT_4poll17h9f4121b39c66ee5aE(param_1);
  } while ((char)uVar1 == '\x06');
  _ZN4core4sync6atomic12atomic_store17hf57dd38608de6f70E(*(undefined8 *)(param_1 + 0x68),1,0);
  return uVar1;
}