undefined8 * __rustcall uu_od::prn_float::format_item_flo16(double param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined *local_80;
  code *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined **local_58;
  undefined8 local_50;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined local_28 [24];
  
  cVar1 = std_detect::detect::cache::test();
  if (cVar1 == '\0') {
    uVar2 = half::binary16::arch::f64_to_f16_fallback(SUB84(param_1,0));
  }
  else {
    uVar2 = half::binary16::arch::x86::f32_to_f16_x86_f16c((float)param_1);
  }
  format_flo16(local_28,uVar2);
  local_78 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_58 = &PTR_s__00242e90;
  local_50 = 1;
  local_38 = 0;
  local_48 = &local_80;
  local_40 = 1;
                    /* try { // try from 001d5ba3 to 001d5bb1 has its CatchHandler @ 001d5be7 */
  local_80 = local_28;
  core::option::Option<T>::map_or_else(&local_70,&local_58);
                    /* try { // try from 001d5bb2 to 001d5bbb has its CatchHandler @ 001d5bd8 */
  core::ptr::drop_in_place<alloc::string::String>(local_28);
  param_2[2] = local_60;
  *param_2 = local_70;
  param_2[1] = uStack_68;
  return param_2;
}