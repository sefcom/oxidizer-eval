void _ZN5uu_df5table12RowFormatter13scaled_inodes17h71e8cb062ae7b2e0E
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_3;
  local_10 = param_4;
  if (*(char *)(param_2 + 0x54) == '\x02') {
    _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h1bbf25edea4bff94E
              (param_1,&local_18);
    return;
  }
  _ZN5uu_df6blocks23to_magnitude_and_suffix17hfc39cb976c1a05edE
            (param_1,param_3,param_4,*(char *)(param_2 + 0x54));
  return;
}