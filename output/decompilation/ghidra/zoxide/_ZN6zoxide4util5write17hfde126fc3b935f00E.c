long _ZN6zoxide4util5write17hfde126fc3b935f00E(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined local_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  undefined local_40 [16];
  
  local_40 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17h08b3da5308d0badbE
                       ();
  uVar5 = local_40._8_8_;
  uVar4 = local_40._0_8_;
  uVar1 = param_2[1];
  auVar6 = _ZN105__LT_std__ffi__os_str__OsString_u20_as_u20_core__ops__index__Index_LT_core__ops__range__RangeFull_GT__GT_5index17h273e9513d8eb0763E
                     (uVar1,param_2[2]);
                    /* try { // try from 00192d8c to 00192dad has its CatchHandler @ 00192e7f */
  lVar3 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_0023b990)(uVar4,uVar5);
  if (lVar3 == 0) {
                    /* try { // try from 00192e48 to 00192e54 has its CatchHandler @ 00192e7f */
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_0023b7b0)
              (&PTR_s_src_util_rs_00234bc8);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  _ZN6zoxide4util7tmpfile17h1fc190374b8e79deE(local_70,lVar3);
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = local_70._8_8_;
  uStack_58 = local_40;
                    /* try { // try from 00192def to 00192df8 has its CatchHandler @ 00192e57 */
  local_60 = &local_88;
  local_70 = auVar6;
  lVar3 = _ZN6zoxide4util5write28__u7b__u7b_closure_u7d__u7d_17hb8a2a97235f5d2d5E(local_70);
  local_48 = lVar3;
  if (lVar3 != 0) {
                    /* try { // try from 00192e06 to 00192e1c has its CatchHandler @ 00192e5c */
    uVar4 = _ZN3std2fs11remove_file17ha6d2497cc4d67d74E(&local_88);
    local_70._0_8_ = uVar4;
    _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h29a4fc21488b4033E
              (local_70);
  }
  _ZN4core3mem4drop17h8efcdb4578edbe7fE(local_88,CONCAT44(uStack_7c,local_80));
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h3a7e22f11fe542c0E(*param_2,uVar1);
  return lVar3;
}