
  int64_t alacritty::window_context::WindowContext::reset_window_config::h5110724a41d08277(void* arg1, int64_t* arg2)

{
    int64_t* var_18 = arg2;
    alacritty::message_bar::MessageBuffer::remove_target::haff6ad13a53c4ac5(arg1 + 0x1cd0);
    int64_t* rdi_1 = *(arg1 + 0x1e00);
    int64_t rsi_1 = *(arg1 + 0x1e08);
    *(arg1 + 0x1e08) = 0;
    core::ptr::drop_in_place$LT$$u5b$$LP$alloc..string..String$C$toml..value..Value$RP$$u5d$$GT$::h735d7c89b93c812c(rdi_1, rsi_1);
    /* tailcall */
    return alacritty::window_context::WindowContext::update_config::h98162595dbe55738(arg1, arg2);
}
