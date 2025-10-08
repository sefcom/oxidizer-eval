
  void (*)() __noreturn alacritty::gl::DebugMessageInsertKHR::load_with::h038af525216c815e(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDebugMessageInsertKHRglDebugMe…", 0x17, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::DebugMessageInsertKHR::h3ba987d318c12b1f = result_1;
    data_ce58c8 = result;
    return result;
}
