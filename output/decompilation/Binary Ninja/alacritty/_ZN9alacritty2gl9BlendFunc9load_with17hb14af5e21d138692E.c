
  void (*)() __noreturn alacritty::gl::BlendFunc::load_with::hb14af5e21d138692(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glBlendFuncglBlendFuncSeparateEX…", 0xb, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::BlendFunc::ha142700221b021d9.0 = result_1;
    return result;
}
