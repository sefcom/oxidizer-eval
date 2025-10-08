
  void (*)() __noreturn alacritty::gl::Uniform4uiv::load_with::h5de377090e751077(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniform4uivglUniformBlockBindi…", 0xd, &data_c868a0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::Uniform4uiv::h406334f0f9860d1a = result_1;
    data_ce67a0 = result;
    return result;
}
