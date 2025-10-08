
  void (*)() __noreturn alacritty::gl::VertexAttrib4Nbv::load_with::h57618370c1e5b71c(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib4NbvglVertexAttrib…", 0x12, &data_c86bc0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttrib4Nbv::hf09ccf5e373e24e2 = result_1;
    data_ce6998 = result;
    return result;
}
