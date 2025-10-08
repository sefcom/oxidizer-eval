void _ZN9alacritty5input8keyboard58__LT_impl_u20_alacritty__input__Processor_LT_T_C_A_GT__GT_18reset_search_delay17hb32f71b378a2c014E
               (long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int local_108 [56];
  undefined8 local_28;
  undefined4 local_20;
  
  cVar1 = _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13search_active17hab11a215551a244eE
                    (*(undefined8 *)(param_1 + 0x68));
  if (cVar1 != '\0') {
    uVar2 = _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_6window17hc2466ca785044c59E
                      (*(undefined8 *)(param_1 + 0x30));
    uVar3 = _ZN9alacritty7display6window6Window2id17h395f89524db74bebE(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
              (uVar2);
    _ZN9alacritty9scheduler9Scheduler10unschedule17h47626c0d73e9c11fE(local_108,uVar2,uVar3,1);
    if (local_108[0] != 2) {
      _ZN9alacritty9scheduler9Scheduler8schedule17hb60357d8e26bddb3E
                (uVar2,local_108,0,500000000,0,local_28,local_20);
      return;
    }
    _ZN4core3ptr76drop_in_place_LT_core__option__Option_LT_alacritty__scheduler__Timer_GT__GT_17h4830a0e7a5b3781aE
              (local_108);
  }
  return;
}