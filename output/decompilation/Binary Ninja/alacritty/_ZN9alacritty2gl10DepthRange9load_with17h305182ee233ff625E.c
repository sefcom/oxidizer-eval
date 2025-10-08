
  void (*)() __noreturn alacritty::gl::DepthRange::load_with::h305182ee233ff625(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDepthRangeglDetachObjectARBglD…", 0xc, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::DepthRange::h1a6f1c9a0d352bc3 = result_1;
    data_ce5968 = result;
    return result;
}
