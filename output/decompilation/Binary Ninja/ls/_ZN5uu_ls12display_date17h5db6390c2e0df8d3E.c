
  int64_t uu_ls::display_date::h5db6390c2e0df8d3(int128_t* arg1, int64_t* arg2, void* arg3)

{
    int32_t var_78;
    uu_ls::get_time::h8b131fbbcfeb99cc(&var_78, arg2, arg3);
    
    if (!var_78)
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(
            arg1, "???`DateTime + TimeDelta` overfl…", 3);
    
    int128_t var_88 = var_78;
    int32_t var_68;
    chrono::datetime::DateTime$LT$Tz$GT$::checked_add_signed::h05dd0e1cc9a47e1a(&var_68);
    
    if (!var_68)
    {
        core::option::expect_failed::h9e03a1f6ff88dbcf("`DateTime + TimeDelta` overflowe…");
        /* no return */
    }
    
    int128_t var_a8 = var_68;
    chrono::offset::local::Local::now::ha82adb6e05d16f38(&var_68);
    bool rax = _$LT$chrono..naive..datetime..NaiveDateTime$u20$as$u20$core..cmp..PartialOrd$GT$::partial_cmp::hd709d884e1631950(&var_a8, &var_68);
    int64_t rcx = -0x8000000000000000 ^ *(arg3 + 0xb8);
    int64_t rdx = 4;
    
    if (rcx < 4)
        rdx = rcx;
    
    char const* const rax_2;
    int64_t rcx_2;
    char const* const rdx_4;
    bool cond:1_1;
    
    switch (rdx)
    {
        case 0:
        {
            var_a8 = "%Y-%m-%d %H:%M:%S.%f %z%Y-%m-%d …";
            *var_a8[8] = 0x17;
            break;
        }
        case 1:
        {
            var_a8 = "%Y-%m-%d %H:%M/home/34r7hm4n/.ca…";
            *var_a8[8] = 0xe;
            break;
        }
        case 2:
        {
            cond:1_1 = rax == 1;
            rcx_2 = rax == 1;
            rax_2 = "%m-%d %H:%M%b %e %H:%M%Y-%m-%d %…";
            rdx_4 = "%Y-%m-%d %b %e  %Y_-.:~/\x1b]8;;…";
            label_52be8e:
            
            if (cond:1_1)
                rdx_4 = rax_2;
            
            var_a8 = rdx_4;
            *var_a8[8] = (rcx_2 << 1) + 9;
            break;
        }
        case 3:
        {
            cond:1_1 = rax == 1;
            rcx_2 = rax == 1;
            rax_2 = "%b %e %H:%M%Y-%m-%d %b %e  %Y_-.…";
            rdx_4 = &data_436393[0x1f];
            goto label_52be8e;
        }
        case 4:
        {
            var_a8 = *(arg3 + 0xc0);
            break;
        }
    }
    
    int64_t var_98 = 8;
    int64_t var_90 = 0;
    chrono::datetime::DateTime$LT$Tz$GT$::format_with_items::h13d00874c810e2f8(&var_68, &var_88, 
        &var_a8);
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h4f934844aadf293c(arg1, &var_68);
    return core::ptr::drop_in_place$LT$chrono..format..formatting..DelayedFormat$LT$chrono..format..strftime..StrftimeItems$GT$$GT$::h2d8af8695fb24873(&var_68);
}
