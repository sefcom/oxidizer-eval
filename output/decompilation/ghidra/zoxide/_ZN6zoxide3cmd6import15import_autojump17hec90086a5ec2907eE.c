undefined8
_ZN6zoxide3cmd6import15import_autojump17hec90086a5ec2907eE
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  int local_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined local_b8 [16];
  undefined local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined local_88 [48];
  undefined2 local_58;
  undefined local_50 [32];
  
  _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
            (local_88,10,param_2,param_3);
  local_98 = 0;
  local_58 = 0;
  local_90 = param_3;
  auVar3 = _ZN4core3str4iter22SplitInternal_LT_P_GT_14next_inclusive17hb8835bbe8c60b743E(&local_98);
  if (auVar3._0_8_ != 0) {
    do {
      auVar3 = _ZN89__LT_core__str__LinesMap_u20_as_u20_core__ops__function__Fn_LT__LP__RF_str_C__RP__GT__GT_4call17h32b8dbc7f07f5738E
                         (auVar3._0_8_,auVar3._8_8_);
      local_b8 = auVar3;
      if (auVar3._8_8_ != 0) {
        _ZN4core3str21__LT_impl_u20_str_GT_10split_once17h949c65ff205b16daE(local_50,auVar3._0_8_);
        _ZN6anyhow7context112__LT_impl_u20_anyhow__Context_LT_T_C_core__convert__Infallible_GT__u20_for_u20_core__option__Option_LT_T_GT__GT_12with_context17h7873a399563cc2cbE
                  (&local_d8,local_50,local_b8);
        uVar2 = local_c0;
        uVar1 = local_c8;
        if (CONCAT44(uStack_d4,local_d8) == 0) {
          return local_d0;
        }
        local_a0 = local_d0;
        (*(code *)
          PTR__ZN4core3num7dec2flt60__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_f64_GT_8from_str17h05023748d9faa6d2E_0023b910
        )(local_50);
        _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h033bb80bcdf39c0fE
                  (&local_d8,local_50,local_a8);
        if (local_d8 == 1) {
          return local_d0;
        }
        _ZN6zoxide3cmd6import7sigmoid17h4104d738136ae795E(local_d0);
        _ZN6zoxide2db63__LT_impl_u20_zoxide__db__ouroboros_impl_database__Database_GT_13add_unchecked17hc55a6d1c0639e47dE
                  (param_1,uVar1,uVar2,0);
      }
      auVar3 = _ZN4core3str4iter22SplitInternal_LT_P_GT_14next_inclusive17hb8835bbe8c60b743E
                         (&local_98);
    } while (auVar3._0_8_ != 0);
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
    _ZN6zoxide2db63__LT_impl_u20_zoxide__db__ouroboros_impl_database__Database_GT_5dedup17hac63854fe676c6b3E
              (param_1);
  }
  return 0;
}