
  void (*)() __noreturn alacritty::gl::GetError::load_with::hfb9a08933f8f3d93(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetErrorglGetFloatvglGetFragDa…", 0xa, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::GetError::h44a6fc6462751df8.0 = result_1;
    return result;
}
