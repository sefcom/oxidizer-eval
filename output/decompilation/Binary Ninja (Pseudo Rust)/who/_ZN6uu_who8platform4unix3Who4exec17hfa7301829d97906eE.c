
  fn uu_who::platform::unix::Who::exec::hfa7301829d97906e(arg1: *mut c_void) -> i64

{
    let mut r15: *mut *mut i128;
    let var_10: *mut *mut i128 = r15;
    let rax: *mut c_void = *arg1.byte_offset(8);
    let mut rcx: *mut i64 = rax.byte_offset(8);
    let mut rsi: *mut c_void = &data_4ffa28;
    let temp0: i64 = *arg1.byte_offset(0x10);
    
    if temp0 == 1
    {
        rsi = rax.byte_offset(0x10);
    }
    
    if temp0 != 1
    {
        rcx = &uucore::features::utmpx::ut::DEFAULT_FILE::h6ad9aaf5b9ead8d5;
    }
    
    let rdi: i64 = *rcx;
    *rsi;
    let mut var_3a0: *mut i128;
    let mut var_368: ();
    let var_360: i64;
    let var_358: *mut i128;
    let mut var_340: i128;
    let mut var_1b8: i128;
    
    if *arg1.byte_offset(0x19) == 0
    {
        let mut rax_4: i64;
        let mut rdx_4: i8;
        rax_4 = uucore::features::utmpx::Utmpx::iter_all_records_from::h4237c126b37763e3(rdi);
        let var_350_1: i64 = rax_4;
        let rbp_1: i8 = rdx_4 & 1;
        let var_348_1: i8 = rbp_1;
        
        if *arg1.byte_offset(0x1c) != 0
        {
            let var_3b0_1: i64 = 4;
            let var_3c0_1: i64 = 7;
            let var_3d0_1: i64 = 3;
            let var_3e0_1: i64 = 4;
            let var_3f0_1: i64 = 4;
            uu_who::platform::unix::Who::print_line::h48873e2090b4b940(arg1, 
                "NAMEAnsi -- \x1b[8mzerohelpnoneN…", 4, 0x20, &data_4192a0[0x10], 
                "TIMEIDLEshimname\x1b[0mreprsigny…", "IDLEshimname\x1b[0mreprsignyear/…", 
                "PIDCOMMENTrun-level last=clock c…", "COMMENTrun-level last=clock chan…", 
                "EXITZero\x1b[7mhourlongBool");
        }
        
        let r13_1: i8 = *arg1.byte_offset(0x26);
        let mut var_388_1: u64;
        let mut var_380_1: i64;
        
        if r13_1 == 0
        {
            var_3a0 = nullptr;
            let var_398_2: i64 = 1;
            let var_390_1: i64 = 0;
            var_380_1 = 1;
            var_388_1 = 0;
        }
        else
        {
            uu_who::platform::unix::current_tty::h7efed81fa6083dd7(&var_3a0);
            let var_398: i64;
            var_380_1 = var_398;
            let var_390: u64;
            var_388_1 = var_390;
        }
        
        let mut var_378: i64 = rax_4;
        let var_370_1: i8 = rbp_1;
        let rbp_2: i8 = *arg1.byte_offset(0x25);
        let rax_7: i8 = *arg1.byte_offset(0x24);
        let rax_8: i8 = *arg1.byte_offset(0x1f);
        let rax_9: i8 = *arg1.byte_offset(0x20);
        let rax_10: i8 = *arg1.byte_offset(0x23);
        let rax_11: i8 = *arg1.byte_offset(0x22);
        let rax_12: i8 = *arg1.byte_offset(0x21);
        
        loop
        {
            _$LT$uucore..features..utmpx..UtmpxIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0874e3c7200a2ada(&var_340);
            
            if var_340 != 1
            {
                core::ptr::drop_in_place$LT$uucore..features..utmpx..UtmpxIter$GT$::h74db595d7cb4e6fe(&var_378);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_3a0);
                break;
            }
            
            memcpy(&var_1b8, &*var_340[4], 0x180);
            
            if r13_1 != 0
            {
                uucore::features::utmpx::Utmpx::tty_device::h164f6e4ca04cfddc(&var_368, &var_1b8);
                r15 = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::ha23ce3230bdc0fda(var_380_1, var_388_1, var_360, var_358);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_368);
                
                if r15 == 0
                {
                    continue;
                }
            }
            
            if (rbp_2 & 1) != 0
                && uucore::features::utmpx::Utmpx::is_user_process::h30a2442fae430ce7(&var_1b8)
                != 0
            {
                let mut result: i64;
                let mut rdx_6: *mut *mut i128;
                result = uu_who::platform::unix::Who::print_user::hb7a5018d3494c7fe(arg1, &var_1b8);
                
                if result == 0
                {
                    continue;
                }
                
                core::ptr::drop_in_place$LT$uucore..features..utmpx..UtmpxIter$GT$::h74db595d7cb4e6fe(&var_378);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_3a0);
                return result;
            }
            
            let mut rax_15: i16 = var_1b8;
            
            if (rax_7 & rax_15 == 1) != 0
            {
                uu_who::platform::unix::Who::print_runlevel::h9d15e26d69ee4710(arg1, &var_1b8);
            }
            else if (rax_8 & rax_15 == 2) != 0
            {
                uu_who::platform::unix::Who::print_boottime::h50688022477eb7c7(arg1, &var_1b8);
            }
            else if (rax_10 & rax_15 == 3) != 0
            {
                uu_who::platform::unix::Who::print_clockchange::h290c0182533fa887(arg1, &var_1b8);
            }
            else if (rax_11 & rax_15 == 5) != 0
            {
                uu_who::platform::unix::Who::print_initspawn::h93d956fb414ae39c(arg1, &var_1b8);
            }
            else if (rax_12 & rax_15 == 6) == 0
            {
                rax_15 = rax_15 == 8;
                
                if (rax_9 & rax_15) != 0
                {
                    uu_who::platform::unix::Who::print_deadprocs::h2131ef1c65baa56a(arg1, &var_1b8);
                }
            }
            else
            {
                uu_who::platform::unix::Who::print_login::h2c5ca408ebd3692a(arg1, &var_1b8);
            }
        }
    }
    else
    {
        let mut rax_2: i64;
        let mut rdx: i8;
        rax_2 = uucore::features::utmpx::Utmpx::iter_all_records_from::h4237c126b37763e3(rdi);
        core::iter::traits::iterator::Iterator::collect::h1b554caae092d3aa(&var_368, rax_2, 
            rdx & 1);
        alloc::str::join_generic_copy::h24ed4c49f35fc838(&var_340, var_360, var_358);
        let var_330: i64;
        let var_1a8_1: i64 = var_330;
        var_1b8 = var_340;
        var_3a0 = &var_1b8;
        let var_398_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_340 = &data_4fef18;
        *var_340[8] = 2;
        let var_320_1: i64 = 0;
        let var_330_1: *mut *mut i128 = &var_3a0;
        let var_328_1: i64 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_340);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_1b8);
        var_3a0 = var_358;
        var_1b8 = &var_3a0;
        *var_1b8[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        var_340 = &data_4fef38;
        *var_340[8] = 2;
        let var_320_2: i64 = 0;
        let var_330_2: *mut i128 = &var_1b8;
        let var_328_2: i64 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_340);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hddca066d18e15028(&var_368);
    }
    0
}
