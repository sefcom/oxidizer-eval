
  fn alacritty::gl::Uniform1fv::load_with::h6f9ac41760ba53ff(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniform1fvglUniform1iARBglUnif…", 0xc, &data_c86740, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::Uniform1fv::hc6759e9cc6ffe8fb = result_1;
    data_ce6658 = result != 0;
    result
}
