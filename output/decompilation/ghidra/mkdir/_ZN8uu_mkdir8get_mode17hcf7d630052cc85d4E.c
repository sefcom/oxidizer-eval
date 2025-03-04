long * _ZN8uu_mkdir8get_mode17hcf7d630052cc85d4E(long *param_1,undefined8 param_2,char param_3)

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
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17he67b74001b5dafb4E
            (&local_78,param_2,&DAT_00114314,4);
  lVar11 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h4544dc2b3abed5dfE
                     (&DAT_00114314,4,&local_78);
  if (lVar11 == 0) {
    uVar10 = _ZN6uucore8features4mode9get_umask17hd2aa58752ad993faE();
    uVar10 = ~uVar10 & 0x1ff;
  }
  else {
    uVar1 = *(undefined8 *)(lVar11 + 8);
    uVar2 = *(undefined8 *)(lVar11 + 0x10);
    _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h77b0cfb9226a3587E
              (local_68,uVar1,uVar2);
    local_78 = 0;
    local_38 = 1;
    local_70 = uVar2;
    auVar13 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17had797e95afa81bfbE(&local_78);
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
          uVar7 = _ZN4core4iter6traits8iterator8Iterator8try_fold17hec868b0f829523d7E(&local_100);
          cVar8 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h4b3a54094321950cE
                            (uVar7);
          if (cVar8 == '\0') {
            _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17ha4208e868ecb88ccE
                      (&local_100,ppuVar12,lVar11);
            lVar11 = uStack_f8;
            uVar3 = CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0);
            local_c8 = (undefined4)local_100;
            uStack_c4 = local_100._4_4_;
            local_b8 = uVar3;
            uStack_c0 = uStack_f8;
                    /* try { // try from 001b2714 to 001b2733 has its CatchHandler @ 001b27b9 */
            uVar9 = _ZN6uucore8features4mode9get_umask17hd2aa58752ad993faE();
            _ZN6uucore8features4mode14parse_symbolic17h8b8316294f52b67dE
                      (&local_100,uVar10,lVar11,uVar3,uVar9,1);
            uVar10 = (uint)uStack_f8;
            ppppuVar4 = (undefined ****)CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0);
            lVar11 = uStack_f8;
            if (local_100 != (undefined **)0x8000000000000000) goto LAB_001b2785;
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h03aa133fcf191ac0E(&local_c8);
          }
          else {
            _ZN6uucore8features4mode13parse_numeric17h27100faf377a9b0fE
                      (&local_100,uVar10,uVar1,uVar2,1);
            ppppuVar4 = (undefined ****)CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0);
            uVar10 = (uint)uStack_f8;
            lVar11 = uStack_f8;
            if (local_100 != (undefined **)0x8000000000000000) goto LAB_001b275b;
          }
          auVar13 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17had797e95afa81bfbE(&local_78);
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
          uVar7 = _ZN4core4iter6traits8iterator8Iterator8try_fold17hec868b0f829523d7E(&local_100);
          cVar8 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h4b3a54094321950cE
                            (uVar7);
          if (cVar8 == '\0') {
            local_a0 = &local_b0;
            local_98 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hfd6a55cddc5280deE;
            local_100 = &PTR_s___00220500;
            uStack_f8._0_4_ = 1;
            uStack_f8._4_4_ = 0;
            local_e0 = 0;
            uStack_f0 = &local_a0;
            local_e8 = 1;
            _ZN4core6option15Option_LT_T_GT_11map_or_else17h6db0321d2b87c404E(&local_90,&local_100);
            uVar6 = local_80;
            local_b8 = local_80;
            local_c8 = local_90;
            uStack_c4 = uStack_8c;
            uStack_c0._0_4_ = uStack_88;
            uStack_c0._4_4_ = uStack_84;
            uVar3 = CONCAT44(uStack_84,uStack_88);
                    /* try { // try from 001b25d0 to 001b25ef has its CatchHandler @ 001b27bb */
            uVar9 = _ZN6uucore8features4mode9get_umask17hd2aa58752ad993faE();
            _ZN6uucore8features4mode14parse_symbolic17h8b8316294f52b67dE
                      (&local_100,uVar10,uVar3,uVar6,uVar9,1);
            uVar10 = (uint)uStack_f8;
            ppppuVar4 = uStack_f0;
            lVar11 = CONCAT44(uStack_f8._4_4_,(uint)uStack_f8);
            if (local_100 != (undefined **)0x8000000000000000) {
LAB_001b2785:
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
              _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h03aa133fcf191ac0E
                        (&local_c8);
              return plVar5;
            }
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h03aa133fcf191ac0E(&local_c8);
          }
          else {
            _ZN6uucore8features4mode13parse_numeric17h27100faf377a9b0fE
                      (&local_100,uVar10,uVar1,uVar2,1);
            uVar10 = (uint)uStack_f8;
            lVar11 = uStack_f8;
            ppppuVar4 = uStack_f0;
            if (local_100 != (undefined **)0x8000000000000000) {
LAB_001b275b:
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
          auVar13 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17had797e95afa81bfbE(&local_78);
          param_1 = local_d0;
        } while (auVar13._0_8_ != 0);
      }
    }
  }
  *(uint *)(param_1 + 1) = uVar10;
  *param_1 = -0x8000000000000000;
  return param_1;
}