void _ZN5uu_ls20get_security_context17h71225af2e5fdb4ddE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 *local_170;
  code *local_168;
  undefined2 *local_160;
  code *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 **local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined local_120 [16];
  undefined2 local_110 [4];
  undefined8 *local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  int local_d8 [2];
  undefined8 *local_d0;
  
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h09d6369a280ff05aE
            (&local_188,&DAT_0013623a,1);
  if (param_4 != 0) {
                    /* try { // try from 0022ce86 to 0022ce9d has its CatchHandler @ 0022cfbe */
    _ZN5uu_ls27get_metadata_with_deref_opt17h471baa3ff4b7ae17E(local_d8,param_2,param_3,1);
    if (local_d8[0] == 2) {
      local_170 = local_d0;
                    /* try { // try from 0022ceb9 to 0022cec9 has its CatchHandler @ 0022cfa0 */
      _ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h0549813f23b52483E
                (&local_150,param_2,param_3);
      local_108 = local_d0;
      local_100 = (undefined4)local_150;
      uStack_fc = local_150._4_4_;
      uStack_f8 = (undefined4)uStack_148;
      uStack_f4 = uStack_148._4_4_;
      local_f0 = local_140;
      local_110[0] = 2;
                    /* try { // try from 0022cef3 to 0022cf75 has its CatchHandler @ 0022cfaf */
      _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(1);
      local_120 = _ZN6uucore9util_name17h60d842bf27b05e82E();
      local_170 = (undefined8 *)local_120;
      local_168 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h2a9d35fa3fd2b5f3E;
      local_160 = local_110;
      local_158 = _ZN53__LT_uu_ls__LsError_u20_as_u20_core__fmt__Display_GT_3fmt17h5d2fdcae43ce792dE
      ;
      local_150 = &DAT_00312588;
      uStack_148 = 3;
      local_130 = 0;
      local_140 = &local_170;
      local_138 = 2;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_150);
                    /* try { // try from 0022cf76 to 0022cf7f has its CatchHandler @ 0022cfbe */
      _ZN4core3ptr35drop_in_place_LT_uu_ls__LsError_GT_17he771fbcc7e9ba207E(local_110);
    }
  }
  param_1[2] = local_178;
  *param_1 = local_188;
  param_1[1] = uStack_180;
  return;
}