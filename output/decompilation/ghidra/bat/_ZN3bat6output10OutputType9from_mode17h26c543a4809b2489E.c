char * _ZN3bat6output10OutputType9from_mode17h26c543a4809b2489E
                 (char *param_1,char param_2,undefined param_3)

{
  char cVar1;
  undefined7 uVar2;
  char local_98;
  undefined7 uStack_97;
  char cStack_90;
  undefined7 uStack_8f;
  char cStack_88;
  undefined7 uStack_87;
  char cStack_80;
  undefined7 uStack_7f;
  char cStack_78;
  undefined7 uStack_77;
  char local_70;
  undefined7 uStack_6f;
  char cStack_68;
  undefined7 uStack_67;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  if (param_2 == '\0') {
    _ZN3bat6output10OutputType9try_pager17h20ac4bd3b0754dfbE(&local_98,1,param_3);
    cVar1 = local_98;
    uVar2 = uStack_97;
    local_98 = cStack_90;
    uStack_97 = uStack_8f;
    cStack_90 = cStack_88;
    uStack_8f = uStack_87;
    cStack_88 = cStack_80;
    uStack_87 = uStack_7f;
    cStack_80 = cStack_78;
    uStack_7f = uStack_77;
    cStack_78 = local_70;
    uStack_77 = uStack_6f;
    local_70 = cStack_68;
    uStack_6f = uStack_67;
  }
  else {
    if (param_2 != '\x01') {
      _ZN3bat6output10OutputType6stdout17h211ec86729b50ed6E(&local_98);
      goto LAB_0053ce79;
    }
    _ZN3bat6output10OutputType9try_pager17h20ac4bd3b0754dfbE(&local_98,0,param_3);
    cVar1 = local_98;
    uVar2 = uStack_97;
    local_98 = cStack_90;
    uStack_97 = uStack_8f;
    cStack_90 = cStack_88;
    uStack_8f = uStack_87;
    cStack_88 = cStack_80;
    uStack_87 = uStack_7f;
    cStack_80 = cStack_78;
    uStack_7f = uStack_77;
    cStack_78 = local_70;
    uStack_77 = uStack_6f;
    local_70 = cStack_68;
    uStack_6f = uStack_67;
  }
  if (cVar1 != '\r') {
    *(undefined8 *)(param_1 + 0x40) = local_58;
    *(undefined8 *)(param_1 + 0x48) = uStack_50;
    *(ulong *)(param_1 + 0x30) = CONCAT71(uStack_6f,local_70);
    *(undefined8 *)(param_1 + 0x38) = local_60;
    *(ulong *)(param_1 + 0x21) = CONCAT17(cStack_78,uStack_7f);
    *(ulong *)(param_1 + 0x29) = CONCAT17(local_70,uStack_77);
    *(ulong *)(param_1 + 0x11) = CONCAT17(cStack_88,uStack_8f);
    *(ulong *)(param_1 + 0x19) = CONCAT17(cStack_80,uStack_87);
    *(ulong *)(param_1 + 1) = CONCAT17(local_98,uVar2);
    *(ulong *)(param_1 + 9) = CONCAT17(cStack_90,uStack_97);
    *param_1 = cVar1;
    return param_1;
  }
  cStack_68 = (char)local_60;
  uStack_67 = (undefined7)((ulong)local_60 >> 8);
LAB_0053ce79:
  *(ulong *)(param_1 + 0x38) = CONCAT71(uStack_67,cStack_68);
  *(ulong *)(param_1 + 0x28) = CONCAT71(uStack_77,cStack_78);
  *(ulong *)(param_1 + 0x30) = CONCAT71(uStack_6f,local_70);
  *(ulong *)(param_1 + 0x18) = CONCAT71(uStack_87,cStack_88);
  *(ulong *)(param_1 + 0x20) = CONCAT71(uStack_7f,cStack_80);
  *(ulong *)(param_1 + 8) = CONCAT71(uStack_97,local_98);
  *(ulong *)(param_1 + 0x10) = CONCAT71(uStack_8f,cStack_90);
  *param_1 = '\r';
  return param_1;
}