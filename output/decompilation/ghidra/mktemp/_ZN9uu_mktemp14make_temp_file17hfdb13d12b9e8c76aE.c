void _ZN9uu_mktemp14make_temp_file17hfdb13d12b9e8c76aE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 *local_178;
  code *pcStack_170;
  undefined8 **local_168;
  code *local_160;
  undefined8 *puStack_158;
  code *local_150;
  undefined8 *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  int local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined2 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_e0 = param_7;
  local_d8 = param_8;
  local_80 = 0;
  local_b0[0] = 0;
  local_98 = param_7;
  local_90 = param_8;
  local_f0 = param_4;
  local_e8 = param_5;
  local_a8 = param_4;
  local_a0 = param_5;
  local_88 = param_6;
  _ZN8tempfile7Builder11tempfile_in17h727c1a87e0ab7b89E(&local_d0,local_b0,param_2,param_3);
  if ((char)local_c0 == '\x02') {
    uVar2 = CONCAT44(uStack_cc,local_d0);
    cVar1 = _ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE(uVar2);
    if (cVar1 == '\0') {
                    /* try { // try from 001c06db to 001c06fa has its CatchHandler @ 001c08c0 */
      _ZN5alloc3str21__LT_impl_u20_str_GT_6repeat17h44a69ba09e43960aE(&local_118,"X",1,param_6);
      local_178 = &local_f0;
      pcStack_170 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h9054f5fd3dba116aE;
      local_160 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
      puStack_158 = &local_e0;
      local_150 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h9054f5fd3dba116aE;
      local_148 = (undefined8 *)&DAT_0011f4d8;
      uStack_140 = 3;
      uStack_128 = 0;
      local_138 = &local_178;
      uStack_130 = 3;
                    /* try { // try from 001c0768 to 001c0776 has its CatchHandler @ 001c08ae */
      local_168 = (undefined8 **)&local_118;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17hcc2932731f604033E(&local_190,&local_148);
                    /* try { // try from 001c0777 to 001c0783 has its CatchHandler @ 001c089f */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h068543f44d037b0aE(&local_118);
      local_78 = local_190;
      uStack_74 = uStack_18c;
      uStack_70 = uStack_188;
      uStack_6c = uStack_184;
                    /* try { // try from 001c079e to 001c07b5 has its CatchHandler @ 001c08c0 */
      _ZN3std4path4Path4join17h5103fbfd94f4eefaE(&local_190,param_2,param_3,&local_78);
                    /* try { // try from 001c07c0 to 001c07d1 has its CatchHandler @ 001c0890 */
      _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17hb2b1bff17e4619f7E
                (&local_118,&local_178);
                    /* try { // try from 001c07d2 to 001c07e7 has its CatchHandler @ 001c087e */
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17hf2364d4dece97e39E
                (&local_148,"file",4);
      local_168 = local_138;
      local_178 = local_148;
      pcStack_170 = (code *)uStack_140;
                    /* try { // try from 001c0816 to 001c081f has its CatchHandler @ 001c087c */
      uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hcdef1c0b923e2ad4E(&local_178);
      param_1[1] = uVar3;
      param_1[2] = &
                   PTR__ZN4core3ptr43drop_in_place_LT_uu_mktemp__MkTempError_GT_17h45732e4c75632193E_00236af0
      ;
      *param_1 = 0x8000000000000000;
                    /* try { // try from 001c083c to 001c0845 has its CatchHandler @ 001c08c0 */
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hef8b921f38343bf4E(&local_190);
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h023254833d2f52f9E(uVar2);
    }
    else {
      auVar4 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                         (uVar2);
      *(undefined (*) [16])(param_1 + 1) = auVar4;
      *param_1 = 0x8000000000000000;
    }
  }
  else {
    local_48 = local_c0;
    uStack_44 = uStack_bc;
    uStack_40 = uStack_b8;
    uStack_3c = uStack_b4;
    local_58 = local_d0;
    uStack_54 = uStack_cc;
    uStack_50 = uStack_c8;
    uStack_4c = uStack_c4;
    _ZN8tempfile4file22NamedTempFile_LT_F_GT_4keep17hb038e82cc04b888aE(&local_148,&local_58);
    if (local_148 == (undefined8 *)0x0) {
      param_1[2] = uStack_128;
      *param_1 = local_138;
      param_1[1] = uStack_130;
      _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h1cba195ba56b276eE((int)uStack_140);
    }
    else {
      local_f8 = local_120;
      local_108 = (undefined4)uStack_130;
      uStack_104 = uStack_130._4_4_;
      uStack_100 = (undefined4)uStack_128;
      uStack_fc = uStack_128._4_4_;
      local_118 = (int)uStack_140;
      uStack_114 = uStack_140._4_4_;
      uStack_110 = (undefined4)local_138;
      uStack_10c = local_138._4_4_;
                    /* try { // try from 001c067f to 001c06b6 has its CatchHandler @ 001c08cd */
      _ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h0549813f23b52483E
                (&local_190,local_138,uStack_130);
      local_160 = (code *)0x8000000000000000;
      uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hcdef1c0b923e2ad4E(&local_178);
      param_1[1] = uVar2;
      param_1[2] = &
                   PTR__ZN4core3ptr43drop_in_place_LT_uu_mktemp__MkTempError_GT_17h45732e4c75632193E_00236af0
      ;
      *param_1 = 0x8000000000000000;
      _ZN4core3ptr49drop_in_place_LT_tempfile__file__PersistError_GT_17h5034deea9c047d89E
                (&local_118);
    }
  }
  return;
}