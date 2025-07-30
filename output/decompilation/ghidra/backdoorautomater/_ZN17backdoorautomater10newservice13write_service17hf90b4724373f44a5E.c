long _ZN17backdoorautomater10newservice13write_service17hf90b4724373f44a5E
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined param_4)

{
  bool bVar1;
  char cVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_78;
  long lStack_70;
  undefined *local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined local_48 [16];
  undefined8 local_38;
  
  local_50 = CONCAT71((int7)((ulong)in_RAX >> 8),1);
                    /* try { // try from 00157853 to 00157860 has its CatchHandler @ 00158207 */
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17hb1e8eef355dde452E_00368788
  )(local_48);
                    /* try { // try from 0015786c to 001578e3 has its CatchHandler @ 0015820c */
  cVar2 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17h36f93e99507e9f19E
                    (param_1[1],param_1[2]);
  if (cVar2 == '\0') {
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E(param_1,&DAT_0026568e,8);
  }
  switch(param_4) {
  case 1:
    local_68 = (undefined *)param_3[1];
    uStack_60 = param_3[2];
    local_78 = &DAT_002661c8;
    lStack_70 = 0xd;
    _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_b8,&local_78,2,1,0);
    local_88 = local_a8;
    local_98 = (int)local_b8;
    uStack_94 = local_b8._4_4_;
    uStack_90 = (undefined4)uStack_b0;
    uStack_8c = uStack_b0._4_4_;
                    /* try { // try from 001578f7 to 00157941 has its CatchHandler @ 001581f5 */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
              (&local_98,&DAT_002661b1,1);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
              (&local_98,param_2[1],param_2[2]);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
              (&local_98,&DAT_002661b2,0xe);
    _ZN3std2fs4File6create17he97042899d0016f9E(&local_78,param_1);
    lVar4 = lStack_70;
    if ((int)local_78 == 0) {
      local_b8 = CONCAT44(local_b8._4_4_,local_78._4_4_);
                    /* try { // try from 00157e25 to 00157f26 has its CatchHandler @ 00158176 */
      lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_002661d5,7);
      if ((((((lVar4 == 0) &&
             (lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_002661dc,0x1e),
             lVar4 == 0)) &&
            (lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_002661fa,0x1d),
            lVar4 == 0)) &&
           ((lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_00266217,10),
            lVar4 == 0 &&
            (lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_00266221,0x1b),
            lVar4 == 0)))) &&
          ((lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                              (&local_b8,CONCAT44(uStack_8c,uStack_90),local_88), lVar4 == 0 &&
           ((lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_0026623c,0xd),
            lVar4 == 0 &&
            (lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_00266249,10),
            lVar4 == 0)))))) &&
         (lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_00266253,0x18),
         lVar4 == 0)) {
                    /* try { // try from 001580a4 to 001580a8 has its CatchHandler @ 001581f5 */
        _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb99078073e1bf56bE((int)local_b8);
                    /* try { // try from 001580a9 to 001580b2 has its CatchHandler @ 0015820c */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_98);
        goto switchD_001578a6_caseD_4;
      }
                    /* try { // try from 00157f36 to 00157f3a has its CatchHandler @ 001581f5 */
      _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb99078073e1bf56bE((int)local_b8);
    }
                    /* try { // try from 00157f3b to 00157f44 has its CatchHandler @ 0015820c */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_98);
    break;
  case 2:
    local_68 = (undefined *)param_3[1];
    uStack_60 = param_3[2];
    local_78 = &DAT_0026626b;
    lStack_70 = 0x2c;
                    /* try { // try from 00157aed to 00157b06 has its CatchHandler @ 0015820c */
    _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_b8,&local_78,2,1,0);
    local_88 = local_a8;
    local_98 = (int)local_b8;
    uStack_94 = local_b8._4_4_;
    uStack_90 = (undefined4)uStack_b0;
    uStack_8c = uStack_b0._4_4_;
                    /* try { // try from 00157b1a to 00157b64 has its CatchHandler @ 001581e3 */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
              (&local_98,&DAT_002661c0,1);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
              (&local_98,param_2[1],param_2[2]);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_17extend_from_slice17h3cce9f7974121c70E
              (&local_98,&DAT_002661c1,7);
    _ZN3std2fs4File6create17he97042899d0016f9E(&local_78,param_1);
    lVar4 = lStack_70;
    if ((int)local_78 == 0) {
      local_b8 = CONCAT44(local_b8._4_4_,local_78._4_4_);
                    /* try { // try from 00157f51 to 00158052 has its CatchHandler @ 00158169 */
      lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_002661d5,7);
      if ((((lVar4 == 0) &&
           (lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_002661dc,0x1e),
           lVar4 == 0)) &&
          (lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_002661fa,0x1d),
          lVar4 == 0)) &&
         (((lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_00266217,10),
           lVar4 == 0 &&
           (lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_00266221,0x1b),
           lVar4 == 0)) &&
          (((lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                               (&local_b8,CONCAT44(uStack_8c,uStack_90),local_88), lVar4 == 0 &&
            ((lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_0026623c,0xd),
             lVar4 == 0 &&
             (lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_00266249,10),
             lVar4 == 0)))) &&
           (lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_00266253,0x18),
           lVar4 == 0)))))) {
                    /* try { // try from 001580b8 to 001580bc has its CatchHandler @ 001581e3 */
        _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb99078073e1bf56bE((int)local_b8);
                    /* try { // try from 001580bd to 001580c6 has its CatchHandler @ 0015820c */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_98);
        goto switchD_001578a6_caseD_4;
      }
                    /* try { // try from 0015805e to 00158062 has its CatchHandler @ 001581e3 */
      _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb99078073e1bf56bE((int)local_b8);
    }
                    /* try { // try from 00158063 to 0015806c has its CatchHandler @ 0015820c */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_98);
    break;
  case 3:
    local_a8 = param_2[2];
    local_b8 = *param_2;
    uStack_b0 = param_2[1];
    local_68 = (undefined *)param_3[2];
    local_78 = (undefined *)*param_3;
    lStack_70 = param_3[1];
                    /* try { // try from 0015797d to 001579db has its CatchHandler @ 0015820c */
    uVar3 = _ZN17backdoorautomater10newservice18write_shell_pyfile17h388a3bef0a7e09fcE
                      (&local_b8,&local_78);
    _ZN17backdoorautomater9sanitizer18sanitize_return_fn17hb2c462d03cd2292cE(uVar3);
    local_78 = &DAT_00266297;
    lStack_70 = 0x11;
    local_68 = &DAT_0026618d;
    uStack_60 = 0x12;
    _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_b8,&local_78,2,1,0);
    local_88 = local_a8;
    local_98 = (int)local_b8;
    uStack_94 = local_b8._4_4_;
    uStack_90 = (undefined4)uStack_b0;
    uStack_8c = uStack_b0._4_4_;
                    /* try { // try from 001579ef to 001579fb has its CatchHandler @ 001581b8 */
    _ZN3std2fs4File6create17he97042899d0016f9E(&local_78,param_1);
    lVar4 = lStack_70;
    if ((int)local_78 == 0) {
      local_b8 = CONCAT44(local_b8._4_4_,local_78._4_4_);
                    /* try { // try from 00157b81 to 00157ca2 has its CatchHandler @ 00158190 */
      lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_002661d5,7);
      if (((((lVar4 == 0) &&
            (lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_002661dc,0x1e),
            lVar4 == 0)) &&
           (lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_002661fa,0x1d),
           lVar4 == 0)) &&
          (((lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_00266217,10),
            lVar4 == 0 &&
            (lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_00266221,0x1b),
            lVar4 == 0)) &&
           ((lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                               (&local_b8,CONCAT44(uStack_8c,uStack_90),local_88), lVar4 == 0 &&
            ((lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_002662a8,1),
             lVar4 == 0 &&
             (lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_0026623c,0xd),
             lVar4 == 0)))))))) &&
         ((lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_00266249,10),
          lVar4 == 0 &&
          (lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_00266253,0x18),
          lVar4 == 0)))) {
                    /* try { // try from 00158135 to 00158139 has its CatchHandler @ 001581b8 */
        _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb99078073e1bf56bE((int)local_b8);
                    /* try { // try from 0015813d to 00158146 has its CatchHandler @ 0015820c */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_98);
LAB_0015815e:
        bVar1 = true;
        goto LAB_001580cc;
      }
                    /* try { // try from 00157cb2 to 00157cb6 has its CatchHandler @ 001581b8 */
      _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb99078073e1bf56bE((int)local_b8);
    }
                    /* try { // try from 00157cba to 00157cc3 has its CatchHandler @ 0015820c */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_98);
    goto LAB_00157e13;
  case 4:
    local_a8 = param_2[2];
    local_b8 = *param_2;
    uStack_b0 = param_2[1];
    local_68 = (undefined *)param_3[2];
    local_78 = (undefined *)*param_3;
    lStack_70 = param_3[1];
                    /* try { // try from 00157a37 to 00157a95 has its CatchHandler @ 0015820c */
    uVar3 = _ZN17backdoorautomater10newservice16write_shell_perl17h8f1a23ba35eb1918E
                      (&local_b8,&local_78);
    _ZN17backdoorautomater9sanitizer18sanitize_return_fn17hb2c462d03cd2292cE(uVar3);
    local_78 = &DAT_002662a9;
    lStack_70 = 0xf;
    local_68 = &DAT_0026619f;
    uStack_60 = 0x12;
    _ZN5alloc3str17join_generic_copy17hc78a65dc4338aaa9E(&local_b8,&local_78,2,1,0);
    local_88 = local_a8;
    local_98 = (int)local_b8;
    uStack_94 = local_b8._4_4_;
    uStack_90 = (undefined4)uStack_b0;
    uStack_8c = uStack_b0._4_4_;
                    /* try { // try from 00157aa9 to 00157ab5 has its CatchHandler @ 001581a9 */
    _ZN3std2fs4File6create17he97042899d0016f9E(&local_78,param_1);
    lVar4 = lStack_70;
    if ((int)local_78 == 0) {
      local_b8 = CONCAT44(local_b8._4_4_,local_78._4_4_);
                    /* try { // try from 00157cd0 to 00157df1 has its CatchHandler @ 00158183 */
      lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_002661d5,7);
      if (((((((lVar4 == 0) &&
              (lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_002661dc,0x1e),
              lVar4 == 0)) &&
             (lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_002661fa,0x1d),
             lVar4 == 0)) &&
            ((lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_00266217,10),
             lVar4 == 0 &&
             (lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_00266221,0x1b),
             lVar4 == 0)))) &&
           ((lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E
                               (&local_b8,CONCAT44(uStack_8c,uStack_90),local_88), lVar4 == 0 &&
            ((lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_002662a8,1),
             lVar4 == 0 &&
             (lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_0026623c,0xd),
             lVar4 == 0)))))) &&
          (lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_00266249,10),
          lVar4 == 0)) &&
         (lVar4 = _ZN3std2io5Write9write_all17h18f2f3ca7c9bcc20E(&local_b8,&DAT_00266253,0x18),
         lVar4 == 0)) {
                    /* try { // try from 0015814c to 00158150 has its CatchHandler @ 001581a9 */
        _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb99078073e1bf56bE((int)local_b8);
                    /* try { // try from 00158154 to 0015815d has its CatchHandler @ 0015820c */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_98);
        goto LAB_0015815e;
      }
                    /* try { // try from 00157e01 to 00157e05 has its CatchHandler @ 001581a9 */
      _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb99078073e1bf56bE((int)local_b8);
    }
                    /* try { // try from 00157e09 to 00157e12 has its CatchHandler @ 0015820c */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_98);
LAB_00157e13:
    bVar1 = true;
    goto LAB_00158072;
  default:
switchD_001578a6_caseD_4:
    bVar1 = false;
LAB_001580cc:
    local_a8 = param_1[2];
    local_b8 = *param_1;
    uStack_b0 = param_1[1];
    local_68 = (undefined *)local_38;
                    /* try { // try from 001580f3 to 001580ff has its CatchHandler @ 0015819d */
    _ZN17backdoorautomater10newservice14create_service17h60e36f0974dfe8c1E(&local_b8,&local_78);
    if (!bVar1) {
                    /* try { // try from 00158107 to 0015810e has its CatchHandler @ 001581d4 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_3);
                    /* try { // try from 00158112 to 00158119 has its CatchHandler @ 001581ca */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_2);
    }
    return 0;
  }
  bVar1 = false;
LAB_00158072:
                    /* try { // try from 00158072 to 0015807b has its CatchHandler @ 00158207 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(local_48);
  if (!bVar1) {
                    /* try { // try from 00158084 to 0015808b has its CatchHandler @ 001581d4 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_3);
                    /* try { // try from 0015808f to 00158096 has its CatchHandler @ 001581ca */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_2);
  }
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(param_1);
  return lVar4;
}