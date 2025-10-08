
  uint64_t alacritty::input::keyboard::_$LT$impl$u20$alacritty..input..Processor$LT$T$C$A$GT$$GT$::alt_send_esc::h03648dcc30b21fed(int32_t* arg1, int16_t arg2, int16_t arg3, char* arg4, void* arg5, int32_t arg6[0x4] @ zmm0)

{
    int64_t rax;
    int64_t var_38 = rax;
    int32_t rbx = *arg1;
    
    if (!arg2)
        rbx = rbx >> 8 & 1;
    else if (rbx & 0x100)
        rbx = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(arg4, arg5 + arg4, arg6) == 1;
    else
        rbx = 0;
    
    return rbx;
}
