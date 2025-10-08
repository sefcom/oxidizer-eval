void _ZN9alacritty5input22Processor_LT_T_C_A_GT_12mouse_report17hed04f95cad75d625E
               (undefined8 *param_1,char param_2,char param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  uint *puVar5;
  byte bVar6;
  ulong uVar7;
  undefined auVar8 [16];
  undefined local_58 [40];
  
  lVar2 = param_1[1];
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_12terminal_mut17ha68c2ba7b3d97983E
            (lVar2);
  uVar3 = *(undefined8 *)(lVar2 + 200);
  lVar4 = param_1[3];
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
            (lVar4);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_9size_info17h75f6d6cd23dc8329E
            (local_58,param_1[6]);
  auVar8 = _ZN9alacritty5event5Mouse5point17h7553a37268becc3aE
                     (*(undefined8 *)(lVar4 + 0x20),*(undefined8 *)(lVar4 + 0x28),local_58,uVar3);
  if (auVar8._8_4_ < 0) {
    return;
  }
  uVar7 = auVar8._8_8_ & 0xffffffff;
  puVar5 = (uint *)param_1[5];
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_19inline_search_state17h7eeec55d722ca445E
            (puVar5);
  uVar1 = *puVar5;
  bVar6 = (byte)uVar1;
  bVar6 = bVar6 >> 1 & 0x10 | (byte)(uVar1 >> 5) & 8 | bVar6 & 4;
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_12terminal_mut17ha68c2ba7b3d97983E
            (lVar2);
  if ((*(byte *)(lVar2 + 0x6dc) & 0x20) == 0) {
    if (param_3 == '\0') {
      bVar6 = bVar6 + param_2;
    }
    else {
      bVar6 = bVar6 | 3;
    }
    _ZN9alacritty5input22Processor_LT_T_C_A_GT_19normal_mouse_report17hbfc2b27746782bc2E
              (*param_1,lVar2,auVar8._0_8_,uVar7,bVar6);
    return;
  }
  _ZN9alacritty5input22Processor_LT_T_C_A_GT_16sgr_mouse_report17h6feeb7c04a7ac1edE
            (*param_1,auVar8._0_8_,uVar7,bVar6 + param_2,param_3);
  return;
}