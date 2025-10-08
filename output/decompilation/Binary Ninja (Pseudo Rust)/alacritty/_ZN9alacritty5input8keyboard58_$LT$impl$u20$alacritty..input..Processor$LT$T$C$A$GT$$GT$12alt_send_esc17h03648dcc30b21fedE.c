
  fn alacritty::input::keyboard::_$LT$impl$u20$alacritty..input..Processor$LT$T$C$A$GT$$GT$::alt_send_esc::h03648dcc30b21fed(arg1: *mut i32, arg2: i16, arg3: i16, arg4: *mut i8, arg5: *mut c_void, arg6: [i32; 0x4] @ zmm0) -> u64

{
    let rax: i64;
    let var_38: i64 = rax;
    let mut rbx: i32 = *arg1;
    
    if arg2 == 0
    {
        rbx = rbx >> 8 & 1;
    }
    else if (rbx & 0x100) != 0
    {
        rbx = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(arg4, arg5.byte_offset(arg4), arg6) == 1;
    }
    else
    {
        rbx = 0;
    }
    
    rbx
}
