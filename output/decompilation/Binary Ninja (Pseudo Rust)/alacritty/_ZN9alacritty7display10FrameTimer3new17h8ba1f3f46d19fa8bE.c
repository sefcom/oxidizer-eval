
  fn alacritty::display::FrameTimer::new::h8ba1f3f46d19fa8b(arg1: *mut i64) -> i64

{
    let mut result: i64;
    let mut rdx: i32;
    result = std::time::Instant::now::h767314cc8c6c5886();
    *arg1 = result;
    arg1[1] = rdx;
    arg1[2] = result;
    arg1[3] = rdx;
    arg1[4] = 0;
    arg1[5] = 0;
    result
}
