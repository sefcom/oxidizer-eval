char _ZN2fd4walk23ReceiverBuffer_LT_W_GT_4stop17h953efcef9522a5daE(long param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x80) == '\0') {
    _ZN5alloc5slice11stable_sort17h08c83894e6862646E
              (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
    cVar1 = _ZN2fd4walk23ReceiverBuffer_LT_W_GT_6stream17hd6ded5132bc549aeE(param_1);
    if (cVar1 != '\x06') {
      return cVar1;
    }
  }
  cVar1 = '\x02';
  if (*(char *)(*(long *)(param_1 + 0x60) + 0x1e4) != '\0') {
    cVar1 = *(long *)(param_1 + 0x78) != 0;
  }
  return cVar1;
}