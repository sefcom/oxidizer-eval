
  void (*)() __noreturn alacritty::gl::UniformMatrix3x4fv::load_with::he5e45ce718ac7982(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniformMatrix3x4fvglUniformMat…", 0x14, &data_c86900, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::UniformMatrix3x4fv::h2fa4447ceb0be5fc = result_1;
    data_ce6810 = result;
    return result;
}
