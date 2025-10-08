void _ZN9alacritty5input22Processor_LT_T_C_A_GT_11mouse_input17h30bea7cf2096a377E
               (long param_1,char param_2,uint param_3,undefined4 param_4)

{
  undefined8 uVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined auStack_58 [40];
  
  if ((short)param_3 == 0) {
    lVar8 = *(long *)(param_1 + 0x18);
    _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
              (lVar8);
    *(char *)(lVar8 + 0x34) = param_2;
    cVar2 = _ZN9alacritty5input22Processor_LT_T_C_A_GT_24message_bar_cursor_state17h1057cdc0852c0ab1E
                      (param_1);
  }
  else {
    if ((param_3 & 0xffff) == 1) {
      lVar8 = *(long *)(param_1 + 0x18);
      _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
                (lVar8);
      *(char *)(lVar8 + 0x36) = param_2;
    }
    else if ((param_3 & 0xffff) == 2) {
      lVar8 = *(long *)(param_1 + 0x18);
      _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
                (lVar8);
      *(char *)(lVar8 + 0x35) = param_2;
      cVar2 = _ZN9alacritty5input22Processor_LT_T_C_A_GT_24message_bar_cursor_state17h1057cdc0852c0ab1E
                        (param_1);
      goto joined_r0x0055afaf;
    }
    cVar2 = _ZN9alacritty5input22Processor_LT_T_C_A_GT_24message_bar_cursor_state17h1057cdc0852c0ab1E
                      (param_1);
  }
joined_r0x0055afaf:
  if (cVar2 == '\x03') {
    if (param_2 == '\0') {
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_9size_info17h75f6d6cd23dc8329E
                (auStack_58,uVar1);
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      uVar4 = _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_7message17h48f4201a3b3c594dE
                        (uVar6);
      uVar5 = _ZN4core6option15Option_LT_T_GT_6map_or17h79f8debf1d8849b2E(uVar4,auStack_58);
      uVar4 = *(undefined8 *)(param_1 + 8);
      _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_15clear_selection17h2f28545a903d1aa1E
                (uVar4,*(undefined8 *)(param_1 + 0x78));
      _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_11pop_message17h6034976c9c1b5621E
                (uVar1,uVar6);
      uVar6 = _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_7message17h48f4201a3b3c594dE
                        (uVar6);
      uVar7 = _ZN4core6option15Option_LT_T_GT_6map_or17h79f8debf1d8849b2E(uVar6,auStack_58);
      if (uVar7 < uVar5 == uVar5 < uVar7) {
        cVar2 = '\x03';
        lVar8 = _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_6window17hc2466ca785044c59E
                          (uVar1);
        if (*(char *)(lVar8 + 0xf5) == '\x03') {
          return;
        }
      }
      else if ((char)((uVar7 < uVar5) - (uVar5 < uVar7)) == '\x01') {
        bVar3 = _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_10mouse_mode17h5645ae47cef353d4E
                          (uVar4);
        cVar2 = (bVar3 ^ 1) << 3;
        lVar8 = _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_6window17hc2466ca785044c59E
                          (uVar1);
        if (cVar2 == *(char *)(lVar8 + 0xf5)) {
          return;
        }
      }
      else {
        cVar2 = '\0';
        lVar8 = _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_6window17hc2466ca785044c59E
                          (uVar1);
        if (*(char *)(lVar8 + 0xf5) == '\0') {
          return;
        }
      }
      *(char *)(lVar8 + 0xf5) = cVar2;
      _ZN5winit6window6Window10set_cursor17h058b386c12dba32cE
                (*(undefined8 *)(lVar8 + 0x20),*(undefined8 *)(lVar8 + 0x28),cVar2);
      return;
    }
  }
  else if (param_2 == '\0') {
    _ZN9alacritty5input22Processor_LT_T_C_A_GT_14on_mouse_press17hb0b3ff8166bd0e60E
              (param_1,param_3,param_4);
    _ZN9alacritty5input22Processor_LT_T_C_A_GT_22process_mouse_bindings17hcb4c2767c9cc745fE
              (param_1,param_3,param_4);
    return;
  }
  _ZN9alacritty5input22Processor_LT_T_C_A_GT_16on_mouse_release17hac8a1c7846717501E(param_1,param_3)
  ;
  return;
}