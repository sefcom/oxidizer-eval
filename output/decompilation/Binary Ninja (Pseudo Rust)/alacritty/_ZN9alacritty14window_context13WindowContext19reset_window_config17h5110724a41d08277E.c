
  fn alacritty::window_context::WindowContext::reset_window_config::h5110724a41d08277(arg1: *mut c_void, arg2: *mut i64) -> i64

{
    let var_18: *mut i64 = arg2;
    alacritty::message_bar::MessageBuffer::remove_target::haff6ad13a53c4ac5(arg1.
        byte_offset(0x1cd0));
    let rdi_1: *mut i64 = *arg1.byte_offset(0x1e00);
    let rsi_1: i64 = *arg1.byte_offset(0x1e08);
    *arg1.byte_offset(0x1e08) = 0;
    core::ptr::drop_in_place$LT$$u5b$$LP$alloc..string..String$C$toml..value..Value$RP$$u5d$$GT$::h735d7c89b93c812c(rdi_1, rsi_1);
    /* tailcall */
    alacritty::window_context::WindowContext::update_config::h98162595dbe55738(arg1, arg2)
}
