
  fn alacritty::gl::ValidateProgram::load_with::h81d968a25128166f(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glValidateProgramglVertexAttrib1…", 0x11, &data_c86970, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::ValidateProgram::hd297acbdfb020e4a = result_1;
    data_ce6868 = result != 0;
    result
}
