undefined  [16]
_ZN17versions_replacer7replace24replace_versions_in_file17hd2df8f901e71d2fcE
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined auVar3 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined local_58 [16];
  undefined local_48 [16];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  long local_18;
  
  local_58 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17h990a0115cc6ce4a4E
                       ();
  _ZN3std2fs14read_to_string17h0dbd6e5991166611E(&local_30,local_58._0_8_);
  _ZN4eyre7context90__LT_impl_u20_eyre__WrapErr_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_13wrap_err_with17h956695fcc1fb384cE
            (&local_78,&local_30,local_58);
  local_38 = local_68;
                    /* try { // try from 00201698 to 002016a8 has its CatchHandler @ 0020172f */
  (*(code *)
    PTR__ZN17versions_replacer7replace26replace_versions_in_string17h063c15bef42f5705E_003599c8)
            (&local_30,CONCAT44(uStack_6c,uStack_70),local_68,param_3);
  local_68 = local_20;
  local_78 = local_30;
  uStack_74 = uStack_2c;
  uStack_70 = uStack_28;
  uStack_6c = uStack_24;
  if (local_18 != 0) {
                    /* try { // try from 002016da to 002016eb has its CatchHandler @ 00201744 */
    uVar1 = _ZN3std2fs5write17h48952fe712cc9e14E
                      (local_58._0_8_,local_58._8_8_,CONCAT44(uStack_24,uStack_28),local_20);
    lVar2 = _ZN4eyre7context90__LT_impl_u20_eyre__WrapErr_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_13wrap_err_with17h7ae28368aab41094E
                      (uVar1,local_58);
    if (lVar2 != 0) {
      _ZN4core3ptr40drop_in_place_LT_regex__error__Error_GT_17h40176a95864f42c7E(&local_78);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8e8a5cd0dfd373fbE(local_48);
      uVar1 = 1;
      local_18 = lVar2;
      goto LAB_00201724;
    }
  }
  _ZN4core3ptr40drop_in_place_LT_regex__error__Error_GT_17h40176a95864f42c7E(&local_78);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8e8a5cd0dfd373fbE(local_48);
  uVar1 = 0;
LAB_00201724:
  auVar3._8_8_ = local_18;
  auVar3._0_8_ = uVar1;
  return auVar3;
}