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
                    /* try { // try from 0017b91f to 0017b997 has its CatchHandler @ 0017badf */
      cVar3 = (*(code *)PTR_get_count_0024d318)(&local_1a8,"debug",5);
      bVar5 = cVar3 != '\0';
    }
    *param_1 = bVar5;
    cVar3 = param_1[2];
    bVar4 = (*(code *)PTR_get_count_0024d318)(&local_1a8,"debug",5);
    cVar1 = 1 < bVar4;
    if (cVar3 != '\x02') {
      cVar1 = cVar3;
    }
    param_1[2] = cVar1;
    if (cVar1 != '\0') {
      (*(code *)PTR_debug_print_args_0024d320)(local_1b8,local_1b0);
      param_1[2] = '\0';
    }
    (*(code *)PTR_make_options_0024d328)(&local_d0,&local_1a8);
    auVar6._8_8_ = local_c0;
    auVar6._0_8_ = local_c8;
    if (local_d0 != -0x8000000000000000) {
      (*(code *)PTR_memcpy_0024d1c8)(local_158,&local_b8,0x88);
      local_170 = local_d0;
      local_168 = local_c8;
      local_160 = local_c0;
                    /* try { // try from 0017b9e0 to 0017ba5d has its CatchHandler @ 0017bad0 */
      auVar6 = (*(code *)PTR_apply_change_directory_0024d330)(&local_170);
      if (auVar6._0_8_ == 0) {
        (*(code *)PTR_apply_removal_of_all_env_vars_0024d338)(&local_170);
        auVar6 = (*(code *)PTR_load_config_file_0024d340)(&local_170);
        if ((auVar6._0_8_ == 0) &&
           (auVar6 = (*(code *)PTR_apply_unset_env_vars_0024d348)(&local_170), auVar6._0_8_ == 0)) {
          (*(code *)PTR_apply_specified_env_vars_0024d350)(&local_170);
          auVar6 = (*(code *)PTR_apply_ignore_signal_0024d358)(&local_170);
          if (auVar6._0_8_ == 0) {
            if (local_118 == 0) {
                    /* try { // try from 0017baa2 to 0017baa7 has its CatchHandler @ 0017bad0 */
              (*(code *)PTR_print_env_0024d368)(local_d7);
                    /* try { // try from 0017baa8 to 0017bab1 has its CatchHandler @ 0017badf */
              core::ptr::drop_in_place<uu_env::Options>(&local_170);
                    /* try { // try from 0017bab2 to 0017babb has its CatchHandler @ 0017bacb */
              core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>
                        (&local_1a8);
              core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&local_1c0);
              auVar2._8_8_ = 0;
              auVar2._0_8_ = local_c0;
              return auVar2 << 0x40;
            }
            auVar6 = (*(code *)PTR_run_program_0024d360)(param_1,&local_170,*param_1);
          }
        }
      }
                    /* try { // try from 0017ba64 to 0017ba6d has its CatchHandler @ 0017badf */
      core::ptr::drop_in_place<uu_env::Options>(&local_170);
    }
                    /* try { // try from 0017ba6e to 0017ba77 has its CatchHandler @ 0017bacb */
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_1a8);
    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&local_1c0);
  }
  return auVar6;
}