ulong _ZN6zoxide3cmd6import8import_z17hf8789239219700b8E
                (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong extraout_RDX;
  undefined auVar4 [16];
  undefined auVar5 [16];
  long local_118;
  ulong local_110;
  undefined local_108 [16];
  long local_f8;
  ulong local_f0;
  long local_e8;
  ulong local_e0;
  byte local_d8 [8];
  ulong local_d0;
  long local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined local_b0 [48];
  undefined2 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined local_68 [48];
  undefined2 local_38;
  
  _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
            (local_68,10,param_2,param_3);
  local_78 = 0;
  local_38 = 0;
  local_70 = param_3;
  auVar4 = _ZN4core3str4iter22SplitInternal_LT_P_GT_14next_inclusive17hb8835bbe8c60b743E(&local_78);
  if (auVar4._0_8_ != 0) {
    do {
      auVar4 = _ZN89__LT_core__str__LinesMap_u20_as_u20_core__ops__function__Fn_LT__LP__RF_str_C__RP__GT__GT_4call17h32b8dbc7f07f5738E
                         (auVar4._0_8_,auVar4._8_8_);
      lVar2 = auVar4._8_8_;
      local_108 = auVar4;
      if (lVar2 != 0) {
        _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
                  (local_b0,0x7c,auVar4._0_8_,lVar2);
        local_c0 = 0;
        local_80 = 1;
        local_c8 = 2;
        local_b8 = lVar2;
        auVar4 = _ZN4core3str4iter22SplitInternal_LT_P_GT_9next_back17h2273d74c4d8f9a95E(&local_c0);
        _ZN6anyhow7context112__LT_impl_u20_anyhow__Context_LT_T_C_core__convert__Infallible_GT__u20_for_u20_core__option__Option_LT_T_GT__GT_12with_context17h2ecddd1f531e1e59E
                  (&local_118,auVar4._0_8_,auVar4._8_8_,local_108);
        if (local_118 == 0) {
          return local_110;
        }
        local_f8 = local_118;
        local_f0 = local_110;
        _ZN4core3num21__LT_impl_u20_u64_GT_16from_ascii_radix17h3a465e09cf2726d1E(&local_118);
        auVar4 = _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h8c1443f3eaf5363eE
                           (&local_118,&local_f8);
        uVar3 = auVar4._8_8_;
        if ((auVar4 & (undefined  [16])0x1) != (undefined  [16])0x0) {
          return uVar3;
        }
        if (local_c8 == 0) {
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar3;
          auVar4 = auVar4 << 0x40;
        }
        else if (local_c8 == 1) {
          local_c8 = 0;
          auVar4 = _ZN4core3str4iter22SplitInternal_LT_P_GT_7get_end17hdd358197edd14f78E(&local_c0);
        }
        else {
          local_c8 = local_c8 + -1;
          auVar4 = _ZN4core3str4iter22SplitInternal_LT_P_GT_9next_back17h2273d74c4d8f9a95E
                             (&local_c0);
        }
        _ZN6anyhow7context112__LT_impl_u20_anyhow__Context_LT_T_C_core__convert__Infallible_GT__u20_for_u20_core__option__Option_LT_T_GT__GT_12with_context17h2ecddd1f531e1e59E
                  (&local_118,auVar4._0_8_,auVar4._8_8_,local_108);
        if (local_118 == 0) {
          return local_110;
        }
        local_e8 = local_118;
        local_e0 = local_110;
        (*(code *)
          PTR__ZN4core3num7dec2flt60__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_f64_GT_8from_str17h05023748d9faa6d2E_0023b910
        )(&local_118,local_118,local_110);
        _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17h033bb80bcdf39c0fE
                  (local_d8,&local_118,&local_e8);
        uVar1 = local_d0;
        if ((local_d8[0] & 1) != 0) {
          return local_d0;
        }
        if (local_c8 == 0) {
          auVar5._8_8_ = 0;
          auVar5._0_8_ = extraout_RDX;
          auVar5 = auVar5 << 0x40;
        }
        else if (local_c8 == 1) {
          local_c8 = 0;
          auVar5 = _ZN4core3str4iter22SplitInternal_LT_P_GT_7get_end17hdd358197edd14f78E(&local_c0);
        }
        else {
          local_c8 = local_c8 + -1;
          auVar5 = _ZN4core3str4iter22SplitInternal_LT_P_GT_9next_back17h2273d74c4d8f9a95E
                             (&local_c0);
        }
        _ZN6anyhow7context112__LT_impl_u20_anyhow__Context_LT_T_C_core__convert__Infallible_GT__u20_for_u20_core__option__Option_LT_T_GT__GT_12with_context17h2ecddd1f531e1e59E
                  (&local_118,auVar5._0_8_,auVar5._8_8_,local_108);
        if (local_118 == 0) {
          return local_110;
        }
        _ZN6zoxide2db63__LT_impl_u20_zoxide__db__ouroboros_impl_database__Database_GT_13add_unchecked17hc55a6d1c0639e47dE
                  (uVar1,param_1,local_118,local_110,uVar3);
      }
      auVar4 = _ZN4core3str4iter22SplitInternal_LT_P_GT_14next_inclusive17hb8835bbe8c60b743E
                         (&local_78);
    } while (auVar4._0_8_ != 0);
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
    _ZN6zoxide2db63__LT_impl_u20_zoxide__db__ouroboros_impl_database__Database_GT_5dedup17hac63854fe676c6b3E
              (param_1);
  }
  return 0;
}