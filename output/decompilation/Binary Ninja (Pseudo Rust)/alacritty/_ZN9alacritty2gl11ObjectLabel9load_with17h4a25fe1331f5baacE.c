
  fn alacritty::gl::ObjectLabel::load_with::h4a25fe1331f5baac(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glObjectLabelglObjectPtrLabelKHR…", 0xd, &data_c864b0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::ObjectLabel::hc4f84422d672c9ee = result_1;
    data_ce6238 = result != 0;
    result
}
