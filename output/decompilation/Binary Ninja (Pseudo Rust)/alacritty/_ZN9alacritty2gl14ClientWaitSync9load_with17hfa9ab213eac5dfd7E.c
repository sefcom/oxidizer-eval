
  fn alacritty::gl::ClientWaitSync::load_with::hfa9ab213eac5dfd7(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glClientWaitSynceglReleaseThread…", 0x10, &data_c85a70, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::ClientWaitSync::h76466dc75020a46a = result_1;
    data_ce5728 = result != 0;
    result
}
