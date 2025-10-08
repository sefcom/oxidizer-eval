
  void (*)() __noreturn alacritty::gl::TexCoordP2ui::load_with::h7ed096f70e7bd382(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glTexCoordP2uiglTexCoordP2uivglT…", 0xe, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::TexCoordP2ui::h32fbfff90ade7f36 = result_1;
    data_ce6518 = result;
    return result;
}
