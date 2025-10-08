
  void (*)() __noreturn alacritty::gl::UniformMatrix4fv::load_with::h4ddebba1c0d2f656(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniformMatrix4fvglUniformMatri…", 0x12, &data_c86910, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::UniformMatrix4fv::ha3f8d58074ef2f66 = result_1;
    data_ce6820 = result;
    return result;
}
