long * _ZN8uu_mkdir8get_mode17he8abb7adb4ed63ddE(long *param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  undefined ****ppppuVar2;
  long *plVar3;
  undefined uVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined auVar11 [16];
  undefined **local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  long *local_c0;
  long local_b8;
  undefined **local_b0;
  long local_a8;
  undefined ***local_a0;
  code *local_98;
  undefined **local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined local_68 [48];
  undefined2 local_38;
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h63ff3fd1ffeadd56E
            (&local_78);
  lVar8 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h7bf4328e00f21745E(&local_78);
  if (lVar8 == 0) {
    uVar7 = (*(code *)PTR__ZN6uucore8features4mode9get_umask17h22fe72fd4e3f2e99E_001f4a58)();
    uVar7 = ~uVar7 & 0x1ff;
  }
  else {
    uVar1 = *(undefined8 *)(lVar8 + 0x10);
    local_c0 = param_1;
    _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
              (local_68,*(undefined8 *)(lVar8 + 8),uVar1);
    local_78 = 0;
    local_38 = 1;
    local_70 = uVar1;
    auVar11 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17ha2ea2eaf4333c4a2E(&local_78);
    if (auVar11._0_8_ == 0) {
      uVar7 = 0x1ff;
      param_1 = local_c0;
    }
    else {
      uVar7 = 0x1ff;
      local_b8 = lVar8;
      if (param_3 == '\0') {
        do {
          lVar10 = auVar11._8_8_;
          ppuVar9 = auVar11._0_8_;
          local_e8 = (long)ppuVar9 + lVar10;
          local_f0 = ppuVar9;
          local_b0 = ppuVar9;
          local_a8 = lVar10;
          uVar4 = _ZN4core4iter6traits8iterator8Iterator8try_fold17ha903c4bb553092f2E(&local_f0);
          cVar5 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h8332dc6d30fe7e81E
                            (uVar4);
          if (cVar5 == '\0') {
            _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h09085b3eedcee021E
                      (&local_f0,ppuVar9,lVar10);
            lVar10 = local_e8;
            ppuVar9 = local_f0;
            uVar1 = CONCAT44(local_e0._4_4_,(undefined4)local_e0);
                    /* try { // try from 0015fc50 to 0015fc6f has its CatchHandler @ 0015fcf7 */
            uVar6 = (*(code *)PTR__ZN6uucore8features4mode9get_umask17h22fe72fd4e3f2e99E_001f4a58)()
            ;
            (*(code *)PTR__ZN6uucore8features4mode14parse_symbolic17h506995bac3fe2fa2E_001f4a60)
                      (&local_f0,uVar7,lVar10,uVar1,uVar6,1);
            uVar7 = (uint)local_e8;
            ppppuVar2 = (undefined ****)CONCAT44(local_e0._4_4_,(undefined4)local_e0);
            lVar8 = local_e8;
            if (local_f0 != (undefined **)0x8000000000000000) goto LAB_0015fcc6;
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h77802bd3fde9fb69E
                      (ppuVar9,lVar10);
            lVar8 = local_b8;
          }
          else {
            (*(code *)PTR__ZN6uucore8features4mode13parse_numeric17hf54e809090b43181E_001f4a50)
                      (&local_f0,uVar7,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10),1);
            ppppuVar2 = (undefined ****)CONCAT44(local_e0._4_4_,(undefined4)local_e0);
            uVar7 = (uint)local_e8;
            lVar10 = local_e8;
            if (local_f0 != (undefined **)0x8000000000000000) goto LAB_0015fca0;
          }
          auVar11 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17ha2ea2eaf4333c4a2E(&local_78);
          param_1 = local_c0;
        } while (auVar11._0_8_ != 0);
      }
      else {
        do {
          local_a8 = auVar11._8_8_;
          local_f0 = auVar11._0_8_;
          local_e8 = local_a8 + (long)local_f0;
          local_b0 = local_f0;
          uVar4 = _ZN4core4iter6traits8iterator8Iterator8try_fold17ha903c4bb553092f2E(&local_f0);
          cVar5 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h8332dc6d30fe7e81E
                            (uVar4);
          if (cVar5 == '\0') {
            local_a0 = &local_b0;
            local_98 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f8342cc4ae57580E;
            local_f0 = &PTR_s___001ede00;
            local_e8._0_4_ = 1;
            local_e8._4_4_ = 0;
            local_d0 = 0;
            local_e0 = &local_a0;
            local_d8 = 1;
            _ZN4core6option15Option_LT_T_GT_11map_or_else17h568d5256e3b46ecaE(&local_90,&local_f0);
            uVar1 = local_80;
            lVar10 = local_88;
            ppuVar9 = local_90;
                    /* try { // try from 0015fb03 to 0015fb22 has its CatchHandler @ 0015fcf9 */
            uVar6 = (*(code *)PTR__ZN6uucore8features4mode9get_umask17h22fe72fd4e3f2e99E_001f4a58)()
            ;
            (*(code *)PTR__ZN6uucore8features4mode14parse_symbolic17h506995bac3fe2fa2E_001f4a60)
                      (&local_f0,uVar7,lVar10,uVar1,uVar6,1);
            uVar7 = (uint)local_e8;
            ppppuVar2 = local_e0;
            lVar8 = CONCAT44(local_e8._4_4_,(uint)local_e8);
            if (local_f0 != (undefined **)0x8000000000000000) {
LAB_0015fcc6:
              plVar3 = local_c0;
              local_e8._4_4_ = (undefined4)((ulong)lVar8 >> 0x20);
              local_e8._0_4_ = (uint)lVar8;
              local_e0._4_4_ = (undefined4)((ulong)ppppuVar2 >> 0x20);
              local_e0._0_4_ = SUB84(ppppuVar2,0);
              *(undefined4 *)((long)local_c0 + 0x14) = local_e0._4_4_;
              *(ulong *)((long)local_c0 + 0xc) = CONCAT44((undefined4)local_e0,local_e8._4_4_);
              *local_c0 = (long)local_f0;
              *(uint *)(local_c0 + 1) = (uint)local_e8;
              local_e8 = lVar8;
              local_e0 = ppppuVar2;
              _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h77802bd3fde9fb69E
                        (ppuVar9,lVar10);
              return plVar3;
            }
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h77802bd3fde9fb69E
                      (ppuVar9,lVar10);
            lVar8 = local_b8;
          }
          else {
            (*(code *)PTR__ZN6uucore8features4mode13parse_numeric17hf54e809090b43181E_001f4a50)
                      (&local_f0,uVar7,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10),1);
            uVar7 = (uint)local_e8;
            lVar10 = local_e8;
            ppppuVar2 = local_e0;
            if (local_f0 != (undefined **)0x8000000000000000) {
LAB_0015fca0:
              local_e0._4_4_ = (undefined4)((ulong)ppppuVar2 >> 0x20);
              local_e0._0_4_ = SUB84(ppppuVar2,0);
              local_e8._4_4_ = (undefined4)((ulong)lVar10 >> 0x20);
              local_e8._0_4_ = (uint)lVar10;
              *(undefined4 *)((long)local_c0 + 0x14) = local_e0._4_4_;
              *(ulong *)((long)local_c0 + 0xc) = CONCAT44((undefined4)local_e0,local_e8._4_4_);
              *local_c0 = (long)local_f0;
              *(uint *)(local_c0 + 1) = (uint)local_e8;
              return local_c0;
            }
          }
          auVar11 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17ha2ea2eaf4333c4a2E(&local_78);
          param_1 = local_c0;
        } while (auVar11._0_8_ != 0);
      }
    }
  }
  *(uint *)(param_1 + 1) = uVar7;
  *param_1 = -0x8000000000000000;
  return param_1;
}