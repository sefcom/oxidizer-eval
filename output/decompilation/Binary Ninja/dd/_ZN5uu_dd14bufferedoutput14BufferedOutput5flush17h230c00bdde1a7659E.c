
  int64_t uu_dd::bufferedoutput::BufferedOutput::flush::h230c00bdde1a7659(int64_t* arg1, void* arg2)

{
    *(arg2 + 0x10);
    int32_t var_78;
    uu_dd::Output::write_blocks::hd1d1fad151688f0b(&var_78, arg2 + 0x18, *(arg2 + 8));
    int64_t result;
    int64_t r13;
    
    if (var_78 != 1)
    {
        int64_t var_60;
        
        if (var_60)
        {
            core::result::Result$LT$T$C$E$GT$::unwrap::hfbdea825c58a947f(1);
            trap(6);
        }
        
        r13 = 0;
        core::result::Result$LT$T$C$E$GT$::unwrap::hfbdea825c58a947f(0);
        int64_t var_68;
        alloc::vec::Vec$LT$T$C$A$GT$::drain::hff6760be2b34f67b(&var_78, arg2, 0, var_68);
        result =
            core::ptr::drop_in_place$LT$alloc..vec..drain..Drain$LT$u8$GT$$GT$::hdcf0219fbe761a1e(
            &var_78);
        arg1[3] = var_60;
        arg1[2] = var_68;
        int128_t var_58;
        *(arg1 + 0x20) = var_58;
    }
    else
    {
        int64_t result_1;
        result = result_1;
        arg1[1] = result;
        r13 = 1;
    }
    
    *arg1 = r13;
    return result;
}
