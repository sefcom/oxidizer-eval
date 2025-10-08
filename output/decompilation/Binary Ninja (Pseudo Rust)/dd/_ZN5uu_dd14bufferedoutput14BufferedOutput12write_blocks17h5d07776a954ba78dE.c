
  fn uu_dd::bufferedoutput::BufferedOutput::write_blocks::h5d07776a954ba78d(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: i64) -> i64

{
    let rsi: i64 = *(arg2[5] + 0x78);
    
    if rsi == 0
    {
        core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
        /* no return */
    }
    
    let rax_2: i64 = arg2[2] + arg4;
    let mut rdx_4: u64;
    
    if (rax_2 | rsi) >> 0x20 == 0
    {
        rdx_4 = COMBINE(0, rax_2) % rsi;
    }
    else
    {
        rdx_4 = COMBINE(0, rax_2) % rsi;
    }
    
    let mut rax_5: i64 = 0;
    
    if arg4 >= rdx_4
    {
        rax_5 = arg4 - rdx_4;
    }
    
    let mut var_78: i64;
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::h7e728461df3b0667(&var_78, 
        arg3, arg4, rax_5);
    let rsi_4: i64 = var_78;
    let var_70: i64;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1c2f192315d36a70(arg2, rsi_4, var_70 + rsi_4);
    arg2[2];
    let mut var_58: i32;
    uu_dd::Output::write_blocks::hd1d1fad151688f0b(&var_58, &arg2[3], arg2[1]);
    let mut result: i64;
    
    if var_58 != 1
    {
        let var_38: i128;
        *arg1.byte_offset(0x20) = var_38;
        let var_48: i128;
        *arg1.byte_offset(0x10) = var_48;
        arg2[2] = 0;
        let var_68: i64;
        let var_60: i64;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1c2f192315d36a70(arg2, var_68, var_60 + var_68);
        result = 0;
    }
    else
    {
        let var_50: i64;
        arg1[1] = var_50;
        result = 1;
    }
    
    *arg1 = result;
    result
}
