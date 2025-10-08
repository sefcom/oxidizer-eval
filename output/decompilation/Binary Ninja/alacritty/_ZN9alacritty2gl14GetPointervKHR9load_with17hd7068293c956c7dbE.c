
  void (*)() __noreturn alacritty::gl::GetPointervKHR::load_with::hd7068293c956c7db(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetPointervKHRglUniform4uivEXT…", 0x10, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetPointervKHR::h34463e9621c895cc = result_1;
    data_ce5db8 = result;
    return result;
}
