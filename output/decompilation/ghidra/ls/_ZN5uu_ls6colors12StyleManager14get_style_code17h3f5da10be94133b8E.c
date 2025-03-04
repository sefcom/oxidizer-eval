void _ZN5uu_ls6colors12StyleManager14get_style_code17h3f5da10be94133b8E
               (undefined8 *param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 local_79;
  undefined local_71;
  undefined4 local_70;
  undefined2 local_6c;
  undefined local_6a;
  undefined local_69;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_20;
  undefined local_18;
  undefined4 local_17;
  undefined2 local_13;
  undefined local_11;
  undefined local_10;
  
  *(undefined8 *)(param_2 + 0x15) = *(undefined8 *)((long)param_3 + 0xd);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_2 + 8) = *param_3;
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  *(undefined4 *)(param_2 + 0x10) = uVar2;
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  _ZN8lscolors5style5Style21to_nu_ansi_term_style17hd70be39300867c91E(&local_79,param_3);
  local_71 = 0;
  local_10 = local_69;
  local_20 = local_79;
  local_18 = 0;
  local_17 = local_70;
  local_13 = local_6c;
  local_11 = local_6a;
  local_50 = 0x8000000000000000;
  local_48 = 1;
  local_40 = 0;
  local_38 = 0x8000000000000002;
                    /* try { // try from 00239c3e to 00239c4c has its CatchHandler @ 00239c84 */
  _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17hce018959f2b6d404E
            (&local_68,&local_50);
                    /* try { // try from 00239c4d to 00239c69 has its CatchHandler @ 00239c93 */
  _ZN4core3ptr72drop_in_place_LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__GT_17h9e949c0413661d2aE
            (&local_50);
  _ZN5alloc6string6String8truncate17hafe089c60c3201e9E(&local_68,local_58 + -4);
  param_1[2] = local_58;
  *param_1 = local_68;
  param_1[1] = uStack_60;
  return;
}