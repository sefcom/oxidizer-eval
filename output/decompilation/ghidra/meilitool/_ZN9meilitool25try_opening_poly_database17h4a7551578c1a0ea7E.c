void _ZN9meilitool25try_opening_poly_database17h4a7551578c1a0ea7E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined local_30 [32];
  
  local_38 = 0;
  local_90 = param_4;
  local_88 = param_5;
  local_50 = param_2;
  local_48 = param_4;
  local_40 = param_5;
  _ZN4heed9databases8database49DatabaseOpenOptions_LT_T_C_KC_C_DC_C_C_C_CDUP_GT_4open17h11b30aa68b4a738cE
            (local_30,&local_50);
  _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h295663b12cbefc24E
            (&local_80,local_30,&local_90);
  if (local_80 == 2) {
    param_1[1] = local_78;
    *param_1 = 1;
    return;
  }
  local_68 = local_80;
  local_60 = local_78;
  local_58 = local_70;
  _ZN6anyhow7context112__LT_impl_u20_anyhow__Context_LT_T_C_core__convert__Infallible_GT__u20_for_u20_core__option__Option_LT_T_GT__GT_12with_context17hfcc97a48e1e4c480E
            (param_1,&local_68,&local_90);
  return;
}