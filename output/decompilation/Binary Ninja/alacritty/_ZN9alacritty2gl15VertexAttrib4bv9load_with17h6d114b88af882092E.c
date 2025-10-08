
  void (*)() __noreturn alacritty::gl::VertexAttrib4bv::load_with::h6d114b88af882092(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib4bvglVertexAttrib4…", 0x11, &data_c86c50, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttrib4bv::h639fd634ae92f376 = result_1;
    data_ce6a08 = result;
    return result;
}
