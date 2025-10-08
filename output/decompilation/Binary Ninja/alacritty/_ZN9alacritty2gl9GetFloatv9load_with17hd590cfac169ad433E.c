
  void (*)() __noreturn alacritty::gl::GetFloatv::load_with::hd590cfac169ad433(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetFloatvglGetFragDataIndexEXT…", 0xb, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetFloatv::h7c6b8395b08e5690 = result_1;
    data_ce5cc8 = result;
    return result;
}
