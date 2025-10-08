
  void (*)() __noreturn alacritty::gl::QueryCounter::load_with::hcf81357ddd33e195(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glQueryCounterglReadBufferglRead…", 0xe, &data_c86590, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::QueryCounter::hfb900286d166bde9 = result_1;
    data_ce6360 = result;
    return result;
}
