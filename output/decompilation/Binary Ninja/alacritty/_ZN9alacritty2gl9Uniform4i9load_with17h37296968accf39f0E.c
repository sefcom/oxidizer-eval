
  void (*)() __noreturn alacritty::gl::Uniform4i::load_with::h37296968accf39f0(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniform4iglUniform4ivARBglUnif…", 0xb, &data_c86870, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::Uniform4i::h46836643f15217b2 = result_1;
    data_ce6770 = result;
    return result;
}
