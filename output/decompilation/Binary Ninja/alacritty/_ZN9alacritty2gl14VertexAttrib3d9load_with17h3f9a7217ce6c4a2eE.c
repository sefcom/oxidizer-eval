
  void (*)() __noreturn alacritty::gl::VertexAttrib3d::load_with::h3f9a7217ce6c4a2e(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib3d", 0x10, &data_c86b00, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttrib3d::h69a9456a534e3034 = result_1;
    data_ce6938 = result;
    return result;
}
