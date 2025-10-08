ulong _ZN9alacritty5input8keyboard58__LT_impl_u20_alacritty__input__Processor_LT_T_C_A_GT__GT_21should_build_sequence17h9a6073c4bf79275aE
                (short *param_1,long param_2,uint param_3,int param_4)

{
  char cVar1;
  ushort uVar2;
  undefined8 unaff_RBX;
  undefined7 uVar4;
  ulong uVar3;
  
  uVar4 = (undefined7)((ulong)unaff_RBX >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if ((param_3 & 0x200000) != 0) goto LAB_00556937;
  if ((param_3 & 0x40000) == 0) {
LAB_005568c9:
    if (*param_1 == 0) {
      uVar2 = param_1[1];
LAB_00556924:
      if (uVar2 < 0x2b) {
        uVar3 = 0x3fffdfe3fff >> ((byte)uVar2 & 0x3f);
      }
      goto LAB_00556937;
    }
  }
  else {
    cVar1 = _ZN72__LT_winit__keyboard__Key_LT_Str_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h6a0d934177bf7820E
                      (param_1,"");
    if ((cVar1 != '\0') || (*(char *)(param_1 + 0x3d) == '\x03')) goto LAB_00556937;
    if (param_4 == 0) goto LAB_005568c9;
    if (param_4 != 4) goto LAB_00556937;
    if (*param_1 == 0) {
      uVar2 = param_1[1];
      if ((uVar2 < 0x1a) && ((0x200c000U >> (uVar2 & 0x1f) & 1) != 0)) goto LAB_00556937;
      goto LAB_00556924;
    }
  }
  uVar3 = CONCAT71(uVar4,param_2 == 0);
LAB_00556937:
  return uVar3 & 0xffffff01;
}