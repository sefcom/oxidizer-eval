long _ZN2fd4exec14CommandBuilder4push17hb7cae759d47c5e7aE
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  char cVar1;
  long lVar2;
  undefined auVar3 [16];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  if ((*(ulong *)(param_1 + 0x138) <= *(long *)(param_1 + 0x140) - 1U) ||
     (lVar2 = _ZN2fd4exec14CommandBuilder6finish17hfc49bcefb3885af8E(param_1), lVar2 == 0)) {
    _ZN2fd3fmt14FormatTemplate8generate17hfff854f5585a67ffE
              (&local_70,param_1,param_2,param_3,param_4,param_5);
    _ZN4core4iter6traits8iterator8Iterator5chain17h22a73fcc39e834cfE
              (&local_58,&local_70,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
                    /* try { // try from 002f38ac to 002f38bf has its CatchHandler @ 002f3923 */
    cVar1 = _ZN6argmax7Command14args_would_fit17h98dcd836a2a2d367E
                      (*(undefined8 *)(param_1 + 0x130),&local_58);
    if ((cVar1 == '\0') &&
       (lVar2 = _ZN2fd4exec14CommandBuilder6finish17hfc49bcefb3885af8E(param_1), lVar2 != 0)) {
      _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h7308b79749514aeeE
                (CONCAT44(uStack_6c,local_70),CONCAT44(uStack_64,uStack_68));
    }
    else {
      local_48 = local_60;
      local_58 = local_70;
      uStack_54 = uStack_6c;
      uStack_50 = uStack_68;
      uStack_4c = uStack_64;
      auVar3 = _ZN6argmax7Command7try_arg17ha49bcf2cb4dd0994E(param_1 + 0x50,&local_58);
      lVar2 = auVar3._8_8_;
      if ((auVar3 & (undefined  [16])0x1) == (undefined  [16])0x0) {
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        lVar2 = 0;
      }
    }
  }
  return lVar2;
}