uint _ZN5uu_ls21extract_quoting_style17hfd0cceb62d68e819E(undefined8 param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined local_100 [8];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  code *local_50;
  undefined local_48 [32];
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h7f0bb7fe0c729ea9E
            (&local_f8,param_1,anon_3f7e092f2ea554bdd060175bd8ea63d9_14_llvm_16502254941234113161,
             0xd);
  lVar3 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hac05afd0923194a9E
                    (anon_3f7e092f2ea554bdd060175bd8ea63d9_14_llvm_16502254941234113161,0xd,
                     &local_f8);
  if (lVar3 != 0) {
    uVar2 = _ZN5uu_ls24match_quoting_style_name17h6db1b7024e711c4aE
                      (*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10),param_2 & 0xff);
    uVar4 = uVar2 >> 0x10;
    if ((uVar4 & 0xff) == 4) {
      local_f8 = &PTR_DAT_00312320;
      uStack_f0 = 1;
      local_e8 = (undefined8 *)local_100;
      local_e0 = 0;
      uStack_d8 = 0;
                    /* WARNING: Subroutine does not return */
      _ZN4core9panicking9panic_fmt17he12d0d7468628bb4E(&local_f8,&PTR_DAT_00312360);
    }
    param_2 = uVar2 >> 8;
    goto LAB_0021f9c3;
  }
  cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_1,&anon_9938bf1084d6f67f99da587aeb78cfa9_29_llvm_7263189302602752264,7);
  if (cVar1 != '\0') {
LAB_0021f99e:
    uVar4 = 3;
    uVar2 = param_2;
    goto LAB_0021f9c3;
  }
  cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_1,&anon_9938bf1084d6f67f99da587aeb78cfa9_28_llvm_7263189302602752264,6);
  if (cVar1 != '\0') {
    uVar4 = 2;
    uVar2 = 0;
    goto LAB_0021f9c3;
  }
  cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_1,anon_9938bf1084d6f67f99da587aeb78cfa9_30_llvm_7263189302602752264,10);
  if (cVar1 != '\0') {
    uVar2 = 2;
    uVar4 = 2;
    goto LAB_0021f9c3;
  }
  cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_1,&anon_3f7e092f2ea554bdd060175bd8ea63d9_38_llvm_16502254941234113161,5);
  if (cVar1 != '\0') goto LAB_0021f99e;
  _ZN3std3env3var17hc35b8d22aa896d90E(&local_c8,&DAT_00134e1c,0xd);
  if (local_c8 == 0) {
    local_a8 = local_c0;
    uStack_a4 = uStack_bc;
    uStack_a0 = uStack_b8;
    uStack_9c = uStack_b4;
    local_98 = local_b0;
                    /* try { // try from 0021fa9a to 0021fac1 has its CatchHandler @ 0021fc65 */
    uVar2 = _ZN5uu_ls24match_quoting_style_name17h6db1b7024e711c4aE
                      (CONCAT44(uStack_b4,uStack_b8),local_b0,param_2 & 0xff);
    uVar4 = uVar2 >> 0x10;
    if ((uVar4 & 0xff) != 4) {
                    /* try { // try from 0021fb19 to 0021fb22 has its CatchHandler @ 0021fc4e */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_a8);
      param_2 = uVar2 >> 8;
      if (local_c8 != 0) {
        _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h586f11e1c15586f9E
                  (&local_c8);
      }
      goto LAB_0021f9c3;
    }
    _ZN3std3env4args17hcc0787e3c3e9e7bbE(local_48);
                    /* try { // try from 0021fac2 to 0021fb04 has its CatchHandler @ 0021fc53 */
    _ZN73__LT_std__env__Args_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6e31a9487ed13e72E
              (&local_68,local_48);
    if (local_68 == (undefined4 *)0x8000000000000000) {
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h09d6369a280ff05aE
                (&local_f8,&DAT_00134dd7,2);
      local_78 = local_e8;
      local_88 = (undefined4)local_f8;
      uStack_84 = local_f8._4_4_;
      uStack_80 = (undefined4)uStack_f0;
      uStack_7c = uStack_f0._4_4_;
    }
    else {
      local_78 = local_58;
      local_88 = (undefined4)local_68;
      uStack_84 = local_68._4_4_;
      uStack_80 = (undefined4)uStack_60;
      uStack_7c = uStack_60._4_4_;
    }
    local_68 = &local_88;
    uStack_60 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
    local_58 = (undefined8 *)&local_a8;
    local_50 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
    local_f8 = (undefined **)&DAT_00312330;
    uStack_f0 = 3;
    uStack_d8 = 0;
    local_e0 = 2;
                    /* try { // try from 0021fbc3 to 0021fbcd has its CatchHandler @ 0021fc3c */
    local_e8 = &local_68;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_f8);
                    /* try { // try from 0021fbce to 0021fbda has its CatchHandler @ 0021fc53 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_88);
                    /* try { // try from 0021fbdb to 0021fbe7 has its CatchHandler @ 0021fc65 */
    _ZN4core3ptr35drop_in_place_LT_std__env__Args_GT_17hab4f1d7d806d6c4aE(local_48);
                    /* try { // try from 0021fbe8 to 0021fbf1 has its CatchHandler @ 0021fc4e */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_a8);
    if (local_c8 != 0) goto LAB_0021fa44;
  }
  else {
LAB_0021fa44:
    _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h586f11e1c15586f9E
              (&local_c8);
  }
  local_f8 = (undefined **)_ZN3std2io5stdio6stdout17h077da66234850927E();
  cVar1 = _ZN3std3sys3pal4unix2io11is_terminal17hd2a7310729156a1eE(&local_f8);
  uVar2 = 1;
  if (cVar1 == '\0') {
    uVar2 = param_2 & 0xff;
  }
  uVar4 = 3;
  if (cVar1 != '\0') {
    uVar4 = param_2 & 0xff;
  }
  param_2 = 0;
LAB_0021f9c3:
  return uVar2 & 0xff | (param_2 & 0xff) << 8 | (uVar4 & 0xff) << 0x10;
}