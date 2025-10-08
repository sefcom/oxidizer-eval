
  void (*)() __noreturn alacritty::gl::VertexAttribI1iv::load_with::h8ad38b5843dca4d4(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttribI1ivglVertexAttrib…", 0x12, &data_c86db0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttribI1iv::h8d7bf11f20bdd03c = result_1;
    data_ce6ad0 = result;
    return result;
}
