void _ZN3bat5theme10theme_impl17hcfc0225bd6916759E(undefined4 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined uVar4;
  
  switch(*(undefined8 *)(param_2 + 0x30)) {
  case 0x8000000000000001:
                    /* try { // try from 005442d8 to 005442dc has its CatchHandler @ 0054432e */
    uVar4 = _ZN3bat5theme17color_scheme_impl17h893fb72bbe578005E(*(undefined4 *)(param_2 + 0x38));
    break;
  default:
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 0x40);
    uVar1 = *(undefined4 *)(param_2 + 0x34);
    uVar2 = *(undefined4 *)(param_2 + 0x38);
    uVar3 = *(undefined4 *)(param_2 + 0x3c);
    *param_1 = *(undefined4 *)(param_2 + 0x30);
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    *(undefined *)(param_1 + 6) = 2;
    _ZN4core3ptr64drop_in_place_LT_nu_ansi_term__display__OSControl_LT_str_GT__GT_17hfc2aeb8c0099f497E
              (param_2);
    _ZN4core3ptr64drop_in_place_LT_nu_ansi_term__display__OSControl_LT_str_GT__GT_17hfc2aeb8c0099f497E
              (param_2 + 0x18);
    return;
  case 0x8000000000000003:
    uVar4 = 0;
    break;
  case 0x8000000000000004:
    uVar4 = 1;
  }
  _ZN3bat5theme16choose_theme_opt17h88fce64e24cbc439E(param_1,uVar4,param_2);
  return;
}