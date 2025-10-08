void _ZN7uu_stat11print_float17h1938f14c785bf2a3E
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined param_5)

{
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined8 **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  char *local_80;
  ulong local_78;
  char **local_70;
  code *local_68;
  undefined *local_60;
  code *local_58;
  undefined local_50 [24];
  undefined local_38 [8];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  local_78 = (ulong)*(byte *)(param_1 + 3);
  local_80 = " ";
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    local_80 = (char *)0x1;
  }
  if (*(char *)(param_1 + 4) != '\0') {
    local_78 = 1;
    local_80 = "+";
  }
  _ZN7uu_stat15precision_trunc17hfc70d3e7a70986fcE(local_50,param_3,param_4);
  local_70 = &local_80;
  local_68 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h917f70ba7096f615E;
  local_58 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_b8 = &DAT_0011cfd0;
  uStack_b0 = 2;
  local_98 = 0;
  local_a8 = &local_70;
  local_a0 = 2;
                    /* try { // try from 00174a54 to 00174a63 has its CatchHandler @ 00174ad0 */
  local_60 = local_50;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h722d45d5108b1d7dE(local_38,&local_b8);
  uStack_b0 = CONCAT44(uStack_2c,uStack_30);
  local_a8 = (undefined8 **)local_28;
                    /* try { // try from 00174a87 to 00174a92 has its CatchHandler @ 00174ab3 */
  _ZN7uu_stat13pad_and_print17h4c659c1797f3ded6E
            (uStack_b0,local_28,*(undefined *)(param_1 + 2),param_2,param_5);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h44f04a5137e020d4E(&local_b8);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h44f04a5137e020d4E(local_50);
  return;
}