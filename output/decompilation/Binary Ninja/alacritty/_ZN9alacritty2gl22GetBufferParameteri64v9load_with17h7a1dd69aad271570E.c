
  void (*)() __noreturn alacritty::gl::GetBufferParameteri64v::load_with::h7a1dd69aad271570(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetBufferParameteri64vglGetBuf…", 0x18, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetBufferParameteri64v::h18b4e78f2f763d76 = result_1;
    data_ce5c40 = result;
    return result;
}
