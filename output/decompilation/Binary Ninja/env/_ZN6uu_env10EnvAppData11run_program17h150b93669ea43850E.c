
  int32_t* uu_env::EnvAppData::run_program::h150b93669ea43850(void* arg1, void* arg2, char arg3)

{
    int64_t rax = *(arg2 + 0x58);
    
    if (!rax)
    {
        core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0);
        /* no return */
    }
    
    int128_t* r14 = *(arg2 + 0x50);
    int128_t zmm0 = *r14;
    int64_t var_288 = -0x8000000000000000;
    int64_t var_2b0;
    _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hbe16e6f3cec1002d(
        &var_2b0, &var_288);
    void var_100;
    std::process::Command::new::h075a12e329d1fe67(&var_100, zmm0);
    std::process::Command::args::hea19ada20403eab5(&var_100, &r14[1], rax - 1);
    int64_t r12 = *(arg2 + 0x88);
    int64_t* var_2d0;
    char const* const var_298;
    int32_t var_270;
    int128_t* var_268;
    void** const var_238;
    char const* const* var_198;
    int128_t var_190;
    
    if (r12)
    {
        int64_t r15_1 = *(arg2 + 0x90);
        _$LT$std..process..Command$u20$as$u20$std..os..unix..process..CommandExt$GT$::arg0::h2cf9a00e306c4985(&var_100, r12);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::he07de9b5285c91ba(&var_2b0);
        var_2b0 = -0x8000000000000000;
        int64_t var_2a8 = r12;
        int64_t var_2a0_1 = r15_1;
        
        if (arg3)
        {
            var_198 = 1;
            var_190 = r12;
            *var_190[8] = r15_1;
            char var_180_1 = 1;
            var_2d0 = &var_198;
            int64_t (* var_2c8_1)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_238 = &data_548a78;
            int64_t var_230_1 = 2;
            int64_t var_218_1 = 0;
            int64_t** var_228_1 = &var_2d0;
            int64_t var_220_1 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_238);
            label_4ce054:
            var_198 = 1;
            int128_t var_190_1 = zmm0;
            char var_180_2 = 0;
            var_2d0 = &var_198;
            int64_t (* var_2c8_2)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_238 = &data_548a98;
            int64_t var_230_2 = 2;
            int64_t var_218_2 = 0;
            int64_t** var_228_2 = &var_2d0;
            int64_t var_220_2 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_238);
            var_298 = "   argcannot unset : Invalid arg…";
            int64_t var_290_1 = 6;
            var_198 = 1;
            var_190 = var_2a8;
            char var_180_3 = 1;
            var_2d0 = &var_298;
            int64_t (* var_2c8_3)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h402b3702303fb18e;
            char const* const** var_2c0_1 = &var_198;
            int64_t (* var_2b8_1)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_238 = &data_548ab8;
            int64_t var_230_3 = 3;
            int64_t var_218_3 = 0;
            int64_t** var_228_3 = &var_2d0;
            int64_t var_220_3 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_238);
            var_270 = &r14[1];
            var_268 = &r14[rax];
            int64_t var_260_1 = 0;
            int64_t rax_5;
            int128_t* i;
            rax_5 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h90ed3a0c4574e561(&var_270);
            
            while (i)
            {
                int64_t var_240 = rax_5 + 1;
                int128_t zmm0_3 = *i;
                var_2d0 = 1;
                var_2c8_3 = zmm0_3;
                var_2b8_1 = 1;
                var_238 = &var_298;
                int64_t (* var_230_4)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h402b3702303fb18e;
                int64_t* var_228_4 = &var_240;
                uint64_t (* var_220_4)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                int64_t** var_218_4 = &var_2d0;
                int64_t (* var_210_1)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_198 = &data_548ae8;
                var_190 = 4;
                int64_t var_178_1 = 0;
                *var_190[8] = &var_238;
                var_180_3 = 3;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_198);
                rax_5 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h90ed3a0c4574e561(&var_270);
            }
        }
    }
    else if (arg3)
        goto label_4ce054;
    
    std::process::Command::status::h3dc0f2a83545ac66(&var_270);
    int32_t* result;
    
    if (!var_270)
    {
        int32_t var_26c;
        
        if (!var_26c)
        {
            core::ptr::drop_in_place$LT$std..process..Command$GT$::hce49e9d552bacf8a(&var_100);
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::he07de9b5285c91ba(&var_2b0);
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::he07de9b5285c91ba(&var_288);
            return nullptr;
        }
        
        int32_t rdi_17 = var_26c & 0x7f;
        
        if (rdi_17)
        {
            if (rdi_17 + 1 >= 2)
            {
                int32_t rax_17;
                int32_t rdx_7;
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
        int128_t* r14_1 = var_268;
        char rax_7 = std::io::error::Error::kind::hb2ff5fa058639b3d(r14_1);
        char rax_8;
        
        if (rax_7)
            rax_8 = std::io::error::Error::kind::hb2ff5fa058639b3d(r14_1);
        
        if (rax_7 && rax_8 != 0x14)
        {
            var_298 = r14_1;
            char** rax_13;
            int64_t rdx_4;
            rax_13 = uucore::util_name::h60d842bf27b05e82();
            var_198 = rax_13;
            var_190 = rdx_4;
            var_2d0 = &var_198;
            int64_t (* var_2c8_4)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h402b3702303fb18e;
            var_238 = &data_548978;
            int64_t var_230_5 = 2;
            int64_t var_218_5 = 0;
            int64_t** var_228_5 = &var_2d0;
            int64_t var_220_5 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_238);
            var_198 = &var_298;
            var_190 =
                _$LT$std..io..error..Error$u20$as$u20$core..fmt..Debug$GT$::fmt::h2c21fb8e0a153abf;
            var_238 = &data_548b28;
            int64_t var_230_6 = 2;
            int64_t var_218_6 = 0;
            char const* const** var_228_6 = &var_198;
            int64_t var_220_6 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_238);
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(0x7e);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hd5ebd4cd57902993(&var_298);
        }
        else
        {
            result =
                uu_env::EnvAppData::make_error_no_such_file_or_dir::hb7f284d37785d950(*(arg1 + 1));
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hd5ebd4cd57902993(&var_268);
        }
    }
    
    core::ptr::drop_in_place$LT$std..process..Command$GT$::hce49e9d552bacf8a(&var_100);
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::he07de9b5285c91ba(&var_2b0);
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::he07de9b5285c91ba(&var_288);
    return result;
}
