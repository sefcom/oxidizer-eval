void _ZN8uu_touch5touch17h0be58da63b86e7deE(long *param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_R14;
  undefined auVar5 [16];
  undefined auVar6 [16];
  ulong local_120;
  uint local_114;
  long local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  long local_e8;
  long local_e0;
  uint local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  uint local_c8;
  long lStack_c0;
  ulong local_b8;
  long local_a8;
  long local_a0;
  long local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  long local_60;
  undefined8 *local_58;
  uint local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  lVar1 = 0;
  if (param_4[3] < -0x7ffffffffffffffe) {
    lVar1 = param_4[3] + -0x7fffffffffffffff;
  }
  if (lVar1 == 0) {
    lVar1 = param_4[4];
    lVar2 = param_4[5];
    _ZN8uu_touch4stat17hbfae00cfffe9133bE(&local_d8,lVar1,lVar2,*(byte *)((long)param_4 + 0x31) ^ 1)
    ;
    if ((local_d8 & 1) == 0) {
      lVar1 = CONCAT44(uStack_cc,uStack_d0);
      local_120 = local_b8 & 0xffffffff;
      lVar2 = lStack_c0;
      local_114 = local_c8;
    }
    else {
      _ZN8uu_touch5touch28__u7b__u7b_closure_u7d__u7d_17ha077cb7010bb6923E
                (&local_110,lVar1,lVar2,CONCAT44(uStack_cc,uStack_d0));
      lVar1 = CONCAT44(uStack_104,local_108);
      if (local_110 != -0x7ffffffffffffffc) {
        *param_1 = local_110;
        param_1[1] = lVar1;
        param_1[2] = CONCAT44(uStack_fc,uStack_100);
        param_1[3] = CONCAT44(uStack_f4,local_f8);
        param_1[4] = CONCAT44(uStack_ec,uStack_f0);
        param_1[5] = local_e8;
        return;
      }
      local_120 = (ulong)uStack_f0;
      lVar2 = CONCAT44(uStack_f4,local_f8);
      local_114 = uStack_100;
    }
  }
  else if (lVar1 == 1) {
    lVar1 = param_4[4];
    local_114 = *(uint *)(param_4 + 5);
    local_120 = (ulong)local_114;
    lVar2 = lVar1;
  }
  else {
    (*(code *)PTR__ZN6chrono6offset5local5Local3now17hd3cc0dab6e1d709bE_003aa2f8)(&local_110);
    auVar5 = _ZN8uu_touch20datetime_to_filetime17h5b8a0eb5c393ab6aE(&local_110);
    lVar1 = auVar5._0_8_;
    local_114 = auVar5._8_4_;
    local_120 = auVar5._8_8_ & 0xffffffff;
    lVar2 = lVar1;
  }
  local_a0 = -0x8000000000000000;
  local_88 = param_2;
  local_a8 = lVar2;
  if (*param_4 != -0x8000000000000000) {
    _ZN8uu_touch20filetime_to_datetime17h915ff47696d18514E(&local_d8,lVar1);
    if (local_d8 == 0) {
      *param_1 = -0x7fffffffffffffff;
      param_1[1] = lVar1;
      *(uint *)(param_1 + 2) = local_114;
      return;
    }
    local_50 = local_d8;
    uStack_4c = uStack_d4;
    uStack_48 = uStack_d0;
    uStack_44 = uStack_cc;
    lVar4 = param_4[1];
    lVar3 = param_4[2];
    local_e0 = param_3;
    _ZN8uu_touch10parse_date17hc2f6ff83abb54cd3E(&local_110,&local_50,lVar4,lVar3);
    lVar1 = CONCAT44(uStack_104,local_108);
    if (local_110 != -0x7ffffffffffffffc) {
      param_1[4] = CONCAT44(uStack_ec,uStack_f0);
      param_1[5] = local_e8;
      *(ulong *)((long)param_1 + 0x14) = CONCAT44(local_f8,uStack_fc);
      *(ulong *)((long)param_1 + 0x1c) = CONCAT44(uStack_f0,uStack_f4);
      *param_1 = local_110;
      param_1[1] = lVar1;
      *(uint *)(param_1 + 2) = uStack_100;
      return;
    }
    local_114 = uStack_100;
    local_98 = param_2;
    _ZN8uu_touch20filetime_to_datetime17h915ff47696d18514E(&local_d8,lVar2,local_120);
    if (local_d8 == 0) {
      *param_1 = -0x7fffffffffffffff;
      param_1[1] = lVar2;
      *(int *)(param_1 + 2) = (int)local_120;
      return;
    }
    local_40 = local_d8;
    uStack_3c = uStack_d4;
    uStack_38 = uStack_d0;
    uStack_34 = uStack_cc;
    _ZN8uu_touch10parse_date17hc2f6ff83abb54cd3E(&local_110,&local_40,lVar4,lVar3);
    local_120 = (ulong)uStack_100;
    param_3 = local_e0;
    local_88 = local_98;
    unaff_R14 = lVar2;
    local_a8 = CONCAT44(uStack_104,local_108);
    if (local_110 != -0x7ffffffffffffffc) {
      param_1[4] = CONCAT44(uStack_ec,uStack_f0);
      param_1[5] = local_e8;
      *(ulong *)((long)param_1 + 0x14) = CONCAT44(local_f8,uStack_fc);
      *(ulong *)((long)param_1 + 0x1c) = CONCAT44(uStack_f0,uStack_f4);
      *param_1 = local_110;
      param_1[1] = CONCAT44(uStack_104,local_108);
      *(uint *)(param_1 + 2) = uStack_100;
      return;
    }
  }
  local_80 = param_3 * 0x18 + local_88;
  local_78 = 0;
  auVar5 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h37160c8aca5e383fE
                     (&local_88);
  lVar2 = auVar5._8_8_;
  local_e0 = lVar1;
  do {
    if (lVar2 == 0) {
      *param_1 = -0x7ffffffffffffffc;
      return;
    }
    local_90 = auVar5._0_8_;
    lVar1 = *auVar5._8_8_;
    if (lVar1 == local_a0) {
      _ZN8uu_touch19pathbuf_from_stdout17h2fc16d9e8e8ab5c3E(&local_110);
      lVar3 = CONCAT44(uStack_104,local_108);
      lVar2 = CONCAT44(uStack_fc,uStack_100);
      auVar5._8_8_ = lVar2;
      auVar5._0_8_ = local_90;
      lVar4 = CONCAT44(uStack_f4,local_f8);
      if (local_110 != -0x7ffffffffffffffc) {
        param_1[4] = CONCAT44(uStack_ec,uStack_f0);
        param_1[5] = local_e8;
        *param_1 = local_110;
        param_1[1] = lVar3;
        param_1[2] = lVar2;
        param_1[3] = lVar4;
        return;
      }
      unaff_R14 = lVar4;
      if (lVar3 == local_a0) goto LAB_00239b50;
    }
    else {
LAB_00239b50:
      lVar2 = *(long *)(auVar5._8_8_ + 8);
      lVar4 = *(long *)(auVar5._8_8_ + 0x10);
      lVar3 = local_a0;
    }
    local_90 = auVar5._0_8_;
                    /* try { // try from 00239b6a to 00239b92 has its CatchHandler @ 00239e36 */
    auVar6 = _ZN8uu_touch10touch_file17h545e8affe65c7ac6E
                       (lVar2,lVar4,lVar1 == local_a0,param_4,local_e0,local_114,local_a8,local_120)
    ;
    if (auVar6._0_8_ == 0) {
      _ZN4core3ptr65drop_in_place_LT_uu_touch__touch___u7b__u7b_closure_u7d__u7d__GT_17h6199e6bd15be6263E
                (lVar3,auVar5._8_8_);
    }
    else {
      local_58 = &local_90;
      local_70 = lVar3;
      local_68 = auVar5._8_8_;
      local_60 = unaff_R14;
      _ZN8uu_touch5touch28__u7b__u7b_closure_u7d__u7d_17hf7522ea3725909faE
                (&local_110,&local_70,auVar6._0_8_,auVar6._8_8_);
      if (local_110 != -0x7ffffffffffffffc) {
        param_1[5] = local_e8;
        param_1[3] = CONCAT44(uStack_f4,local_f8);
        param_1[4] = CONCAT44(uStack_ec,uStack_f0);
        param_1[1] = CONCAT44(uStack_104,local_108);
        param_1[2] = CONCAT44(uStack_fc,uStack_100);
        *param_1 = local_110;
        return;
      }
    }
    auVar5 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h37160c8aca5e383fE
                       (&local_88);
    lVar2 = auVar5._8_8_;
  } while( true );
}