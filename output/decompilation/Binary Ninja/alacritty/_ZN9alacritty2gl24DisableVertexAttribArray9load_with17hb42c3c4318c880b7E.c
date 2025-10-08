
  void (*)() __noreturn alacritty::gl::DisableVertexAttribArray::load_with::hb42c3c4318c880b7(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDisableVertexAttribArrayglDisa…", 0x1a, &data_c85c80, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::DisableVertexAttribArray::h141f22672c3fc461 = result_1;
    data_ce5998 = result;
    return result;
}
