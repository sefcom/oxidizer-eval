void __rustcall uu_join::State::next_line(long *param_1,long param_2,undefined *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined8 *local_158;
  undefined *local_150;
  undefined8 **local_148;
  undefined *puStack_140;
  undefined *local_138;
  code *pcStack_130;
  undefined8 *local_128;
  long lStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long local_e8;
  undefined8 local_d8;
  undefined8 *local_d0;
  code *local_c8;
  undefined8 **local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined local_a0 [16];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined local_48 [24];
  
  lVar7 = -0x8000000000000000;
  read_line(&local_158,param_2,param_3 + 2);
  if (local_158 == (undefined8 *)0x8000000000000001) {
    param_1[1] = -0x8000000000000000;
    param_1[2] = (long)local_150;
    lVar7 = -0x7fffffffffffffff;
  }
  else {
    local_58 = (long)local_138;
    lVar4 = local_58;
    uStack_50 = (long)pcStack_130;
    lVar5 = uStack_50;
    local_68 = (long)local_148;
    lVar2 = local_68;
    uStack_60 = (long)puStack_140;
    lVar3 = uStack_60;
    if (local_158 != (undefined8 *)0x8000000000000000) {
      local_128 = local_158;
      lStack_120 = (long)local_150;
      local_68._0_4_ = SUB84(local_148,0);
      local_68._4_4_ = (undefined4)((ulong)local_148 >> 0x20);
      uStack_60._0_4_ = SUB84(puStack_140,0);
      uStack_60._4_4_ = (undefined4)((ulong)puStack_140 >> 0x20);
      local_58._0_4_ = SUB84(local_138,0);
      local_58._4_4_ = (undefined4)((ulong)local_138 >> 0x20);
      uStack_50._0_4_ = SUB84(pcStack_130,0);
      uStack_50._4_4_ = (undefined4)((ulong)pcStack_130 >> 0x20);
      local_108 = (undefined4)local_58;
      uStack_104 = local_58._4_4_;
      uStack_100 = (undefined4)uStack_50;
      uStack_fc = uStack_50._4_4_;
      local_118 = (undefined4)local_68;
      uStack_114 = local_68._4_4_;
      uStack_110 = (undefined4)uStack_60;
      uStack_10c = uStack_60._4_4_;
      cVar1 = param_3[1];
      if (cVar1 == '\x01') {
        param_1[4] = (long)local_138;
        param_1[5] = (long)pcStack_130;
        param_1[2] = (long)local_148;
        param_1[3] = (long)puStack_140;
        *param_1 = (long)local_158;
        param_1[1] = (long)local_150;
        return;
      }
      local_68 = lVar2;
      uStack_60 = lVar3;
      local_58 = lVar4;
      uStack_50 = lVar5;
                    /* try { // try from 00174850 to 001748ee has its CatchHandler @ 00174abd */
      auVar8 = (*(code *)PTR_get_current_key_00239f48)(param_2);
      local_d8 = auVar8._0_8_;
      auVar9 = (*(code *)PTR_get_field_00239ee0)(&local_128,*(undefined8 *)(param_2 + 0x40));
      cVar6 = Input<Sep>::compare(*param_3,local_d8,auVar8._8_8_,auVar9._0_8_,auVar9._8_8_);
      if ((cVar6 == '\x01') &&
         ((cVar1 == '\x02' ||
          ((*(char *)(param_2 + 0x5b) != '\0' && (*(char *)(param_2 + 0x5a) == '\0')))))) {
        local_a0._8_8_ = *(undefined8 *)(param_2 + 0x18);
        uStack_90 = *(undefined4 *)(param_2 + 0x20);
        uStack_8c = *(undefined4 *)(param_2 + 0x24);
        local_a0._0_8_ = 0;
        local_88 = 0;
        (*(code *)PTR_from_utf8_lossy_00239f90)
                  (local_48,CONCAT44(uStack_104,local_108),CONCAT44(uStack_fc,uStack_100));
        local_148 = (undefined8 **)(param_2 + 0x50);
        local_150 = PTR_fmt_00239f98;
        puStack_140 = PTR_fmt_00239fa0;
        pcStack_130 = _<alloc::borrow::Cow<B>as_core::fmt::Display>::fmt;
        local_d0 = (undefined8 *)&DAT_002332c8;
        local_c8 = (code *)0x3;
        local_b0 = 0;
        local_b8 = (code *)0x3;
                    /* try { // try from 00174969 to 00174980 has its CatchHandler @ 00174aab */
        local_158 = (undefined8 *)local_a0;
        local_138 = local_48;
        local_c0 = &local_158;
        core::option::Option<T>::map_or_else(&local_80,&local_d0);
                    /* try { // try from 00174981 to 0017498d has its CatchHandler @ 00174a99 */
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(local_48);
        local_f8 = local_80;
        uStack_f4 = uStack_7c;
        uStack_f0 = uStack_78;
        uStack_ec = uStack_74;
        local_e8 = local_70;
        if (cVar1 == '\x02') {
          param_1[3] = local_70;
          *(undefined4 *)(param_1 + 1) = local_80;
          *(undefined4 *)((long)param_1 + 0xc) = uStack_7c;
          *(undefined4 *)(param_1 + 2) = uStack_78;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_74;
          *param_1 = -0x7fffffffffffffff;
          core::ptr::drop_in_place<uu_join::Line>(&local_128);
          return;
        }
                    /* try { // try from 001749dc to 00174a5b has its CatchHandler @ 00174a8a */
        local_a0 = (*(code *)PTR_execution_phrase_00239f58)();
        local_c8 = _<&T_as_core::fmt::Display>::fmt;
        local_c0 = (undefined8 **)&local_f8;
        local_b8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_158 = (undefined8 *)&DAT_002332f8;
        local_150 = (undefined *)0x3;
        local_138 = (undefined *)0x0;
        puStack_140 = (undefined *)0x2;
        local_148 = &local_d0;
        local_d0 = (undefined8 *)local_a0;
        (*(code *)PTR__eprint_00239f60)(&local_158);
        *(undefined *)(param_2 + 0x5a) = 1;
                    /* try { // try from 00174a61 to 00174a6a has its CatchHandler @ 00174abd */
        core::ptr::drop_in_place<alloc::string::String>(&local_f8);
      }
      param_1[4] = CONCAT44(uStack_104,local_108);
      param_1[5] = CONCAT44(uStack_fc,uStack_100);
      param_1[2] = CONCAT44(uStack_114,local_118);
      param_1[3] = CONCAT44(uStack_10c,uStack_110);
      *param_1 = (long)local_128;
      param_1[1] = lStack_120;
      return;
    }
  }
  *param_1 = lVar7;
  return;
}