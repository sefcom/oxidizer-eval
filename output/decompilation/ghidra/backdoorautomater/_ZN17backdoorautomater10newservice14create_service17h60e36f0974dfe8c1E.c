void _ZN17backdoorautomater10newservice14create_service17h60e36f0974dfe8c1E
               (long param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined *local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  long local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_1f0 = param_2;
  local_100 = param_1;
                    /* try { // try from 0015827c to 001582d2 has its CatchHandler @ 00159612 */
  _ZN17backdoorautomater9sanitizer22sanitize_service_exist17hcf34e52a82af7174E();
  local_1d8 = *(undefined8 **)(param_1 + 8);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x10);
  local_1e8 = (undefined **)&DAT_002662d9;
  uStack_1e0 = 10;
  _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_248,&local_1e8,2,1,0);
  local_b8 = local_238;
  local_c8 = (undefined4)local_248;
  uStack_c4 = local_248._4_4_;
  uStack_c0 = (undefined4)uStack_240;
  uStack_bc = uStack_240._4_4_;
                    /* try { // try from 001582f3 to 0015830b has its CatchHandler @ 00159572 */
  _ZN3std7process7Command3new17hc59b10cf3f1b2adaE(&local_1e8,&DAT_002662e3,2);
                    /* try { // try from 0015830c to 0015835e has its CatchHandler @ 001596b5 */
  uVar3 = _ZN3std7process7Command3arg17ha1bca970e684ecbeE(&local_1e8,&DAT_002662e5,2);
  uVar3 = _ZN3std7process7Command3arg17h1a6c514e95e1ad22E(uVar3,&local_c8);
  (*(code *)PTR__ZN3std7process7Command6output17hf2f7777b705db8a9E_00368e98)(&local_248,uVar3);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h4dac3b1149b99667E
            (&local_288,&local_248,&PTR_DAT_0032a070);
                    /* try { // try from 0015835f to 00158389 has its CatchHandler @ 0015960a */
  _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h60da061aa1df0d14E(&local_1e8);
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h7ed9087fa43d10adE_00368300)
            (&local_248,CONCAT44(uStack_264,local_268),CONCAT44(uStack_25c,uStack_260));
                    /* try { // try from 0015838a to 001583a6 has its CatchHandler @ 001595f5 */
  uVar3 = _ZN71__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__ops__deref__Deref_GT_5deref17ha2c16a4b1cc76445E
                    (&local_248);
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
            (&local_1e8,uVar3);
  local_2d8 = local_1d8;
  local_2e8 = (undefined4)local_1e8;
  uStack_2e4 = local_1e8._4_4_;
  uStack_2e0 = (undefined4)uStack_1e0;
  uStack_2dc = uStack_1e0._4_4_;
                    /* try { // try from 001583c0 to 0015841e has its CatchHandler @ 00159644 */
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb5385058f177b775E(&local_248);
  _ZN17backdoorautomater9sanitizer23sanitize_system_command17hc9c6071c8b9b108cE(&local_2e8);
  local_1d8 = *(undefined8 **)(param_1 + 8);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x10);
  local_1e8 = (undefined **)&DAT_00266311;
  uStack_1e0 = 3;
  _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_248,&local_1e8,2,1,0);
  local_d8 = local_238;
  local_e8 = (undefined4)local_248;
  uStack_e4 = local_248._4_4_;
  uStack_e0 = (undefined4)uStack_240;
  uStack_dc = uStack_240._4_4_;
                    /* try { // try from 0015843f to 00158485 has its CatchHandler @ 001596dc */
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
            (&local_e8,&DAT_002662b8,0x15);
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
            (&local_e8,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  _ZN3std7process7Command3new17hc59b10cf3f1b2adaE(&local_1e8,&DAT_002662e3,2);
                    /* try { // try from 00158486 to 001584d8 has its CatchHandler @ 001596a0 */
  uVar3 = _ZN3std7process7Command3arg17ha1bca970e684ecbeE(&local_1e8,&DAT_002662e5,2);
  uVar3 = _ZN3std7process7Command3arg17h1a6c514e95e1ad22E(uVar3,&local_e8);
  (*(code *)PTR__ZN3std7process7Command6output17hf2f7777b705db8a9E_00368e98)(&local_248,uVar3);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h4dac3b1149b99667E
            (&local_2c8,&local_248,&PTR_DAT_0032a088);
                    /* try { // try from 001584d9 to 001584e2 has its CatchHandler @ 00159527 */
  _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h78d1e539beaf0e46E(&local_288);
  local_258 = local_298;
  local_268 = local_2a8;
  uStack_264 = uStack_2a4;
  uStack_260 = uStack_2a0;
  uStack_25c = uStack_29c;
  local_278 = (undefined4)local_2b8;
  uStack_274 = local_2b8._4_4_;
  uStack_270 = uStack_2b0;
  uStack_26c = uStack_2ac;
  local_288 = local_2c8;
  uStack_284 = uStack_2c4;
  uStack_280 = uStack_2c0;
  uStack_27c = uStack_2bc;
                    /* try { // try from 00158511 to 0015853b has its CatchHandler @ 001596dc */
  _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h60da061aa1df0d14E(&local_1e8);
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h7ed9087fa43d10adE_00368300)
            (&local_248,CONCAT44(uStack_264,local_268),CONCAT44(uStack_25c,uStack_260));
                    /* try { // try from 0015853c to 00158558 has its CatchHandler @ 001595e0 */
  uVar3 = _ZN71__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__ops__deref__Deref_GT_5deref17ha2c16a4b1cc76445E
                    (&local_248);
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
            (&local_1e8,uVar3);
  local_2b8 = local_1d8;
  local_2c8 = (undefined4)local_1e8;
  uStack_2c4 = local_1e8._4_4_;
  uStack_2c0 = (undefined4)uStack_1e0;
  uStack_2bc = uStack_1e0._4_4_;
                    /* try { // try from 00158573 to 0015857a has its CatchHandler @ 0015950c */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_2e8);
  local_2d8 = local_2b8;
  local_2e8 = local_2c8;
  uStack_2e4 = uStack_2c4;
  uStack_2e0 = uStack_2c0;
  uStack_2dc = uStack_2bc;
                    /* try { // try from 0015858e to 001585bb has its CatchHandler @ 001596dc */
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb5385058f177b775E(&local_248);
  _ZN17backdoorautomater9sanitizer23sanitize_system_command17hc9c6071c8b9b108cE(&local_2e8);
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
            (&local_1e8,&DAT_002662cd,10);
  local_98 = local_1d8;
  local_a8 = (undefined4)local_1e8;
  uStack_a4 = local_1e8._4_4_;
  uStack_a0 = (undefined4)uStack_1e0;
  uStack_9c = uStack_1e0._4_4_;
                    /* try { // try from 001585dc to 00158611 has its CatchHandler @ 001596d4 */
  cVar2 = _ZN17backdoorautomater9sanitizer22sanitize_command_exist17h2a8286a439cabb9aE(&local_a8);
  if (cVar2 != '\0') {
    _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_1e8,&PTR_DAT_0032a0a0,2,1,0);
    local_1f8 = local_1d8;
    local_208 = (undefined *)local_1e8;
    uStack_200 = uStack_1e0;
                    /* try { // try from 0015863a to 0015865f has its CatchHandler @ 0015961a */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
              (&local_208,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    _ZN3std7process7Command3new17hc59b10cf3f1b2adaE(&local_1e8,&DAT_002662e3,2);
                    /* try { // try from 00158660 to 001586b2 has its CatchHandler @ 001595ce */
    uVar3 = _ZN3std7process7Command3arg17ha1bca970e684ecbeE(&local_1e8,&DAT_002662e5,2);
    uVar3 = _ZN3std7process7Command3arg17h1a6c514e95e1ad22E(uVar3,&local_208);
    (*(code *)PTR__ZN3std7process7Command6output17hf2f7777b705db8a9E_00368e98)(&local_248,uVar3);
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17h4dac3b1149b99667E
              (&local_2c8,&local_248,&PTR_DAT_0032a0c0);
                    /* try { // try from 001586b3 to 001586bc has its CatchHandler @ 00159314 */
    _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h78d1e539beaf0e46E(&local_288);
    local_258 = local_298;
    local_268 = local_2a8;
    uStack_264 = uStack_2a4;
    uStack_260 = uStack_2a0;
    uStack_25c = uStack_29c;
    local_278 = (undefined4)local_2b8;
    uStack_274 = local_2b8._4_4_;
    uStack_270 = uStack_2b0;
    uStack_26c = uStack_2ac;
    local_288 = local_2c8;
    uStack_284 = uStack_2c4;
    uStack_280 = uStack_2c0;
    uStack_27c = uStack_2bc;
                    /* try { // try from 001586eb to 00158715 has its CatchHandler @ 0015961a */
    _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h60da061aa1df0d14E(&local_1e8);
    (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h7ed9087fa43d10adE_00368300)
              (&local_248,CONCAT44(uStack_264,local_268),CONCAT44(uStack_25c,uStack_260));
                    /* try { // try from 00158716 to 00158732 has its CatchHandler @ 001594f7 */
    uVar3 = _ZN71__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__ops__deref__Deref_GT_5deref17ha2c16a4b1cc76445E
                      (&local_248);
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
              (&local_1e8,uVar3);
    local_2b8 = local_1d8;
    local_2c8 = (undefined4)local_1e8;
    uStack_2c4 = local_1e8._4_4_;
    uStack_2c0 = (undefined4)uStack_1e0;
    uStack_2bc = uStack_1e0._4_4_;
                    /* try { // try from 0015874d to 00158754 has its CatchHandler @ 001592f9 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_2e8);
    local_2d8 = local_2b8;
    local_2e8 = local_2c8;
    uStack_2e4 = uStack_2c4;
    uStack_2e0 = uStack_2c0;
    uStack_2dc = uStack_2bc;
                    /* try { // try from 00158768 to 0015877c has its CatchHandler @ 0015961a */
    _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb5385058f177b775E(&local_248)
    ;
    _ZN17backdoorautomater9sanitizer23sanitize_system_command17hc9c6071c8b9b108cE(&local_2e8);
                    /* try { // try from 0015877d to 001587bd has its CatchHandler @ 001596d4 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_208);
  }
  local_f8 = &DAT_00266333;
  local_f0 = 0x17;
  _ZN3std7process7Command3new17hc59b10cf3f1b2adaE(&local_1e8,&DAT_002662e3,2);
                    /* try { // try from 001587be to 00158810 has its CatchHandler @ 0015968b */
  uVar3 = _ZN3std7process7Command3arg17ha1bca970e684ecbeE(&local_1e8,&DAT_002662e5,2);
  uVar3 = _ZN3std7process7Command3arg17hf81cfe9a1d177945E(uVar3,&local_f8);
  (*(code *)PTR__ZN3std7process7Command6output17hf2f7777b705db8a9E_00368e98)(&local_248,uVar3);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h4dac3b1149b99667E
            (&local_2c8,&local_248,&PTR_DAT_0032a0d8);
                    /* try { // try from 00158811 to 0015881a has its CatchHandler @ 001594c1 */
  _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h78d1e539beaf0e46E(&local_288);
  local_258 = local_298;
  local_268 = local_2a8;
  uStack_264 = uStack_2a4;
  uStack_260 = uStack_2a0;
  uStack_25c = uStack_29c;
  local_278 = (undefined4)local_2b8;
  uStack_274 = local_2b8._4_4_;
  uStack_270 = uStack_2b0;
  uStack_26c = uStack_2ac;
  local_288 = local_2c8;
  uStack_284 = uStack_2c4;
  uStack_280 = uStack_2c0;
  uStack_27c = uStack_2bc;
                    /* try { // try from 00158849 to 00158873 has its CatchHandler @ 001596d4 */
  _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h60da061aa1df0d14E(&local_1e8);
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h7ed9087fa43d10adE_00368300)
            (&local_248,CONCAT44(uStack_264,local_268),CONCAT44(uStack_25c,uStack_260));
                    /* try { // try from 00158874 to 00158890 has its CatchHandler @ 001595b9 */
  uVar3 = _ZN71__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__ops__deref__Deref_GT_5deref17ha2c16a4b1cc76445E
                    (&local_248);
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
            (&local_1e8,uVar3);
  local_2b8 = local_1d8;
  local_2c8 = (undefined4)local_1e8;
  uStack_2c4 = local_1e8._4_4_;
  uStack_2c0 = (undefined4)uStack_1e0;
  uStack_2bc = uStack_1e0._4_4_;
                    /* try { // try from 001588ab to 001588b2 has its CatchHandler @ 001594a6 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_2e8);
  local_2d8 = local_2b8;
  local_2e8 = local_2c8;
  uStack_2e4 = uStack_2c4;
  uStack_2e0 = uStack_2c0;
  uStack_2dc = uStack_2bc;
                    /* try { // try from 001588c6 to 00158924 has its CatchHandler @ 001596d4 */
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb5385058f177b775E(&local_248);
  _ZN17backdoorautomater9sanitizer23sanitize_system_command17hc9c6071c8b9b108cE(&local_2e8);
  local_1d8 = *(undefined8 **)(param_1 + 8);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x10);
  local_1e8 = (undefined **)&DAT_0026634a;
  uStack_1e0 = 0x11;
  _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_248,&local_1e8,2,1,0);
  local_78 = local_238;
  local_88 = (undefined4)local_248;
  uStack_84 = local_248._4_4_;
  uStack_80 = (undefined4)uStack_240;
  uStack_7c = uStack_240._4_4_;
                    /* try { // try from 00158945 to 0015895d has its CatchHandler @ 001596e4 */
  _ZN3std7process7Command3new17hc59b10cf3f1b2adaE(&local_1e8,&DAT_002662e3,2);
                    /* try { // try from 0015895e to 001589b0 has its CatchHandler @ 00159676 */
  uVar3 = _ZN3std7process7Command3arg17ha1bca970e684ecbeE(&local_1e8,&DAT_002662e5,2);
  uVar3 = _ZN3std7process7Command3arg17h1a6c514e95e1ad22E(uVar3,&local_88);
  (*(code *)PTR__ZN3std7process7Command6output17hf2f7777b705db8a9E_00368e98)(&local_248,uVar3);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h4dac3b1149b99667E
            (&local_2c8,&local_248,&PTR_DAT_0032a0f0);
                    /* try { // try from 001589b1 to 001589ba has its CatchHandler @ 00159470 */
  _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h78d1e539beaf0e46E(&local_288);
  local_258 = local_298;
  local_268 = local_2a8;
  uStack_264 = uStack_2a4;
  uStack_260 = uStack_2a0;
  uStack_25c = uStack_29c;
  local_278 = (undefined4)local_2b8;
  uStack_274 = local_2b8._4_4_;
  uStack_270 = uStack_2b0;
  uStack_26c = uStack_2ac;
  local_288 = local_2c8;
  uStack_284 = uStack_2c4;
  uStack_280 = uStack_2c0;
  uStack_27c = uStack_2bc;
                    /* try { // try from 001589e9 to 00158a13 has its CatchHandler @ 001596e4 */
  _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h60da061aa1df0d14E(&local_1e8);
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h7ed9087fa43d10adE_00368300)
            (&local_248,CONCAT44(uStack_264,local_268),CONCAT44(uStack_25c,uStack_260));
                    /* try { // try from 00158a14 to 00158a30 has its CatchHandler @ 001595a4 */
  uVar3 = _ZN71__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__ops__deref__Deref_GT_5deref17ha2c16a4b1cc76445E
                    (&local_248);
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
            (&local_1e8,uVar3);
  local_2b8 = local_1d8;
  local_2c8 = (undefined4)local_1e8;
  uStack_2c4 = local_1e8._4_4_;
  uStack_2c0 = (undefined4)uStack_1e0;
  uStack_2bc = uStack_1e0._4_4_;
                    /* try { // try from 00158a4b to 00158a52 has its CatchHandler @ 00159455 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_2e8);
  local_2d8 = local_2b8;
  local_2e8 = local_2c8;
  uStack_2e4 = uStack_2c4;
  uStack_2e0 = uStack_2c0;
  uStack_2dc = uStack_2bc;
                    /* try { // try from 00158a66 to 00158aa7 has its CatchHandler @ 001596e4 */
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb5385058f177b775E(&local_248);
  _ZN17backdoorautomater9sanitizer18sanitize_ex_stderr17h2f447f0a04b557e6E(&local_2e8);
  local_f8 = &DAT_00266333;
  local_f0 = 0x17;
  _ZN3std7process7Command3new17hc59b10cf3f1b2adaE(&local_1e8,&DAT_002662e3,2);
                    /* try { // try from 00158aa8 to 00158afa has its CatchHandler @ 00159661 */
  uVar3 = _ZN3std7process7Command3arg17ha1bca970e684ecbeE(&local_1e8,&DAT_002662e5,2);
  uVar3 = _ZN3std7process7Command3arg17hf81cfe9a1d177945E(uVar3,&local_f8);
  (*(code *)PTR__ZN3std7process7Command6output17hf2f7777b705db8a9E_00368e98)(&local_248,uVar3);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h4dac3b1149b99667E
            (&local_2c8,&local_248,&PTR_DAT_0032a108);
                    /* try { // try from 00158afb to 00158b04 has its CatchHandler @ 0015941f */
  _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h78d1e539beaf0e46E(&local_288);
  local_258 = local_298;
  local_268 = local_2a8;
  uStack_264 = uStack_2a4;
  uStack_260 = uStack_2a0;
  uStack_25c = uStack_29c;
  local_278 = (undefined4)local_2b8;
  uStack_274 = local_2b8._4_4_;
  uStack_270 = uStack_2b0;
  uStack_26c = uStack_2ac;
  local_288 = local_2c8;
  uStack_284 = uStack_2c4;
  uStack_280 = uStack_2c0;
  uStack_27c = uStack_2bc;
                    /* try { // try from 00158b33 to 00158b5d has its CatchHandler @ 001596e4 */
  _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h60da061aa1df0d14E(&local_1e8);
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h7ed9087fa43d10adE_00368300)
            (&local_248,CONCAT44(uStack_264,local_268),CONCAT44(uStack_25c,uStack_260));
                    /* try { // try from 00158b5e to 00158b7a has its CatchHandler @ 0015958f */
  uVar3 = _ZN71__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__ops__deref__Deref_GT_5deref17ha2c16a4b1cc76445E
                    (&local_248);
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
            (&local_1e8,uVar3);
  local_2b8 = local_1d8;
  local_2c8 = (undefined4)local_1e8;
  uStack_2c4 = local_1e8._4_4_;
  uStack_2c0 = (undefined4)uStack_1e0;
  uStack_2bc = uStack_1e0._4_4_;
                    /* try { // try from 00158b95 to 00158b9c has its CatchHandler @ 00159404 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_2e8);
  local_2d8 = local_2b8;
  local_2e8 = local_2c8;
  uStack_2e4 = uStack_2c4;
  uStack_2e0 = uStack_2c0;
  uStack_2dc = uStack_2bc;
                    /* try { // try from 00158bb0 to 00158c0e has its CatchHandler @ 001596e4 */
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb5385058f177b775E(&local_248);
  _ZN17backdoorautomater9sanitizer23sanitize_system_command17hc9c6071c8b9b108cE(&local_2e8);
  local_1d8 = *(undefined8 **)(param_1 + 8);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x10);
  local_1e8 = (undefined **)&DAT_0026635b;
  uStack_1e0 = 0xf;
  _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_248,&local_1e8,2,1,0);
  local_58 = local_238;
  local_68 = (undefined4)local_248;
  uStack_64 = local_248._4_4_;
  uStack_60 = (undefined4)uStack_240;
  uStack_5c = uStack_240._4_4_;
                    /* try { // try from 00158c2f to 00158c47 has its CatchHandler @ 001596ca */
  _ZN3std7process7Command3new17hc59b10cf3f1b2adaE(&local_1e8,&DAT_002662e3,2);
                    /* try { // try from 00158c48 to 00158c9a has its CatchHandler @ 0015964c */
  uVar3 = _ZN3std7process7Command3arg17ha1bca970e684ecbeE(&local_1e8,&DAT_002662e5,2);
  uVar3 = _ZN3std7process7Command3arg17h1a6c514e95e1ad22E(uVar3,&local_68);
  (*(code *)PTR__ZN3std7process7Command6output17hf2f7777b705db8a9E_00368e98)(&local_248,uVar3);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h4dac3b1149b99667E
            (&local_2c8,&local_248,&PTR_DAT_0032a120);
                    /* try { // try from 00158c9b to 00158ca4 has its CatchHandler @ 001593ce */
  _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h78d1e539beaf0e46E(&local_288);
  local_258 = local_298;
  local_268 = local_2a8;
  uStack_264 = uStack_2a4;
  uStack_260 = uStack_2a0;
  uStack_25c = uStack_29c;
  local_278 = (undefined4)local_2b8;
  uStack_274 = local_2b8._4_4_;
  uStack_270 = uStack_2b0;
  uStack_26c = uStack_2ac;
  local_288 = local_2c8;
  uStack_284 = uStack_2c4;
  uStack_280 = uStack_2c0;
  uStack_27c = uStack_2bc;
                    /* try { // try from 00158cd3 to 00158cfd has its CatchHandler @ 001596ca */
  _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h60da061aa1df0d14E(&local_1e8);
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h7ed9087fa43d10adE_00368300)
            (&local_248,CONCAT44(uStack_264,local_268),CONCAT44(uStack_25c,uStack_260));
                    /* try { // try from 00158cfe to 00158d1a has its CatchHandler @ 0015957a */
  uVar3 = _ZN71__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__ops__deref__Deref_GT_5deref17ha2c16a4b1cc76445E
                    (&local_248);
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
            (&local_1e8,uVar3);
  local_2b8 = local_1d8;
  local_2c8 = (undefined4)local_1e8;
  uStack_2c4 = local_1e8._4_4_;
  uStack_2c0 = (undefined4)uStack_1e0;
  uStack_2bc = uStack_1e0._4_4_;
                    /* try { // try from 00158d35 to 00158d3c has its CatchHandler @ 001593b3 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_2e8);
  local_2d8 = local_2b8;
  local_2e8 = local_2c8;
  uStack_2e4 = uStack_2c4;
  uStack_2e0 = uStack_2c0;
  uStack_2dc = uStack_2bc;
                    /* try { // try from 00158d50 to 00158db4 has its CatchHandler @ 001596ca */
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb5385058f177b775E(&local_248);
  _ZN17backdoorautomater9sanitizer23sanitize_system_command17hc9c6071c8b9b108cE(&local_2e8);
  local_1d8 = *(undefined8 **)(param_1 + 8);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x10);
  local_1e8 = (undefined **)&DAT_00265020;
  uStack_1e0 = 0x10;
  _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_248,&local_1e8,2,1,0);
  local_38 = local_238;
  local_48 = (undefined4)local_248;
  uStack_44 = local_248._4_4_;
  uStack_40 = (undefined4)uStack_240;
  uStack_3c = uStack_240._4_4_;
  local_118 = (undefined *)0x0;
  uStack_110 = 1;
  local_108 = 0;
  local_208 = (undefined *)0x0;
  uStack_200 = 1;
  local_1f8 = 0;
  while( true ) {
    auVar4 = _ZN74__LT_alloc__string__String_u20_as_u20_core__ops__index__Index_LT_I_GT__GT_5index17h1ea7f21b51de2163E
                       (uStack_200,local_1f8);
                    /* try { // try from 00158e58 to 00158f98 has its CatchHandler @ 00159736 */
    cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hb48dcd74040cf04fE
                      (auVar4._0_8_,auVar4._8_8_,&DAT_002662d7,2);
    lVar1 = local_100;
    if (cVar2 != '\0') break;
    local_1e8 = &PTR_DAT_0032a190;
    uStack_1e0 = 1;
    local_1d8 = (undefined8 *)0x8;
    uStack_1d0 = 0;
    local_1c8 = 0;
    _ZN3std2io5stdio6_print17h9670eaecb29bc3fcE(&local_1e8);
    local_248 = (undefined *)local_1f0;
    uStack_240 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h0123b85e18e164baE;
    local_1e8 = &PTR_s_On_your__Attacker_machine__pleas_0032a1a0;
    uStack_1e0 = 2;
    local_1c8 = 0;
    local_1d8 = &local_248;
    uStack_1d0 = 1;
    _ZN3std2io5stdio6_print17h9670eaecb29bc3fcE(&local_1e8);
    local_1e8 = &PTR_s_When_you_are_ready__please_put___0032a1c0;
    uStack_1e0 = 1;
    local_1d8 = (undefined8 *)0x8;
    uStack_1d0 = 0;
    local_1c8 = 0;
    _ZN3std2io5stdio6_print17h9670eaecb29bc3fcE(&local_1e8);
    local_1e8 = (undefined **)(*(code *)PTR__ZN3std2io5stdio5stdin17h333095a056b9945dE_00368938)();
    auVar4 = (*(code *)PTR__ZN3std2io5stdio5Stdin9read_line17h820297227bc0cfb0E_00368e88)
                       (&local_1e8,&local_118);
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17h53a72b4a2a5f7bb1E(auVar4._0_8_,auVar4._8_8_);
    uVar3 = _ZN4core3str21__LT_impl_u20_str_GT_16trim_end_matches17h14d5fe48804a90edE
                      (uStack_110,local_108,10);
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
              (&local_1e8,uVar3);
    local_238 = local_1d8;
    local_248 = (undefined *)local_1e8;
    uStack_240 = (code *)uStack_1e0;
                    /* try { // try from 00158fb9 to 00158fc0 has its CatchHandler @ 001596ec */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_118);
    local_108 = local_238;
    local_118 = local_248;
    uStack_110 = uStack_240;
                    /* try { // try from 00158fe1 to 00158fe9 has its CatchHandler @ 00159736 */
    _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17hb1e8eef355dde452E
              (&local_1e8,&local_118);
                    /* try { // try from 00158fea to 00158ff1 has its CatchHandler @ 00159711 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_208);
    local_1f8 = local_1d8;
    local_208 = (undefined *)local_1e8;
    uStack_200 = uStack_1e0;
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_5clear17hef16271c1d0d6175E(&local_118);
  }
  local_1e8 = &PTR_DAT_0032a138;
  uStack_1e0 = 1;
  local_1d8 = (undefined8 *)0x8;
  uStack_1d0 = 0;
  local_1c8 = 0;
                    /* try { // try from 00159061 to 0015908f has its CatchHandler @ 001596d2 */
  (*(code *)PTR__ZN3std2io5stdio6_print17h9670eaecb29bc3fcE_00368b80)(&local_1e8);
  _ZN3std7process7Command3new17hc59b10cf3f1b2adaE(&local_1e8,&DAT_002662e3,2);
                    /* try { // try from 00159090 to 001590e2 has its CatchHandler @ 0015962f */
  uVar3 = _ZN3std7process7Command3arg17ha1bca970e684ecbeE(&local_1e8,&DAT_002662e5,2);
  uVar3 = _ZN3std7process7Command3arg17h1a6c514e95e1ad22E(uVar3,&local_48);
  (*(code *)PTR__ZN3std7process7Command6output17hf2f7777b705db8a9E_00368e98)(&local_248,uVar3);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h4dac3b1149b99667E
            (&local_2c8,&local_248,&PTR_DAT_0032a148);
                    /* try { // try from 001590e3 to 001590ec has its CatchHandler @ 0015937d */
  _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h78d1e539beaf0e46E(&local_288);
  local_258 = local_298;
  local_268 = local_2a8;
  uStack_264 = uStack_2a4;
  uStack_260 = uStack_2a0;
  uStack_25c = uStack_29c;
  local_278 = (undefined4)local_2b8;
  uStack_274 = local_2b8._4_4_;
  uStack_270 = uStack_2b0;
  uStack_26c = uStack_2ac;
  local_288 = local_2c8;
  uStack_284 = uStack_2c4;
  uStack_280 = uStack_2c0;
  uStack_27c = uStack_2bc;
                    /* try { // try from 0015911b to 00159145 has its CatchHandler @ 001596d2 */
  _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h60da061aa1df0d14E(&local_1e8);
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h7ed9087fa43d10adE_00368300)
            (&local_248,CONCAT44(uStack_264,local_268),CONCAT44(uStack_25c,uStack_260));
                    /* try { // try from 00159146 to 00159162 has its CatchHandler @ 0015955d */
  uVar3 = _ZN71__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__ops__deref__Deref_GT_5deref17ha2c16a4b1cc76445E
                    (&local_248);
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
            (&local_1e8,uVar3);
  local_2b8 = local_1d8;
  local_2c8 = (undefined4)local_1e8;
  uStack_2c4 = local_1e8._4_4_;
  uStack_2c0 = (undefined4)uStack_1e0;
  uStack_2bc = uStack_1e0._4_4_;
                    /* try { // try from 0015917d to 00159184 has its CatchHandler @ 00159362 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_2e8);
  local_2d8 = local_2b8;
  local_2e8 = local_2c8;
  uStack_2e4 = uStack_2c4;
  uStack_2e0 = uStack_2c0;
  uStack_2dc = uStack_2bc;
                    /* try { // try from 00159198 to 00159257 has its CatchHandler @ 001596d2 */
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb5385058f177b775E(&local_248);
  _ZN17backdoorautomater9sanitizer23sanitize_system_command17hc9c6071c8b9b108cE(&local_2e8);
  local_1e8 = &PTR_DAT_0032a160;
  uStack_1e0 = 1;
  local_1d8 = (undefined8 *)0x8;
  uStack_1d0 = 0;
  local_1c8 = 0;
  (*(code *)PTR__ZN3std2io5stdio6_print17h9670eaecb29bc3fcE_00368b80)(&local_1e8);
  local_248 = (undefined *)local_1f0;
  uStack_240 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h0123b85e18e164baE;
  local_1e8 = &PTR_DAT_0032a170;
  uStack_1e0 = 2;
  local_1c8 = 0;
  uStack_1d0 = 1;
  local_1d8 = &local_248;
  (*(code *)PTR__ZN3std2io5stdio6_print17h9670eaecb29bc3fcE_00368b80)(&local_1e8);
                    /* try { // try from 00159258 to 00159264 has its CatchHandler @ 0015935a */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_208);
                    /* try { // try from 00159265 to 00159271 has its CatchHandler @ 00159352 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_118);
                    /* try { // try from 00159272 to 0015927e has its CatchHandler @ 001596ca */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_48);
                    /* try { // try from 0015927f to 0015928b has its CatchHandler @ 001596e4 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_68);
                    /* try { // try from 0015928c to 00159298 has its CatchHandler @ 001596d4 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_88);
                    /* try { // try from 00159299 to 001592a5 has its CatchHandler @ 001596dc */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_a8);
                    /* try { // try from 001592a6 to 001592b2 has its CatchHandler @ 00159644 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_e8);
                    /* try { // try from 001592b3 to 001592ba has its CatchHandler @ 0015960a */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_2e8);
                    /* try { // try from 001592bb to 001592c4 has its CatchHandler @ 00159572 */
  _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h78d1e539beaf0e46E(&local_288);
                    /* try { // try from 001592c5 to 001592d1 has its CatchHandler @ 00159612 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_c8);
                    /* try { // try from 001592d2 to 001592de has its CatchHandler @ 0015934a */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(local_1f0);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(lVar1);
  return;
}