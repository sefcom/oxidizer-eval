
  void (*)() __noreturn alacritty::gl::GetQueryObjectuiv::load_with::h67622c407fb76582(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetQueryObjectuivglGetQueryivA…", 0x13, &data_c86180, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetQueryObjectuiv::ha51347063ecdf86e = result_1;
    data_ce5e08 = result;
    return result;
}
