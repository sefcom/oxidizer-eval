long * __rustcall uu_touch::touch(long *param_1,long *param_2,long param_3,long *param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined auVar9 [16];
  undefined4 local_168;
  uint uStack_164;
  uint local_160;
  undefined4 uStack_15c;
  uint uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  long local_140;
  long *local_138;
  ulong local_130;
  long local_128;
  long lStack_120;
  ulong local_118;
  long lStack_110;
  ulong local_108;
  ulong local_f8;
  long *local_f0;
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
  
  lVar7 = 0;
  if (param_4[3] < -0x7ffffffffffffffe) {
    lVar7 = param_4[3] + -0x7fffffffffffffff;
  }
  local_138 = param_2;
  local_c8 = param_3;
  if (lVar7 == 0) {
    param_2 = (long *)param_4[4];
    stat(&local_128,param_2,param_4[5],*(char *)((long)param_4 + 0x31) == '\0');
    if (local_128 == 0) {
      local_f8 = local_118 & 0xffffffff;
      local_130 = local_108 & 0xffffffff;
      lVar7 = lStack_110;
      lVar8 = lStack_120;
    }
    else {
      param_2 = param_4 + 3;
      touch::___closure__(&local_168,param_2,lStack_120);
      lVar8 = CONCAT44(uStack_15c,local_160);
      local_f8 = CONCAT44(uStack_154,uStack_158);
      lVar7 = CONCAT44(uStack_14c,local_150);
      local_130 = CONCAT44(uStack_144,uStack_148);
      if (CONCAT44(uStack_164,local_168) != -0x7ffffffffffffffc) {
        *param_1 = CONCAT44(uStack_164,local_168);
        param_1[1] = lVar8;
        param_1[2] = local_f8;
        param_1[3] = lVar7;
        param_1[4] = local_130;
        param_1[5] = local_140;
        return param_1;
      }
    }
  }
  else {
    if (lVar7 == 1) {
      lVar7 = param_4[4];
      uVar1 = *(uint *)(param_4 + 5);
    }
    else {
      chrono::offset::local::Local::now(&local_168);
      iVar2 = chrono::naive::date::NaiveDate::num_days_from_ce(local_168);
      lVar7 = ((ulong)uStack_164 - 0xe77934880) + (long)iVar2 * 0x15180;
      uVar1 = local_160;
    }
    local_130 = (ulong)uVar1;
    local_f8 = local_130;
    lVar8 = lVar7;
  }
  local_f0 = param_4;
  if (*param_4 == -0x8000000000000000) {
LAB_002c1cc2:
    local_88 = local_138 + local_c8 * 3;
    local_90 = local_138;
    local_80 = 0;
    auVar9 = _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>
             ::next(&local_90);
    lVar3 = auVar9._8_8_;
    while (lVar3 != 0) {
      plVar5 = auVar9._8_8_;
      local_c0 = auVar9._0_8_;
      lVar3 = *plVar5;
      lVar4 = -0x8000000000000000;
      if (lVar3 == -0x8000000000000000) {
        pathbuf_from_stdout(&local_168);
        lVar4 = CONCAT44(uStack_15c,local_160);
        plVar5 = (long *)CONCAT44(uStack_154,uStack_158);
        param_2 = (long *)CONCAT44(uStack_14c,local_150);
        if (CONCAT44(uStack_164,local_168) != -0x7ffffffffffffffc) {
          param_1[4] = CONCAT44(uStack_144,uStack_148);
          param_1[5] = local_140;
          *param_1 = CONCAT44(uStack_164,local_168);
          param_1[1] = lVar4;
          param_1[2] = (long)plVar5;
          param_1[3] = (long)param_2;
          return param_1;
        }
      }
      plStack_e0 = plVar5;
      local_d8 = param_2;
      if (lVar4 != -0x8000000000000000) {
        plVar5 = &local_e8;
      }
      param_2 = (long *)plVar5[2];
      local_e8 = lVar4;
                    /* try { // try from 002c1db4 to 002c1dd7 has its CatchHandler @ 002c20b3 */
      lVar3 = touch_file(plVar5[1],param_2,lVar3 == -0x8000000000000000,local_f0,lVar8,local_f8,
                         lVar7,local_130);
      local_a8 = local_d8;
      local_b8 = local_e8;
      plStack_b0 = plStack_e0;
      local_a0 = &local_c0;
      if (lVar3 == 0) {
        core::ptr::drop_in_place<uu_touch::touch::__closure__>(&local_b8);
      }
      else {
        local_68 = local_d8;
        local_78 = local_e8;
        plStack_70 = plStack_e0;
        param_2 = &local_78;
        local_60 = local_a0;
        touch::___closure__(&local_168,param_2,lVar3);
        if (CONCAT44(uStack_164,local_168) != -0x7ffffffffffffffc) {
          param_1[5] = local_140;
          param_1[3] = CONCAT44(uStack_14c,local_150);
          param_1[4] = CONCAT44(uStack_144,uStack_148);
          param_1[1] = CONCAT44(uStack_15c,local_160);
          param_1[2] = CONCAT44(uStack_154,uStack_158);
          *param_1 = CONCAT44(uStack_164,local_168);
          return param_1;
        }
      }
      auVar9 = _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>
               ::next(&local_90);
      lVar3 = auVar9._8_8_;
    }
    *param_1 = -0x7ffffffffffffffc;
  }
  else {
    filetime_to_datetime(&local_128,lVar8,local_f8 & 0xffffffff);
    if ((int)local_128 == 0) {
      *param_1 = -0x7fffffffffffffff;
      param_1[1] = lVar8;
      *(int *)(param_1 + 2) = (int)local_f8;
      return param_1;
    }
    local_50 = local_128;
    lStack_48 = lStack_120;
    lVar3 = local_f0[1];
    lVar4 = local_f0[2];
    parse_date(&local_168,&local_50,lVar3);
    lVar8 = CONCAT44(uStack_15c,local_160);
    local_f8 = (ulong)uStack_158;
    if (CONCAT44(uStack_164,local_168) == -0x7ffffffffffffffc) {
      uVar6 = (undefined4)local_130;
      local_d0 = lVar3;
      filetime_to_datetime(&local_128,lVar7,local_130 & 0xffffffff);
      if ((int)local_128 == 0) {
        *param_1 = -0x7fffffffffffffff;
        param_1[1] = lVar7;
        *(undefined4 *)(param_1 + 2) = uVar6;
        return param_1;
      }
      local_40 = local_128;
      lStack_38 = lStack_120;
      param_2 = &local_40;
      parse_date(&local_168,param_2,local_d0,lVar4);
      lVar7 = CONCAT44(uStack_15c,local_160);
      local_130 = (ulong)uStack_158;
      if (CONCAT44(uStack_164,local_168) == -0x7ffffffffffffffc) goto LAB_002c1cc2;
      param_1[4] = CONCAT44(uStack_144,uStack_148);
      param_1[5] = local_140;
      *(ulong *)((long)param_1 + 0x14) = CONCAT44(local_150,uStack_154);
      *(ulong *)((long)param_1 + 0x1c) = CONCAT44(uStack_148,uStack_14c);
      *param_1 = CONCAT44(uStack_164,local_168);
      param_1[1] = lVar7;
    }
    else {
      param_1[4] = CONCAT44(uStack_144,uStack_148);
      param_1[5] = local_140;
      *(ulong *)((long)param_1 + 0x14) = CONCAT44(local_150,uStack_154);
      *(ulong *)((long)param_1 + 0x1c) = CONCAT44(uStack_148,uStack_14c);
      *param_1 = CONCAT44(uStack_164,local_168);
      param_1[1] = lVar8;
    }
    *(uint *)(param_1 + 2) = uStack_158;
  }
  return param_1;
}