
  fn alacritty::gl::ObjectLabelKHR::load_with::h6a2520e1de2a9ff1(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! =
        alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, "glObjectLabelKHR", 0x10, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::ObjectLabelKHR::h9462914ce3cb4f10 = result_1;
    data_ce6248 = result != 0;
    result
}
