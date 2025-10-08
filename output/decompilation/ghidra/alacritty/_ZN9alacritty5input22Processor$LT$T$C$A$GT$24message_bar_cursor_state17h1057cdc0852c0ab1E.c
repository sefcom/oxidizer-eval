char _ZN9alacritty5input22Processor_LT_T_C_A_GT_24message_bar_cursor_state17h1057cdc0852c0ab1E
               (long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  byte bVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long local_80;
  ulong local_78;
  float local_64;
  float local_5c;
  undefined local_58 [40];
  
  bVar4 = _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13search_active17hab11a215551a244eE
                    (*(undefined8 *)(param_1 + 0x68));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_9size_info17h75f6d6cd23dc8329E
            (&local_80);
  uVar9 = (long)local_5c >> 0x3f & (long)(local_5c - DAT_001ec664) | (long)local_5c;
  if (local_5c < 0.0) {
    uVar9 = 0;
  }
  if (DAT_001ec668 < local_5c) {
    uVar9 = 0xffffffffffffffff;
  }
  uVar8 = (long)local_64 >> 0x3f & (long)(local_64 - DAT_001ec664) | (long)local_64;
  if (local_64 < 0.0) {
    uVar8 = 0;
  }
  if (DAT_001ec668 < local_64) {
    uVar8 = 0xffffffffffffffff;
  }
  lVar2 = *(long *)(param_1 + 0x18);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
            (lVar2);
  lVar6 = *(long *)(param_1 + 8);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_12terminal_mut17ha68c2ba7b3d97983E
            (lVar6);
  uVar3 = *(undefined8 *)(lVar6 + 200);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
            (lVar2);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_9size_info17h75f6d6cd23dc8329E
            (local_58,uVar1);
  lVar6 = _ZN9alacritty5event5Mouse5point17h7553a37268becc3aE
                    (*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28),local_58,uVar3);
  lVar7 = _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_7message17h48f4201a3b3c594dE
                    (*(undefined8 *)(param_1 + 0x38));
  cVar5 = '$';
  if (lVar7 != 0) {
    uVar9 = ((ulong)bVar4 + local_80) * uVar8 + uVar9;
    if (uVar9 < *(ulong *)(lVar2 + 0x28)) {
      if (uVar9 + uVar8 < *(ulong *)(lVar2 + 0x28)) {
        cVar5 = '\0';
      }
      else {
        cVar5 = (local_78 <= lVar6 + 3U) * '\x03';
      }
    }
  }
  return cVar5;
}