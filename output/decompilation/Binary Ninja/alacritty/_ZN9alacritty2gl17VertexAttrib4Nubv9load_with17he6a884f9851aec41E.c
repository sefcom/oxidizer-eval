
  void (*)() __noreturn alacritty::gl::VertexAttrib4Nubv::load_with::he6a884f9851aec41(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib4NubvglVertexAttri…", 0x13, &data_c86c10, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttrib4Nubv::h7e060a8717b2c889 = result_1;
    data_ce69d8 = result;
    return result;
}
