
  void (*)() __noreturn alacritty::gl::GetSamplerParameteriv::load_with::hac66234c5329fcab(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetSamplerParameterivglGetShad…", 0x17, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetSamplerParameteriv::h503f16906200f1aa = result_1;
    data_ce5e68 = result;
    return result;
}
