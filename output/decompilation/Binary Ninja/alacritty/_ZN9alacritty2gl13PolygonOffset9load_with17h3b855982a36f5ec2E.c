
  void (*)() __noreturn alacritty::gl::PolygonOffset::load_with::h3b855982a36f5ec2(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glPolygonOffsetglPopDebugGroupKH…", 0xf, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::PolygonOffset::hefb84d9b0e0d4750 = result_1;
    data_ce62f0 = result;
    return result;
}
