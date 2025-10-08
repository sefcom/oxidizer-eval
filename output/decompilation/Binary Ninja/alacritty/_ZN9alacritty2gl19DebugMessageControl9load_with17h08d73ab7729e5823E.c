
  void (*)() __noreturn alacritty::gl::DebugMessageControl::load_with::h08d73ab7729e5823(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDebugMessageControlglDebugMess…", 0x15, &data_c85bc0, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::DebugMessageControl::hc386a0627985d6e6 = result_1;
    data_ce5898 = result;
    return result;
}
