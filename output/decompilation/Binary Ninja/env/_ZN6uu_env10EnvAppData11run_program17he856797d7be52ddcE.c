
  uint64_t uu_env::EnvAppData::run_program::he856797d7be52ddc(void* arg1, void* arg2, char arg3)

{
    int64_t rax = *(arg2 + 0x58);
    
    if (!rax)
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
        /* no return */
    }
    
    int64_t* r13 = *(arg2 + 0x50);
    int64_t r15 = *r13;
    int64_t r12 = r13[1];
    int64_t var_120 = r15;
    int64_t var_118 = r12;
    int64_t var_128 = -0x8000000000000000;
    int64_t var_2a8;
    _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h2c866a58aa2651bf(
        &var_2a8, &var_128);
    void var_110;
    std::process::Command::new::h7c9a3a5c27f688cb(&var_110, r15);
    std::process::Command::args::hf49502e597a82f21(&var_110, &r13[2], rax - 1);
    void***** r12_1 = *(arg2 + 0x88);
    void**** var_2e0;
    int32_t var_2c0;
    void* var_2b8;
    void***** var_2a0;
    void** var_280;
    char const (** const var_270)[0xb7];
    void*** var_1c0;
    
    if (r12_1)
    {
        int64_t rbx_1 = *(arg2 + 0x90);
        _$LT$std..process..Command$u20$as$u20$std..os..unix..process..CommandExt$GT$::arg0::h169c3378e1fdf608(&var_110, r12_1);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::hf18cf8a450edb385(var_2a8, var_2a0);
        var_2a8 = -0x8000000000000000;
        var_2a0 = r12_1;
        int64_t var_298_1 = rbx_1;
        
        if (arg3)
        {
            var_1c0 = 1;
            void***** var_1b8_1 = r12_1;
            int64_t var_1b0_1 = rbx_1;
            char var_1a8_1 = 1;
            var_2e0 = &var_1c0;
            int64_t (* var_2d8_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_270 = &data_510ab8;
            int64_t var_268_1 = 2;
            int64_t var_250_1 = 0;
            void***** var_260_1 = &var_2e0;
            int64_t var_258_1 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_270);
            label_4746aa:
            var_1c0 = 1;
            int64_t var_1b8_2 = r15;
            int64_t var_1b0_2 = r12;
            char var_1a8_2 = 0;
            var_2e0 = &var_1c0;
            int64_t (* var_2d8_2)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_270 = &data_510ad8;
            int64_t var_268_2 = 2;
            int64_t var_250_2 = 0;
            void***** var_260_2 = &var_2e0;
            int64_t var_258_2 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_270);
            var_280 = "   argcannot unset : Invalid arg…";
            int64_t var_278_1 = 6;
            var_1c0 = 1;
            var_1b8_2 = var_2a0;
            char var_1a8_3 = 1;
            var_2e0 = &var_280;
            int64_t (* var_2d8_3)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c2ec06aa0838e92;
            void**** var_2d0_1 = &var_1c0;
            int64_t (* var_2c8_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_270 = &data_510af8;
            int64_t var_268_3 = 3;
            int64_t var_250_3 = 0;
            void***** var_260_3 = &var_2e0;
            int64_t var_258_3 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_270);
            var_2c0 = &r13[2];
            var_2b8 = &r13[rax * 2];
            int64_t var_2b0_1 = 0;
            int64_t rax_6;
            int64_t* i;
            rax_6 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h153148f6263ff6d0(&var_2c0);
            
            while (i)
            {
                int64_t var_1c8 = rax_6 + 1;
                int64_t rax_8 = *i;
                int64_t rcx_1 = i[1];
                var_2e0 = 1;
                int64_t var_2d8_4 = rax_8;
                int64_t var_2d0_2 = rcx_1;
                var_2c8_1 = 1;
                var_270 = &var_280;
                int64_t (* var_268_4)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c2ec06aa0838e92;
                int64_t* var_260_4 = &var_1c8;
                uint64_t (* var_258_4)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                void***** var_250_4 = &var_2e0;
                int64_t (* var_248_1)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_1c0 = &data_510b28;
                int64_t var_1b8_3 = 4;
                int64_t var_1a0_1 = 0;
                char const (** const* var_1b0_3)[0xb7] = &var_270;
                var_1a8_3 = 3;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_1c0);
                rax_6 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h153148f6263ff6d0(&var_2c0);
            }
        }
    }
    else if (arg3)
        goto label_4746aa;
    
    std::process::Command::status::h6e1e3c5811681da5(&var_2c0);
    uint64_t result;
    uint64_t result_1;
    
    if (var_2c0 != 1)
    {
        int32_t var_2bc;
        
        if (var_2bc)
        {
            int32_t rdi_15 = var_2bc & 0x7f;
            
            if (!rdi_15)
            {
                result_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(*var_2bc[1]);
                goto label_474b76;
            }
            
            if (rdi_15 + 1 > 1)
            {
                char rax_18;
                int32_t rdx_7;
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
        char rax_9 = std::io::error::Error::kind::h135fe00c4e7365f3(var_2b8);
        
        if (!rax_9)
            result_1 =
                uu_env::EnvAppData::make_error_no_such_file_or_dir::hd6612e965bb2f841(*(arg1 + 1));
        else
        {
            uint32_t rax_10 = rax_9;
            
            if (rax_10 == 1)
            {
                void*** rax_13;
                int64_t rdx_4;
                rax_13 = uucore::util_name::h074417a1e6395129();
                var_1c0 = rax_13;
                int64_t var_1b8_4 = rdx_4;
                var_2e0 = &var_1c0;
                int64_t (* var_2d8_5)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c2ec06aa0838e92;
                var_270 = &data_510958;
                int64_t var_268_5 = 2;
                int64_t var_250_5 = 0;
                void***** var_260_5 = &var_2e0;
                int64_t var_258_5 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_270);
                var_1c0 = 1;
                int64_t var_1b8_5 = r15;
                int64_t var_1b0_4 = r12;
                char var_1a8_4 = 1;
                var_2e0 = &var_1c0;
                int64_t (* var_2d8_6)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_270 = &data_510b68;
                int64_t var_268_6 = 2;
                int64_t var_250_6 = 0;
                void***** var_260_6 = &var_2e0;
                int64_t var_258_6 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_270);
                result_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(0x7e);
            }
            else if (rax_10 != 0x14)
            {
                void*** rax_15;
                int64_t rdx_5;
                rax_15 = uucore::util_name::h074417a1e6395129();
                var_1c0 = rax_15;
                int64_t var_1b8_6 = rdx_5;
                var_2e0 = &var_1c0;
                int64_t (* var_2d8_7)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c2ec06aa0838e92;
                var_270 = &data_510958;
                int64_t var_268_7 = 2;
                int64_t var_250_7 = 0;
                void***** var_260_7 = &var_2e0;
                int64_t var_258_7 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_270);
                var_1c0 = &var_280;
                int64_t (* var_1b8_7)(int64_t* arg1, int64_t* arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h343726f25827f1d9;
                var_270 = &data_510b88;
                int64_t var_268_8 = 2;
                int64_t var_250_8 = 0;
                void**** var_260_8 = &var_1c0;
                int64_t var_258_8 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_270);
                result_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(0x7e);
            }
            else
                result_1 = uu_env::EnvAppData::make_error_no_such_file_or_dir::hd6612e965bb2f841(
                    *(arg1 + 1));
        }
        
        label_474b76:
        result = result_1;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..process..ExitStatus$C$std..io..error..Error$GT$$GT$::hd3752023ff91501c(&var_2c0);
        core::ptr::drop_in_place$LT$std..process..Command$GT$::h4f4015e7e1c0b0b1(&var_110);
    }
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::hf18cf8a450edb385(var_2a8, var_2a0);
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..ffi..os_str..OsStr$GT$$GT$::hf18cf8a450edb385(-0x8000000000000000, r15);
    return result;
}
