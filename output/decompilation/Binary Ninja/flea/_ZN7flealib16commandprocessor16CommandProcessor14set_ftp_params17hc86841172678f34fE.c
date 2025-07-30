
  int64_t flealib::commandprocessor::CommandProcessor::set_ftp_params::hc86841172678f34f(int128_t* arg1, void* arg2, int64_t arg3, int64_t arg4)

{
    void var_58;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h61c14692cd93c688(&var_58, 
        arg3, arg4);
    int64_t var_68 = 0;
    int64_t var_60 = arg4;
    int16_t var_28 = 1;
    void var_140;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::haed2b58faa0f2c4d(&var_140, &var_68);
    int64_t var_130;
    int128_t var_c8;
    int64_t var_b8;
    
    if (var_130 != 3)
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
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(arg2 + 0x48);
        *(arg2 + 0x58) = var_b8;
        *(arg2 + 0x48) = var_128;
        
        if (var_130 < 2)
        {
            core::panicking::panic_bounds_check::h8f7cc6d356d411dd(1, var_130);
            /* no return */
        }
        
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_c8, 
            var_138[2], var_138[3]);
        var_128 = var_c8;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(arg2 + 0x18);
        *(arg2 + 0x28) = var_b8;
        *(arg2 + 0x18) = var_128;
        
        if (var_130 < 3)
        {
            core::panicking::panic_bounds_check::h8f7cc6d356d411dd(2, var_130);
            /* no return */
        }
        
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_c8, 
            var_138[4], var_138[5]);
        var_128 = var_c8;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(arg2 + 0x30);
        *(arg2 + 0x40) = var_b8;
        *(arg2 + 0x30) = var_128;
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_c8, 
            "Filesenter_smtp_user_nameenter_s…", 5);
        var_128 = var_c8;
        int64_t r8_1 =
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(arg2 + 0x60);
        *(arg2 + 0x70) = var_b8;
        *(arg2 + 0x60) = var_128;
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
