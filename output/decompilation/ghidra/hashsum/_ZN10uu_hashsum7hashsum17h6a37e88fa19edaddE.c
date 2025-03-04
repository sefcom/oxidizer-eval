undefined  [16] _ZN10uu_hashsum7hashsum17h6a37e88fa19edaddE(undefined8 *param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined ****ppppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *****pppppuVar8;
  undefined8 uVar9;
  undefined *****pppppuVar10;
  long *plVar11;
  undefined *****unaff_R15;
  undefined auVar12 [16];
  undefined ****local_170;
  code *pcStack_168;
  undefined ****local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  code *local_148;
  undefined ****local_140;
  code *local_138;
  long *local_130;
  undefined ****local_128;
  undefined ****local_120;
  undefined ****local_118;
  code *local_110;
  undefined8 local_108;
  undefined8 *local_e8;
  undefined ****local_e0;
  undefined ****local_d8;
  undefined ****local_d0;
  undefined ****local_c8;
  code *pcStack_c0;
  undefined ****local_b8;
  undefined ***local_b0;
  undefined8 local_a8;
  char *local_a0;
  undefined8 local_98;
  undefined local_90 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined local_68 [56];
  
  local_b0 = (undefined ***)0x169967;
  if (*(char *)(param_1 + 5) == '\0') {
    local_b0 = (undefined ***)0x169966;
  }
  local_a8 = 1;
  local_a0 = "-";
  local_98 = 1;
  auVar12 = _ZN99__LT_core__iter__sources__once__Once_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0caeee1655188592E
                      (&local_a0);
  puVar1 = PTR__ZN3std4path4Path10components17h4f3217acf0fc8653E_0047f610;
  if (auVar12._0_8_ != 0) {
    pppppuVar10 = (undefined *****)(param_1 + 2);
    local_130 = param_1 + 3;
    local_e8 = param_1;
    do {
                    /* try { // try from 00278190 to 00278234 has its CatchHandler @ 0027876d */
      uVar7 = auVar12._8_8_;
      uVar9 = auVar12._0_8_;
      (*(code *)puVar1)(&local_128,uVar9,uVar7);
      (*(code *)puVar1)(&local_170,"-",1);
      cVar2 = _ZN62__LT_std__path__Components_u20_as_u20_core__cmp__PartialEq_GT_2eq17h5cac1ec2999e76daE
                        (&local_128,&local_170);
      if (cVar2 == '\0') {
        _ZN3std2fs4File4open17hf67acec63d9b4762E(&local_170,uVar9,uVar7);
        _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h899c68cae0961182E
                  (&local_128,&local_170);
        pppppuVar8 = (undefined *****)local_128;
        plVar11 = local_130;
        unaff_R15 = (undefined *****)local_120;
        if ((undefined *****)local_128 != (undefined *****)0x0) goto LAB_002786f6;
        uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hc466181734c65edcE((ulong)local_120 & 0xffffffff)
        ;
        ppuVar6 = &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h3be49c01d89f39e6E_0043bb90
        ;
      }
      else {
        uVar3 = (*(code *)PTR__ZN3std2io5stdio5stdin17h7215cc131abb55d8E_0047f618)();
        uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h371a05b7099bb6c8E(uVar3);
        ppuVar6 = (undefined **)&DAT_0043bbe8;
      }
      _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17hb9a751f4ce087bfeE
                (local_68,0x2000,uVar3,ppuVar6);
                    /* try { // try from 0027823e to 0027825f has its CatchHandler @ 0027875b */
      _ZN6uucore8features8checksum13digest_reader17hc839b2e876c05e33E
                (&local_170,pppppuVar10,local_68,*(undefined *)(param_1 + 5),param_1[4]);
      _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h864ec134f8e6c354E
                (&local_128,&local_170);
      unaff_R15 = (undefined *****)local_118;
      pppppuVar8 = (undefined *****)local_120;
      if ((undefined *****)local_128 == (undefined *****)0x8000000000000000) {
                    /* try { // try from 002786da to 002786e6 has its CatchHandler @ 0027871a */
        _ZN4core3ptr114drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT_17h250a87cb04812376E
                  (local_68);
        plVar11 = local_130;
        goto LAB_002786f6;
      }
      local_e0 = local_128;
      local_d8 = local_120;
      local_d0 = local_118;
                    /* try { // try from 0027829d to 002782b0 has its CatchHandler @ 00278734 */
      (*(code *)PTR__ZN6uucore8features8checksum15escape_filename17hbc3241c83415153bE_0047f620)
                (&local_170,uVar9,uVar7);
      local_b8 = local_160;
      local_c8 = local_170;
      pcStack_c0 = pcStack_168;
      local_78 = (undefined4)local_158;
      uStack_74 = local_158._4_4_;
      uStack_70 = (undefined4)uStack_150;
      uStack_6c = uStack_150._4_4_;
      if (*(char *)((long)local_e8 + 0x29) == '\0') {
        if (*(char *)((long)local_e8 + 0x2a) == '\0') {
          if (*(char *)((long)local_e8 + 0x2b) == '\0') {
            local_170 = (undefined ****)&local_78;
            pcStack_168 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h215de39c55175587E;
            local_160 = (undefined ****)&local_e0;
            local_158 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
            ;
            uStack_150 = (undefined *****)&local_b0;
            local_148 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h215de39c55175587E;
            local_140 = (undefined ****)&local_c8;
            local_138 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
            ;
            local_128 = (undefined ****)&DAT_0043bb40;
            local_120 = (undefined ****)&DAT_00000005;
            local_108 = 0;
            local_118 = (undefined ****)&local_170;
            local_110 = (code *)0x4;
            (*(code *)PTR__ZN3std2io5stdio6_print17he918bceb0c89db46E_0047f628)(&local_128);
          }
          else {
            local_170 = (undefined ****)&local_e0;
            pcStack_168 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
            ;
            local_160 = &local_b0;
            local_158 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h215de39c55175587E;
            uStack_150 = (undefined *****)local_90;
            local_148 = (code *)
                        PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h5a3c32fa16876e76E_0047f638
            ;
            local_128 = (undefined ****)&DAT_0043bb00;
            local_120 = (undefined ****)0x4;
            local_108 = 0;
            local_118 = (undefined ****)&local_170;
            local_110 = (code *)0x3;
            local_90 = auVar12;
            (*(code *)PTR__ZN3std2io5stdio6_print17he918bceb0c89db46E_0047f628)(&local_128);
          }
        }
        else {
          local_128 = (undefined ****)&local_e0;
          local_120 = (undefined ****)
                      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
          ;
          local_170 = (undefined ****)&DAT_0043b958;
          pcStack_168 = (code *)0x2;
          uStack_150 = (undefined *****)0x0;
          local_158 = (code *)0x1;
          local_160 = (undefined ****)&local_128;
          (*(code *)PTR__ZN3std2io5stdio6_print17he918bceb0c89db46E_0047f628)(&local_170);
        }
      }
      else {
                    /* try { // try from 002782f6 to 00278416 has its CatchHandler @ 00278739 */
        cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h1bae7f9ea29a26b8E
                          (*local_e8,local_e8[1],"blake2b",7);
        if (cVar2 == '\0') {
          _ZN5alloc3str21__LT_impl_u20_str_GT_18to_ascii_uppercase17h60b631a23b970e6aE
                    (local_90,*local_e8,local_e8[1]);
          local_170 = (undefined ****)&local_78;
          pcStack_168 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h215de39c55175587E;
          local_158 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
          uStack_150 = &local_c8;
          local_148 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
          local_140 = (undefined ****)&local_e0;
          local_138 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
          local_128 = (undefined ****)&DAT_0043bab0;
          local_120 = (undefined ****)&DAT_00000005;
          local_108 = 0;
          local_118 = (undefined ****)&local_170;
          local_110 = (code *)0x4;
          local_160 = (undefined ****)local_90;
                    /* try { // try from 00278496 to 0027849e has its CatchHandler @ 00278722 */
          (*(code *)PTR__ZN3std2io5stdio6_print17he918bceb0c89db46E_0047f628)(&local_128);
                    /* try { // try from 0027849f to 00278670 has its CatchHandler @ 00278739 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h3e7a1bd31eb01303E(local_90);
        }
        else {
          lVar4 = (**(code **)(*local_130 + 0x30))(*pppppuVar10);
          if (lVar4 == 0x200) {
            local_128 = (undefined ****)&local_c8;
            local_120 = (undefined ****)
                        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
            ;
            local_118 = (undefined ****)&local_e0;
            local_110 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
            ;
            local_170 = (undefined ****)&PTR_s_BLAKE2b_____0043ba40;
            pcStack_168 = (code *)0x3;
            uStack_150 = (undefined *****)0x0;
            local_158 = (code *)0x2;
            local_160 = (undefined ****)&local_128;
            (*(code *)PTR__ZN3std2io5stdio6_print17he918bceb0c89db46E_0047f628)(&local_170);
          }
          else {
            ppppuVar5 = (undefined ****)(**(code **)(*local_130 + 0x30))(*pppppuVar10);
            pcStack_168 = (code *)
                          PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE_0047f630
            ;
            local_160 = (undefined ****)&local_c8;
            local_158 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
            ;
            uStack_150 = &local_e0;
            local_148 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
            ;
            local_128 = (undefined ****)&PTR_DAT_0043ba70;
            local_120 = (undefined ****)0x4;
            local_108 = 0;
            local_118 = (undefined ****)&local_170;
            local_110 = (code *)0x3;
            local_170 = (undefined ****)local_90;
            local_90._0_8_ = ppppuVar5;
            (*(code *)PTR__ZN3std2io5stdio6_print17he918bceb0c89db46E_0047f628)(&local_128);
          }
        }
      }
                    /* try { // try from 00278680 to 0027868c has its CatchHandler @ 00278734 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h3e7a1bd31eb01303E(&local_c8);
                    /* try { // try from 0027868d to 00278699 has its CatchHandler @ 0027875b */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h3e7a1bd31eb01303E(&local_e0);
                    /* try { // try from 0027869a to 002786a6 has its CatchHandler @ 0027876d */
      _ZN4core3ptr114drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT_17h250a87cb04812376E
                (local_68);
      param_1 = local_e8;
      auVar12 = _ZN99__LT_core__iter__sources__once__Once_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0caeee1655188592E
                          (&local_a0);
      unaff_R15 = pppppuVar10;
    } while (auVar12._0_8_ != 0);
  }
  pppppuVar10 = (undefined *****)(param_1 + 2);
  pppppuVar8 = (undefined *****)0x0;
  plVar11 = param_1 + 3;
LAB_002786f6:
  _ZN4core3ptr40drop_in_place_LT_uu_hashsum__Options_GT_17h786198480f8a4310E(*pppppuVar10,*plVar11);
  auVar12._8_8_ = unaff_R15;
  auVar12._0_8_ = pppppuVar8;
  return auVar12;
}