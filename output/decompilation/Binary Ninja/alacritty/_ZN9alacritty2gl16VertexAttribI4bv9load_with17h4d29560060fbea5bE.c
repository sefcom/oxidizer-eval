
  void (*)() __noreturn alacritty::gl::VertexAttribI4bv::load_with::h4d29560060fbea5b(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttribI4bvglVertexAttrib…", 0x12, &data_c86e60, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttribI4bv::hd71afc36385fa69f = result_1;
    data_ce6b80 = result;
    return result;
}
