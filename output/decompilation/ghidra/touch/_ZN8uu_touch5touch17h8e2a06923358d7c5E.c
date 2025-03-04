long * _ZN8uu_touch5touch17h8e2a06923358d7c5E
                 (long *param_1,long *param_2,long param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined auVar8 [16];
  ulong local_168;
  long local_150;
  long local_148;
  uint uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  long local_128;
  long *local_120;
  long local_118;
  long lStack_110;
  ulong local_108;
  long lStack_100;
  ulong local_f8;
  long local_e8;
  long *plStack_e0;
  long *local_d8;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  long local_b8;
  long *plStack_b0;
  long *local_a8;
  undefined8 *local_a0;
  long *local_90;
  long *local_88;
  undefined8 local_80;
  long local_78;
  long *plStack_70;
  long *local_68;
  undefined8 *local_60;
  long local_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  
  lVar1 = 0;
  if (param_4[3] < -0x7ffffffffffffffe) {
    lVar1 = param_4[3] + -0x7fffffffffffffff;
  }
  local_120 = param_2;
  local_c8 = param_3;
  if (lVar1 == 0) {
    param_2 = (long *)param_4[4];
    _ZN8uu_touch4stat17haa73667d17037b3bE
              (&local_118,param_2,param_4[5],*(char *)((long)param_4 + 0x31) == '\0');
    if (local_118 == 0) {
      uVar6 = local_108 & 0xffffffff;
      lVar1 = lStack_100;
      lVar7 = lStack_110;
      local_168 = local_f8 & 0xffffffff;
    }
    else {
      param_2 = param_4 + 3;
      _ZN8uu_touch5touch28__u7b__u7b_closure_u7d__u7d_17hdd400a1e630fbbb5E
                (&local_150,param_2,lStack_110);
      uVar6 = CONCAT44(uStack_13c,uStack_140);
      lVar1 = CONCAT44(uStack_134,local_138);
      lVar7 = local_148;
      local_168 = CONCAT44(uStack_12c,uStack_130);
      if (local_150 != -0x7ffffffffffffffc) {
        *param_1 = local_150;
        param_1[1] = local_148;
        param_1[2] = uVar6;
        param_1[3] = lVar1;
        param_1[4] = CONCAT44(uStack_12c,uStack_130);
        param_1[5] = local_128;
        return param_1;
      }
    }
  }
  else if (lVar1 == 1) {
    lVar1 = param_4[4];
    uVar6 = (ulong)*(uint *)(param_4 + 5);
    lVar7 = lVar1;
    local_168 = uVar6;
  }
  else {
    _ZN6chrono6offset5local5Local3now17ha82adb6e05d16f38E(&local_150);
    auVar8 = _ZN8uu_touch20datetime_to_filetime17hee2fe932dd2f3a25E(&local_150);
    lVar1 = auVar8._0_8_;
    uVar6 = auVar8._8_8_ & 0xffffffff;
    lVar7 = lVar1;
    local_168 = uVar6;
  }
  uVar5 = (uint)uVar6;
  if (*param_4 == -0x8000000000000000) {
LAB_002c25b5:
    local_88 = local_120 + local_c8 * 3;
    local_90 = local_120;
    local_80 = 0;
    do {
      while( true ) {
        auVar8 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h549ada4c33c82e7dE
                           (&local_90);
        plVar4 = auVar8._8_8_;
        if (plVar4 == (long *)0x0) {
          *param_1 = -0x7ffffffffffffffc;
          return param_1;
        }
        local_c0 = auVar8._0_8_;
        lVar2 = *plVar4;
        lVar3 = -0x8000000000000000;
        if (lVar2 == -0x8000000000000000) {
          _ZN8uu_touch19pathbuf_from_stdout17h2920ee1b816c3101E(&local_150);
          plVar4 = (long *)CONCAT44(uStack_13c,uStack_140);
          param_2 = (long *)CONCAT44(uStack_134,local_138);
          lVar3 = local_148;
          if (local_150 != -0x7ffffffffffffffc) {
            param_1[4] = CONCAT44(uStack_12c,uStack_130);
            param_1[5] = local_128;
            *param_1 = local_150;
            param_1[1] = local_148;
            param_1[2] = (long)plVar4;
            param_1[3] = (long)param_2;
            return param_1;
          }
        }
        plStack_e0 = plVar4;
        local_d8 = param_2;
        if (lVar3 != -0x8000000000000000) {
          plVar4 = &local_e8;
        }
        param_2 = (long *)plVar4[2];
                    /* try { // try from 002c268d to 002c26af has its CatchHandler @ 002c2963 */
        local_e8 = lVar3;
        lVar2 = _ZN8uu_touch10touch_file17h877dc0441f137307E
                          (plVar4[1],param_2,lVar2 == -0x8000000000000000,param_4,lVar7,
                           uVar6 & 0xffffffff,lVar1,local_168);
        local_a8 = local_d8;
        local_b8 = local_e8;
        plStack_b0 = plStack_e0;
        local_a0 = &local_c0;
        if (lVar2 != 0) break;
        _ZN4core3ptr65drop_in_place_LT_uu_touch__touch___u7b__u7b_closure_u7d__u7d__GT_17hc5b9fab259fe0862E
                  (&local_b8);
      }
      local_68 = local_d8;
      local_78 = local_e8;
      plStack_70 = plStack_e0;
      param_2 = &local_78;
      local_60 = local_a0;
      _ZN8uu_touch5touch28__u7b__u7b_closure_u7d__u7d_17hf4c84b0974a1c31bE(&local_150,param_2,lVar2)
      ;
    } while (local_150 == -0x7ffffffffffffffc);
    param_1[5] = local_128;
    param_1[3] = CONCAT44(uStack_134,local_138);
    param_1[4] = CONCAT44(uStack_12c,uStack_130);
    param_1[1] = local_148;
    param_1[2] = CONCAT44(uStack_13c,uStack_140);
    *param_1 = local_150;
  }
  else {
    _ZN8uu_touch20filetime_to_datetime17h118b2d8253ee418fE(&local_118,lVar7,uVar6 & 0xffffffff);
    if ((int)local_118 == 0) {
      *param_1 = -0x7fffffffffffffff;
    }
    else {
      local_50 = local_118;
      lStack_48 = lStack_110;
      lVar2 = param_4[1];
      local_d0 = param_4[2];
      _ZN8uu_touch10parse_date17h59fdcf28d83a7f45E(&local_150,&local_50);
      lVar7 = local_148;
      uVar6 = (ulong)uStack_140;
      if (local_150 == -0x7ffffffffffffffc) {
        _ZN8uu_touch20filetime_to_datetime17h118b2d8253ee418fE(&local_118,lVar1,local_168);
        if ((int)local_118 == 0) {
          *param_1 = -0x7fffffffffffffff;
          param_1[1] = lVar1;
          *(int *)(param_1 + 2) = (int)local_168;
          return param_1;
        }
        local_40 = local_118;
        lStack_38 = lStack_110;
        param_2 = &local_40;
        _ZN8uu_touch10parse_date17h59fdcf28d83a7f45E(&local_150,param_2,lVar2,local_d0);
        local_168 = (ulong)uStack_140;
        lVar1 = local_148;
        if (local_150 != -0x7ffffffffffffffc) {
          param_1[4] = CONCAT44(uStack_12c,uStack_130);
          param_1[5] = local_128;
          *(ulong *)((long)param_1 + 0x14) = CONCAT44(local_138,uStack_13c);
          *(ulong *)((long)param_1 + 0x1c) = CONCAT44(uStack_130,uStack_134);
          *param_1 = local_150;
          param_1[1] = local_148;
          *(uint *)(param_1 + 2) = uStack_140;
          return param_1;
        }
        goto LAB_002c25b5;
      }
      param_1[4] = CONCAT44(uStack_12c,uStack_130);
      param_1[5] = local_128;
      *(ulong *)((long)param_1 + 0x14) = CONCAT44(local_138,uStack_13c);
      *(ulong *)((long)param_1 + 0x1c) = CONCAT44(uStack_130,uStack_134);
      *param_1 = local_150;
      uVar5 = uStack_140;
    }
    param_1[1] = lVar7;
    *(uint *)(param_1 + 2) = uVar5;
  }
  return param_1;
}