
  void (*)() __noreturn alacritty::gl::CopyTexImage1D::load_with::h3de49df351e0a144(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        &data_4e8a10[0x60], 0x10, &data_c85b30, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::CopyTexImage1D::h93119a74dca5025d = result_1;
    data_ce5810 = result;
    return result;
}
