
  void (*)() __noreturn alacritty::gl::GetAttachedShaders::load_with::hd754989901cfa3f5(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetAttachedShadersglGetAttribL…", 0x14, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetAttachedShaders::hfdc73d742f2b4f1b = result_1;
    data_ce5c00 = result;
    return result;
}
