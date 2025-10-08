
  void (*)() __noreturn alacritty::gl::VertexAttrib4Nsv::load_with::h931380f3e5471f27(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib4NsvglVertexAttrib…", 0x12, &data_c86be0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttrib4Nsv::hc0e09c1cbebc87c7 = result_1;
    data_ce69b8 = result;
    return result;
}
