void __rustcall uu_od::inputoffset::InputOffset::print_final_offset(long *param_1)

{
  undefined *local_60;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined local_20 [24];
  
  if ((*(char *)(param_1 + 3) != '\x03') || (*param_1 != 0)) {
    format_byte_offset(local_20);
    local_58 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_50 = &DAT_00241a80;
    local_48 = 2;
    local_30 = 0;
    local_40 = &local_60;
    local_38 = 1;
                    /* try { // try from 001cf633 to 001cf63d has its CatchHandler @ 001cf64e */
    local_60 = local_20;
    std::io::stdio::_print(&local_50);
    core::ptr::drop_in_place<alloc::string::String>(local_20);
  }
  return;
}