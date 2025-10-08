
  void (*)() __noreturn alacritty::gl::GetBufferSubData::load_with::h2ac69fd520cf228d(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetBufferSubDataglGetCompresse…", 0x12, &data_c86040, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetBufferSubData::h92262b26da95b1c0 = result_1;
    data_ce5c70 = result;
    return result;
}
