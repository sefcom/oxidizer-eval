
  void (*)() __noreturn alacritty::gl::BindFragDataLocation::load_with::h682ff0afe101ce99(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glBindFragDataLocationglBindFrag…", 0x16, &data_c85980, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::BindFragDataLocation::hdfa47aa2f60249a3 = result_1;
    data_ce55d8 = result;
    return result;
}
