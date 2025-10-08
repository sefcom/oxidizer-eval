
  fn alacritty::window_context::WindowContext::add_window_config::h65a7576981f33ffb(arg1: *mut c_void, arg2: *mut i64, arg3: i64, arg4: i64) -> i64

{
    let var_28: *mut i64 = arg2;
    alacritty::message_bar::MessageBuffer::remove_target::haff6ad13a53c4ac5(arg1.
        byte_offset(0x1cd0));
    alloc::vec::Vec$LT$T$C$A$GT$::extend_trusted::h5c4c742c6e08d753(arg1.byte_offset(0x1df8), arg3, 
        arg4 * 0x38 + arg3);
    /* tailcall */
    alacritty::window_context::WindowContext::update_config::h98162595dbe55738(arg1, arg2)
}
