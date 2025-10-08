void _ZN8uu_shred7do_pass17h5f3b51dd2439eebaE
               (undefined8 param_1,undefined8 param_2,char param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined auStack_10028 [65536];
  
  puVar1 = &stack0xffffffffffffffd8;
  do {
    puVar5 = puVar1;
    *(undefined8 *)(puVar5 + -0x1000) = 0;
    puVar1 = puVar5 + -0x1000;
  } while (puVar5 + -0x1000 != auStack_10028);
  *(undefined8 *)(puVar5 + -0x1158) = 0x164fed;
  lVar2 = _ZN3std2io4Seek6rewind17h2f4d22a4a492d7bbE();
  if (lVar2 == 0) {
    *(undefined8 *)(puVar5 + -0x1158) = 0x165001;
    _ZN8uu_shred11BytesWriter14from_pass_type17hee8253cabbfb6b71E(puVar5 + -0x1150,param_2);
    if (param_3 == '\0') {
      param_4 = (ulong)((param_4 & 0xfff) != 0) * 0x1000 + param_4 & 0xfffffffffffff000;
    }
    lVar2 = (param_4 >> 0x10) + 1;
    do {
      lVar2 = lVar2 + -1;
      if (lVar2 == 0) {
        *(undefined8 *)(puVar5 + -0x1158) = 0x16506f;
        uVar3 = _ZN8uu_shred11BytesWriter14bytes_for_pass17hdca822ed44bdc744E
                          (puVar5 + -0x1150,param_4 & 0xffff);
        *(undefined8 *)(puVar5 + -0x1158) = 0x16507a;
        lVar2 = _ZN3std2io5Write9write_all17h0b38a243f4c38c2fE(param_1,uVar3);
        if (lVar2 != 0) {
          return;
        }
        *(undefined8 *)(puVar5 + -0x1158) = 0x165088;
        (*(code *)PTR__ZN3std2fs4File9sync_data17h8645e777bbe562faE_00200e70)(param_1);
        return;
      }
      *(undefined8 *)(puVar5 + -0x1158) = 0x165052;
      uVar3 = _ZN8uu_shred11BytesWriter14bytes_for_pass17hdca822ed44bdc744E
                        (puVar5 + -0x1150,0x10000);
      *(undefined8 *)(puVar5 + -0x1158) = 0x16505d;
      lVar4 = _ZN3std2io5Write9write_all17h0b38a243f4c38c2fE(param_1,uVar3);
    } while (lVar4 == 0);
  }
  return;
}