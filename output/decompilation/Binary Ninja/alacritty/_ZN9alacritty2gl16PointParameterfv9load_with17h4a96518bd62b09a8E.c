
  void (*)() __noreturn alacritty::gl::PointParameterfv::load_with::h4a96518bd62b09a8(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glPointParameterfvglPointParamet…", 0x12, &data_c86500, 3);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::PointParameterfv::h817b2b380ce098a5 = result_1;
    data_ce62a0 = result;
    return result;
}
