
  void (*)() __noreturn alacritty::gl::GetSynciv::load_with::hedae5cb54c04d3e0(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetSyncivglGetTexImageglGetTex…", 0xb, &data_c86200, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetSynciv::h2e35edd9110ed3f9 = result_1;
    data_ce5ea8 = result;
    return result;
}
