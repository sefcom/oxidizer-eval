long _ZN8uu_shred7do_pass17hd89cf0ca9cbf1708E
               (undefined8 param_1,undefined8 param_2,char param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined auStack_10030 [65536];
  
  puVar1 = &stack0xffffffffffffffd0;
  do {
    puVar5 = puVar1;
    *(undefined8 *)(puVar5 + -0x1000) = 0;
    puVar1 = puVar5 + -0x1000;
  } while (puVar5 + -0x1000 != auStack_10030);
  *(undefined8 *)(puVar5 + -0x1160) = 0x1bd92f;
  lVar2 = _ZN3std2io4Seek6rewind17h87bbf0dfa3c74672E();
  if (lVar2 == 0) {
    *(undefined8 *)(puVar5 + -0x1160) = 0x1bd946;
    _ZN8uu_shred11BytesWriter14from_pass_type17h9b8f49adafc10293E(puVar5 + -0x1158,param_2);
    uVar3 = 0;
    do {
      if (param_4 >> 0x10 <= uVar3) {
        if ((param_4 & 0xffff) != 0) {
          uVar3 = 0x10000;
          if (param_3 != '\0') {
            uVar3 = param_4 & 0xffff;
          }
          *(undefined8 *)(puVar5 + -0x1160) = 0x1bd99c;
          uVar4 = _ZN8uu_shred11BytesWriter14bytes_for_pass17h0df75ebf5bedda4aE
                            (puVar5 + -0x1158,uVar3);
          *(undefined8 *)(puVar5 + -0x1160) = 0x1bd9a7;
          lVar2 = _ZN3std2io5Write9write_all17hdb2ef0a1157baf82E(param_1,uVar4);
          if (lVar2 != 0) {
            return lVar2;
          }
        }
        *(undefined8 *)(puVar5 + -0x1160) = 0x1bd9b5;
        lVar2 = _ZN3std2fs4File9sync_data17hf784af99032c3e35E(param_1);
        if (lVar2 != 0) {
          return lVar2;
        }
        return 0;
      }
      *(undefined8 *)(puVar5 + -0x1160) = 0x1bd95d;
      uVar3 = _ZN47__LT_u64_u20_as_u20_core__iter__range__Step_GT_17forward_unchecked17h30cfd590689ce002E
                        (uVar3);
      *(undefined8 *)(puVar5 + -0x1160) = 0x1bd96d;
      uVar4 = _ZN8uu_shred11BytesWriter14bytes_for_pass17h0df75ebf5bedda4aE
                        (puVar5 + -0x1158,0x10000);
      *(undefined8 *)(puVar5 + -0x1160) = 0x1bd978;
      lVar2 = _ZN3std2io5Write9write_all17hdb2ef0a1157baf82E(param_1,uVar4);
    } while (lVar2 == 0);
  }
  return lVar2;
}