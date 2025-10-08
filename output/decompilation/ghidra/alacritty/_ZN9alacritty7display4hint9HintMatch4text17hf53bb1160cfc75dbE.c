void _ZN9alacritty7display4hint9HintMatch4text17hf53bb1160cfc75dbE
               (undefined8 *param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  long local_70;
  int local_68;
  undefined4 uStack_64;
  int local_60;
  undefined4 uStack_5c;
  int local_58;
  undefined4 uStack_54;
  int local_50;
  byte local_48;
  long local_40;
  long local_38;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    if (*(long *)(param_2[1] + 0xd0) != 0) {
      _ZN9alacritty6config9ui_config9LazyRegex13with_compiled17h71053cda438c1f6aE
                (&local_70,*(long *)(param_2[1] + 0xd0),param_3,param_2);
      if (((((byte)local_50 != 3) && ((byte)local_50 != 2)) && (local_68 == *(int *)(param_2 + 3)))
         && (((local_70 == param_2[2] && (local_58 == *(int *)(param_2 + 5))) &&
             ((CONCAT44(uStack_5c,local_60) == param_2[4] &&
              ((((byte)local_50 ^ *(byte *)(param_2 + 6)) & 1) == 0)))))) {
        _ZN18alacritty_terminal4term13Term_LT_T_GT_16bounds_to_string17h4abdcbf42c50785aE
                  (param_1,param_3);
        return;
      }
    }
  }
  else {
    lVar3 = param_2[2];
    iVar1 = *(int *)(param_2 + 3);
    _ZN9alacritty7display4hint12hyperlink_at17hdeb5cfdb298cee22E(&local_70,param_3,lVar3,iVar1);
    if (local_48 != 2) {
      local_38 = CONCAT44(uStack_64,local_68);
      local_40 = CONCAT44(uStack_54,local_58);
      if (((local_70 == lVar2) ||
          ((cVar8 = _ZN5alloc3vec10partial_eq117__LT_impl_u20_core__cmp__PartialEq_LT_alloc__vec__Vec_LT_U_C_A2_GT__GT__u20_for_u20_alloc__vec__Vec_LT_T_C_A1_GT__GT_2eq17hca30ad5d4cfd9901E
                              (*(undefined8 *)(local_70 + 0x18),*(undefined8 *)(local_70 + 0x20),
                               *(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(lVar2 + 0x20)),
           cVar8 != '\0' &&
           (cVar8 = _ZN5alloc3vec10partial_eq117__LT_impl_u20_core__cmp__PartialEq_LT_alloc__vec__Vec_LT_U_C_A2_GT__GT__u20_for_u20_alloc__vec__Vec_LT_T_C_A1_GT__GT_2eq17hca30ad5d4cfd9901E
                              (*(undefined8 *)(local_70 + 0x30),*(undefined8 *)(local_70 + 0x38),
                               *(undefined8 *)(lVar2 + 0x30),*(undefined8 *)(lVar2 + 0x38)),
           cVar8 != '\0')))) &&
         ((local_60 == iVar1 &&
          ((((local_38 == lVar3 && (local_50 == *(int *)(param_2 + 5))) && (local_40 == param_2[4]))
           && (((local_48 ^ *(byte *)(param_2 + 6)) & 1) == 0)))))) {
        uVar4 = *(undefined4 *)(lVar2 + 0x30);
        uVar5 = *(undefined4 *)(lVar2 + 0x34);
        uVar6 = *(undefined4 *)(lVar2 + 0x38);
        uVar7 = *(undefined4 *)(lVar2 + 0x3c);
        *param_1 = 0x8000000000000000;
        *(undefined4 *)(param_1 + 1) = uVar4;
        *(undefined4 *)((long)param_1 + 0xc) = uVar5;
        *(undefined4 *)(param_1 + 2) = uVar6;
        *(undefined4 *)((long)param_1 + 0x14) = uVar7;
      }
      else {
        *param_1 = 0x8000000000000001;
      }
      _ZN4core3ptr62drop_in_place_LT_alacritty_terminal__term__cell__Hyperlink_GT_17hef5f91261f2a2291E
                (&local_70);
      return;
    }
  }
  *param_1 = 0x8000000000000001;
  return;
}