
  void (*)() __noreturn alacritty::gl::ObjectLabelKHR::load_with::h6a2520e1de2a9ff1(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn =
        alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, "glObjectLabelKHR", 0x10, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::ObjectLabelKHR::h9462914ce3cb4f10 = result_1;
    data_ce6248 = result;
    return result;
}
