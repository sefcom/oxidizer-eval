
  fn alacritty::display::bell::VisualBell::ring::h00b9dcfa0acc9195(arg1: *mut i64) -> i64

{
    let mut rax: i64;
    let mut rdx: i32;
    let mut zmm0: [u64; 0x2];
    rax = std::time::Instant::now::h767314cc8c6c5886();
    arg1[2] = rax;
    arg1[3] = rdx;
    /* tailcall */
    alacritty::display::bell::VisualBell::intensity_at_instant::h7ef172ac2da99aa5(arg1, rax, rdx, 
        zmm0)
}
