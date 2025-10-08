void _ZN9uu_mktemp14make_temp_file17hb72bef91cb9e45f4E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined8 local_168;
  undefined8 uStack_160;
  int *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  code *local_140;
  int local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined local_d8 [24];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined8 local_68 [2];
  char local_58;
  undefined local_48 [24];
  
  local_b0 = param_7;
  local_a8 = param_8;
  local_70 = 0;
  local_a0[0] = 0;
  local_88 = param_7;
  local_80 = param_8;
  local_c0 = param_4;
  local_b8 = param_5;
  local_98 = param_4;
  local_90 = param_5;
  local_78 = param_6;
  _ZN8tempfile7Builder11tempfile_in17he0411b7e1dc3d234E(local_68,local_a0,param_2,param_3);
  if (local_58 == '\x02') {
    cVar1 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(local_68[0]);
    if (cVar1 == '\0') {
                    /* try { // try from 001663e3 to 001663f0 has its CatchHandler @ 0016657d */
      _ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_6repeat17h972a0325fa79cda6E(&local_168,param_6);
      local_128 = local_158;
      local_138 = (int)local_168;
      uStack_134 = local_168._4_4_;
      uStack_130 = (undefined4)uStack_160;
      uStack_12c = uStack_160._4_4_;
      local_168 = &local_c0;
      uStack_160 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h6e4bdad1b13e5d00E;
      local_158 = &local_138;
      local_150 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      uStack_148 = &local_b0;
      local_140 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h6e4bdad1b13e5d00E;
      local_108 = &DAT_0011b658;
      uStack_100 = 3;
      uStack_e8 = 0;
      uStack_f0 = 3;
                    /* try { // try from 00166473 to 00166484 has its CatchHandler @ 0016656e */
      local_f8 = &local_168;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h00d6975f0c0267a7E(local_48,&local_108);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdd7c658a73a0c2dfE(&local_138);
                    /* try { // try from 0016648f to 001664a9 has its CatchHandler @ 0016657d */
      _ZN3std4path4Path4join17h71cca2405c68dc0dE(local_d8,param_2,param_3,local_48);
                    /* try { // try from 001664b6 to 001664c2 has its CatchHandler @ 0016655c */
      _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17hbac688a0c4ef4a45E
                (&local_138,&local_168);
                    /* try { // try from 001664c3 to 001664d8 has its CatchHandler @ 0016654d */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h3c498dae33407f89E
                (&local_108,"file",4);
      local_158 = (int *)local_f8;
      local_168 = (undefined8 *)local_108;
      uStack_160 = (code *)uStack_100;
      local_150 = (code *)CONCAT44(uStack_134,local_138);
      uStack_148 = (undefined8 *)CONCAT44(uStack_12c,uStack_130);
      local_140 = (code *)local_128;
                    /* try { // try from 00166500 to 00166507 has its CatchHandler @ 0016654b */
      uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h066bf77b12338303E(&local_168);
      param_1[1] = uVar2;
      param_1[2] = &
                   PTR__ZN4core3ptr43drop_in_place_LT_uu_mktemp__MkTempError_GT_17h4cd5fdd633393dd9E_001f9098
      ;
      *param_1 = 0x8000000000000000;
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h4af838b51e1cae1bE(local_d8);
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h107f4e23998bf9d2E(local_68[0]);
    }
    else {
      auVar3 = (*(code *)
                 PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00200150
               )(local_68[0]);
      *(undefined (*) [16])(param_1 + 1) = auVar3;
      *param_1 = 0x8000000000000000;
    }
  }
  else {
    _ZN8tempfile4file22NamedTempFile_LT_F_GT_4keep17hc7ec6b05f101e459E(&local_108,local_68);
    if ((int)local_108 == 1) {
      local_118 = local_e0;
      uStack_120 = (undefined4)uStack_e8;
      uStack_11c = uStack_e8._4_4_;
      local_138 = (int)uStack_100;
      uStack_134 = uStack_100._4_4_;
      uStack_130 = (undefined4)local_f8;
      uStack_12c = local_f8._4_4_;
                    /* try { // try from 00166362 to 0016639f has its CatchHandler @ 0016658a */
      (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00200160
      )(local_d8,local_f8,uStack_f0);
      local_168 = (undefined8 *)0x8000000000000000;
      uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h066bf77b12338303E(&local_168);
      param_1[1] = uVar2;
      param_1[2] = &
                   PTR__ZN4core3ptr43drop_in_place_LT_uu_mktemp__MkTempError_GT_17h4cd5fdd633393dd9E_001f9098
      ;
      *param_1 = 0x8000000000000000;
      _ZN4core3ptr49drop_in_place_LT_tempfile__file__PersistError_GT_17h0aa05fd71ac9bb03E
                (&local_138);
    }
    else {
      param_1[2] = uStack_e8;
      *param_1 = local_f8;
      param_1[1] = uStack_f0;
      _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hf84162f12f94393fE((int)uStack_100);
    }
  }
  return;
}