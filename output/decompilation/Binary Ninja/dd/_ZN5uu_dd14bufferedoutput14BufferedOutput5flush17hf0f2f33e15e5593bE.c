
  int64_t* uu_dd::bufferedoutput::BufferedOutput::flush::hf0f2f33e15e5593b(int64_t* arg1, void* arg2)

{
    *(arg2 + 0x10);
    int64_t var_78;
    uu_dd::Output::write_blocks::h78b56ae9a3f355f3(&var_78, arg2 + 0x18, *(arg2 + 8));
    int64_t r13;
    
    if (!var_78)
    {
        int64_t var_60;
        
        if (var_60)
        {
            core::result::Result$LT$T$C$E$GT$::unwrap::h92e74c7f2e34bccf(1);
            breakpoint();
        }
        
        r13 = 0;
        core::result::Result$LT$T$C$E$GT$::unwrap::h92e74c7f2e34bccf(0);
        int64_t var_68;
        alloc::vec::Vec$LT$T$C$A$GT$::drain::hb073313df60fa3f3(&var_78, arg2, 0, var_68);
        core::ptr::drop_in_place$LT$alloc..vec..drain..Drain$LT$u8$GT$$GT$::h9f8a61b78eca9047(
            &var_78);
        arg1[3] = var_60;
        arg1[2] = var_68;
        int128_t var_58;
        *(arg1 + 0x20) = var_58;
    }
    else
    {
        int64_t var_70;
        arg1[1] = var_70;
        r13 = 1;
    }
    
    *arg1 = r13;
    return arg1;
}
