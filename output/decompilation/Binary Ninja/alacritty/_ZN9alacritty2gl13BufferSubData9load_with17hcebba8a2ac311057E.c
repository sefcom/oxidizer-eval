
  void (*)() __noreturn alacritty::gl::BufferSubData::load_with::hcebba8a2ac311057(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glBufferSubDataglCheckFramebuffe…", 0xf, &data_c85a40, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::BufferSubData::hd84c8d7b7c1dbfc2.0 = result_1;
    return result;
}
