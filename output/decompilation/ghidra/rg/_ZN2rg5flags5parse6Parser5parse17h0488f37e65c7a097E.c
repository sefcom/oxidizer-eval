code * _ZN2rg5flags5parse6Parser5parse17h0488f37e65c7a097E
                 (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined **local_1d8;
  undefined8 local_1d0;
  undefined8 *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 *local_198;
  code *local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 *local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  ulong local_148;
  undefined8 *local_140;
  undefined8 local_138;
  undefined local_130 [8];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  long local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined **local_d0;
  code *local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 *local_a8;
  undefined local_a0 [112];
  
  local_138 = param_1;
  _ZN6lexopt6Parser9from_args17h0672b9c2090e5111E(local_a0);
  local_f0 = param_3 + 0xb0;
  do {
    while( true ) {
                    /* try { // try from 003545d3 to 003545eb has its CatchHandler @ 00354ad0 */
      (*(code *)PTR__ZN6lexopt6Parser4next17hc49319300755d21cE_00527240)(&local_1d8,local_a0);
      _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_7context17h4b1e1c7efc452428E
                (&local_1a8,&local_1d8);
      puVar1 = local_198;
      pcVar4 = uStack_1a0;
      if (local_1a8 == (undefined **)0x8000000000000002) {
        _ZN4core3ptr60drop_in_place_LT_core__option__Option_LT_lexopt__Arg_GT__GT_17h43c209b804256533E
                  (0x8000000000000002,uStack_1a0);
        pcVar4 = (code *)0x0;
        goto LAB_00354845;
      }
      if (local_1a8 == (undefined **)0x8000000000000003) goto LAB_00354845;
      uVar6 = (ulong)local_1a8 ^ 0x8000000000000000;
      if (1 < uVar6) {
        uVar6 = 2;
      }
      if (uVar6 == 0) break;
      if (uVar6 == 1) {
        cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he06c06f1bb3e32feE
                          (uStack_1a0,local_198,"help",4);
        uVar5 = 1;
        if (cVar2 == '\0') {
          cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he06c06f1bb3e32feE
                            (pcVar4,puVar1,"version",7);
          uVar5 = 3;
          if (cVar2 == '\0') {
                    /* try { // try from 00354685 to 003546da has its CatchHandler @ 00354ace */
            _ZN2rg5flags5parse6Parser9find_long17h9dc8bf2eec00e1d3E
                      (&local_108,local_138,pcVar4,puVar1);
            uVar3 = extraout_RDX;
            goto LAB_003546db;
          }
        }
LAB_003545cc:
        *(undefined *)(param_3 + 0x25b) = uVar5;
      }
      else {
        local_d0 = local_1a8;
        local_c8 = uStack_1a0;
        local_c0 = local_198;
                    /* try { // try from 00354748 to 00354763 has its CatchHandler @ 00354ad0 */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hdc4d760cd0497775E
                  (local_f0,&local_d0,&PTR_s_crates_core_flags_parse_rs_004eb5a8);
      }
    }
    uVar5 = 2;
    if ((int)uStack_1a0 == 0x56) goto LAB_003545cc;
    if ((int)uStack_1a0 == 0x68) {
      uVar5 = 0;
      goto LAB_003545cc;
    }
    _ZN2rg5flags5parse6Parser10find_short17hda7dafb57b35a0a1E
              (&local_108,local_138,(ulong)uStack_1a0 & 0xffffffff);
    uVar3 = extraout_RDX_00;
LAB_003546db:
    uVar6 = CONCAT44(uStack_104,local_108) ^ 0x8000000000000000;
    if (1 < uVar6) {
      uVar6 = 2;
    }
    if (uVar6 != 0) {
      if (uVar6 == 2) {
        local_118 = local_f8;
        local_128 = local_108;
        uStack_124 = uStack_104;
        uStack_120 = uStack_100;
        uStack_11c = uStack_fc;
        local_168 = &local_128;
        uStack_160 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_1d8 = &PTR_s_unrecognized_flag____004eb578;
        local_1d0 = 1;
        local_1b8 = 0;
        local_1c0 = 1;
                    /* try { // try from 003548da to 003548eb has its CatchHandler @ 00354aad */
        local_1c8 = &local_168;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17hd29ff726b4b92504E
                  (&local_1a8,0,uVar3,&local_1d8);
        local_188 = (undefined4)local_1a8;
        uStack_184 = local_1a8._4_4_;
        uStack_180 = (undefined4)uStack_1a0;
        uStack_17c = uStack_1a0._4_4_;
        local_178 = local_198;
                    /* try { // try from 00354910 to 0035491c has its CatchHandler @ 00354ab2 */
        _ZN2rg5flags5parse7suggest17h8bc4584f133c33afE
                  (&local_e8,CONCAT44(uStack_11c,uStack_120),local_118);
        if (CONCAT44(uStack_e4,local_e8) == -0x8000000000000000) {
          _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17h21c1035d1def9f19E
                    (&local_e8);
        }
        else {
          local_158 = local_d8;
          local_168 = (undefined4 *)CONCAT44(uStack_e4,local_e8);
          uStack_160 = (code *)CONCAT44(uStack_dc,uStack_e0);
          local_1a8 = (undefined **)&local_188;
          uStack_1a0 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
          local_190 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
          local_1d8 = (undefined **)&DAT_004eb588;
          local_1d0 = 2;
          local_1b8 = 0;
          local_1c0 = 2;
                    /* try { // try from 0035499a to 003549ab has its CatchHandler @ 00354a9e */
          local_1c8 = &local_1a8;
          local_198 = &local_168;
          _ZN4core6option15Option_LT_T_GT_11map_or_else17hd29ff726b4b92504E
                    (&local_b8,0,extraout_RDX_01,&local_1d8);
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_188);
          local_178 = local_a8;
          local_188 = local_b8;
          uStack_184 = uStack_b4;
          uStack_180 = uStack_b0;
          uStack_17c = uStack_ac;
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_168);
        }
        local_1a8 = (undefined **)&local_188;
        uStack_1a0 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_1d8 = (undefined **)&DAT_00162330;
        local_1d0 = 1;
        local_1b8 = 0;
        local_1c0 = 1;
        local_1c8 = &local_1a8;
                    /* try { // try from 00354a14 to 00354a1b has its CatchHandler @ 00354ab2 */
        pcVar4 = (code *)_ZN6anyhow9__private10format_err17hd87f3faee3401bd9E(&local_1d8);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_188);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_128);
      }
      else {
        local_168 = (undefined4 *)CONCAT44(local_168._4_4_,uStack_100);
        local_1a8 = (undefined **)&local_168;
        uStack_1a0 = (code *)
                     PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h0215b7857ad55b0cE_00527048
        ;
        local_1d8 = &PTR_s_unrecognized_flag___004eb568;
        local_1d0 = 1;
        local_1b8 = 0;
        local_1c8 = &local_1a8;
        local_1c0 = 1;
                    /* try { // try from 00354a8c to 00354a93 has its CatchHandler @ 00354a9c */
        pcVar4 = (code *)_ZN6anyhow9__private10format_err17hd87f3faee3401bd9E(&local_1d8);
      }
      goto LAB_00354845;
    }
    puVar1 = (undefined8 *)CONCAT44(uStack_fc,uStack_100);
    if (*(char *)(puVar1 + 4) == '\x01') {
      ppuVar7 = (undefined **)&DAT_8000000000000000;
      pcVar4 = (code *)0x0;
    }
    else {
                    /* try { // try from 00354770 to 00354825 has its CatchHandler @ 00354ace */
      cVar2 = (**(code **)(puVar1[1] + 0x20))(*puVar1);
      ppuVar7 = (undefined **)&DAT_8000000000000000;
      pcVar4 = (code *)&DAT_00000001;
      if (cVar2 == '\0') {
        (*(code *)PTR__ZN6lexopt6Parser5value17h820b75269adc78feE_00527248)(&local_1d8,local_a0);
        _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h905e01b86d138568E
                  (&local_1a8,&local_1d8,local_130);
        pcVar4 = uStack_1a0;
        if (local_1a8 == (undefined **)&DAT_8000000000000000) goto LAB_00354845;
        local_148 = (ulong)uStack_1a0 >> 8;
        ppuVar7 = local_1a8;
        local_140 = local_198;
      }
    }
    local_1d0 = CONCAT35((int3)(local_148 >> 0x20),CONCAT41((int)local_148,(char)pcVar4));
    local_1d8 = ppuVar7;
    local_1c8 = local_140;
    uVar3 = (**(code **)(puVar1[1] + 0x78))(*puVar1,&local_1d8,param_3);
    pcVar4 = (code *)_ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h603c1890003acd97E
                               (uVar3,local_130);
    if (pcVar4 != (code *)0x0) {
LAB_00354845:
      _ZN4core3ptr35drop_in_place_LT_lexopt__Parser_GT_17h4bbc741db050bed7E(local_a0);
      return pcVar4;
    }
  } while( true );
}