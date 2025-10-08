void _ZN9alacritty7display4hint14highlighted_at17h6f7fb2c30c56b0f7E
               (undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
               undefined4 param_6)

{
  undefined local_41;
  undefined8 local_40;
  undefined4 local_38;
  long local_30;
  long local_28;
  undefined *local_20;
  undefined *local_18;
  long local_10;
  undefined8 *local_8;
  
  local_41 = (*(uint *)(param_2 + 0x6dc) & 0x2048) != 0;
  local_28 = param_3 + param_4 * 8;
  local_20 = &stack0x00000008;
  local_18 = &local_41;
  local_8 = &local_40;
  local_40 = param_5;
  local_38 = param_6;
  local_30 = param_3;
  local_10 = param_2;
  _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8find_map17h370babbdb64b1ca7E
            (param_1,&local_30,&local_20);
  return;
}