
  int64_t uu_who::platform::unix::Who::exec::hfa7301829d97906e(void* arg1)

{
    int128_t** r15;
    int128_t** var_10 = r15;
    void* rax = *(arg1 + 8);
    int64_t* rcx = rax + 8;
    void* const rsi = &data_4ffa28;
    int64_t temp0 = *(arg1 + 0x10);
    
    if (temp0 == 1)
        rsi = rax + 0x10;
    
    if (temp0 != 1)
        rcx = &uucore::features::utmpx::ut::DEFAULT_FILE::h6ad9aaf5b9ead8d5;
    
    int64_t rdi = *rcx;
    *rsi;
    int128_t* var_3a0;
    void var_368;
    int64_t var_360;
    int128_t* var_358;
    int128_t var_340;
    int128_t var_1b8;
    
    if (!*(arg1 + 0x19))
    {
        int64_t rax_4;
        char rdx_4;
        rax_4 = uucore::features::utmpx::Utmpx::iter_all_records_from::h4237c126b37763e3(rdi);
        int64_t var_350_1 = rax_4;
        char rbp_1 = rdx_4 & 1;
        char var_348_1 = rbp_1;
        
        if (*(arg1 + 0x1c))
        {
            int64_t var_3b0_1 = 4;
            int64_t var_3c0_1 = 7;
            int64_t var_3d0_1 = 3;
            int64_t var_3e0_1 = 4;
            int64_t var_3f0_1 = 4;
            uu_who::platform::unix::Who::print_line::h48873e2090b4b940(arg1, 
                "NAMEAnsi -- \x1b[8mzerohelpnoneN…", 4, 0x20, &data_4192a0[0x10], 
                "TIMEIDLEshimname\x1b[0mreprsigny…", "IDLEshimname\x1b[0mreprsignyear/…", 
                "PIDCOMMENTrun-level last=clock c…", "COMMENTrun-level last=clock chan…", 
                "EXITZero\x1b[7mhourlongBool");
        }
        
        char r13_1 = *(arg1 + 0x26);
        uint64_t var_388_1;
        int64_t var_380_1;
        
        if (!r13_1)
        {
            var_3a0 = nullptr;
            int64_t var_398_2 = 1;
            int64_t var_390_1 = 0;
            var_380_1 = 1;
            var_388_1 = 0;
        }
        else
        {
            uu_who::platform::unix::current_tty::h7efed81fa6083dd7(&var_3a0);
            int64_t var_398;
            var_380_1 = var_398;
            uint64_t var_390;
            var_388_1 = var_390;
        }
        
        int64_t var_378 = rax_4;
        char var_370_1 = rbp_1;
        char rbp_2 = *(arg1 + 0x25);
        char rax_7 = *(arg1 + 0x24);
        char rax_8 = *(arg1 + 0x1f);
        char rax_9 = *(arg1 + 0x20);
        char rax_10 = *(arg1 + 0x23);
        char rax_11 = *(arg1 + 0x22);
        char rax_12 = *(arg1 + 0x21);
        
        while (true)
        {
            _$LT$uucore..features..utmpx..UtmpxIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0874e3c7200a2ada(&var_340);
            
            if (var_340 != 1)
            {
                core::ptr::drop_in_place$LT$uucore..features..utmpx..UtmpxIter$GT$::h74db595d7cb4e6fe(&var_378);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_3a0);
                break;
            }
            
            memcpy(&var_1b8, &*var_340[4], 0x180);
            
            if (r13_1)
            {
                uucore::features::utmpx::Utmpx::tty_device::h164f6e4ca04cfddc(&var_368, &var_1b8);
                r15 = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::ha23ce3230bdc0fda(var_380_1, var_388_1, var_360, var_358);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_368);
                
                if (!r15)
                    continue;
            }
            
            if (rbp_2 & 1
                && uucore::features::utmpx::Utmpx::is_user_process::h30a2442fae430ce7(&var_1b8))
            {
                int64_t result;
                int128_t** rdx_6;
                result = uu_who::platform::unix::Who::print_user::hb7a5018d3494c7fe(arg1, &var_1b8);
                
                if (!result)
                    continue;
                
                core::ptr::drop_in_place$LT$uucore..features..utmpx..UtmpxIter$GT$::h74db595d7cb4e6fe(&var_378);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_3a0);
                return result;
            }
            
            int16_t rax_15 = var_1b8;
            
            if (rax_7 & rax_15 == 1)
                uu_who::platform::unix::Who::print_runlevel::h9d15e26d69ee4710(arg1, &var_1b8);
            else if (rax_8 & rax_15 == 2)
                uu_who::platform::unix::Who::print_boottime::h50688022477eb7c7(arg1, &var_1b8);
            else if (rax_10 & rax_15 == 3)
                uu_who::platform::unix::Who::print_clockchange::h290c0182533fa887(arg1, &var_1b8);
            else if (rax_11 & rax_15 == 5)
                uu_who::platform::unix::Who::print_initspawn::h93d956fb414ae39c(arg1, &var_1b8);
            else if (!(rax_12 & rax_15 == 6))
            {
                rax_15 = rax_15 == 8;
                
                if (rax_9 & rax_15)
                    uu_who::platform::unix::Who::print_deadprocs::h2131ef1c65baa56a(arg1, &var_1b8);
            }
            else
                uu_who::platform::unix::Who::print_login::h2c5ca408ebd3692a(arg1, &var_1b8);
        }
    }
    else
    {
        int64_t rax_2;
        char rdx;
        rax_2 = uucore::features::utmpx::Utmpx::iter_all_records_from::h4237c126b37763e3(rdi);
        core::iter::traits::iterator::Iterator::collect::h1b554caae092d3aa(&var_368, rax_2, 
            rdx & 1);
        alloc::str::join_generic_copy::h24ed4c49f35fc838(&var_340, var_360, var_358);
        int64_t var_330;
        int64_t var_1a8_1 = var_330;
        var_1b8 = var_340;
        var_3a0 = &var_1b8;
        int64_t (* var_398_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_340 = &data_4fef18;
        *var_340[8] = 2;
        int64_t var_320_1 = 0;
        int128_t** var_330_1 = &var_3a0;
        int64_t var_328_1 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_340);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_1b8);
        var_3a0 = var_358;
        var_1b8 = &var_3a0;
        *var_1b8[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        var_340 = &data_4fef38;
        *var_340[8] = 2;
        int64_t var_320_2 = 0;
        int128_t* var_330_2 = &var_1b8;
        int64_t var_328_2 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_340);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hddca066d18e15028(&var_368);
    }
    return 0;
}
