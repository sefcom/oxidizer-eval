
  void (*)() __noreturn alacritty::gl::SampleCoverage::load_with::h13fd26f3059e5eab(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glSampleCoverageDatetime", 0x10, &data_c86600, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::SampleCoverage::hae2acd163537c14b = result_1;
    data_ce63d0 = result;
    return result;
}
