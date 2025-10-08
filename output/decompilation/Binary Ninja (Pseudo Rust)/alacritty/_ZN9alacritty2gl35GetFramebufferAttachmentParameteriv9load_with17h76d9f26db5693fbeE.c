
  fn alacritty::gl::GetFramebufferAttachmentParameteriv::load_with::h76d9f26db5693fbe(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetFramebufferAttachmentParame…", 0x25, &data_c860a0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::GetFramebufferAttachmentParameteriv::h2298759f0b513c98 = result_1;
    data_ce5cf8 = result != 0;
    result
}
