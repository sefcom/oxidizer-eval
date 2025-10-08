
  int64_t uu_seq::numberparse::compute_num_digits::h50b73e0ed5b48e8c(int64_t* arg1, char* arg2, uint64_t arg3, int64_t* arg4)

{
    void var_138;
    alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::hb778be1bb3f3f772(&var_138, arg2, arg3);
    int64_t var_130;
    int64_t var_128;
    char* rax;
    void* rdx;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h8a6ec40866845ea1(var_130, var_128);
    char* r12 = rax;
    int32_t var_b8 = 0;
    char* rax_1;
    uint64_t rdx_1;
    rax_1 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2b, &var_b8);
    char* rax_2;
    void* rdx_3;
    rax_2 =
        _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(
        rax_1, rdx_1, r12, rdx);
    void* r15 = rdx_3;
    
    if (!rax_2)
        r15 = rdx;
    
    if (rax_2)
        r12 = rax_2;
    
    char rax_3 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h10ba65abb895d1af(r12, 
        r15, "0x-0x.pe-src/uu/seq/src/numberpa…", 2);
    char rax_4;
    
    if (!rax_3)
        rax_4 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h10ba65abb895d1af(r12, 
            r15, "-0x.pe-src/uu/seq/src/numberpars…", 3);
    
    if (!rax_3 && !rax_4)
    {
        int128_t var_120;
        core::str::pattern::StrSearcher::new::h3b91c04870bd602f(&var_120, r12, r15, 
            "e-src/uu/seq/src/numberparse.rs(…", 1);
        int64_t var_c0;
        int64_t var_58_1 = var_c0;
        int128_t var_d0;
        int128_t var_68_1 = var_d0;
        int128_t var_e0;
        int128_t var_78_1 = var_e0;
        int128_t var_f0;
        int128_t var_88_1 = var_f0;
        int128_t var_100;
        int128_t var_98_1 = var_100;
        int128_t var_110;
        int128_t var_a8_1 = var_110;
        var_b8 = var_120;
        int64_t var_50_1 = 0;
        void* var_48_1 = r15;
        int16_t var_40_1 = 1;
        core::iter::traits::iterator::Iterator::collect::h4624adafb9c421ee(&var_120, &var_b8);
        int64_t r13_2 = var_110;
        
        if (!r13_2)
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
            /* no return */
        }
        
        int64_t* r15_1 = *var_120[8];
        char rax_9;
        int64_t rdx_7;
        rax_9 = core::str::_$LT$impl$u20$str$GT$::find::h3640c54bee04bee2(*r15_1, r15_1[1]);
        int64_t rax_12;
        int64_t r12_2;
        int64_t rbp_1;
        
        if (!(rax_9 & 1))
        {
            rbp_1 = r15_1[1];
            r12_2 = 0;
            
            if (r13_2 != 2)
                rax_12 = rbp_1;
            else
            {
                label_4715c7:
                core::num::_$LT$impl$u20$i64$GT$::from_ascii_radix::h7589f30fc8392b2a(&var_b8, 
                    r15_1[2], r15_1[3]);
                int64_t rax_11 = 0;
                int64_t rcx_2 = 0;
                int64_t var_b0;
                
                if (!var_b8)
                    rcx_2 = var_b0;
                
                if (rcx_2 > 0)
                    rax_11 = rcx_2;
                
                rax_12 = rax_11 + rbp_1;
                
                if (rcx_2 >= r12_2)
                    r12_2 = 0;
                else
                {
                    int64_t temp1_1 = r12_2;
                    r12_2 -= rcx_2;
                    
                    if (0 - (rcx_2 >> 0x3f))
                        r12_2 = 0;
                }
            }
        }
        else
        {
            if (!rdx_7)
                rbp_1 = 1;
            else
            {
                rbp_1 = rdx_7;
                
                if (rdx_7 == 1)
                    rbp_1 =
                        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h10ba65abb895d1af(
                        *r15_1, r15_1[1], "-src/uu/seq/src/numberparse.rs(u…", 1) + 1;
            }
            
            r12_2 = ~rdx_7 + r15_1[1];
            
            if (r13_2 == 2)
                goto label_4715c7;
            
            rax_12 = rbp_1;
        }
        arg1[6] = arg4[4];
        int128_t zmm0_2 = *arg4;
        *(arg1 + 0x20) = *(arg4 + 0x10);
        *(arg1 + 0x10) = zmm0_2;
        arg1[7] = rax_12;
        *arg1 = 1;
        arg1[1] = r12_2;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h0f7f791ab19cf63d(var_120, 
            r15_1);
    }
    else
    {
        int64_t rbp = *arg4;
        int64_t r13_1 = arg4[1];
        char rax_5 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hff4183d19d767429(".pe-src/uu/seq/src/numberparse.r…", r12, r15);
        char rax_6;
        int64_t rcx_1;
        
        if (!rax_5)
        {
            rax_6 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hff4183d19d767429("pe-src/uu/seq/src/numberparse.rs…", r12, r15);
            rcx_1 = 1;
        }
        
        if (rax_5 || rax_6)
            rcx_1 = 0;
        
        arg1[2] = rbp;
        arg1[3] = r13_1;
        *(arg1 + 0x20) = *(arg4 + 0x10);
        arg1[6] = arg4[4];
        arg1[7] = 0;
        *arg1 = rcx_1;
        arg1[1] = 0;
    }
    
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb5d0045c8189f1b2(&var_138);
}
