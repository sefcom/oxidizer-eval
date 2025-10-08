long _ZN6zoxide3cmd5query41__LT_impl_u20_zoxide__cmd__cmd__Query_GT_11query_first17h2951b26d66defb32E
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  undefined auVar7 [16];
  undefined8 local_98;
  ulong *local_90;
  code *local_88;
  ulong local_80;
  undefined8 local_78;
  long local_70;
  undefined4 local_68;
  undefined *local_60;
  undefined8 local_58;
  ulong **local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_98 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_0023b900)();
  uVar3 = _ZN6zoxide2db6stream6Stream4next17hb1d09a39dbd63cecE(param_2);
  auVar7 = _ZN6anyhow7context112__LT_impl_u20_anyhow__Context_LT_T_C_core__convert__Infallible_GT__u20_for_u20_core__option__Option_LT_T_GT__GT_7context17h633182c7939166caE
                     (uVar3,"no match found",0xe);
  local_70 = auVar7._8_8_;
  if ((auVar7 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    do {
      cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h070d08ab5346a901E
                        (*(undefined8 *)(local_70 + 8),*(undefined8 *)(local_70 + 0x10),uVar3,uVar1)
      ;
      if (cVar2 == '\0') {
        bVar6 = *(char *)(param_1 + 0x4b) != '\0';
        if (bVar6) {
          local_78 = param_3;
        }
        local_80 = (ulong)bVar6;
        local_68 = 0x20;
        local_90 = &local_80;
        local_88 = 
        _ZN66__LT_zoxide__db__dir__DirDisplay_u20_as_u20_core__fmt__Display_GT_3fmt17h4918ffab7531bc79E
        ;
        local_60 = &DAT_00234950;
        local_58 = 2;
        local_40 = 0;
        local_50 = &local_90;
        local_48 = 1;
        uVar3 = (*(code *)
                  PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_9write_fmt17h3907d576e608aa2aE_0023b920
                )(&local_98,&local_60);
        lVar5 = _ZN113__LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__u20_as_u20_zoxide__error__BrokenPipeHandler_GT_9pipe_exit17ha3034502edd4f0bbE
                          (uVar3,"stdout",6);
        return lVar5;
      }
      uVar4 = _ZN6zoxide2db6stream6Stream4next17hb1d09a39dbd63cecE(param_2);
      auVar7 = _ZN6anyhow7context112__LT_impl_u20_anyhow__Context_LT_T_C_core__convert__Infallible_GT__u20_for_u20_core__option__Option_LT_T_GT__GT_7context17h633182c7939166caE
                         (uVar4,"you are already in the only match",0x21);
      local_70 = auVar7._8_8_;
    } while ((auVar7 & (undefined  [16])0x1) == (undefined  [16])0x0);
  }
  return local_70;
}