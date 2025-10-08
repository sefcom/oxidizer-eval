
  void (*)() __noreturn alacritty::gl::UniformMatrix2x3fv::load_with::h0304bf9f94e88392(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniformMatrix2x3fvglUniformMat…", 0x14, &data_c868c0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::UniformMatrix2x3fv::h48456c5aa7afc3bb = result_1;
    data_ce67d0 = result;
    return result;
}
