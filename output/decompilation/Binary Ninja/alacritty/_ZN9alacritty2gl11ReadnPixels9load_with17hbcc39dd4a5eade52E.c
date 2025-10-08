
  void (*)() __noreturn alacritty::gl::ReadnPixels::load_with::hbcc39dd4a5eade52(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glReadnPixelsglRenderbufferStora…", 0xd, &data_c865a0, 3);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::ReadnPixels::h409787f64e1c8922 = result_1;
    data_ce6390 = result;
    return result;
}
