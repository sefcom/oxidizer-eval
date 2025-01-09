undefined8 * __rustcall uu_od::prn_float::format_item_flo32(double param_1,undefined8 *param_2)

{
  undefined *local_80;
  code *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined local_28 [24];
  
  format_flo32((float)param_1,local_28);
  local_78 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_58 = &DAT_00242038;
  local_50 = 1;
  local_38 = 0;
  local_48 = &local_80;
  local_40 = 1;
                    /* try { // try from 001d4f0d to 001d4f1b has its CatchHandler @ 001d4f51 */
  local_80 = local_28;
  core::option::Option<T>::map_or_else(&local_70,&local_58);
                    /* try { // try from 001d4f1c to 001d4f25 has its CatchHandler @ 001d4f42 */
  core::ptr::drop_in_place<alloc::string::String>(local_28);
  param_2[2] = local_60;
  *param_2 = local_70;
  param_2[1] = uStack_68;
  return param_2;
}