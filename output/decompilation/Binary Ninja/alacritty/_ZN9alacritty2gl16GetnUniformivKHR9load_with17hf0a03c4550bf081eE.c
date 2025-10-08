
  void (*)() __noreturn alacritty::gl::GetnUniformivKHR::load_with::hf0a03c4550bf081e(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetnUniformivKHRglGetnUniformi…", 0x12, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetnUniformivKHR::hbe168952ba65f31f = result_1;
    data_ce6020 = result;
    return result;
}
