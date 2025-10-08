
  void (*)() __noreturn alacritty::gl::ClearDepth::load_with::heff9ab1cd7f15a7b(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glClearDepthglClearStencilglClie…", 0xc, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::ClearDepth::hfe03b9964cfaac48 = result_1;
    data_ce5708 = result;
    return result;
}
