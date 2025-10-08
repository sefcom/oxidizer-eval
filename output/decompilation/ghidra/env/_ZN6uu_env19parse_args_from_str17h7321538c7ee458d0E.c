undefined8 * _ZN6uu_env19parse_args_from_str17h7321538c7ee458d0E(undefined8 *param_1)

{
  undefined8 uVar1;
  int local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  (*(code *)PTR__ZN6uu_env14split_iterator5split17hb91d0c6281405debE_00219340)(&local_60);
  if (local_60 == 0xc) {
    param_1[2] = CONCAT44(uStack_44,uStack_48);
    *param_1 = CONCAT44(uStack_54,uStack_58);
    param_1[1] = CONCAT44(uStack_4c,uStack_50);
    return param_1;
  }
  local_18 = local_40;
  local_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_20 = uStack_48;
  uStack_1c = uStack_44;
  local_38 = local_60;
  uStack_34 = uStack_5c;
  uStack_30 = uStack_58;
  uStack_2c = uStack_54;
  uVar1 = _ZN6uu_env19parse_args_from_str28__u7b__u7b_closure_u7d__u7d_17h6aa40fd98cc1f5c7E
                    (&local_38);
  param_1[1] = uVar1;
  param_1[2] = &
               PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h60677b330daa6f59E_002108a8
  ;
  *param_1 = 0x8000000000000000;
  return param_1;
}