
  void (*)() __noreturn alacritty::gl::VertexAttrib2d::load_with::ha7c3ebdaadc95f34(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib2dglVertexAttrib2f…", 0x10, &data_c86a40, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttrib2d::h0aaa72616458ebd1 = result_1;
    data_ce68d8 = result;
    return result;
}
