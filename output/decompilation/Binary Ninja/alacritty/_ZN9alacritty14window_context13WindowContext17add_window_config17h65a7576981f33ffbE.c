
  int64_t alacritty::window_context::WindowContext::add_window_config::h65a7576981f33ffb(void* arg1, int64_t* arg2, int64_t arg3, int64_t arg4)

{
    int64_t* var_28 = arg2;
    alacritty::message_bar::MessageBuffer::remove_target::haff6ad13a53c4ac5(arg1 + 0x1cd0);
    alloc::vec::Vec$LT$T$C$A$GT$::extend_trusted::h5c4c742c6e08d753(arg1 + 0x1df8, arg3, 
        arg4 * 0x38 + arg3);
    /* tailcall */
    return alacritty::window_context::WindowContext::update_config::h98162595dbe55738(arg1, arg2);
}
