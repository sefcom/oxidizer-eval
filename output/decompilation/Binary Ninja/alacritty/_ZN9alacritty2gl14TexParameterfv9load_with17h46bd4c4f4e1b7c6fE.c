
  void (*)() __noreturn alacritty::gl::TexParameterfv::load_with::h46bd4c4f4e1b7c6f(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glTexParameterfvglVertexAttrib3f…", 0x10, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::TexParameterfv::h64b4e79b95b6c4e5 = result_1;
    data_ce65f0 = result;
    return result;
}
