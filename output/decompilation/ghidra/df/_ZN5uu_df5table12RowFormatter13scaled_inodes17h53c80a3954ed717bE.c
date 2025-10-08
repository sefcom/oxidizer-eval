void _ZN5uu_df5table12RowFormatter13scaled_inodes17h53c80a3954ed717bE
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_3;
  local_10 = param_4;
  if (*(char *)(param_2 + 0x54) == '\x02') {
    _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17hd1726df42c6324b3E
              (param_1,&local_18);
    return;
  }
  _ZN5uu_df6blocks23to_magnitude_and_suffix17hab68afb684dfcc4eE
            (param_1,param_3,param_4,*(char *)(param_2 + 0x54));
  return;
}