
  fn uu_env::EnvAppData::run_program::h150b93669ea43850(arg1: *mut c_void, arg2: *mut c_void, arg3: i8) -> *mut i32

{
    let rax: i64 = *arg2.byte_offset(0x58);
    
    if rax == 0
    {
        core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0);
        /* no return */
    }
    
    let r14: *mut i128 = *arg2.byte_offset(0x50);
    let zmm0: i128 = *r14;
    let mut var_288: i64 = -0x8000000000000000;
    let mut var_2b0: i64;
    _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hbe16e6f3cec1002d(
        &var_2b0, &var_288);
    let mut var_100: ();
    std::process::Command::new::h075a12e329d1fe67(&var_100, zmm0);
    std::process::Command::args::hea19ada20403eab5(&var_100, &r14[1], rax - 1);
    let r12: i64 = *arg2.byte_offset(0x88);
    let mut var_2d0: *mut i64;
    let mut var_298: *const i8;
    let mut var_270: i32;
    let mut var_268: *mut i128;
    let mut var_238: *mut *mut c_void;
    let mut var_198: *const *const i8;
    let mut var_190: i128;
    
    if r12 != 0
    {
        let r15_1: i64 = *arg2.byte_offset(0x90);
        _$LT$std..process..Command$u20$as$u20$std..os..unix..process..CommandExt$GT$::arg0::h2cf9a00e306c4985(&var_100, r12);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::he07de9b5285c91ba(&var_2b0);
        var_2b0 = -0x8000000000000000;
        let var_2a8: i64 = r12;
        let var_2a0_1: i64 = r15_1;
        
        if arg3 != 0
        {
            var_198 = 1;
            var_190 = r12;
            *var_190[8] = r15_1;
            let var_180_1: i8 = 1;
            var_2d0 = &var_198;
            let var_2c8_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_238 = &data_548a78;
            let var_230_1: i64 = 2;
            let var_218_1: i64 = 0;
            let var_228_1: *mut *mut i64 = &var_2d0;
            let var_220_1: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_238);
            'label_4ce054:
            var_198 = 1;
            let var_190_1: i128 = zmm0;
            let var_180_2: i8 = 0;
            var_2d0 = &var_198;
            let var_2c8_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_238 = &data_548a98;
            let var_230_2: i64 = 2;
            let var_218_2: i64 = 0;
            let var_228_2: *mut *mut i64 = &var_2d0;
            let var_220_2: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_238);
            var_298 = "   argcannot unset : Invalid arg…";
            let var_290_1: i64 = 6;
            var_198 = 1;
            var_190 = var_2a8;
            let mut var_180_3: i8 = 1;
            var_2d0 = &var_298;
            let mut var_2c8_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h402b3702303fb18e;
            let var_2c0_1: *mut *const *const i8 = &var_198;
            let mut var_2b8_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_238 = &data_548ab8;
            let var_230_3: i64 = 3;
            let var_218_3: i64 = 0;
            let var_228_3: *mut *mut i64 = &var_2d0;
            let var_220_3: i64 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_238);
            var_270 = &r14[1];
            var_268 = &r14[rax];
            let var_260_1: i64 = 0;
            let mut rax_5: i64;
            let mut i: *mut i128;
            rax_5 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h90ed3a0c4574e561(&var_270);
            
            while i != 0
            {
                let mut var_240: i64 = rax_5 + 1;
                let zmm0_3: i128 = *i;
                var_2d0 = 1;
                var_2c8_3 = zmm0_3;
                var_2b8_1 = 1;
                var_238 = &var_298;
                let var_230_4: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h402b3702303fb18e;
                let var_228_4: *mut i64 = &var_240;
                let var_220_4: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                let var_218_4: *mut *mut i64 = &var_2d0;
                let var_210_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_198 = &data_548ae8;
                var_190 = 4;
                let var_178_1: i64 = 0;
                *var_190[8] = &var_238;
                var_180_3 = 3;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_198);
                rax_5 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h90ed3a0c4574e561(&var_270);
            }
        }
    }
    else if arg3 != 0
    {
        goto 'label_4ce054;
    }
    
    std::process::Command::status::h3dc0f2a83545ac66(&var_270);
    let mut result: *mut i32;
    
    if var_270 == 0
    {
        let var_26c: i32;
        
        if var_26c == 0
        {
            core::ptr::drop_in_place$LT$std..process..Command$GT$::hce49e9d552bacf8a(&var_100);
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::he07de9b5285c91ba(&var_2b0);
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::he07de9b5285c91ba(&var_288);
            return nullptr;
        }
        
        let rdi_17: i32 = var_26c & 0x7f;
        
        if rdi_17 != 0
        {
            if rdi_17 + 1 >= 2
            {
                let mut rax_17: i32;
                let mut rdx_7: i32;
                rax_17 = _$LT$nix..sys..signal..Signal$u20$as$u20$core..convert..TryFrom$LT$i32$GT$$GT$::try_from::h02b141bd98cda8e5(rdi_17);
                core::result::Result$LT$T$C$E$GT$::unwrap::h0b8d9f63ece7aa71(rax_17, rdx_7);
                nix::sys::signal::SigSet::all::h0cec38824fe6a56a(&var_238);
                nix::sys::signal::SigAction::new::h7e3c376dfc3f2270(&var_198, &var_238);
                nix::sys::signal::sigaction::haeef16a5456d4ae5(&var_238, rdx_7, &var_198);
                nix::sys::signal::raise::h6585bf1a9c55b1ad(rdx_7);
            }
            
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(*var_26c[1]);
    }
    else
    {
        let r14_1: *mut i128 = var_268;
        let rax_7: i8 = std::io::error::Error::kind::hb2ff5fa058639b3d(r14_1);
        let mut rax_8: i8;
        
        if rax_7 != 0
        {
            rax_8 = std::io::error::Error::kind::hb2ff5fa058639b3d(r14_1);
        }
        
        if rax_7 != 0 && rax_8 != 0x14
        {
            var_298 = r14_1;
            let mut rax_13: *mut *mut i8;
            let mut rdx_4: i64;
            rax_13 = uucore::util_name::h60d842bf27b05e82();
            var_198 = rax_13;
            var_190 = rdx_4;
            var_2d0 = &var_198;
            let var_2c8_4: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h402b3702303fb18e;
            var_238 = &data_548978;
            let var_230_5: i64 = 2;
            let var_218_5: i64 = 0;
            let var_228_5: *mut *mut i64 = &var_2d0;
            let var_220_5: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_238);
            var_198 = &var_298;
            var_190 =
                _$LT$std..io..error..Error$u20$as$u20$core..fmt..Debug$GT$::fmt::h2c21fb8e0a153abf;
            var_238 = &data_548b28;
            let var_230_6: i64 = 2;
            let var_218_6: i64 = 0;
            let var_228_6: *mut *const *const i8 = &var_198;
            let var_220_6: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_238);
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(0x7e);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hd5ebd4cd57902993(&var_298);
        }
        else
        {
            result = uu_env::EnvAppData::make_error_no_such_file_or_dir::hb7f284d37785d950(
                *arg1.byte_offset(1));
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hd5ebd4cd57902993(&var_268);
        }
    }
    
    core::ptr::drop_in_place$LT$std..process..Command$GT$::hce49e9d552bacf8a(&var_100);
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::he07de9b5285c91ba(&var_2b0);
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::he07de9b5285c91ba(&var_288);
    result
}
