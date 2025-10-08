void _ZN9alacritty6string12StrShortener3new17hcb4d209a7d9df863E
               (long *param_1,long param_2,long param_3,ulong param_4,int param_5)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  int extraout_EDX;
  long lVar5;
  int iVar6;
  ulong uVar7;
  undefined auVar8 [16];
  undefined auVar9 [12];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulong local_60;
  long local_58;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  iVar6 = 0x2026;
  if (param_3 == 0) {
    iVar6 = 0x110000;
  }
  if (param_5 == 0) {
    uStack_70 = param_3 + param_2;
    local_68 = 0;
    local_78 = param_2;
    local_60 = param_4;
    local_58 = param_2;
    local_50 = uStack_70;
    auVar8 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf0ee1104036c3094E
                       (&local_78);
    if (auVar8._8_4_ == 0x110000) {
      lVar5 = 0;
      uVar7 = 0;
    }
    else {
      lVar5 = 0;
      uVar7 = 0;
      do {
        uVar3 = 1;
        if (0x9f < auVar8._8_4_) {
          bVar2 = _ZN13unicode_width6tables12lookup_width17hf99baf8c7b02f1d5E
                            (auVar8._8_8_ & 0xffffffff);
          uVar3 = (ulong)bVar2;
        }
        uVar7 = uVar7 + uVar3;
        if (local_60 < uVar7 == uVar7 < local_60) {
          iVar1 = 0x110000;
          if (iVar6 != 0x110000) {
            local_48 = (undefined4)local_78;
            uStack_44 = local_78._4_4_;
            uStack_40 = (undefined4)uStack_70;
            uStack_3c = uStack_70._4_4_;
            local_38 = local_68;
            _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf0ee1104036c3094E
                      (&local_48);
            if (extraout_EDX != 0x110000) break;
          }
        }
        else {
          iVar1 = iVar6;
          if ((char)((local_60 < uVar7) - (uVar7 < local_60)) != -1) break;
        }
        iVar6 = iVar1;
        lVar5 = auVar8._0_8_ + 1;
        auVar8 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf0ee1104036c3094E
                           (&local_78);
      } while (auVar8._8_4_ != 0x110000);
    }
    auVar9 = _ZN4core4iter6traits12double_ended19DoubleEndedIterator5rfold17h1ee18d0034f37744E
                       (local_78,uStack_70,local_68);
    lVar4 = _ZN4core6option15Option_LT_T_GT_6map_or17h0c0d9c4c1c9ad238E
                      (auVar9._0_8_,auVar9._8_4_,lVar5);
    *param_1 = local_58;
    param_1[1] = local_50;
    param_1[2] = lVar4 - lVar5;
    param_1[3] = 0;
    param_1[4] = local_60;
    *(char *)((long)param_1 + 0x2c) = (char)param_5;
    *(int *)(param_1 + 5) = iVar6;
    *(byte *)((long)param_1 + 0x2d) = (iVar6 == 0x110000 || uVar7 < local_60) | 2;
  }
  else {
    *param_1 = param_2;
    param_1[1] = param_3 + param_2;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = param_4;
    *(char *)((long)param_1 + 0x2c) = (char)param_5;
    *(int *)(param_1 + 5) = iVar6;
    *(undefined *)((long)param_1 + 0x2d) = 3;
  }
  return;
}