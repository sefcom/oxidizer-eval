
  void (*)() __noreturn alacritty::gl::EnableVertexAttribArray::load_with::hcb2df60c97f3e766(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glEnableVertexAttribArrayglEnabl…", 0x19, &data_c85e00, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::EnableVertexAttribArray::h9890488787db9662.0 = result_1;
    return result;
}
