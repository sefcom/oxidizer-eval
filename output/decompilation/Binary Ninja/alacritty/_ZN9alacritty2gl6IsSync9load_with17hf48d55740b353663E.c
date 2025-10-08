
  void (*)() __noreturn alacritty::gl::IsSync::load_with::hf48d55740b353663(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        &data_4eadc0[0x20], 8, &data_c86410, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::IsSync::haa319fcf1c8b4dd4 = result_1;
    data_ce60f0 = result;
    return result;
}
