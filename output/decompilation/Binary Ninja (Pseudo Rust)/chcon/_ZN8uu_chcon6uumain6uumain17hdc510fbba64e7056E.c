
  fn uu_chcon::uumain::uumain::hdc510fbba64e7056() -> u64

{
    let mut var_2f8: ();
    uu_chcon::uu_app::h727a1888320f29f0(&var_2f8);
    let mut var_518: *mut c_void;
    uu_chcon::parse_command_line::h80e4b743b4687404(&var_518);
    let mut result: u64;
    let mut var_598: *mut c_void;
    let mut var_568: i128;
    let mut var_510: i128;
    let mut var_508: i128;
    let mut var_4f8: i128;
    let mut var_4e8: i128;
    let mut var_4d8: i128;
    let mut var_478: *mut i128;
    
    if var_518 != -0x8000000000000000
    {
        let var_4a8: i128;
        let var_3c8_1: i96 = var_4a8;
        let var_4b8: i128;
        let var_3d8_1: i128 = var_4b8;
        let var_4c8: i128;
        let var_3e8_1: i128 = var_4c8;
        let var_3f8_1: i128 = var_4d8;
        let mut zmm0: i128 = var_518;
        let var_408_1: u64 = var_4e8;
        let mut var_418: i128 = var_4f8;
        let mut var_438: i128 = zmm0;
        let mut rax_2: i64 = 2;
        
        if 0x7fffffffffffffff + *var_508[8] < 2
        {
            rax_2 = 0x7fffffffffffffff + *var_508[8];
        }
        
        let mut var_588: i64;
        let mut var_558: i128;
        let mut var_548: i128;
        let mut var_490: *mut i128;
        let var_488: i64;
        let mut var_458: *mut *mut i128;
        let mut rax_5: *mut c_void;
        
        if rax_2 == 0
        {
            selinux::SecurityContext::of_path::hbe4625ec60b9a49c(&var_568, &var_418);
            let mut var_578: i32;
            let mut var_448_1: i128;
            let mut rax_8: i32;
            let mut rcx_2: *const i8;
            let mut rdx_2: i64;
            
            if var_568 != 0xa
            {
                rax_8 = var_568;
                var_598 = var_568;
                var_588 = var_558;
                var_578 = *var_548[4];
                var_448_1 = var_548;
                rcx_2 = "Getting security context.Invalid…";
                rdx_2 = 0x18;
                
                if rax_8 == 0x12
                {
                    goto 'label_45d898;
                }
            }
            else
            {
                if *var_568[8] != 2
                {
                    *var_588[4] = var_558;
                    *var_598[4] = var_568;
                    'label_45d898:
                    zmm0 = *var_598[4];
                    let var_468_1: i128 = *var_588[4];
                    var_478 = zmm0;
                    rax_5 = nullptr;
                    
                    if *var_3c8_1[9] == 1 && *var_3c8_1[0xb] != 0
                    {
                        goto 'label_45d50f;
                    }
                    
                    goto 'label_45d8c2;
                }
                
                uu_chcon::errors::Error::from_io1::hdc2db079e528bea9(&var_518, &var_418);
                rax_8 = var_518;
                var_598 = *var_518[4];
                var_588 = var_508;
                var_578 = *var_4f8[4];
                var_448_1 = var_4f8;
                rcx_2 = *var_4e8[8];
                rdx_2 = var_4d8;
                
                if rax_8 == 0x12
                {
                    goto 'label_45d898;
                }
            }
            
            var_518 = rax_8;
            *var_518[4] = var_598;
            var_508 = var_588;
            *var_4f8[4] = var_578;
            var_4f8 = var_448_1;
            *var_4e8[8] = rcx_2;
            var_4d8 = rdx_2;
            uu_chcon::errors::report_full_error::h7e0a29c75407e3d3(&var_490, &var_518, 
                &data_4ef648);
            var_458 = &var_490;
            let var_450_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_568 = &data_4ef5e8;
            *var_568[8] = 2;
            var_548 = 0;
            var_558 = &var_458;
            *var_558[8] = 1;
            let mut var_3a0: i128;
            core::option::Option$LT$T$GT$::map_or_else::hc21cbd6b2ca648ca(&var_3a0, &var_568);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h6a7d7e16d3721972(var_490, 
                var_488);
            *var_558[8] = 1;
            var_568 = var_3a0;
            let var_390: i64;
            var_558 = var_390;
            result = alloc::boxed::Box$LT$T$GT$::new::h01f4e215997bdd5b(&var_568);
            core::ptr::drop_in_place$LT$uu_chcon..errors..Error$GT$::hc6ea8fd41c56983f(&var_518);
            core::ptr::drop_in_place$LT$uu_chcon..Options$GT$::h94089391003526ba(&var_438);
        }
        else if rax_2 != 1
        {
            let var_470_3: i64 = 0;
            var_478 = 2;
            rax_5 = nullptr;
            
            if *var_3c8_1[9] != 1 || *var_3c8_1[0xb] == 0
            {
                goto 'label_45d8c2;
            }
            
            'label_45d50f:
            uu_chcon::get_root_dev_ino::h0d3acefe4ca973af(&var_568);
            
            if var_568 != 0x12
            {
                let var_528: i64;
                var_4d8 = var_528;
                let var_538: i128;
                let var_4e8_1: i128 = var_538;
                let var_4f8_1: i128 = var_548;
                let var_508_1: i128 = var_558;
                var_518 = var_568;
                uu_chcon::errors::report_full_error::h7e0a29c75407e3d3(&var_490, &var_518, 
                    &data_4ef648);
                var_458 = &var_490;
                let var_450_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_598 = &data_4ef5e8;
                let var_590_3: i64 = 2;
                let var_578_2: i64 = 0;
                let var_588_3: *mut *mut *mut i128 = &var_458;
                let mut var_580_2: i64 = 1;
                let mut var_358: i128;
                core::option::Option$LT$T$GT$::map_or_else::hc21cbd6b2ca648ca(&var_358, &var_598);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h6a7d7e16d3721972(var_490, 
                    var_488);
                var_580_2 = 1;
                var_598 = var_358;
                let var_348: i64;
                let var_588_4: i64 = var_348;
                result = alloc::boxed::Box$LT$T$GT$::new::h01f4e215997bdd5b(&var_598);
                core::ptr::drop_in_place$LT$uu_chcon..errors..Error$GT$::hc6ea8fd41c56983f(
                    &var_518);
                core::ptr::drop_in_place$LT$uu_chcon..SELinuxSecurityContext$GT$::h1cf681c9397cbc0e(
                    &var_478);
                core::ptr::drop_in_place$LT$uu_chcon..Options$GT$::h94089391003526ba(&var_438);
            }
            else
            {
                zmm0 = var_568;
                rax_5 = 1;
                'label_45d8c2:
                var_518 = rax_5;
                let mut var_510_1: i128 = zmm0;
                uu_chcon::process_files::h906a9b3bc232c0fe(&var_598, &var_438, &var_478, &var_518);
                
                if var_588 == 0
                {
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_chcon..errors..Error$GT$$GT$::h49bec97fb7c22d3e(&var_598);
                    result = 0;
                    core::ptr::drop_in_place$LT$uu_chcon..SELinuxSecurityContext$GT$::h1cf681c9397cbc0e(&var_478);
                    core::ptr::drop_in_place$LT$uu_chcon..Options$GT$::h94089391003526ba(&var_438);
                }
                else
                {
                    let var_590: i64;
                    let mut rbx_1: i64 = var_590;
                    let mut i_1: i64 = var_588 * 0x48;
                    let mut i: i64;
                    
                    do
                    {
                        let mut rax_19: i64;
                        let mut rdx_4: i64;
                        rax_19 = uucore::util_name::h074417a1e6395129();
                        var_568 = rax_19;
                        *var_568[8] = rdx_4;
                        var_490 = &var_568;
                        let var_488_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd8baa6bbb24b7a31;
                        var_518 = &data_4ef550;
                        var_510_1 = 2;
                        var_4f8 = 0;
                        var_508 = &var_490;
                        *var_508[8] = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_518);
                        uu_chcon::errors::report_full_error::h7e0a29c75407e3d3(&var_568, rbx_1, 
                            &data_4ef648);
                        var_490 = &var_568;
                        let var_488_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        var_518 = &data_4ef5c8;
                        var_510_1 = 2;
                        var_4f8 = 0;
                        var_508 = &var_490;
                        *var_508[8] = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_518);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h6a7d7e16d3721972(
                            var_568, *var_568[8]);
                        rbx_1 += 0x48;
                        i = i_1;
                        i_1 -= 0x48;
                    } while i != 0x48;
                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(1);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_chcon..errors..Error$GT$$GT$::h49bec97fb7c22d3e(&var_598);
                    core::ptr::drop_in_place$LT$uu_chcon..SELinuxSecurityContext$GT$::h1cf681c9397cbc0e(&var_478);
                    core::ptr::drop_in_place$LT$uu_chcon..Options$GT$::h94089391003526ba(&var_438);
                }
            }
        }
        else
        {
            let mut var_340: i32;
            uu_chcon::os_str_to_c_string::h768cd0b3ad15605a(&var_340, *var_418[8], var_408_1);
            
            if var_340 != 0x12
            {
                var_568 = 1;
                var_568 = var_418;
                *var_558[8] = 1;
                var_598 = &var_568;
                let var_590_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_518 = &data_4ef608;
                var_510 = 2;
                var_4f8 = 0;
                var_508 = &var_598;
                *var_508[8] = 1;
                let mut var_388: i128;
                core::option::Option$LT$T$GT$::map_or_else::hc21cbd6b2ca648ca(&var_388, &var_518);
                *var_508[8] = 1;
                var_518 = var_388;
                let var_378: i64;
                var_508 = var_378;
                result = alloc::boxed::Box$LT$T$GT$::new::h01f4e215997bdd5b(&var_518);
                core::ptr::drop_in_place$LT$uu_chcon..errors..Error$GT$::hc6ea8fd41c56983f(
                    &var_340);
                core::ptr::drop_in_place$LT$uu_chcon..Options$GT$::h94089391003526ba(&var_438);
            }
            else
            {
                let var_338: *mut i8;
                var_508 = var_338;
                var_518 = 1;
                let var_330: i64;
                var_510 = var_330 - 1;
                *var_508[8] = 0;
                let rax_4: i8 = selinux::SecurityContext::check::he42cb34df3f2af54(&var_518);
                
                if rax_4 == 2 || (rax_4 & 1) != 0
                {
                    zmm0 =
                        core::ptr::drop_in_place$LT$selinux..SecurityContext$GT$::h99d499de84ed8ca8(
                        );
                    let var_470_1: *mut i8 = var_338;
                    let mut var_468: i128;
                    var_468 = var_330;
                    var_478 = 2;
                    rax_5 = nullptr;
                    
                    if *var_3c8_1[9] == 1 && *var_3c8_1[0xb] != 0
                    {
                        goto 'label_45d50f;
                    }
                    
                    goto 'label_45d8c2;
                }
                
                core::ptr::drop_in_place$LT$selinux..SecurityContext$GT$::h99d499de84ed8ca8();
                var_568 = 1;
                var_568 = var_418;
                *var_558[8] = 1;
                var_598 = &var_568;
                let var_590_4: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_518 = &data_4ef608;
                var_510 = 2;
                var_4f8 = 0;
                var_508 = &var_598;
                *var_508[8] = 1;
                let mut var_370: i128;
                core::option::Option$LT$T$GT$::map_or_else::hc21cbd6b2ca648ca(&var_370, &var_518);
                *var_508[8] = 1;
                var_518 = var_370;
                let var_360: i64;
                var_508 = var_360;
                result = alloc::boxed::Box$LT$T$GT$::new::h01f4e215997bdd5b(&var_518);
                core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::hbb58f8d5beefe52a(
                    var_338, var_330);
                core::ptr::drop_in_place$LT$uu_chcon..Options$GT$::h94089391003526ba(&var_438);
            }
        }
    }
    else
    {
        var_568 = var_510;
        let var_528_1: i64 = *var_4d8[8];
        let var_538_1: i128 = var_4e8;
        let var_548_1: i128 = var_4f8;
        let var_558_1: i128 = var_508;
        
        if var_568 != 0xe
        {
            var_478 = &var_568;
            let var_470_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$uu_chcon..errors..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h9967b7757373ce74;
            var_598 = &data_4ef5c8;
            let var_590_1: i64 = 2;
            let var_578_1: i64 = 0;
            let var_588_1: *mut *mut i128 = &var_478;
            let mut var_580_1: i64 = 1;
            let mut var_3b8: i128;
            core::option::Option$LT$T$GT$::map_or_else::hc21cbd6b2ca648ca(&var_3b8, &var_598);
            var_580_1 = 1;
            var_598 = var_3b8;
            let var_3a8: i64;
            let var_588_2: i64 = var_3a8;
            result = alloc::boxed::Box$LT$T$GT$::new::h01f4e215997bdd5b(&var_598);
            
            if var_568 != 0xe
            {
                core::ptr::drop_in_place$LT$uu_chcon..errors..Error$GT$::hc6ea8fd41c56983f(
                    &var_568);
            }
            else
            {
                core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::h7b53c858d4d7faf8(
                    *var_568[8]);
            }
        }
        else
        {
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(*var_568[8]);
        }
    }
    result
}
