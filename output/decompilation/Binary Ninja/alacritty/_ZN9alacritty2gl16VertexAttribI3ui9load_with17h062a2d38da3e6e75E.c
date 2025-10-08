
  void (*)() __noreturn alacritty::gl::VertexAttribI3ui::load_with::h062a2d38da3e6e75(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttribI3uiglVertexAttrib…", 0x12, &data_c86e40, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttribI3ui::h80ad9a91376f1afd = result_1;
    data_ce6b60 = result;
    return result;
}
