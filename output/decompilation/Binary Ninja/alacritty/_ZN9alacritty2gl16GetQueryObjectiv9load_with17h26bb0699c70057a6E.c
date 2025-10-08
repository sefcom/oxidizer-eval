
  void (*)() __noreturn alacritty::gl::GetQueryObjectiv::load_with::h26bb0699c70057a6(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetQueryObjectivglGetQueryObje…", 0x12, &data_c86150, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetQueryObjectiv::h23314bf12b3fff1d = result_1;
    data_ce5de8 = result;
    return result;
}
