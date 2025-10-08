
  void (*)() __noreturn alacritty::gl::CopyTexSubImage3D::load_with::h405527a3ff66196a(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glCopyTexSubImage3DglCreateProgr…", 0x13, &data_c85b70, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::CopyTexSubImage3D::h1f2748f5d998b810 = result_1;
    data_ce5850 = result;
    return result;
}
