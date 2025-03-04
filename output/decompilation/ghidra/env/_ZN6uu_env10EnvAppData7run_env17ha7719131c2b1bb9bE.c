undefined  [16]
_ZN6uu_env10EnvAppData7run_env17ha7719131c2b1bb9bE
          (char *param_1,undefined8 param_2,undefined8 param_3)

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
  
  _ZN6uu_env10EnvAppData15parse_arguments17hd6f5805c37ad784fE(&local_d0,param_1,param_2,param_3);
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
      cVar3 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches9get_count17h3e01e377eb4ddd10E_0024d318
              )(&local_1a8,"debug",5);
      bVar5 = cVar3 != '\0';
    }
    *param_1 = bVar5;
    cVar3 = param_1[2];
    bVar4 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches9get_count17h3e01e377eb4ddd10E_0024d318
            )(&local_1a8,"debug",5);
    cVar1 = 1 < bVar4;
    if (cVar3 != '\x02') {
      cVar1 = cVar3;
    }
    param_1[2] = cVar1;
    if (cVar1 != '\0') {
      (*(code *)PTR__ZN6uu_env16debug_print_args17hc6b0deb8b4ab006fE_0024d320)(local_1b8,local_1b0);
      param_1[2] = '\0';
    }
    (*(code *)PTR__ZN6uu_env12make_options17h1d1233ee0c3e2eceE_0024d328)(&local_d0,&local_1a8);
    auVar6._8_8_ = local_c0;
    auVar6._0_8_ = local_c8;
    if (local_d0 != -0x8000000000000000) {
      (*(code *)PTR_memcpy_0024d1c8)(local_158,&local_b8,0x88);
      local_170 = local_d0;
      local_168 = local_c8;
      local_160 = local_c0;
                    /* try { // try from 0017b9e0 to 0017ba5d has its CatchHandler @ 0017bad0 */
      auVar6 = (*(code *)PTR__ZN6uu_env22apply_change_directory17h505c531f1c72246eE_0024d330)
                         (&local_170);
      if (auVar6._0_8_ == 0) {
        (*(code *)PTR__ZN6uu_env29apply_removal_of_all_env_vars17h7a792f149fdec8bfE_0024d338)
                  (&local_170);
        auVar6 = (*(code *)PTR__ZN6uu_env16load_config_file17h0196c19fc75eeaa1E_0024d340)
                           (&local_170);
        if ((auVar6._0_8_ == 0) &&
           (auVar6 = (*(code *)PTR__ZN6uu_env20apply_unset_env_vars17hc3a5ba6187e1f001E_0024d348)
                               (&local_170), auVar6._0_8_ == 0)) {
          (*(code *)PTR__ZN6uu_env24apply_specified_env_vars17ha326473558d292daE_0024d350)
                    (&local_170);
          auVar6 = (*(code *)PTR__ZN6uu_env19apply_ignore_signal17h50dc2527ab008a21E_0024d358)
                             (&local_170);
          if (auVar6._0_8_ == 0) {
            if (local_118 == 0) {
                    /* try { // try from 0017baa2 to 0017baa7 has its CatchHandler @ 0017bad0 */
              (*(code *)PTR__ZN6uu_env9print_env17h67417add1e73f63aE_0024d368)(local_d7);
                    /* try { // try from 0017baa8 to 0017bab1 has its CatchHandler @ 0017badf */
              _ZN4core3ptr36drop_in_place_LT_uu_env__Options_GT_17h50c38fdde1ff93c5E(&local_170);
                    /* try { // try from 0017bab2 to 0017babb has its CatchHandler @ 0017bacb */
              _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hdd0b4c6e9f262526E
                        (&local_1a8);
              _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17h7647f138f93ed945E
                        (&local_1c0);
              auVar2._8_8_ = 0;
              auVar2._0_8_ = local_c0;
              return auVar2 << 0x40;
            }
            auVar6 = (*(code *)PTR__ZN6uu_env10EnvAppData11run_program17h150b93669ea43850E_0024d360)
                               (param_1,&local_170,*param_1);
          }
        }
      }
                    /* try { // try from 0017ba64 to 0017ba6d has its CatchHandler @ 0017badf */
      _ZN4core3ptr36drop_in_place_LT_uu_env__Options_GT_17h50c38fdde1ff93c5E(&local_170);
    }
                    /* try { // try from 0017ba6e to 0017ba77 has its CatchHandler @ 0017bacb */
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hdd0b4c6e9f262526E
              (&local_1a8);
    _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17h7647f138f93ed945E
              (&local_1c0);
  }
  return auVar6;
}