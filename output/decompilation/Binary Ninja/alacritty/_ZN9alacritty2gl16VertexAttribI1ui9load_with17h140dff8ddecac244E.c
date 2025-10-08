
  void (*)() __noreturn alacritty::gl::VertexAttribI1ui::load_with::h140dff8ddecac244(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttribI1uiglVertexAttrib…", 0x12, &data_c86dc0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttribI1ui::h96884b6cb4ce7cbc = result_1;
    data_ce6ae0 = result;
    return result;
}
