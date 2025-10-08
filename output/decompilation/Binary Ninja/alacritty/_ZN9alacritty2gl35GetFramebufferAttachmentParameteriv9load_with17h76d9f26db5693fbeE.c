
  void (*)() __noreturn alacritty::gl::GetFramebufferAttachmentParameteriv::load_with::h76d9f26db5693fbe(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetFramebufferAttachmentParame…", 0x25, &data_c860a0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetFramebufferAttachmentParameteriv::h2298759f0b513c98 = result_1;
    data_ce5cf8 = result;
    return result;
}
