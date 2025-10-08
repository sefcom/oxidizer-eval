void _ZN9alacritty6config6window12WindowConfig10dimensions17haf3977d8823bad6dE
               (undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  bool bVar2;
  long local_b8;
  char *local_b0;
  long local_a8;
  char *local_a0;
  long local_98;
  char *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  code *local_60;
  undefined8 *local_58;
  code *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined **local_38;
  undefined8 local_30;
  undefined8 **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_2 != 0 && param_3 != 0) {
    param_1[1] = param_2;
    param_1[2] = param_3;
    *param_1 = 1;
    return;
  }
  if (param_3 != 0 || param_2 != 0) {
    bVar2 = param_3 == 0;
    local_a0 = "lines";
    local_b0 = "columns";
    if (bVar2) {
      local_b0 = "lines";
    }
    local_a8 = (ulong)!bVar2 * 2 + 5;
    if (bVar2) {
      local_a0 = "columns";
    }
    local_98 = (ulong)bVar2 * 2 + 5;
    local_b8 = param_2;
    if (!bVar2) {
      local_b8 = param_3;
    }
    uVar1 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
    if (1 < uVar1) {
      local_68 = &local_b0;
      local_60 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hde322f69d68256c4E;
      local_58 = &local_a0;
      local_50 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hde322f69d68256c4E;
      local_40 = 
      PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_009de578
      ;
      local_38 = &PTR_DAT_00981b80;
      local_30 = 3;
      local_18 = 0;
      local_28 = &local_68;
      local_20 = 3;
      local_48 = (undefined *)&local_b8;
      local_70 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                           (&PTR_DAT_00981bb0);
      local_90 = "alacritty_config_derive";
      local_88 = 0x17;
      local_80 = &DAT_002019da;
      local_78 = 0x19;
      _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_38,2,&local_90);
    }
    *param_1 = 0;
    return;
  }
  *param_1 = 0;
  return;
}