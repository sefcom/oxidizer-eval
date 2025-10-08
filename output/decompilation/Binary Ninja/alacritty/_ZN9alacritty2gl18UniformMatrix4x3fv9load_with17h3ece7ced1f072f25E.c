
  void (*)() __noreturn alacritty::gl::UniformMatrix4x3fv::load_with::h3ece7ced1f072f25(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniformMatrix4x3fvglUnmapBuffe…", 0x14, &data_c86930, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::UniformMatrix4x3fv::h4bbdd2a04bd22cd3 = result_1;
    data_ce6840 = result;
    return result;
}
