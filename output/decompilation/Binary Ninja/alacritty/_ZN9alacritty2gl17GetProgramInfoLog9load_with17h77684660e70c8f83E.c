
  void (*)() __noreturn alacritty::gl::GetProgramInfoLog::load_with::h77684660e70c8f83(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetProgramInfoLogglGetProgrami…", 0x13, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::GetProgramInfoLog::h3841a0e4ef2f51d5.0 = result_1;
    return result;
}
