long _ZN6zoxide3cmd6import71__LT_impl_u20_zoxide__cmd__Run_u20_for_u20_zoxide__cmd__cmd__Import_GT_3run17h9feaa59faf532f58E
               (long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long local_c0 [3];
  long local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined **local_68;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  _ZN3std2fs14read_to_string17hc14e600540d5b405E(&local_68,param_1);
  _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17ha329fa232b6500ddE
            (&local_a8,&local_68,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  uVar2 = CONCAT44(uStack_9c,local_a0);
  uVar1 = CONCAT44(uStack_94,uStack_98);
  local_c0[0] = local_a8;
                    /* try { // try from 0018f130 to 0018f139 has its CatchHandler @ 0018f25c */
  _ZN6zoxide2db63__LT_impl_u20_zoxide__db__ouroboros_impl_database__Database_GT_4open17ha2e4ec58863e42c6E
            (&local_68);
  lVar3 = local_60;
  if ((int)local_68 != 1) {
    local_70 = local_28;
    local_80 = local_38;
    uStack_7c = uStack_34;
    uStack_78 = uStack_30;
    uStack_74 = uStack_2c;
    local_90 = (undefined4)local_48;
    uStack_8c = local_48._4_4_;
    uStack_88 = uStack_40;
    uStack_84 = uStack_3c;
    local_a0 = (undefined4)local_58;
    uStack_9c = local_58._4_4_;
    uStack_98 = (undefined4)uStack_50;
    uStack_94 = uStack_50._4_4_;
    local_a8 = local_60;
    if ((*(char *)(param_1 + 0x19) == '\0') && (uStack_50 != 0)) {
      local_68 = &PTR_s_current_database_is_not_empty__s_00234900;
      local_60 = 1;
      local_58 = 8;
      uStack_50 = 0;
      local_48 = 0;
      lVar3 = _ZN6anyhow9__private10format_err17h09b344f6a077676aE(&local_68);
    }
    else {
      if (*(char *)(param_1 + 0x18) == '\0') {
        uVar2 = _ZN6zoxide3cmd6import15import_autojump17hec90086a5ec2907eE(&local_a8,uVar2,uVar1);
      }
      else {
                    /* try { // try from 0018f19a to 0018f253 has its CatchHandler @ 0018f271 */
        uVar2 = _ZN6zoxide3cmd6import8import_z17hf8789239219700b8E(&local_a8,uVar2,uVar1);
      }
      lVar3 = _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_7context17h36cd762370f4003eE
                        (uVar2,"import error",0xc);
      if (lVar3 == 0) {
        lVar3 = _ZN6zoxide2db63__LT_impl_u20_zoxide__db__ouroboros_impl_database__Database_GT_4save17h965acf6a20fff002E
                          (&local_a8);
        _ZN4core3ptr66drop_in_place_LT_zoxide__db__ouroboros_impl_database__Database_GT_17h5b6619742b1f1539E
                  (&local_a8);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17he43bec8f5a515731E(local_c0);
        return lVar3;
      }
    }
    _ZN4core3ptr66drop_in_place_LT_zoxide__db__ouroboros_impl_database__Database_GT_17h5b6619742b1f1539E
              (&local_a8);
  }
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17he43bec8f5a515731E(local_c0);
  return lVar3;
}