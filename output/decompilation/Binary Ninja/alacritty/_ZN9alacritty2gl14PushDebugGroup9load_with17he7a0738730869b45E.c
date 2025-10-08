
  void (*)() __noreturn alacritty::gl::PushDebugGroup::load_with::he7a0738730869b45(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glPushDebugGroup", 0x10, &data_c86580, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::PushDebugGroup::h9201d0b20f5b42f7 = result_1;
    data_ce6340 = result;
    return result;
}
