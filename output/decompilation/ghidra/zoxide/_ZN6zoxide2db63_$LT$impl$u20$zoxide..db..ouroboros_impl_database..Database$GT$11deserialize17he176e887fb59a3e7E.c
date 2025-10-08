void _ZN6zoxide2db63__LT_impl_u20_zoxide__db__ouroboros_impl_database__Database_GT_11deserialize17he176e887fb59a3e7E
               (long *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 extraout_RDX;
  undefined auVar3 [16];
  undefined8 local_c0;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 **local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  int *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined local_40 [24];
  
  local_c0 = 0x2000000;
  auVar3 = _ZN7bincode8internal15serialized_size17hb22fc907dc4f82e9E(&local_c0);
  uVar1 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hafceaa8716aa428bE(auVar3._0_8_,auVar3._8_8_)
  ;
  if (param_3 < uVar1) {
    local_b0 = &PTR_s_could_not_deserialize_database__c_00234af0;
    local_a8 = 1;
    local_a0 = (undefined4 **)0x8;
    local_98 = 0;
    uStack_90 = 0;
    lVar2 = _ZN6anyhow9__private10format_err17h09b344f6a077676aE(&local_b0);
  }
  else {
    _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_18split_at_unchecked17h7a84bcba58f46e1fE
              (&local_60,param_2,param_3,uVar1);
    _ZN7bincode8internal16deserialize_seed17haadefd01c21343c3E
              (&local_b0,local_60,local_58,&local_c0);
    if ((int)local_b0 != 1) {
      if (local_b0._4_4_ == 3) {
        _ZN7bincode8internal16deserialize_seed17h6b6492c86183f11fE
                  (&local_b0,local_50,local_48,&local_c0);
        _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_7context17h239f06cbae04b87dE
                  (&local_80,&local_b0);
        if (local_80 != (int *)0x8000000000000000) {
          *param_1 = (long)local_80;
          param_1[1] = (long)local_78;
          param_1[2] = (long)local_70;
          return;
        }
      }
      else {
        local_b4 = local_b0._4_4_;
        local_80 = &local_b4;
        local_78 = 
        PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_0023b978
        ;
        local_70 = &DAT_00118e14;
        local_68 = 
        PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_0023b978
        ;
        local_b0 = &PTR_s_unsupported_version__got___suppo_00234b00;
        local_a8 = 3;
        uStack_90 = 0;
        local_a0 = &local_80;
        local_98 = 2;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h14192bf0a0209b71E
                  (local_40,0,extraout_RDX,&local_b0);
        local_78 = (undefined *)
                   _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17hc23a566b3b9e9070E
                             (local_40);
      }
      param_1[1] = (long)local_78;
      *param_1 = -0x8000000000000000;
      return;
    }
    lVar2 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17hacc644a7f9a110d3E
                      (local_a8);
  }
  param_1[1] = lVar2;
  *param_1 = -0x8000000000000000;
  return;
}