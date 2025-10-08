void _ZN9meilitool20try_opening_database17h460df49269848c50E(undefined8 *param_1,undefined8 param_2)

{
  char *local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined local_30 [32];
  
  local_90 = "index-stats";
  local_88 = 0xb;
  local_38 = 0;
  local_48 = "index-stats";
  local_40 = 0xb;
  local_50 = param_2;
  _ZN4heed9databases8database49DatabaseOpenOptions_LT_T_C_KC_C_DC_C_C_C_CDUP_GT_4open17h11b30aa68b4a738cE
            (local_30,&local_50);
  _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h3a371485f6d631f6E
            (&local_80,local_30,&local_90);
  if (local_80 == 2) {
    param_1[1] = local_78;
    *param_1 = 1;
    return;
  }
  local_68 = local_80;
  local_60 = local_78;
  local_58 = local_70;
  _ZN6anyhow7context112__LT_impl_u20_anyhow__Context_LT_T_C_core__convert__Infallible_GT__u20_for_u20_core__option__Option_LT_T_GT__GT_12with_context17h1df5b6d649bf8133E
            (param_1,&local_68,&local_90);
  return;
}