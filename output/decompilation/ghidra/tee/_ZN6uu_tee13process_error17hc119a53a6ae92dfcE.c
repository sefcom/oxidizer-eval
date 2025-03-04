undefined8
_ZN6uu_tee13process_error17hc119a53a6ae92dfcE
          (byte *param_1,undefined8 param_2,long param_3,long *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 **local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_60;
  code *local_58;
  undefined *local_50;
  code *local_48;
  undefined local_40 [16];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined local_28;
  
  local_98 = param_2;
  if (param_1 != (byte *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001b3722. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&DAT_00113afc + *(int *)(&DAT_00113afc + (ulong)*param_1 * 4)))();
    return uVar2;
  }
  cVar1 = _ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE(param_2);
  if (cVar1 != '\v') {
    local_40 = _ZN6uucore9util_name17h60d842bf27b05e82E();
    local_58 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h845947ade0b20afcE;
    local_90 = &DAT_0021f9a8;
    local_88 = 2;
    local_70 = 0;
    local_78 = 1;
    local_80 = &local_60;
    local_60 = (undefined8 *)local_40;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_90);
    local_40._8_8_ = *(undefined8 *)(param_3 + 8);
    uStack_30 = *(undefined4 *)(param_3 + 0x10);
    uStack_2c = *(undefined4 *)(param_3 + 0x14);
    local_40._0_8_ = 0;
    local_28 = 0;
    local_58 = 
    _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
    local_48 = 
    _ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E;
    local_90 = &DAT_0021f9c8;
    local_88 = 3;
    local_70 = 0;
    local_78 = 2;
    local_80 = &local_60;
    local_60 = (undefined8 *)local_40;
    local_50 = (undefined *)&local_98;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_90);
    *param_4 = *param_4 + 1;
    param_2 = local_98;
  }
  _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hb33ceb02c1cf9a1dE(param_2);
  return 0;
}