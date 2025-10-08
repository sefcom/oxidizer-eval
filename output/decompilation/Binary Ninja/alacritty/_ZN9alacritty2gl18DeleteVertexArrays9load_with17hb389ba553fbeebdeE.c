
  void (*)() __noreturn alacritty::gl::DeleteVertexArrays::load_with::hb389ba553fbeebde(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDeleteVertexArraysglDepthFuncg…", 0x14, &data_c85c50, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::DeleteVertexArrays::hd5a50d96b1f7c032.0 = result_1;
    return result;
}
