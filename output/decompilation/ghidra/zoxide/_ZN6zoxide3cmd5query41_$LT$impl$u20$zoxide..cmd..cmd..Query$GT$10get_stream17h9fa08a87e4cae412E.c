void _ZN6zoxide3cmd5query41__LT_impl_u20_zoxide__cmd__cmd__Query_GT_10get_stream17h9fa08a87e4cae412E
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined local_1c0 [16];
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined local_e8 [88];
  undefined local_90;
  undefined local_8f;
  undefined local_88 [96];
  
  _ZN6zoxide2db6stream13StreamOptions3new17ha9455680dd6cde2cE(&local_1a8,param_4);
  _ZN6zoxide2db6stream13StreamOptions13with_keywords17hecf6012564e7de77E
            (&local_148,&local_1a8,*(long *)(param_2 + 8),
             *(long *)(param_2 + 8) + *(long *)(param_2 + 0x10) * 0x18);
                    /* try { // try from 0019044c to 00190455 has its CatchHandler @ 00190558 */
  _ZN6zoxide6config12exclude_dirs17h9f1bdfa8604aa8e4E(&local_1a8);
  local_1b0 = local_198;
  _ZN6zoxide2db6stream13StreamOptions12with_exclude17hd0b349c1432d2065E
            (local_88,&local_148,local_1c0);
  if (*(long *)(param_2 + 0x30) == -0x8000000000000000) {
    local_148 = 0x8000000000000000;
  }
  else {
                    /* try { // try from 001904d0 to 001904da has its CatchHandler @ 00190556 */
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_0023b4c0
    )(&local_1a8,param_2 + 0x30);
    local_138 = local_198;
    local_148 = CONCAT44(uStack_1a4,local_1a8);
    uStack_140 = uStack_1a0;
    uStack_13c = uStack_19c;
  }
  _ZN6zoxide2db6stream13StreamOptions13with_base_dir17hdd0087d9881369a3E
            (local_e8,local_88,&local_148);
  if (*(char *)(param_2 + 0x48) == '\0') {
                    /* try { // try from 0019051c to 00190520 has its CatchHandler @ 00190554 */
    local_8f = _ZN6zoxide6config16resolve_symlinks17h2e8c21983af893b2E();
    local_90 = 1;
  }
  _ZN6zoxide2db6stream6Stream3new17hb44baf2d44c3710bE(param_1,param_3,local_e8);
  return;
}