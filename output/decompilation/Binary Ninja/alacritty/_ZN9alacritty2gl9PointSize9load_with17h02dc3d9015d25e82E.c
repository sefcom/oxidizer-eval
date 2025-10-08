
  void (*)() __noreturn alacritty::gl::PointSize::load_with::h02dc3d9015d25e82(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glPointSizeglPolygonModeNVglPoly…", 0xb, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::PointSize::h5daf417fdd16341d = result_1;
    data_ce62d0 = result;
    return result;
}
