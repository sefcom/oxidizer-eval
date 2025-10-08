void _ZN3bat5theme12choose_theme17h83cf2693913a544fE
               (undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_3 != 0) {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 10);
    uVar1 = param_2[7];
    uVar2 = param_2[8];
    uVar3 = param_2[9];
    *param_1 = param_2[6];
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    _ZN4core3ptr48drop_in_place_LT_bat__theme__ThemePreference_GT_17hfb4cca19abe9b034E
              (param_2 + 0xc);
    _ZN4core3ptr64drop_in_place_LT_nu_ansi_term__display__OSControl_LT_str_GT__GT_17hfc2aeb8c0099f497E
              (param_2);
    return;
  }
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  _ZN4core3ptr48drop_in_place_LT_bat__theme__ThemePreference_GT_17hfb4cca19abe9b034E(param_2 + 0xc);
  _ZN4core3ptr64drop_in_place_LT_nu_ansi_term__display__OSControl_LT_str_GT__GT_17hfc2aeb8c0099f497E
            (param_2 + 6);
  return;
}