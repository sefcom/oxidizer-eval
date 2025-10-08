
  fn just::color::Color::redirect::h461392c78a63c15a(arg1: *mut i8, arg2: *mut c_void) -> i64

{
    let rax: i64;
    let var_18: i64 = rax;
    *arg1 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..stdio..IsTerminal$GT$::is_terminal::h707a8d5258aed6e7();
    *arg1.byte_offset(1) = *arg2.byte_offset(1);
    let result: i8 = *arg2.byte_offset(0x11);
    arg1[0x11] = result;
    result
}
