void _ZN9uu_mktemp13make_temp_dir17h6dfece6cf0e8d640E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  code *local_140;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  char local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined *local_f8;
  undefined8 uStack_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined local_c8 [24];
  undefined8 local_b0;
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
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined local_48 [24];
  
  local_108 = param_7;
  local_100 = param_8;
  local_80 = 0;
  local_98 = param_7;
  local_90 = param_8;
  local_b0 = 0x1c000000001;
  local_118 = param_4;
  local_110 = param_5;
  local_a8 = param_4;
  local_a0 = param_5;
  local_88 = param_6;
  _ZN8tempfile7Builder10tempdir_in17hfc85b0e03fc17ef4E(&local_130,&local_b0,param_2,param_3);
  if (local_120 == '\x02') {
    uVar1 = CONCAT44(uStack_12c,local_130);
    cVar2 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(uVar1);
    if (cVar2 == '\0') {
                    /* try { // try from 0016605b to 0016606a has its CatchHandler @ 00166208 */
      _ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_6repeat17h972a0325fa79cda6E(&local_168,param_6);
      local_178 = local_158;
      local_188 = (undefined4)local_168;
      uStack_184 = local_168._4_4_;
      uStack_180 = (undefined4)uStack_160;
      uStack_17c = uStack_160._4_4_;
      local_168 = &local_118;
      uStack_160 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h6e4bdad1b13e5d00E;
      local_150 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      uStack_148 = &local_108;
      local_140 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h6e4bdad1b13e5d00E;
      local_f8 = &DAT_0011b658;
      uStack_f0 = 3;
      local_d8 = 0;
      local_e0 = 3;
                    /* try { // try from 001660f5 to 00166109 has its CatchHandler @ 001661fb */
      local_158 = (undefined8 *)&local_188;
      local_e8 = &local_168;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h00d6975f0c0267a7E(local_48,&local_f8);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdd7c658a73a0c2dfE(&local_188);
                    /* try { // try from 00166112 to 0016612c has its CatchHandler @ 00166208 */
      _ZN3std4path4Path4join17h71cca2405c68dc0dE(local_c8,param_2,param_3,local_48);
                    /* try { // try from 0016613a to 00166146 has its CatchHandler @ 001661e9 */
      _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17hbac688a0c4ef4a45E
                (&local_188,&local_168);
                    /* try { // try from 00166147 to 0016615f has its CatchHandler @ 001661dc */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h3c498dae33407f89E
                (&local_f8,"directory",9);
      local_158 = local_e8;
      local_168 = (undefined8 *)local_f8;
      uStack_160 = (code *)uStack_f0;
      local_150 = (code *)CONCAT44(uStack_184,local_188);
      uStack_148 = (undefined8 *)CONCAT44(uStack_17c,uStack_180);
      local_140 = (code *)local_178;
                    /* try { // try from 0016618d to 00166196 has its CatchHandler @ 001661da */
      uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h066bf77b12338303E(&local_168);
      param_1[1] = uVar3;
      param_1[2] = &
                   PTR__ZN4core3ptr43drop_in_place_LT_uu_mktemp__MkTempError_GT_17h4cd5fdd633393dd9E_001f9098
      ;
      *param_1 = 0x8000000000000000;
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h4af838b51e1cae1bE(local_c8);
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h107f4e23998bf9d2E(uVar1);
    }
    else {
      auVar4 = (*(code *)
                 PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00200150
               )(uVar1);
      *(undefined (*) [16])(param_1 + 1) = auVar4;
      *param_1 = 0x8000000000000000;
    }
  }
  else {
    local_78 = local_130;
    uStack_74 = uStack_12c;
    uStack_70 = uStack_128;
    uStack_6c = uStack_124;
    (*(code *)PTR__ZN8tempfile3dir7TempDir4keep17hd8ce1fb884c31a5cE_00200158)(&local_60,&local_78);
    param_1[2] = local_50;
    *param_1 = local_60;
    param_1[1] = uStack_58;
  }
  return;
}