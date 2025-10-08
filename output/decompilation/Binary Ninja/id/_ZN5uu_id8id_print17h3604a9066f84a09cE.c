
  int64_t uu_id::id_print::h3604a9066f84a09c(char* arg1, int64_t arg2, int64_t arg3)

{
    if (!(*arg1 & 1))
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    uid_t rsi = *(arg1 + 4);
    uid_t var_184 = rsi;
    gid_t r13 = *(arg1 + 8);
    gid_t var_180 = r13;
    uid_t r15 = *(arg1 + 0xc);
    uid_t var_178 = r15;
    uint32_t rax = *(arg1 + 0x10);
    uint32_t var_174 = rax;
    int64_t var_130;
    _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::h5d0bb482984d9c00(&var_130, rsi);
    char const (** const var_1d8)[0x9];
    int64_t var_1d0;
    char const (** const var_1b8)[0x9];
    int64_t var_128;
    
    if (!(0 + -(var_130)))
    {
        uucore::features::entries::uid2usr::_$u7b$$u7b$closure$u7d$$u7d$::h5379acb158e2a810(
            &var_1b8, &var_130);
        char const (** rax_1)[0x9] = var_1b8;
        int64_t var_1b0;
        
        if (rax_1 != -0x8000000000000000)
        {
            var_1d8 = rax_1;
            var_1d0 = var_1b0;
            int64_t var_1a8;
            int64_t var_1c8_1 = var_1a8;
        }
        else
            uu_id::id_print::_$u7b$$u7b$closure$u7d$$u7d$::h61bc1788f512f6c7(&var_1d8, &var_184, 
                var_1b0);
    }
    else
        uu_id::id_print::_$u7b$$u7b$closure$u7d$$u7d$::h61bc1788f512f6c7(&var_1d8, &var_184, 
            var_128);
    uid_t* var_170 = &var_184;
    uint64_t (* var_168)(int32_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
    int64_t* var_160 = &var_1d8;
    int64_t (* var_158)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_1b8 = &data_4e8ec8;
    int64_t var_1b0_1 = 3;
    int64_t var_198 = 0;
    uid_t** var_1a8_1 = &var_170;
    int64_t var_1a0 = 2;
    std::io::stdio::_print::h5e446ff973c02de6(&var_1b8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h084553603f2ff391(var_1d8, var_1d0);
    _$LT$uucore..features..entries..Group$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::hf537d3ad4e514fa6(&var_1b8, r13);
    char const (** const rax_2)[0x9] = var_1b8;
    
    if (rax_2 != -0x8000000000000000)
    {
        var_1d8 = rax_2;
        var_1d0 = var_1b0_1;
        uid_t** var_1c8_2 = var_1a8_1;
    }
    else
        uu_id::id_print::_$u7b$$u7b$closure$u7d$$u7d$::h158cc5b81899bf3c(&var_1d8, &var_180, 
            var_1b0_1);
    
    var_170 = &var_180;
    uint64_t (* var_168_1)(int32_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
    char const (** const* var_160_1)[0x9] = &var_1d8;
    int64_t (* var_158_1)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_1b8 = &data_4e8ef8;
    int64_t var_1b0_2 = 3;
    int64_t var_198_1 = 0;
    uid_t** var_1a8_2 = &var_170;
    int64_t var_1a0_1 = 2;
    std::io::stdio::_print::h5e446ff973c02de6(&var_1b8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h084553603f2ff391(var_1d8, var_1d0);
    
    if (!arg1[0x1c])
    {
        if (r15 != var_184)
        {
            int64_t var_b0;
            _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::h5d0bb482984d9c00(&var_b0, r15);
            int64_t var_a8;
            
            if (var_b0 != -0x8000000000000000)
            {
                uucore::features::entries::uid2usr::_$u7b$$u7b$closure$u7d$$u7d$::h5379acb158e2a810(
                    &var_1b8, &var_b0);
                char const (** rax_3)[0x9] = var_1b8;
                
                if (rax_3 != -0x8000000000000000)
                {
                    var_1d8 = rax_3;
                    var_1d0 = var_1b0_2;
                    uid_t** var_1c8_3 = var_1a8_2;
                }
                else
                    uu_id::id_print::_$u7b$$u7b$closure$u7d$$u7d$::h61bc1788f512f6c7(&var_1d8, 
                        &var_178, var_1b0_2);
            }
            else
                uu_id::id_print::_$u7b$$u7b$closure$u7d$$u7d$::h61bc1788f512f6c7(&var_1d8, 
                    &var_178, var_a8);
            var_170 = &var_178;
            var_168_1 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
            var_160_1 = &var_1d8;
            int64_t (* var_158_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_1b8 = &data_4e8f28;
            var_1b0_2 = 3;
            int64_t var_198_2 = 0;
            var_1a8_2 = &var_170;
            int64_t var_1a0_2 = 2;
            std::io::stdio::_print::h5e446ff973c02de6(&var_1b8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h084553603f2ff391(var_1d8, 
                var_1d0);
        }
        
        if (rax != var_180)
        {
            _$LT$uucore..features..entries..Group$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::hf537d3ad4e514fa6(&var_1b8, rax);
            char const (** rax_5)[0x9] = var_1b8;
            
            if (rax_5 != -0x8000000000000000)
            {
                var_1d8 = rax_5;
                var_1d0 = var_1b0_2;
                uid_t** var_1c8_4 = var_1a8_2;
            }
            else
                uu_id::id_print::_$u7b$$u7b$closure$u7d$$u7d$::h158cc5b81899bf3c(&var_1d8, 
                    &var_174, var_1b0_2);
            
            var_170 = &var_174;
            var_168_1 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
            var_160_1 = &var_1d8;
            int64_t (* var_158_3)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_1b8 = &data_4e8f58;
            int64_t var_1b0_3 = 3;
            int64_t var_198_3 = 0;
            var_1a8_2 = &var_170;
            int64_t var_1a0_3 = 2;
            std::io::stdio::_print::h5e446ff973c02de6(&var_1b8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h084553603f2ff391(var_1d8, 
                var_1d0);
        }
    }
    
    core::iter::traits::iterator::Iterator::collect::h9bfe5c5b303d5699(&var_170, arg2);
    alloc::str::join_generic_copy::h59511d2ef6868464(&var_1b8, var_168_1, var_160_1, 
        ",: cannot find name for user ID …");
    uid_t** var_1c8_5 = var_1a8_2;
    var_1d8 = var_1b8;
    char const (** const* var_140)[0x9] = &var_1d8;
    int64_t (* var_138)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_1b8 = &data_4e8f88;
    int64_t var_1b0_4 = 1;
    int64_t var_198_4 = 0;
    char const (** const** var_1a8_3)[0x9] = &var_140;
    int64_t var_1a0_4 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_1b8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h084553603f2ff391(var_1d8, var_1d0);
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hd40cc4d4fa480ff0(&var_170);
}
