
  void (*)() __noreturn alacritty::gl::ReadnPixelsKHR::load_with::h87fdebb2fa07e351(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glReadnPixelsKHRglVertexAttrib1s", 0x10, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::ReadnPixelsKHR::h44964153e5fd65a0 = result_1;
    data_ce63a0 = result;
    return result;
}
