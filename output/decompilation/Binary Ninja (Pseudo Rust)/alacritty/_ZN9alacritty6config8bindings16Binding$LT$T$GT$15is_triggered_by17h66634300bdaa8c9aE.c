
  fn alacritty::config::bindings::Binding$LT$T$GT$::is_triggered_by::h66634300bdaa8c9a(arg1: *mut c_void, arg2: bool, arg3: i32, arg4: i16, arg5: i16) -> bool

{
    if _$LT$winit..event..MouseButton$u20$as$u20$core..cmp..PartialEq$GT$::eq::h519e731f333c5074(
        *arg1.byte_offset(0x30), *arg1.byte_offset(0x32), arg4, arg5) == 0
        || *arg1.byte_offset(0x34) != arg3
    {
        return false;
    }
    
    if (*arg1.byte_offset(0x38) & !arg2) != 0
    {
        return 0;
    }
    
    (*arg1.byte_offset(0x39) & arg2) == 0
}
