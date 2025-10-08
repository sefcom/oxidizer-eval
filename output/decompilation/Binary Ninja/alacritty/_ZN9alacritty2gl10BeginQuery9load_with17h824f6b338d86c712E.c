
  void (*)() __noreturn alacritty::gl::BeginQuery::load_with::h824f6b338d86c712(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glBeginQueryglBeginTransformFeed…", 0xc, &data_c858f0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::BeginQuery::h7a632c4bf7db1570 = result_1;
    data_ce5580 = result;
    return result;
}
