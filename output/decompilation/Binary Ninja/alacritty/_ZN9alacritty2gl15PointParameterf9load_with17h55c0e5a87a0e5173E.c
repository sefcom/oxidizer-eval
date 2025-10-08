
  void (*)() __noreturn alacritty::gl::PointParameterf::load_with::h55c0e5a87a0e5173(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glPointParameterfglPointParamete…", 0x11, &data_c864d0, 3);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::PointParameterf::hedebfcfc57ef1de3 = result_1;
    data_ce6290 = result;
    return result;
}
