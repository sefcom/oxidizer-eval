
  void (*)() __noreturn alacritty::gl::VertexAttribPointer::load_with::h165e465bf4cb0795(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttribPointerglVertexP2u…", 0x15, &data_c86ef0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::VertexAttribPointer::hdd17f62548c1ce0a.0 = result_1;
    return result;
}
