long * __rustcall uu_mkdir::get_mode(long *param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined ****ppppuVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined uVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined auVar13 [16];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  long *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined **local_b0;
  long local_a8;
  undefined ***local_a0;
  code *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined local_68 [48];
  undefined2 local_38;
  
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_78,param_2,&DAT_00114588,4);
  lVar11 = clap_builder::parser::error::MatchesError::unwrap(&DAT_00114588,4,&local_78);
  if (lVar11 == 0) {
    uVar10 = uucore::features::mode::get_umask();
    uVar10 = ~uVar10 & 0x1ff;
  }
  else {
    uVar1 = *(undefined8 *)(lVar11 + 8);
    uVar2 = *(undefined8 *)(lVar11 + 0x10);
    _<char_as_core::str::pattern::Pattern>::into_searcher(local_68,uVar1,uVar2);
    local_78 = 0;
    local_38 = 1;
    local_70 = uVar2;
    auVar13 = core::str::iter::SplitInternal<P>::next(&local_78);
    if (auVar13._0_8_ == 0) {
      uVar10 = 0x1ff;
    }
    else {
      local_d0 = param_1;
      if (param_3 == '\0') {
        uVar10 = 0x1ff;
        do {
          lVar11 = auVar13._8_8_;
          ppuVar12 = auVar13._0_8_;
          uStack_f8 = (long)ppuVar12 + lVar11;
          local_100 = ppuVar12;
          local_b0 = ppuVar12;
          local_a8 = lVar11;
          uVar7 = core::iter::traits::iterator::Iterator::try_fold(&local_100);
          cVar8 = _<core::ops::control_flow::ControlFlow<B,C>as_core::cmp::PartialEq>::eq(uVar7);
          if (cVar8 == '\0') {
            _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_100,ppuVar12,lVar11);
            lVar11 = uStack_f8;
            uVar3 = CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0);
            local_c8 = (undefined4)local_100;
            uStack_c4 = local_100._4_4_;
            local_b8 = uVar3;
            uStack_c0 = uStack_f8;
                    /* try { // try from 001b2cb4 to 001b2cd3 has its CatchHandler @ 001b2d59 */
            uVar9 = uucore::features::mode::get_umask();
            uucore::features::mode::parse_symbolic(&local_100,uVar10,lVar11,uVar3,uVar9,1);
            uVar10 = (uint)uStack_f8;
            ppppuVar4 = (undefined ****)CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0);
            lVar11 = uStack_f8;
            if (local_100 != (undefined **)0x8000000000000000) goto LAB_001b2d25;
            core::ptr::drop_in_place<alloc::string::String>(&local_c8);
          }
          else {
            uucore::features::mode::parse_numeric(&local_100,uVar10,uVar1,uVar2,1);
            ppppuVar4 = (undefined ****)CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0);
            uVar10 = (uint)uStack_f8;
            lVar11 = uStack_f8;
            if (local_100 != (undefined **)0x8000000000000000) goto LAB_001b2cfb;
          }
          auVar13 = core::str::iter::SplitInternal<P>::next(&local_78);
          param_1 = local_d0;
        } while (auVar13._0_8_ != 0);
      }
      else {
        uVar10 = 0x1ff;
        do {
          local_a8 = auVar13._8_8_;
          local_100 = auVar13._0_8_;
          uStack_f8 = local_a8 + (long)local_100;
          local_b0 = local_100;
          uVar7 = core::iter::traits::iterator::Iterator::try_fold(&local_100);
          cVar8 = _<core::ops::control_flow::ControlFlow<B,C>as_core::cmp::PartialEq>::eq(uVar7);
          if (cVar8 == '\0') {
            local_a0 = &local_b0;
            local_98 = _<&T_as_core::fmt::Display>::fmt;
            local_100 = &PTR_s___00221808;
            uStack_f8._0_4_ = 1;
            uStack_f8._4_4_ = 0;
            local_e0 = 0;
            uStack_f0 = &local_a0;
            local_e8 = 1;
            core::option::Option<T>::map_or_else(&local_90,&local_100);
            uVar6 = local_80;
            local_b8 = local_80;
            local_c8 = local_90;
            uStack_c4 = uStack_8c;
            uStack_c0._0_4_ = uStack_88;
            uStack_c0._4_4_ = uStack_84;
            uVar3 = CONCAT44(uStack_84,uStack_88);
                    /* try { // try from 001b2b70 to 001b2b8f has its CatchHandler @ 001b2d5b */
            uVar9 = uucore::features::mode::get_umask();
            uucore::features::mode::parse_symbolic(&local_100,uVar10,uVar3,uVar6,uVar9,1);
            uVar10 = (uint)uStack_f8;
            ppppuVar4 = uStack_f0;
            lVar11 = CONCAT44(uStack_f8._4_4_,(uint)uStack_f8);
            if (local_100 != (undefined **)0x8000000000000000) {
LAB_001b2d25:
              plVar5 = local_d0;
              uStack_f8._4_4_ = (undefined4)((ulong)lVar11 >> 0x20);
              uStack_f8._0_4_ = (uint)lVar11;
              uStack_f0._4_4_ = (undefined4)((ulong)ppppuVar4 >> 0x20);
              uStack_f0._0_4_ = SUB84(ppppuVar4,0);
              *(undefined4 *)((long)local_d0 + 0x14) = uStack_f0._4_4_;
              *(ulong *)((long)local_d0 + 0xc) = CONCAT44((undefined4)uStack_f0,uStack_f8._4_4_);
              *local_d0 = (long)local_100;
              *(uint *)(local_d0 + 1) = (uint)uStack_f8;
              uStack_f8 = lVar11;
              uStack_f0 = ppppuVar4;
              core::ptr::drop_in_place<alloc::string::String>(&local_c8);
              return plVar5;
            }
            core::ptr::drop_in_place<alloc::string::String>(&local_c8);
          }
          else {
            uucore::features::mode::parse_numeric(&local_100,uVar10,uVar1,uVar2,1);
            uVar10 = (uint)uStack_f8;
            lVar11 = uStack_f8;
            ppppuVar4 = uStack_f0;
            if (local_100 != (undefined **)0x8000000000000000) {
LAB_001b2cfb:
              uStack_f0._4_4_ = (undefined4)((ulong)ppppuVar4 >> 0x20);
              uStack_f0._0_4_ = SUB84(ppppuVar4,0);
              uStack_f8._4_4_ = (undefined4)((ulong)lVar11 >> 0x20);
              uStack_f8._0_4_ = (uint)lVar11;
              *(undefined4 *)((long)local_d0 + 0x14) = uStack_f0._4_4_;
              *(ulong *)((long)local_d0 + 0xc) = CONCAT44((undefined4)uStack_f0,uStack_f8._4_4_);
              *local_d0 = (long)local_100;
              *(uint *)(local_d0 + 1) = (uint)uStack_f8;
              return local_d0;
            }
          }
          auVar13 = core::str::iter::SplitInternal<P>::next(&local_78);
          param_1 = local_d0;
        } while (auVar13._0_8_ != 0);
      }
    }
  }
  *(uint *)(param_1 + 1) = uVar10;
  *param_1 = -0x8000000000000000;
  return param_1;
}