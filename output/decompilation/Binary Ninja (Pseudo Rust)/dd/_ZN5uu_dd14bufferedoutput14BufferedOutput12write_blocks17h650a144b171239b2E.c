
  fn uu_dd::bufferedoutput::BufferedOutput::write_blocks::h650a144b171239b2(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: i64) -> *mut i64

{
    let rsi: i64 = *(arg2[5] + 0x78);
    
    if rsi == 0
    {
        core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd();
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
    
    let mut var_98: i64;
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::h4762251c5e3d149b(&var_98, 
        arg3, arg4, rax_5);
    let rdi_1: i64 = var_98;
    let var_90: i64;
    let mut rax_6: i64;
    let mut rdx_6: u64;
    rax_6 = core::slice::iter::Iter$LT$T$GT$::make_slice::hfbdbc0a6d6290581(rdi_1, var_90 + rdi_1);
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h65897d0b259dad50(arg2, rax_6, rdx_6);
    arg2[2];
    let mut var_58: i64;
    uu_dd::Output::write_blocks::h78b56ae9a3f355f3(&var_58, &arg2[3], arg2[1]);
    let mut rax_8: i64;
    
    if var_58 == 0
    {
        arg2[2] = 0;
        let var_88: i64;
        let var_80: i64;
        let mut rax_9: i64;
        let mut rdx_8: u64;
        rax_9 = core::slice::iter::Iter$LT$T$GT$::make_slice::hfbdbc0a6d6290581(var_88, 
            var_80 + var_88);
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h65897d0b259dad50(arg2, rax_9, rdx_8);
        let var_38: i128;
        *arg1.byte_offset(0x20) = var_38;
        let var_48: i128;
        *arg1.byte_offset(0x10) = var_48;
        rax_8 = 0;
    }
    else
    {
        let var_50: i64;
        arg1[1] = var_50;
        rax_8 = 1;
    }
    
    *arg1 = rax_8;
    arg1
}
