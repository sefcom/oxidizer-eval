
  void (*)() __noreturn alacritty::gl::PointParameteri::load_with::h509f55ace9929845(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glPointParameteriglPointParamete…", 0x11, &data_c86530, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::PointParameteri::h0c69691cd7477b40 = result_1;
    data_ce62b0 = result;
    return result;
}
