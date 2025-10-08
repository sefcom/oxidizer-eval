
  fn uu_env::EnvAppData::run_program::he856797d7be52ddc(arg1: *mut c_void, arg2: *mut c_void, arg3: i8) -> u64

{
    let rax: i64 = *arg2.byte_offset(0x58);
    
    if rax == 0
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
        /* no return */
    }
    
    let r13: *mut i64 = *arg2.byte_offset(0x50);
    let r15: i64 = *r13;
    let r12: i64 = r13[1];
    let var_120: i64 = r15;
    let var_118: i64 = r12;
    let mut var_128: i64 = -0x8000000000000000;
    let mut var_2a8: i64;
    _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h2c866a58aa2651bf(
        &var_2a8, &var_128);
    let mut var_110: ();
    std::process::Command::new::h7c9a3a5c27f688cb(&var_110, r15);
    std::process::Command::args::hf49502e597a82f21(&var_110, &r13[2], rax - 1);
    let r12_1: *mut *mut *mut *mut *mut c_void = *arg2.byte_offset(0x88);
    let mut var_2e0: *mut *mut *mut *mut c_void;
    let mut var_2c0: i32;
    let mut var_2b8: *mut c_void;
    let mut var_2a0: *mut *mut *mut *mut *mut c_void;
    let mut var_280: *mut *mut c_void;
    let mut var_270: *mut *mut [i8; 0xb7];
    let mut var_1c0: *mut *mut *mut c_void;
    
    if r12_1 != 0
    {
        let rbx_1: i64 = *arg2.byte_offset(0x90);
        _$LT$std..process..Command$u20$as$u20$std..os..unix..process..CommandExt$GT$::arg0::h169c3378e1fdf608(&var_110, r12_1);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::hf18cf8a450edb385(var_2a8, var_2a0);
        var_2a8 = -0x8000000000000000;
        var_2a0 = r12_1;
        let var_298_1: i64 = rbx_1;
        
        if arg3 != 0
        {
            var_1c0 = 1;
            let var_1b8_1: *mut *mut *mut *mut *mut c_void = r12_1;
            let var_1b0_1: i64 = rbx_1;
            let var_1a8_1: i8 = 1;
            var_2e0 = &var_1c0;
            let var_2d8_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_270 = &data_510ab8;
            let var_268_1: i64 = 2;
            let var_250_1: i64 = 0;
            let var_260_1: *mut *mut *mut *mut *mut c_void = &var_2e0;
            let var_258_1: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_270);
            'label_4746aa:
            var_1c0 = 1;
            let mut var_1b8_2: i64 = r15;
            let var_1b0_2: i64 = r12;
            let var_1a8_2: i8 = 0;
            var_2e0 = &var_1c0;
            let var_2d8_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_270 = &data_510ad8;
            let var_268_2: i64 = 2;
            let var_250_2: i64 = 0;
            let var_260_2: *mut *mut *mut *mut *mut c_void = &var_2e0;
            let var_258_2: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_270);
            var_280 = "   argcannot unset : Invalid arg…";
            let var_278_1: i64 = 6;
            var_1c0 = 1;
            var_1b8_2 = var_2a0;
            let mut var_1a8_3: i8 = 1;
            var_2e0 = &var_280;
            let var_2d8_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c2ec06aa0838e92;
            let var_2d0_1: *mut *mut *mut *mut c_void = &var_1c0;
            let mut var_2c8_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_270 = &data_510af8;
            let var_268_3: i64 = 3;
            let var_250_3: i64 = 0;
            let var_260_3: *mut *mut *mut *mut *mut c_void = &var_2e0;
            let var_258_3: i64 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_270);
            var_2c0 = &r13[2];
            var_2b8 = &r13[rax * 2];
            let var_2b0_1: i64 = 0;
            let mut rax_6: i64;
            let mut i: *mut i64;
            rax_6 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h153148f6263ff6d0(&var_2c0);
            
            while i != 0
            {
                let mut var_1c8: i64 = rax_6 + 1;
                let rax_8: i64 = *i;
                let rcx_1: i64 = i[1];
                var_2e0 = 1;
                let var_2d8_4: i64 = rax_8;
                let var_2d0_2: i64 = rcx_1;
                var_2c8_1 = 1;
                var_270 = &var_280;
                let var_268_4: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c2ec06aa0838e92;
                let var_260_4: *mut i64 = &var_1c8;
                let var_258_4: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                let var_250_4: *mut *mut *mut *mut *mut c_void = &var_2e0;
                let var_248_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_1c0 = &data_510b28;
                let var_1b8_3: i64 = 4;
                let var_1a0_1: i64 = 0;
                let var_1b0_3: *const *mut *mut [i8; 0xb7] = &var_270;
                var_1a8_3 = 3;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_1c0);
                rax_6 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h153148f6263ff6d0(&var_2c0);
            }
        }
    }
    else if arg3 != 0
    {
        goto 'label_4746aa;
    }
    
    std::process::Command::status::h6e1e3c5811681da5(&var_2c0);
    let mut result: u64;
    let mut result_1: u64;
    
    if var_2c0 != 1
    {
        let var_2bc: i32;
        
        if var_2bc != 0
        {
            let rdi_15: i32 = var_2bc & 0x7f;
            
            if rdi_15 == 0
            {
                result_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(*var_2bc[1]);
                goto 'label_474b76;
            }
            
            if rdi_15 + 1 > 1
            {
                let mut rax_18: i8;
                let mut rdx_7: i32;
                rax_18 = _$LT$nix..sys..signal..Signal$u20$as$u20$core..convert..TryFrom$LT$i32$GT$$GT$::try_from::h9a35f89cbe212992(rdi_15);
                core::result::Result$LT$T$C$E$GT$::unwrap::h4e7a9fcfafa3cdba(rax_18, rdx_7);
                nix::sys::signal::SigSet::all::h73a1d49e20e266c3(&var_270);
                nix::sys::signal::SigAction::new::h3cd9b9e633f15c0a(&var_1c0, &var_270);
                nix::sys::signal::sigaction::hfba5b52838f1660d(&var_270, rdx_7, &var_1c0);
                nix::sys::signal::raise::ha368cf497e0c8ff8(rdx_7);
            }
            
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..process..ExitStatus$C$std..io..error..Error$GT$$GT$::hd3752023ff91501c(&var_2c0);
        core::ptr::drop_in_place$LT$std..process..Command$GT$::h4f4015e7e1c0b0b1(&var_110);
        result = 0;
    }
    else
    {
        var_280 = &var_2b8;
        let rax_9: i8 = std::io::error::Error::kind::h135fe00c4e7365f3(var_2b8);
        
        if rax_9 == 0
        {
            result_1 = uu_env::EnvAppData::make_error_no_such_file_or_dir::hd6612e965bb2f841(
                *arg1.byte_offset(1));
        }
        else
        {
            let rax_10: u32 = rax_9;
            
            if rax_10 == 1
            {
                let mut rax_13: *mut *mut *mut c_void;
                let mut rdx_4: i64;
                rax_13 = uucore::util_name::h074417a1e6395129();
                var_1c0 = rax_13;
                let var_1b8_4: i64 = rdx_4;
                var_2e0 = &var_1c0;
                let var_2d8_5: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c2ec06aa0838e92;
                var_270 = &data_510958;
                let var_268_5: i64 = 2;
                let var_250_5: i64 = 0;
                let var_260_5: *mut *mut *mut *mut *mut c_void = &var_2e0;
                let var_258_5: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_270);
                var_1c0 = 1;
                let var_1b8_5: i64 = r15;
                let var_1b0_4: i64 = r12;
                let var_1a8_4: i8 = 1;
                var_2e0 = &var_1c0;
                let var_2d8_6: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_270 = &data_510b68;
                let var_268_6: i64 = 2;
                let var_250_6: i64 = 0;
                let var_260_6: *mut *mut *mut *mut *mut c_void = &var_2e0;
                let var_258_6: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_270);
                result_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(0x7e);
            }
            else if rax_10 != 0x14
            {
                let mut rax_15: *mut *mut *mut c_void;
                let mut rdx_5: i64;
                rax_15 = uucore::util_name::h074417a1e6395129();
                var_1c0 = rax_15;
                let var_1b8_6: i64 = rdx_5;
                var_2e0 = &var_1c0;
                let var_2d8_7: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c2ec06aa0838e92;
                var_270 = &data_510958;
                let var_268_7: i64 = 2;
                let var_250_7: i64 = 0;
                let var_260_7: *mut *mut *mut *mut *mut c_void = &var_2e0;
                let var_258_7: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_270);
                var_1c0 = &var_280;
                let var_1b8_7: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h343726f25827f1d9;
                var_270 = &data_510b88;
                let var_268_8: i64 = 2;
                let var_250_8: i64 = 0;
                let var_260_8: *mut *mut *mut *mut c_void = &var_1c0;
                let var_258_8: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_270);
                result_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(0x7e);
            }
            else
            {
                result_1 = uu_env::EnvAppData::make_error_no_such_file_or_dir::hd6612e965bb2f841(
                    *arg1.byte_offset(1));
            }
        }
        
        'label_474b76:
        result = result_1;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..process..ExitStatus$C$std..io..error..Error$GT$$GT$::hd3752023ff91501c(&var_2c0);
        core::ptr::drop_in_place$LT$std..process..Command$GT$::h4f4015e7e1c0b0b1(&var_110);
    }
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::hf18cf8a450edb385(var_2a8, var_2a0);
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::hf18cf8a450edb385(-0x8000000000000000, r15);
    result
}
