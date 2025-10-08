void _ZN6zoxide4util6rename17hf35ce6b72c32e43bE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  lVar1 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17h08b3da5308d0badbE();
  uVar3 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17h4cd980ea14f59bb6E
                    (param_2,param_3);
  lVar4 = _ZN3std2fs6rename17ha1c7642cfecfcafeE(lVar1,extraout_RDX,uVar3,extraout_RDX_00);
  if (lVar4 != 0) {
    cVar2 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(lVar4);
    if (cVar2 != '\x01') goto LAB_001933a6;
    local_48 = lVar4;
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hc0a90eb9fb31b0c2E(&local_48);
    lVar4 = _ZN3std2fs6rename17ha1c7642cfecfcafeE(lVar1,extraout_RDX,uVar3,extraout_RDX_00);
    if (lVar4 != 0) {
      _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(lVar4);
      goto LAB_001933a6;
    }
  }
  lVar4 = 0;
LAB_001933a6:
  local_48 = lVar1;
  local_40 = extraout_RDX;
  local_38 = uVar3;
  local_30 = extraout_RDX_00;
  _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h6779511d8a431032E
            (lVar4,&local_48);
  return;
}