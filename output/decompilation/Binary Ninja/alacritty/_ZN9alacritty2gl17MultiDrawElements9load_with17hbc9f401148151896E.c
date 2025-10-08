
  void (*)() __noreturn alacritty::gl::MultiDrawElements::load_with::hbc9f401148151896(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glMultiDrawElementsglMultiDrawEl…", 0x13, &data_c86490, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::MultiDrawElements::h1af910f30ac963d2 = result_1;
    data_ce6178 = result;
    return result;
}
