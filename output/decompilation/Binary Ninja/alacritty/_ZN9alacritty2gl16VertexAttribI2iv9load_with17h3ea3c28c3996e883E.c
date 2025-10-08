
  void (*)() __noreturn alacritty::gl::VertexAttribI2iv::load_with::h3ea3c28c3996e883(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttribI2ivglVertexAttrib…", 0x12, &data_c86df0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttribI2iv::h61eac7a9f2aacc04 = result_1;
    data_ce6b10 = result;
    return result;
}
