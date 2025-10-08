void _ZN5uu_ls20get_security_context17h4da0c13867f1ac9eE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 **local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined local_138 [16];
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined local_100;
  undefined8 *local_f8;
  code *local_f0;
  undefined8 *local_e8;
  undefined *local_e0;
  int local_d8 [2];
  undefined8 local_d0;
  
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h24216b49f21f2bafE
            (&local_188,&DAT_001d4206,1);
  if (param_4 != 0) {
                    /* try { // try from 0029f316 to 0029f32d has its CatchHandler @ 0029f45a */
    _ZN5uu_ls27get_metadata_with_deref_opt17h6fbf7688ce069f5fE(local_d8,param_2,param_3,1);
    if (local_d8[0] == 2) {
      local_170 = local_d0;
                    /* try { // try from 0029f349 to 0029f359 has its CatchHandler @ 0029f44b */
      (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_0048ff38
      )(&local_168,param_2,param_3);
      local_110 = local_158;
      local_120 = (undefined4)local_168;
      uStack_11c = local_168._4_4_;
      uStack_118 = (undefined4)uStack_160;
      uStack_114 = uStack_160._4_4_;
      local_108 = local_d0;
      local_100 = 0;
      local_128 = 0x8000000000000002;
                    /* try { // try from 0029f38d to 0029f41e has its CatchHandler @ 0029f46d */
      (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_0048fe50)(1);
      local_138 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0048f920)();
      local_f8 = (undefined8 *)local_138;
      local_f0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hf27cb4f53db833cdE;
      local_e8 = &local_128;
      local_e0 = 
      PTR__ZN53__LT_uu_ls__LsError_u20_as_u20_core__fmt__Display_GT_3fmt17hdc9e99969c77feadE_0048fe58
      ;
      local_168 = &DAT_00386b10;
      uStack_160 = 3;
      local_148 = 0;
      local_158 = &local_f8;
      local_150 = 2;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0048f928)(&local_168);
                    /* try { // try from 0029f41f to 0029f428 has its CatchHandler @ 0029f449 */
      _ZN4core3ptr35drop_in_place_LT_uu_ls__LsError_GT_17h1c73d4e6f6d6872eE(&local_128);
    }
  }
  param_1[2] = local_178;
  *param_1 = local_188;
  param_1[1] = uStack_180;
  return;
}