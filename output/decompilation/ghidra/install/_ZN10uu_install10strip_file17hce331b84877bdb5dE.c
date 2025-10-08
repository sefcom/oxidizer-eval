undefined8
_ZN10uu_install10strip_file17hce331b84877bdb5dE(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 **local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 *local_150;
  undefined *puStack_148;
  undefined8 local_140;
  int local_138;
  uint local_134;
  ulong local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  
  (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_002098c0)
            (&local_110,param_1,param_2);
  uVar4 = 0;
  if ((char)local_110 == '\0') {
    uVar4 = local_100;
  }
  uVar5 = 1;
  if ((char)local_110 == '\0') {
    uVar5 = CONCAT44(uStack_104,uStack_108);
  }
  local_110 = 0;
  uVar3 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x2d,&local_110);
  cVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h98f13f98e718c5ccE
                    (uVar5,uVar4,uVar3);
  if (cVar2 == '\0') {
    (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00209c38)
              (&local_1b8,param_1,param_2);
  }
  else {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h7990a55799cbd755E
              (&local_110,"./",1);
    local_188 = (undefined8 **)local_100;
    local_198 = (undefined **)CONCAT44(uStack_10c,local_110);
    uStack_190._0_4_ = uStack_108;
    uStack_190._4_4_ = uStack_104;
                    /* try { // try from 00169202 to 00169214 has its CatchHandler @ 00169440 */
    _ZN3std4path7PathBuf4push17h2d55bb206594316eE(&local_198,param_1,param_2);
    local_1a8 = local_188;
    local_1b8 = (undefined4)local_198;
    uStack_1b4 = local_198._4_4_;
    uStack_1b0 = (undefined4)uStack_190;
    uStack_1ac = uStack_190._4_4_;
  }
                    /* try { // try from 00169240 to 0016924f has its CatchHandler @ 00169445 */
  _ZN3std7process7Command3new17hcf1a1331f2ee346bE(&local_110,param_3 + 0x18);
                    /* try { // try from 00169253 to 0016927d has its CatchHandler @ 00169460 */
  _ZN3std7process7Command3arg17hdd894e2d8adaa26fE(&local_110,&local_1b8);
  (*(code *)PTR__ZN3std7process7Command6status17h6e1e3c5811681da5E_00209c68)(&local_138,&local_110);
  if (local_138 == 1) {
    local_1c0 = local_130;
    local_188 = (undefined8 **)local_1a8;
    local_198 = (undefined **)CONCAT44(uStack_1b4,local_1b8);
    uStack_190 = (undefined8 *)CONCAT44(uStack_1ac,uStack_1b0);
                    /* try { // try from 001692ad to 001692fe has its CatchHandler @ 0016944f */
    local_150 = (undefined8 *)_ZN3std2fs11remove_file17h8950bca4704e1937E(&local_198);
    _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hb3cb1d78c02156cfE
              (&local_150);
    _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h276451a033a1078fE
              (&local_150,&local_1c0);
    local_180 = local_140;
    uStack_190 = local_150;
    local_198 = (undefined **)0x9;
    uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1677fe46d8519fedE(&local_198);
                    /* try { // try from 00169304 to 001693ed has its CatchHandler @ 00169460 */
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hc7e2d86a53eff0efE(&local_1c0);
  }
  else {
    if (local_134 == 0) {
                    /* try { // try from 00169413 to 0016941f has its CatchHandler @ 00169445 */
      _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h49bfa966aab963a6E(&local_110);
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hc261e2b7908d5905E(&local_1b8);
      return 0;
    }
    local_188 = (undefined8 **)local_1a8;
    local_198 = (undefined **)CONCAT44(uStack_1b4,local_1b8);
    uStack_190 = (undefined8 *)CONCAT44(uStack_1ac,uStack_1b0);
    local_150 = (undefined8 *)_ZN3std2fs11remove_file17h8950bca4704e1937E(&local_198);
    _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hb3cb1d78c02156cfE
              (&local_150);
    if ((local_134 & 0x7f) != 0) {
                    /* try { // try from 00169431 to 0016943d has its CatchHandler @ 00169460 */
      (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00209b00)
                (&PTR_s_src_uu_install_src_install_rs_002024f8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_1c0 = CONCAT44(local_1c0._4_4_,local_134 >> 8) & 0xffffffff000000ff;
    local_150 = &local_1c0;
    puStack_148 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17h6f30f0a695ff7937E_00209a90
    ;
    local_198 = &PTR_s_strip_process_terminated_abnorma_002024e8;
    uStack_190 = (undefined8 *)0x1;
    local_178 = 0;
    local_180 = 1;
    local_188 = &local_150;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hf9ae0c5a9ad5f899E(&local_128,&local_198);
    uStack_190 = (undefined8 *)CONCAT44(uStack_124,local_128);
    local_180 = local_118;
    local_198 = (undefined **)0x9;
    uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1677fe46d8519fedE(&local_198);
  }
  _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h49bfa966aab963a6E(&local_110);
  return uVar4;
}