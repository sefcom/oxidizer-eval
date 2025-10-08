long _ZN6zoxide2db63__LT_impl_u20_zoxide__db__ouroboros_impl_database__Database_GT_4save17h965acf6a20fff002E
               (long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(char *)(param_1 + 0x38) != '\x01') {
    return 0;
  }
  _ZN6zoxide2db63__LT_impl_u20_zoxide__db__ouroboros_impl_database__Database_GT_9serialize17h481efb032ccf3bd4E
            (&local_38,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  local_20 = local_38;
  local_18 = local_30;
  local_10 = local_28;
  uVar1 = _ZN6zoxide4util5write17hfde126fc3b935f00E(param_1 + 0x18,&local_20);
  lVar2 = _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_7context17h36cd762370f4003eE
                    (uVar1,"could not write to database",0x1b);
  if (lVar2 != 0) {
    return lVar2;
  }
  *(undefined *)(param_1 + 0x38) = 0;
  return 0;
}