
  void (*)() __noreturn alacritty::gl::UnmapBuffer::load_with::h95dbc05561749040(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUnmapBufferglUseProgramObjectA…", 0xd, &data_c86940, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::UnmapBuffer::h7b289f5ac091fc04 = result_1;
    data_ce6850 = result;
    return result;
}
