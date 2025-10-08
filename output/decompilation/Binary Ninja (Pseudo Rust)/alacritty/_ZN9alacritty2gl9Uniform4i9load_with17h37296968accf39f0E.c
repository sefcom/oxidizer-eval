
  fn alacritty::gl::Uniform4i::load_with::h37296968accf39f0(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniform4iglUniform4ivARBglUnif…", 0xb, &data_c86870, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::Uniform4i::h46836643f15217b2 = result_1;
    data_ce6770 = result != 0;
    result
}
