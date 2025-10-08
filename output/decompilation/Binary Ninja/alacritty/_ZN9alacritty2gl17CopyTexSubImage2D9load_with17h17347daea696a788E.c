
  void (*)() __noreturn alacritty::gl::CopyTexSubImage2D::load_with::h17347daea696a788(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glCopyTexSubImage2DglCopyTexSubI…", 0x13, &data_c85b60, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::CopyTexSubImage2D::hbf6088f8f206c94d = result_1;
    data_ce5840 = result;
    return result;
}
