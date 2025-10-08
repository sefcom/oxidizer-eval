
  void (*)() __noreturn alacritty::gl::VertexAttrib1f::load_with::h8acf32b994ea2a53(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib1ffloating point `…", 0x10, &data_c869c0, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttrib1f::h7d74ddfab19e989f = result_1;
    data_ce6898 = result;
    return result;
}
