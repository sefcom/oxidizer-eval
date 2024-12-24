void __rustcall
uu_df::table::RowFormatter::scaled_inodes
          (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_3;
  local_10 = param_4;
  if (*(char *)(param_2 + 0x54) == '\x02') {
    _<T_as_alloc::string::ToString>::to_string(param_1,&local_18);
    return;
  }
  blocks::to_magnitude_and_suffix(param_1,param_3,param_4,*(char *)(param_2 + 0x54));
  return;
}