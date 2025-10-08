
  void (*)() __noreturn alacritty::gl::GetVertexAttribPointerv::load_with::h8fd8e68f84279a74(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetVertexAttribPointervglGetVe…", 0x19, &data_c862c0, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetVertexAttribPointerv::hb6d2cce05f144474 = result_1;
    data_ce5fb0 = result;
    return result;
}
