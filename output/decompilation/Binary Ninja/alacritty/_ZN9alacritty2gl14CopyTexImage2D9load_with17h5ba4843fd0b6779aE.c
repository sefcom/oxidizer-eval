
  void (*)() __noreturn alacritty::gl::CopyTexImage2D::load_with::h5ba4843fd0b6779a(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glCopyTexImage2DglGetObjectLabel…", 0x10, &data_c85b40, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::CopyTexImage2D::hdf29ca9196e0dcba = result_1;
    data_ce5820 = result;
    return result;
}
