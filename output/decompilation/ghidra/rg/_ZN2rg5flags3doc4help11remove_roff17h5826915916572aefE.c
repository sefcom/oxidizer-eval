void _ZN2rg5flags3doc4help11remove_roff17h5826915916572aefE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined auVar5 [16];
  undefined8 **local_208;
  code *pcStack_200;
  long local_1f8;
  undefined8 **local_1e8;
  code *pcStack_1e0;
  undefined8 **local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  long local_178;
  undefined2 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 **local_138;
  code *pcStack_130;
  undefined8 **local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0 [6];
  undefined2 local_80;
  undefined local_78 [24];
  undefined local_60 [24];
  undefined local_48 [24];
  
  local_168 = 0;
  local_160 = 8;
  local_158 = 0;
  local_c8 = param_1;
  auVar5 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17hd0360e9e77a44e0fE(param_2,param_3);
  _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
            (local_b0,10,auVar5._0_8_,auVar5._8_8_);
  local_c0 = 0;
  local_80 = 0;
  local_b8 = auVar5._8_8_;
LAB_0034af50:
  do {
                    /* try { // try from 0034af50 to 0034b0a5 has its CatchHandler @ 0034b79d */
    auVar5 = _ZN4core3str4iter22SplitInternal_LT_P_GT_14next_inclusive17hd02aa349d3b3c93bE
                       (&local_c0);
    if (auVar5._0_8_ == 0) {
LAB_0034b4cd:
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_8dedup_by17h568bd5b4596aea07E(&local_168);
                    /* try { // try from 0034b4ea to 0034b500 has its CatchHandler @ 0034b79f */
      _ZN5alloc3str17join_generic_copy17h51bc700a0c907f5eE(&local_1e8,local_160,local_158,"\n",1);
      local_128 = local_1d8;
      local_138 = local_1e8;
      pcStack_130 = pcStack_1e0;
                    /* try { // try from 0034b523 to 0034b547 has its CatchHandler @ 0034b714 */
      _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
                (&local_1e8,pcStack_1e0,local_1d8,"\\fB",3,1,0);
                    /* try { // try from 0034b552 to 0034b579 has its CatchHandler @ 0034b6fd */
      _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
                (&local_c0,pcStack_1e0,local_1d8,&DAT_00183d85,3,1,0);
                    /* try { // try from 0034b58a to 0034b5ae has its CatchHandler @ 0034b6eb */
      _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
                (&local_208,local_b8,local_b0[0],"\\fP",3,1,0);
                    /* try { // try from 0034b5b9 to 0034b5e1 has its CatchHandler @ 0034b6dc */
      _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
                (&local_150,pcStack_200,local_1f8,&DAT_00183d88,2,&DAT_00169ba0,1);
                    /* try { // try from 0034b5f2 to 0034b61a has its CatchHandler @ 0034b6ca */
      _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
                (local_c8,local_148,local_140,&DAT_00183d8a,2,"\\x",1);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_150);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_208);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_c0);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_1e8);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_138);
      _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h86d7461d11433c9dE
                (&local_168);
      return;
    }
    auVar5 = _ZN89__LT_core__str__LinesMap_u20_as_u20_core__ops__function__Fn_LT__LP__RF_str_C__RP__GT__GT_4call17h32b8dbc7f07f5738E
                       (auVar5._0_8_,auVar5._8_8_);
    lVar4 = auVar5._8_8_;
    lVar3 = auVar5._0_8_;
    if (lVar3 == 0) goto LAB_0034b4cd;
    if (lVar4 == 0) {
      local_1e8 = (undefined8 **)&PTR_DAT_004ea690;
      pcStack_1e0 = (code *)0x1;
      local_1d8 = (undefined8 **)&DAT_00000008;
      uStack_1d0 = 0;
      local_1c8 = 0;
                    /* try { // try from 0034b69b to 0034b6c7 has its CatchHandler @ 0034b79f */
      (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_00526780)
                (&local_1e8,&PTR_s_crates_core_flags_doc_help_rs_004ea6a0);
LAB_0034b6c8:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    cVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h989fa1e58ec52438E
                      (lVar3,lVar4,&DAT_00168da2,1);
    if (cVar2 != '\0') {
      cVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h989fa1e58ec52438E
                        (lVar3,lVar4,".IP utf8java*.ml*.pm",4);
      if (cVar2 != '\0') {
        (*(code *)PTR__ZN4core3str7pattern11StrSearcher3new17h3b91c04870bd602fE_00526cb8)
                  (&local_138,lVar3,lVar4,&DAT_00169b32,1);
        local_188 = local_d8;
        local_198 = local_e8;
        uStack_190 = uStack_e0;
        local_1a8 = local_f8;
        uStack_1a0 = uStack_f0;
        local_1b8 = local_108;
        uStack_1b4 = uStack_104;
        uStack_1b0 = uStack_100;
        uStack_1ac = uStack_fc;
        local_1c8 = CONCAT44(uStack_114,local_118);
        uStack_1c0 = uStack_110;
        uStack_1bc = uStack_10c;
        local_1d8 = local_128;
        uStack_1d0 = CONCAT44(uStack_11c,uStack_120);
        local_1e8 = local_138;
        pcStack_1e0 = pcStack_130;
        local_180 = 0;
        local_170 = 1;
        local_178 = lVar4;
        lVar3 = _ZN4core4iter6traits8iterator8Iterator10advance_by17hb4775c3becbcfbcfE(&local_1e8);
        if (lVar3 == 0) {
          auVar5 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17h2b1f52f8e0fd141eE(&local_1e8);
          if (auVar5._0_8_ != 0) {
            _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
                      (&local_138,auVar5._0_8_,auVar5._8_8_,"\\(buAVX2aidl*.rbrakuyang",4,
                       &DAT_00183d8c,3);
                    /* try { // try from 0034b0b6 to 0034b0da has its CatchHandler @ 0034b761 */
            _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
                      (&local_208,pcStack_130,local_128,"\\fB",3,1,0);
                    /* try { // try from 0034b0e5 to 0034b110 has its CatchHandler @ 0034b74a */
            _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
                      (&local_150,pcStack_200,local_1f8,"\\fP",3,":",1);
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_208)
            ;
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_138)
            ;
            pcStack_130 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
            ;
            local_1e8 = (undefined8 **)&DAT_00162330;
            pcStack_1e0 = (code *)0x1;
            local_1c8 = 0;
            uStack_1d0 = 1;
                    /* try { // try from 0034b166 to 0034b18c has its CatchHandler @ 0034b778 */
            local_1d8 = &local_138;
            local_138 = &local_150;
            _ZN4core6option15Option_LT_T_GT_11map_or_else17hd29ff726b4b92504E
                      (local_78,0,extraout_RDX,&local_1e8);
            _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h128a0db80672107eE
                      (&local_168,local_78,&PTR_s_crates_core_flags_doc_help_rs_004ea730);
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_150)
            ;
            goto LAB_0034af50;
          }
        }
        (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_00526a00)
                  (&DAT_00183d67,0x15,&PTR_s_crates_core_flags_doc_help_rs_004ea718);
        goto LAB_0034b6c8;
      }
      cVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h989fa1e58ec52438E
                        (lVar3,lVar4,&DAT_00163d48,4);
      if (cVar2 == '\0') {
        cVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h989fa1e58ec52438E
                          (lVar3,lVar4,".BI *.jsllvm*.lltoml",4);
        if (cVar2 == '\0') {
                    /* try { // try from 0034b438 to 0034b4c7 has its CatchHandler @ 0034b79d */
          cVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h989fa1e58ec52438E
                            (lVar3,lVar4,&DAT_00183d7c,3);
          if (cVar2 == '\0') {
            cVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h989fa1e58ec52438E
                              (lVar3,lVar4,&DAT_00183d7f,3);
            if (cVar2 == '\0') {
              cVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h989fa1e58ec52438E
                                (lVar3,lVar4,&DAT_00183d82,3);
              if (cVar2 == '\0') goto LAB_0034af50;
            }
          }
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1dbf6ec1d593e24cE
                    (&local_1e8,1,0);
          local_128 = local_1d8;
          local_138 = local_1e8;
          pcStack_130 = pcStack_1e0;
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h128a0db80672107eE
                    (&local_168,&local_138,&PTR_s_crates_core_flags_doc_help_rs_004ea6e8);
          goto LAB_0034af50;
        }
      }
      _ZN95__LT_core__str__pattern__MultiCharEqPattern_LT_C_GT__u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17hc64003a72f8fb866E
                (&uStack_1d0,lVar3,lVar4);
      pcStack_1e0 = (code *)0x0;
      local_1a8 = CONCAT62(local_1a8._2_6_,1);
      local_1e8 = (undefined8 **)&DAT_00000001;
      local_1d8 = (undefined8 **)lVar4;
      _ZN4core4iter6traits8iterator8Iterator7collect17h645f17ae341cd6fbE(&local_138,&local_1e8);
      pcVar1 = pcStack_130;
                    /* try { // try from 0034b383 to 0034b395 has its CatchHandler @ 0034b720 */
      _ZN5alloc3str17join_generic_copy17hccb370bfa740ad62E(&local_1e8,pcStack_130,local_128,1,0);
      local_1f8 = (long)local_1d8;
      local_208 = local_1e8;
      pcStack_200 = pcStack_1e0;
      _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17hc0c276afa06f1591E
                (local_138,pcVar1);
      local_138 = &local_208;
      pcStack_130 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_1e8 = (undefined8 **)&DAT_00162330;
      pcStack_1e0 = (code *)0x1;
      local_1c8 = 0;
      uStack_1d0 = 1;
                    /* try { // try from 0034b402 to 0034b428 has its CatchHandler @ 0034b76e */
      local_1d8 = &local_138;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17hd29ff726b4b92504E
                (local_60,0,extraout_RDX_01,&local_1e8);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h128a0db80672107eE
                (&local_168,local_60,&PTR_s_crates_core_flags_doc_help_rs_004ea700);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_208);
      goto LAB_0034af50;
    }
                    /* try { // try from 0034b1a0 to 0034b206 has its CatchHandler @ 0034b79d */
    cVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h989fa1e58ec52438E
                      (lVar3,lVar4,"\\fB",3);
    if (cVar2 != '\0') {
      cVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17hee818f7537c900cdE
                        (lVar3,lVar4,"\\fP",3);
      if (cVar2 != '\0') {
        _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
                  (&local_1e8,lVar3,lVar4,"\\fB",3,1,0);
                    /* try { // try from 0034b211 to 0034b233 has its CatchHandler @ 0034b716 */
        _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
                  (&local_138,pcStack_1e0,local_1d8,"\\fP",3,1,0);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_1e8);
        pcStack_200 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_1e8 = (undefined8 **)&DAT_004e5cf0;
        pcStack_1e0 = (code *)0x2;
        local_1c8 = 0;
        local_1d8 = &local_208;
        uStack_1d0 = 1;
                    /* try { // try from 0034b27e to 0034b2a4 has its CatchHandler @ 0034b748 */
        local_208 = &local_138;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17hd29ff726b4b92504E
                  (local_48,0,extraout_RDX_00,&local_1e8);
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h128a0db80672107eE
                  (&local_168,local_48,&PTR_s_crates_core_flags_doc_help_rs_004ea6d0);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_138);
        goto LAB_0034af50;
      }
    }
                    /* try { // try from 0034b2c0 to 0034b372 has its CatchHandler @ 0034b79d */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1dbf6ec1d593e24cE
              (&local_1e8,lVar3,lVar4);
    local_128 = local_1d8;
    local_138 = local_1e8;
    pcStack_130 = pcStack_1e0;
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h128a0db80672107eE
              (&local_168,&local_138,&PTR_s_crates_core_flags_doc_help_rs_004ea6b8);
  } while( true );
}