undefined8 *
_ZN11uu_basename8basename17h5fea76ad93274f11E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined local_f0 [8];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  char local_98 [56];
  undefined local_60 [56];
  
  auVar6._8_8_ = param_3;
  auVar6._0_8_ = param_2;
  auVar5 = _ZN4core3str21__LT_impl_u20_str_GT_16trim_end_matches17hb231c32269780afcE
                     (param_2,param_3);
  if (auVar5._8_8_ != 0) {
    auVar6 = auVar5;
  }
  _ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E(local_f0,auVar6._0_8_,auVar6._8_8_);
                    /* try { // try from 001ab2dd to 001ab3a7 has its CatchHandler @ 001ab3e4 */
  _ZN3std4path4Path10components17h4f3217acf0fc8653E(&local_d8,local_e8,local_e0);
  local_60[0] = 10;
  _ZN4core4iter6traits8iterator8Iterator4fold17h49107edc7661eb2fE(local_98,&local_d8,local_60);
  if (local_98[0] == '\n') {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
  }
  else {
    uVar3 = _ZN3std4path9Component9as_os_str17hd2d726e30ab45bf9E(local_98);
    _ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17h660bab9c45707695E
              (&local_d8,uVar3);
    uVar3 = local_c8;
    if (CONCAT44(uStack_d4,local_d8) != 0) {
                    /* try { // try from 001ab3d7 to 001ab3e3 has its CatchHandler @ 001ab3e4 */
      uVar3 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_DAT_0020eaf0);
                    /* catch() { ... } // from try @ 001ab2dd with catch @ 001ab3e4
                       catch() { ... } // from try @ 001ab3d7 with catch @ 001ab3e4 */
                    /* try { // try from 001ab3e7 to 001ab3f0 has its CatchHandler @ 001ab3f9 */
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h9a5db94baa57db22E(local_f0);
      puVar4 = (undefined8 *)_Unwind_Resume(uVar3);
      return puVar4;
    }
    uVar1 = CONCAT44(uStack_cc,uStack_d0);
    auVar5._8_8_ = local_c8;
    auVar5._0_8_ = uVar1;
    cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hff29a2f68c8cbe60E
                      (uVar1,local_c8,param_4,param_5);
    if (cVar2 == '\0') {
      auVar6 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_suffix_of17h989ea700a39d3e29E
                         (param_4,param_5,uVar1,uVar3);
      if (auVar6._0_8_ != 0) {
        auVar5 = auVar6;
      }
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17hc3b515191c06e2adE
                (&local_d8,auVar5._0_8_,auVar5._8_8_);
    }
    else {
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17hc3b515191c06e2adE
                (&local_d8,uVar1,uVar3);
    }
    param_1[2] = local_c8;
    *(undefined4 *)param_1 = local_d8;
    *(undefined4 *)((long)param_1 + 4) = uStack_d4;
    *(undefined4 *)(param_1 + 1) = uStack_d0;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_cc;
  }
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h9a5db94baa57db22E(local_f0);
  return param_1;
}