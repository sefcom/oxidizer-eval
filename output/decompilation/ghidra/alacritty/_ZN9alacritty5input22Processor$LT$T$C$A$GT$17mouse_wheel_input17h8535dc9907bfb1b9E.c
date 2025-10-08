void _ZN9alacritty5input22Processor_LT_T_C_A_GT_17mouse_wheel_input17h8535dc9907bfb1b9E
               (long param_1,int *param_2,char param_3)

{
  float fVar1;
  float fVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte bVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  uint local_78;
  undefined4 local_58;
  undefined local_48 [24];
  float local_30;
  float local_2c;
  
  lVar6 = *(long *)(param_1 + 0x40);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_6config17h316f4bbf9a336606E
            (lVar6);
  bVar5 = *(byte *)(lVar6 + 0x414);
  if (*param_2 != 1) {
    fVar1 = (float)param_2[1];
    fVar2 = (float)param_2[2];
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_9size_info17h75f6d6cd23dc8329E
              (local_48,uVar4);
    _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_9size_info17h75f6d6cd23dc8329E
              (local_48,uVar4);
    local_58 = SUB84((double)(fVar1 * local_30),0);
    local_78 = SUB84((double)(fVar2 * local_2c),0);
LAB_0055a0ba:
    _ZN9alacritty5input22Processor_LT_T_C_A_GT_15scroll_terminal17h19a40c0c4c7b1806E
              (local_58,local_78,SUB84((double)bVar5,0),param_1);
    return;
  }
  if (param_3 == '\0') {
    lVar6 = *(long *)(param_1 + 0x18);
    _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
              (lVar6);
    *(undefined8 *)(lVar6 + 0x10) = 0;
    *(undefined8 *)(lVar6 + 0x18) = 0;
  }
  else if (param_3 == '\x01') {
    uVar3 = *(ulong *)(param_2 + 2);
    uVar4 = *(undefined8 *)(param_2 + 4);
    dVar8 = (double)(_DAT_001e7800 & uVar3);
    dVar7 = (double)(*(code *)PTR_hypot_009dfed8)();
    dVar8 = dVar8 / dVar7;
    local_58 = (undefined4)uVar3;
    local_78 = (uint)uVar4;
    local_78 = ~-(uint)(DAT_001eab08 < dVar8) & local_78;
    if (dVar8 <= DAT_001eab08) {
      local_58 = 0;
    }
    goto LAB_0055a0ba;
  }
  return;
}