
  int64_t flealib::commandprocessor::CommandProcessor::set_email_params::hc6d9606247b74fbf(int128_t* arg1, void* arg2, int64_t arg3, int64_t arg4)

{
    void var_50;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h61c14692cd93c688(&var_50, 
        arg3, arg4);
    int64_t var_60 = 0;
    int64_t var_58 = arg4;
    int16_t var_20 = 1;
    void var_140;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::haed2b58faa0f2c4d(&var_140, &var_60);
    int64_t var_130;
    int128_t var_c8;
    int64_t var_b8;
    
    if (var_130 != 5)
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_c8, 
            "Wrong number of parametersOk/roo…", 0x1a);
        arg1[1] = var_b8;
        *arg1 = var_c8;
    }
    else
    {
        int64_t* var_138;
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_c8, 
            *var_138, var_138[1]);
        int128_t var_128 = var_c8;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(arg2 + 0xc0);
        *(arg2 + 0xd0) = var_b8;
        *(arg2 + 0xc0) = var_128;
        
        if (var_130 < 2)
        {
            core::panicking::panic_bounds_check::h8f7cc6d356d411dd(1, var_130);
            /* no return */
        }
        
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_c8, 
            var_138[2], var_138[3]);
        var_128 = var_c8;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(arg2 + 0xd8);
        *(arg2 + 0xe8) = var_b8;
        *(arg2 + 0xd8) = var_128;
        
        if (var_130 < 3)
        {
            core::panicking::panic_bounds_check::h8f7cc6d356d411dd(2, var_130);
            /* no return */
        }
        
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_c8, 
            var_138[4], var_138[5]);
        var_128 = var_c8;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(arg2 + 0x78);
        *(arg2 + 0x88) = var_b8;
        *(arg2 + 0x78) = var_128;
        
        if (var_130 < 4)
        {
            core::panicking::panic_bounds_check::h8f7cc6d356d411dd(3, var_130);
            /* no return */
        }
        
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_c8, 
            var_138[6], var_138[7]);
        var_128 = var_c8;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(arg2 + 0x90);
        *(arg2 + 0xa0) = var_b8;
        *(arg2 + 0x90) = var_128;
        
        if (var_130 < 5)
        {
            core::panicking::panic_bounds_check::h8f7cc6d356d411dd(4, var_130);
            /* no return */
        }
        
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_c8, 
            var_138[8], var_138[9]);
        var_128 = var_c8;
        int64_t r8_1 =
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(arg2 + 0xa8);
        *(arg2 + 0xb8) = var_b8;
        *(arg2 + 0xa8) = var_128;
        confy::store::h8fe77d3ed41cf128(&var_128, "flea_confCurrent directory: /roo…", 9, 0, r8_1, 
            arg2 + 0x18);
        
        if (var_128 != 0xa)
        {
            int128_t var_d8;
            int128_t var_78_1 = var_d8;
            int128_t var_e8;
            int128_t var_88_1 = var_e8;
            int128_t var_f8;
            int128_t var_98_1 = var_f8;
            int128_t var_108;
            int128_t var_a8_1 = var_108;
            var_b8 = var_b8;
            var_c8 = var_128;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::ha95955afbedf5b89(
                arg1, &var_c8);
            core::ptr::drop_in_place$LT$confy..ConfyError$GT$::hfcf287913cdcef0e(&var_c8);
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(
                &var_c8, "Ok/root/.rustup/toolchains/night…", 2);
            arg1[1] = var_b8;
            *arg1 = var_c8;
        }
    }
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hb30d824733ae43be(
        &var_140);
}
