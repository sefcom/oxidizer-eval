
  fn alacritty::gl::MultiTexCoordP2uiv::load_with::h085468c34dcf045f(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glMultiTexCoordP2uivglMultiTexCo…", 0x14, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::MultiTexCoordP2uiv::h6f202c9d83d73b3d = result_1;
    data_ce61c8 = result != 0;
    result
}
