
  fn alacritty::gl::GetSynciv::load_with::hedae5cb54c04d3e0(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetSyncivglGetTexImageglGetTex…", 0xb, &data_c86200, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::GetSynciv::h2e35edd9110ed3f9 = result_1;
    data_ce5ea8 = result != 0;
    result
}
