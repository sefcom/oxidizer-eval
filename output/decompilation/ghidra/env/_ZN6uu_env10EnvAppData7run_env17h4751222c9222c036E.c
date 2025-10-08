undefined  [16]
_ZN6uu_env10EnvAppData7run_env17h4751222c9222c036E
          (char *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined auVar2 [16];
  undefined8 uVar3;
  ulong uVar4;
  char cVar5;
  byte bVar6;
  bool bVar7;
  undefined auVar8 [16];
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
  long local_168;
  undefined8 local_160;
  ulong local_158;
  undefined local_150 [64];
  long local_110;
  undefined local_cf;
  long local_c8;
  undefined8 local_c0;
  ulong local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  
  _ZN6uu_env10EnvAppData15parse_arguments17h6f93681d78fa23cdE(&local_c8,param_1,param_2,param_3);
  uVar4 = local_b8;
  uVar3 = local_c0;
  local_178 = local_80;
  local_188 = local_90;
  uStack_184 = uStack_8c;
  uStack_180 = uStack_88;
  uStack_17c = uStack_84;
  local_198 = local_a0;
  uStack_194 = uStack_9c;
  uStack_190 = uStack_98;
  uStack_18c = uStack_94;
  local_1a8 = local_b0;
  uStack_1a4 = uStack_ac;
  uStack_1a0 = uStack_a8;
  uStack_19c = uStack_a4;
  local_1c0 = local_c8;
  local_1b8 = local_c0;
  local_1b0 = local_b8;
  bVar7 = true;
  if (*param_1 == '\0') {
                    /* try { // try from 001687b6 to 0016882b has its CatchHandler @ 0016898b */
    cVar5 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches9get_count17h8ff25e0804a4acaeE_002191f0
            )(&local_1a8,"debug",5);
    bVar7 = cVar5 != '\0';
  }
  *param_1 = bVar7;
  bVar1 = param_1[2];
  bVar6 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches9get_count17h8ff25e0804a4acaeE_002191f0
          )(&local_1a8,"debug",5);
  bVar6 = 1 < bVar6;
  if (bVar1 != 2) {
    bVar6 = bVar1;
  }
  param_1[2] = bVar6;
  if ((bVar6 & 1) != 0) {
    (*(code *)PTR__ZN6uu_env16debug_print_args17h9262afd3814fa2d4E_002191f8)(uVar3,uVar4);
    param_1[2] = '\0';
  }
  (*(code *)PTR__ZN6uu_env12make_options17h2effa55e44a7ce8eE_00219200)(&local_c8,&local_1a8);
  auVar8._8_8_ = local_b8;
  auVar8._0_8_ = local_c0;
  if (local_c8 != -0x8000000000000000) {
    (*(code *)PTR_memcpy_002191a0)(local_150,&local_b0,0x88);
    local_168 = local_c8;
    local_160 = local_c0;
    local_158 = local_b8;
                    /* try { // try from 0016887e to 001688fb has its CatchHandler @ 0016897c */
    auVar8 = (*(code *)PTR__ZN6uu_env22apply_change_directory17h373f6259ae5e3a21E_00219208)
                       (&local_168);
    if (auVar8._0_8_ == 0) {
      (*(code *)PTR__ZN6uu_env29apply_removal_of_all_env_vars17hcf5609ccad6c2606E_00219210)
                (&local_168);
      auVar8 = (*(code *)PTR__ZN6uu_env16load_config_file17he01b7851b1bda2a1E_00219218)(&local_168);
      if ((auVar8._0_8_ == 0) &&
         (auVar8 = (*(code *)PTR__ZN6uu_env20apply_unset_env_vars17h38498305449b9d8fE_00219220)
                             (&local_168), auVar8._0_8_ == 0)) {
        (*(code *)PTR__ZN6uu_env24apply_specified_env_vars17h6f7952585ac93a45E_00219228)(&local_168)
        ;
        auVar8 = (*(code *)PTR__ZN6uu_env19apply_ignore_signal17hd90c650a7d9c7f29E_00219230)
                           (&local_168);
        if (auVar8._0_8_ == 0) {
          if (local_110 == 0) {
                    /* try { // try from 0016893e to 00168943 has its CatchHandler @ 0016897c */
            (*(code *)PTR__ZN6uu_env9print_env17h235deac81a0d5ad1E_00219240)(local_cf);
            _ZN4core3ptr36drop_in_place_LT_uu_env__Options_GT_17h040d07f0deb347efE(&local_168);
                    /* try { // try from 0016894e to 00168957 has its CatchHandler @ 00168967 */
            _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h1761f4d417810930E
                      (&local_1a8);
            _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17h80dccb4ef18d8427E
                      (&local_1c0);
            auVar2._8_8_ = 0;
            auVar2._0_8_ = local_b8;
            return auVar2 << 0x40;
          }
          auVar8 = (*(code *)PTR__ZN6uu_env10EnvAppData11run_program17he856797d7be52ddcE_00219238)
                             (param_1,&local_168,*param_1);
        }
      }
    }
    _ZN4core3ptr36drop_in_place_LT_uu_env__Options_GT_17h040d07f0deb347efE(&local_168);
  }
                    /* try { // try from 0016890c to 00168915 has its CatchHandler @ 00168967 */
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h1761f4d417810930E
            (&local_1a8);
  _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17h80dccb4ef18d8427E
            (&local_1c0);
  return auVar8;
}