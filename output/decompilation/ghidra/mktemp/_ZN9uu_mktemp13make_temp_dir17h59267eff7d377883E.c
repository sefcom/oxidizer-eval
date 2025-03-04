void _ZN9uu_mktemp13make_temp_dir17h59267eff7d377883E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined8 *local_148;
  code *pcStack_140;
  undefined *local_138;
  code *local_130;
  undefined8 *puStack_128;
  code *local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined local_100 [16];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_98 [2];
  char local_88;
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_d8 = param_7;
  local_d0 = param_8;
  local_50 = 0;
  local_80[0] = 0;
  local_68 = param_7;
  local_60 = param_8;
  local_e8 = param_4;
  local_e0 = param_5;
  local_78 = param_4;
  local_70 = param_5;
  local_58 = param_6;
  _ZN8tempfile7Builder10tempdir_in17haca47c72416a75c9E(local_98,local_80,param_2,param_3);
  if (local_88 == '\x02') {
    cVar1 = _ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE(local_98[0]);
    if (cVar1 == '\0') {
                    /* try { // try from 001c031f to 001c033b has its CatchHandler @ 001c04f2 */
      _ZN5alloc3str21__LT_impl_u20_str_GT_6repeat17h44a69ba09e43960aE(local_100,"X",1,param_6);
      local_148 = &local_e8;
      pcStack_140 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h9054f5fd3dba116aE;
      local_130 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
      puStack_128 = &local_d8;
      local_120 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h9054f5fd3dba116aE;
      local_c8 = (undefined8 *)&DAT_0011f4d8;
      uStack_c0 = 3;
      local_a8 = 0;
      local_b0 = 3;
                    /* try { // try from 001c03af to 001c03c0 has its CatchHandler @ 001c04e3 */
      local_138 = local_100;
      local_b8 = (undefined *)&local_148;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17hcc2932731f604033E(&local_118,&local_c8);
                    /* try { // try from 001c03c1 to 001c03ca has its CatchHandler @ 001c04d4 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h068543f44d037b0aE(local_100);
      local_48 = local_118;
      uStack_44 = uStack_114;
      uStack_40 = uStack_110;
      uStack_3c = uStack_10c;
                    /* try { // try from 001c03e5 to 001c03fc has its CatchHandler @ 001c04f2 */
      _ZN3std4path4Path4join17h5103fbfd94f4eefaE(&local_118,param_2,param_3,&local_48);
                    /* try { // try from 001c0406 to 001c0412 has its CatchHandler @ 001c04c5 */
      _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17hb2b1bff17e4619f7E
                (local_100,&local_148);
                    /* try { // try from 001c0413 to 001c042b has its CatchHandler @ 001c04b6 */
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17hf2364d4dece97e39E
                (&local_c8,"directory",9);
      local_138 = local_b8;
      local_148 = local_c8;
      pcStack_140 = (code *)uStack_c0;
      local_120 = (code *)local_f0;
                    /* try { // try from 001c0459 to 001c0460 has its CatchHandler @ 001c04b4 */
      uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hcdef1c0b923e2ad4E(&local_148);
      param_1[1] = uVar3;
      param_1[2] = &
                   PTR__ZN4core3ptr43drop_in_place_LT_uu_mktemp__MkTempError_GT_17h45732e4c75632193E_00236af0
      ;
      *param_1 = 0x8000000000000000;
                    /* try { // try from 001c047d to 001c0486 has its CatchHandler @ 001c04f2 */
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hef8b921f38343bf4E(&local_118);
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h023254833d2f52f9E(local_98[0]);
    }
    else {
      auVar4 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                         (local_98[0]);
      *(undefined (*) [16])(param_1 + 1) = auVar4;
      *param_1 = 0x8000000000000000;
    }
  }
  else {
    _ZN8tempfile3dir7TempDir9into_path17h9cc8484f4c823eacE(&local_148,local_98);
                    /* try { // try from 001c02de to 001c02fc has its CatchHandler @ 001c04ff */
    lVar2 = _ZN3std2fs15set_permissions17h663416e852a125c9E(&local_148,0x1c0);
    if (lVar2 == 0) {
      param_1[2] = local_138;
      *param_1 = local_148;
      param_1[1] = pcStack_140;
    }
    else {
      auVar4 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                         (lVar2);
      *(undefined (*) [16])(param_1 + 1) = auVar4;
      *param_1 = 0x8000000000000000;
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hef8b921f38343bf4E(&local_148);
    }
  }
  return;
}