
  fn bat::syntax_mapping::SyntaxMapping::start_offload_build_all::hd06ba260de1f2570(arg1: *mut c_void) -> i64

{
    let rdx: *mut i64 = *arg1.byte_offset(0x30);
    let temp0: i64 = *rdx;
    *rdx += 1;
    
    if temp0 <= -1
    {
        trap(6);
    }
    
    let var_48: i64 = -0x8000000000000000;
    let mut var_58: i64 = 0;
    let var_30: i8 = 0;
    let mut var_28: ();
    std::thread::Builder::spawn_unchecked::h31f93f9b9d33a5c3(&var_28, &var_58);
    core::result::Result$LT$T$C$E$GT$::expect::h0e103480dd3d7923(&var_58, &var_28);
    core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h7c4bfb4d6f3d2cd3(
        &var_58)
}
