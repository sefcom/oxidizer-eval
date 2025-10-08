
  void (*)() __noreturn alacritty::gl::TexCoordP3ui::load_with::hf43a33e9558e6026(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glTexCoordP3uiglTexCoordP3uivglT…", 0xe, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::TexCoordP3ui::hfc02321c22351759 = result_1;
    data_ce6538 = result;
    return result;
}
