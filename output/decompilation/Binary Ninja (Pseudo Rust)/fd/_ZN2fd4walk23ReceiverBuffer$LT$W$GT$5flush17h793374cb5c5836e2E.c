
  fn fd::walk::ReceiverBuffer$LT$W$GT$::flush::h793374cb5c5836e2(arg1: *mut c_void) -> u64

{
    let rax: *mut *mut c_void = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::hc70b0dccf2b498f6(arg1.byte_offset(0x10));
    let mut var_10: *mut *mut c_void = rax;
    let mut rbx: i64;
    rbx = rax == 0;
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hf603403cb1b5404d(&var_10);
    rbx *= 2;
    rbx |= 4;
    rbx
}
