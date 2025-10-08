
  void (*)() __noreturn alacritty::gl::GetFragDataLocation::load_with::h8fcad3509e42abbe(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetFragDataLocationglGetFrameb…", 0x15, &data_c86090, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetFragDataLocation::h06700a023f6ec2f5 = result_1;
    data_ce5ce8 = result;
    return result;
}
