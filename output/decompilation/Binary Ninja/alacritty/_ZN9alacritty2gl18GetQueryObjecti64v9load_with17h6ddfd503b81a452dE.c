
  void (*)() __noreturn alacritty::gl::GetQueryObjecti64v::load_with::h6ddfd503b81a452d(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetQueryObjecti64vglGetQueryOb…", 0x14, &data_c86140, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetQueryObjecti64v::h24f17c2efff07880 = result_1;
    data_ce5dd8 = result;
    return result;
}
