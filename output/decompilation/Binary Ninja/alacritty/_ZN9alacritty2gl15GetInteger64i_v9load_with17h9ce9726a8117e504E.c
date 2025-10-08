
  void (*)() __noreturn alacritty::gl::GetInteger64i_v::load_with::h9ce9726a8117e504(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetInteger64i_vglGetInteger64v…", 0x11, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetInteger64i_v::h2241f6465d5e58b7 = result_1;
    data_ce5d20 = result;
    return result;
}
