
  fn alacritty::gl::ProvokingVertex::load_with::h0084cd286d951122(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glProvokingVertexglPushDebugGrou…", 0x11, &data_c86570, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::ProvokingVertex::h7655e8304ad3ff7b = result_1;
    data_ce6330 = result != 0;
    result
}
