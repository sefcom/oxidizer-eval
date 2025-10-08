
  fn alacritty::event::TouchZoom::distance::ha17fa3104e8be542(arg1: *mut c_void) -> i512

{
    let mut result: i64;
    result = hypot(*arg1.byte_offset(0x20) - *arg1.byte_offset(0x60), 
        *arg1.byte_offset(0x28) - *arg1.byte_offset(0x68));
    result
}
