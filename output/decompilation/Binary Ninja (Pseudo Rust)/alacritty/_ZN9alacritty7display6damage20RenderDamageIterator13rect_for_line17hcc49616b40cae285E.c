
  fn alacritty::display::damage::RenderDamageIterator::rect_for_line::hcc49616b40cae285(arg1: *mut i32, arg2: *mut c_void, arg3: *mut i32) -> i64

{
    let rcx: i32 = *arg2.byte_offset(0x18);
    let result: i32 = *arg2.byte_offset(0x14) - *arg2.byte_offset(0x24);
    let r9: i32 = arg3[2];
    let rdx_3: i32 = (arg3[4] - r9 + 1) * rcx;
    let rsi: i32 = *arg2.byte_offset(0x1c);
    let r8_3: i32 = !*arg3 * rsi + result;
    *arg1 = rcx * r9 + *arg2.byte_offset(0x20);
    arg1[1] = r8_3;
    arg1[2] = rdx_3;
    arg1[3] = rsi;
    result
}
