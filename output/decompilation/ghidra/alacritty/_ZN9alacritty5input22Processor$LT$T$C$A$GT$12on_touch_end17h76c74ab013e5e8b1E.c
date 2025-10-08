void _ZN9alacritty5input22Processor_LT_T_C_A_GT_12on_touch_end17h76c74ab013e5e8b1E
               (long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  _ZN9alacritty5input22Processor_LT_T_C_A_GT_15on_touch_motion17hf382ca82a44bfd89E();
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13touch_purpose17hfb6ca17d7f1966f0E
            (puVar2);
  switch(*puVar2) {
  case 4:
    break;
  case 5:
    _ZN4core3ptr51drop_in_place_LT_alacritty__event__TouchPurpose_GT_17ha715079efdd062acE(puVar2);
    *puVar2 = 4;
    goto LAB_0055ad1b;
  default:
    lVar11 = puVar2[6];
    if (lVar11 == *(long *)(param_2 + 0x30)) {
      puVar10 = puVar2 + 0xf;
      lVar11 = puVar2[0xe];
      puVar9 = puVar2 + 8;
    }
    else {
      puVar10 = puVar2 + 7;
      puVar9 = puVar2;
    }
    uVar3 = *puVar10;
    uVar1 = *puVar9;
    uVar4 = puVar9[1];
    uVar5 = puVar9[2];
    uVar6 = puVar9[3];
    uVar7 = puVar9[4];
    uVar8 = puVar9[5];
    _ZN4core3ptr51drop_in_place_LT_alacritty__event__TouchPurpose_GT_17ha715079efdd062acE(puVar2);
    *puVar2 = 8;
    puVar2[1] = uVar1;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
    puVar2[4] = uVar6;
    puVar2[5] = uVar7;
    puVar2[6] = uVar8;
    puVar2[7] = lVar11;
    puVar2[8] = uVar3;
    break;
  case 9:
    uVar3 = puVar2[5];
    uVar1 = puVar2[6];
    _ZN4core3ptr51drop_in_place_LT_alacritty__event__TouchPurpose_GT_17ha715079efdd062acE(puVar2);
    *puVar2 = 4;
    _ZN9alacritty5input22Processor_LT_T_C_A_GT_11mouse_moved17hb35e8a462d92119aE
              ((int)uVar3,(int)uVar1,param_1);
    _ZN9alacritty5input22Processor_LT_T_C_A_GT_11mouse_input17h30bea7cf2096a377E(param_1,0,0);
LAB_0055ad1b:
    _ZN9alacritty5input22Processor_LT_T_C_A_GT_11mouse_input17h30bea7cf2096a377E(param_1,1,0);
    return;
  case 10:
    _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6remove17h458f590bc9374091E
              (puVar2 + 1,param_2 + 0x30);
    if (puVar2[4] != 0) {
      return;
    }
  case 6:
  case 8:
    _ZN4core3ptr51drop_in_place_LT_alacritty__event__TouchPurpose_GT_17ha715079efdd062acE(puVar2);
    *puVar2 = 4;
  }
  return;
}