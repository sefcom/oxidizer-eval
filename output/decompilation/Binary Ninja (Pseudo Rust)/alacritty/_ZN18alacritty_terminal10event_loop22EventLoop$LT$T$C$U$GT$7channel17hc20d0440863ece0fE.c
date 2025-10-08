
  fn alacritty_terminal::event_loop::EventLoop$LT$T$C$U$GT$::channel::hc20d0440863ece0f(arg1: *mut i64, arg2: *mut c_void) -> i64

{
    let rax: i64;
    let var_18: i64 = rax;
    let mut result: i64;
    let mut rdx: i64;
    result = _$LT$std..sync..mpmc..Sender$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h054a57b759326448(*arg2.byte_offset(0x50), *arg2.byte_offset(0x58));
    let rcx: *mut i64 = *arg2.byte_offset(0x60);
    let temp0: i64 = *rcx;
    *rcx += 1;
    
    if temp0 <= -1
    {
        trap(6);
    }
    
    *arg1 = result;
    arg1[1] = rdx;
    arg1[2] = rcx;
    result
}
