void _ZN9alacritty5input22Processor_LT_T_C_A_GT_14on_mouse_press17hb0b3ff8166bd0e60E
               (long param_1,ushort param_2,short param_3)

{
  byte *pbVar1;
  long lVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  undefined auVar7 [12];
  undefined local_58 [40];
  
  pbVar1 = *(byte **)(param_1 + 0x28);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_19inline_search_state17h7eeec55d722ca445E
            (pbVar1);
  if ((*pbVar1 & 4) == 0) {
    cVar4 = _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_10mouse_mode17h5645ae47cef353d4E
                      (*(undefined8 *)(param_1 + 8));
    if (cVar4 != '\0') {
      lVar2 = *(long *)(param_1 + 0x18);
      _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
                (lVar2);
      *(undefined *)(lVar2 + 0x3b) = 0;
                    /* WARNING: Could not recover jumptable at 0x00559af7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_001f2b68 + *(int *)(&DAT_001f2b68 + (ulong)param_2 * 4)))();
      return;
    }
  }
  auVar6 = (*(code *)PTR__ZN3std4time7Instant3now17h767314cc8c6c5886E_009de3e8)();
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
            (puVar3);
  auVar7 = (*(code *)
             PTR__ZN60__LT_std__time__Instant_u20_as_u20_core__ops__arith__Sub_GT_3sub17h58e97276508fd021E_009de400
           )(auVar6._0_8_,auVar6._8_8_ & 0xffffffff,*puVar3,*(undefined4 *)(puVar3 + 1));
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
            (puVar3);
  *puVar3 = auVar6._0_8_;
  *(int *)(puVar3 + 1) = auVar6._8_4_;
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
            (puVar3);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
            (puVar3);
  if ((param_2 == *(ushort *)(puVar3 + 6)) &&
     ((param_2 != 5 || (param_3 == *(short *)((long)puVar3 + 0x32))))) {
    if (*(char *)((long)puVar3 + 0x3b) == '\x01') {
      cVar4 = (auVar7._8_4_ < 400000000 && auVar7._0_8_ == 0) + '\x01';
    }
    else {
      cVar4 = '\x01';
      if (*(char *)((long)puVar3 + 0x3b) == '\x02') {
        cVar4 = (auVar7._8_4_ < 400000000 && auVar7._0_8_ == 0) * '\x02' + '\x01';
      }
    }
  }
  else {
    _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
              (puVar3);
    *(ushort *)(puVar3 + 6) = param_2;
    *(short *)((long)puVar3 + 0x32) = param_3;
    cVar4 = '\x01';
  }
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
            (puVar3);
  *(char *)((long)puVar3 + 0x3b) = cVar4;
  lVar2 = *(long *)(param_1 + 8);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_12terminal_mut17ha68c2ba7b3d97983E
            (lVar2);
  uVar5 = *(undefined8 *)(lVar2 + 200);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
            (puVar3);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_9size_info17h75f6d6cd23dc8329E
            (local_58,*(undefined8 *)(param_1 + 0x30));
  uVar5 = _ZN9alacritty5event5Mouse5point17h7553a37268becc3aE(puVar3[4],puVar3[5],local_58,uVar5);
  if (param_2 != 0) {
    return;
  }
  _ZN9alacritty5input22Processor_LT_T_C_A_GT_13on_left_click17h80b65c175310b8cbE(param_1,uVar5);
  return;
}