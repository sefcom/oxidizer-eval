
  void (*)() __noreturn alacritty::gl::UniformMatrix3x2fv::load_with::h475b05666ad372a5(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniformMatrix3x2fvglUniformMat…", 0x14, &data_c868f0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::UniformMatrix3x2fv::h7115a86239024172 = result_1;
    data_ce6800 = result;
    return result;
}
