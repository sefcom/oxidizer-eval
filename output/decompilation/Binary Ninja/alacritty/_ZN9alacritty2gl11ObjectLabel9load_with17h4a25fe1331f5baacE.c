
  void (*)() __noreturn alacritty::gl::ObjectLabel::load_with::h4a25fe1331f5baac(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glObjectLabelglObjectPtrLabelKHR…", 0xd, &data_c864b0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::ObjectLabel::hc4f84422d672c9ee = result_1;
    data_ce6238 = result;
    return result;
}
