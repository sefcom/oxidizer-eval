
  void (*)() __noreturn alacritty::gl::VertexAttrib1s::load_with::hd10f4d0e45f8627e(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib1s", 0x10, &data_c86a00, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttrib1s::hc8f7348456ba0927 = result_1;
    data_ce68b8 = result;
    return result;
}
