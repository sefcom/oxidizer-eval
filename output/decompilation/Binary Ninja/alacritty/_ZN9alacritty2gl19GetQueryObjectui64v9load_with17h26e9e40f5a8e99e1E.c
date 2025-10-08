
  void (*)() __noreturn alacritty::gl::GetQueryObjectui64v::load_with::h26e9e40f5a8e99e1(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetQueryObjectui64vglGetQueryO…", 0x15, &data_c86170, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetQueryObjectui64v::h9e9ba89aaec0d7fc = result_1;
    data_ce5df8 = result;
    return result;
}
