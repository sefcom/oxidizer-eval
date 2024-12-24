undefined  [16] __rustcall
uu_env::EnvAppData::run_env(char *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined auVar2 [16];
  char cVar3;
  byte bVar4;
  bool bVar5;
  undefined auVar6 [16];
  long local_1c0;
  undefined8 local_1b8;
  ulong local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  long local_170;
  undefined8 local_168;
  ulong local_160;
  undefined local_158 [64];
  long local_118;
  undefined local_d7;
  long local_d0;
  undefined8 local_c8;
  ulong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  
  parse_arguments(&local_d0,param_1,param_2,param_3);
  auVar6._8_8_ = local_c0;
  auVar6._0_8_ = local_c8;
  if (local_d0 != -0x8000000000000000) {
    local_178 = local_88;
    local_188 = local_98;
    uStack_184 = uStack_94;
    uStack_180 = uStack_90;
    uStack_17c = uStack_8c;
    local_198 = local_a8;
    uStack_194 = uStack_a4;
    uStack_190 = uStack_a0;
    uStack_18c = uStack_9c;
    local_1a8 = local_b8;
    uStack_1a4 = uStack_b4;
    uStack_1a0 = uStack_b0;
    uStack_19c = uStack_ac;
    local_1c0 = local_d0;
    local_1b8 = local_c8;
    local_1b0 = local_c0;
    bVar5 = true;
    if (*param_1 == '\0') {
                    /* try { // try from 001781af to 00178227 has its CatchHandler @ 0017836f */
      cVar3 = (*(code *)PTR_get_count_0024da28)(&local_1a8,"debug",5);
      bVar5 = cVar3 != '\0';
    }
    *param_1 = bVar5;
    cVar3 = param_1[2];
    bVar4 = (*(code *)PTR_get_count_0024da28)(&local_1a8,"debug",5);
    cVar1 = 1 < bVar4;
    if (cVar3 != '\x02') {
      cVar1 = cVar3;
    }
    param_1[2] = cVar1;
    if (cVar1 != '\0') {
      (*(code *)PTR_debug_print_args_0024da30)(local_1b8,local_1b0);
      param_1[2] = '\0';
    }
    (*(code *)PTR_make_options_0024da38)(&local_d0,&local_1a8);
    auVar6._8_8_ = local_c0;
    auVar6._0_8_ = local_c8;
    if (local_d0 != -0x8000000000000000) {
      (*(code *)PTR_memcpy_0024da40)(local_158,&local_b8,0x88);
      local_170 = local_d0;
      local_168 = local_c8;
      local_160 = local_c0;
                    /* try { // try from 00178270 to 001782ed has its CatchHandler @ 00178360 */
      auVar6 = (*(code *)PTR_apply_change_directory_0024da48)(&local_170);
      if (auVar6._0_8_ == 0) {
        (*(code *)PTR_apply_removal_of_all_env_vars_0024da50)(&local_170);
        auVar6 = (*(code *)PTR_load_config_file_0024da58)(&local_170);
        if ((auVar6._0_8_ == 0) &&
           (auVar6 = (*(code *)PTR_apply_unset_env_vars_0024da60)(&local_170), auVar6._0_8_ == 0)) {
          (*(code *)PTR_apply_specified_env_vars_0024da68)(&local_170);
          auVar6 = (*(code *)PTR_apply_ignore_signal_0024da70)(&local_170);
          if (auVar6._0_8_ == 0) {
            if (local_118 == 0) {
                    /* try { // try from 00178332 to 00178337 has its CatchHandler @ 00178360 */
              (*(code *)PTR_print_env_0024da80)(local_d7);
                    /* try { // try from 00178338 to 00178341 has its CatchHandler @ 0017836f */
              core::ptr::drop_in_place<uu_env::Options>(&local_170);
                    /* try { // try from 00178342 to 0017834b has its CatchHandler @ 0017835b */
              core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>
                        (&local_1a8);
              core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&local_1c0);
              auVar2._8_8_ = 0;
              auVar2._0_8_ = local_c0;
              return auVar2 << 0x40;
            }
            auVar6 = (*(code *)PTR_run_program_0024da78)(param_1,&local_170,*param_1);
          }
        }
      }
                    /* try { // try from 001782f4 to 001782fd has its CatchHandler @ 0017836f */
      core::ptr::drop_in_place<uu_env::Options>(&local_170);
    }
                    /* try { // try from 001782fe to 00178307 has its CatchHandler @ 0017835b */
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_1a8);
    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&local_1c0);
  }
  return auVar6;
}