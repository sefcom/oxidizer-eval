
  void (*)() __noreturn alacritty::gl::DeleteTextures::load_with::h10ba85abfede744d(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn =
        alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, "glDeleteTextur", 0x10, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::DeleteTextures::h02edb3000664e547.0 = result_1;
    return result;
}
