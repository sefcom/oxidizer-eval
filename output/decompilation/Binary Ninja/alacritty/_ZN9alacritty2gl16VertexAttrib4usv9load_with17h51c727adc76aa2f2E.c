
  void (*)() __noreturn alacritty::gl::VertexAttrib4usv::load_with::h51c727adc76aa2f2(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib4usvglVertexAttrib…", 0x12, &data_c86d50, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttrib4usv::h17dee154d05dc42c = result_1;
    data_ce6aa8 = result;
    return result;
}
