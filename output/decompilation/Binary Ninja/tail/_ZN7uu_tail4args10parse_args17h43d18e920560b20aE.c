
  int64_t uu_tail::args::parse_args::h43d18e920560b20a(int64_t* arg1, int64_t arg2)

{
    void var_3c0;
    core::iter::traits::iterator::Iterator::collect::h5984bb7f8993d976(&var_3c0, arg2);
    int64_t var_2f8;
    uu_tail::args::uu_app::hd081dd888e6e468a(&var_2f8);
    int64_t var_410;
    void* var_3b8;
    int64_t var_3b0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h73cfdb5bac2ffe65(
        &var_410, var_3b8, var_3b0);
    int64_t var_330;
    clap_builder::builder::command::Command::try_get_matches_from::h15062d3cf749cb3f(&var_330, 
        &var_2f8, &var_410);
    uint64_t var_408_1;
    void** const var_400_1;
    int128_t var_3f8;
    int128_t var_3e8;
    int128_t var_3d8;
    uint64_t var_2f0;
    void** var_2e8;
    int128_t var_2e0;
    int128_t var_2d0;
    int128_t var_2c0;
    int64_t var_2b0;
    
    if (!(0 + -(var_330)))
    {
        int64_t var_300;
        int64_t var_378_1 = var_300;
        int128_t var_310;
        int128_t var_388_1 = var_310;
        int128_t var_320;
        int128_t var_398_1 = var_320;
        int128_t var_3a8 = var_330;
        uu_tail::args::Settings::from::hd259b094c0210bc3(&var_2f8, &var_3a8);
        int64_t rdx_4 = var_2f8;
        
        if (rdx_4 != 5)
        {
            int64_t var_3c8_1 = var_2b0;
            var_3d8 = var_2c0;
            var_3e8 = var_2d0;
            var_3f8 = var_2e0;
            var_410 = rdx_4;
            var_408_1 = var_2f0;
            var_400_1 = var_2e8;
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7b2fde32d6c4974f(&var_3a8);
            
            if ((0x7fffffffffffffe & var_3b0) != 2)
                goto label_48ba28;
            
            alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_2f8, *(var_3b8 + 0x20), 
                *(var_3b8 + 0x28));
            int64_t r12_1 = var_2f8;
            var_3a8 = 0;
            char rax_7 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h5a1cc7adb4f9676f(
                var_2f0, var_2e8, 
                core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(&var_3a8));
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h91db048b2022e0e1(r12_1, 
                var_2f0);
            
            if (rax_7)
                goto label_48b880;
            
            label_48bab0:
            *(arg1 + 0x40) = var_3d8;
            int128_t zmm0_3 = var_410;
            *(arg1 + 0x30) = var_3e8;
            *(arg1 + 0x20) = var_3f8;
            *(arg1 + 0x10) = var_400_1;
            *arg1 = zmm0_3;
        }
        else
        {
            arg1[1] = var_2f0;
            arg1[2] = var_2e8;
            *arg1 = 5;
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7b2fde32d6c4974f(&var_3a8);
        }
    }
    else
    {
        int64_t var_328;
        var_408_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_328);
        var_400_1 = &data_575d58;
        var_410 = 5;
        
        if ((0x7fffffffffffffe & var_3b0) != 2)
        {
            label_48ba28:
            *(arg1 + 0x40) = var_3d8;
            int64_t rax_8 = var_410;
            *(arg1 + 0x30) = var_3e8;
            *(arg1 + 0x20) = var_3f8;
            arg1[2] = var_400_1;
            arg1[3] = var_3f8;
            *arg1 = rax_8;
            arg1[1] = var_408_1;
        }
        else
        {
            label_48b880:
            void* rdx_2 = nullptr;
            
            if (var_3b0 >= 3)
                rdx_2 = var_3b8 + 0x30;
            
            uu_tail::args::parse_obsolete::h0a35ef9ac867d2bb(&var_2f8, var_3b8 + 0x18, rdx_2);
            int64_t rdx_3 = var_2f8;
            
            if (rdx_3 != 6)
            {
                if (rdx_3 == 5)
                    goto label_48bab0;
                
                arg1[9] = var_2b0;
                *(arg1 + 0x38) = var_2c0;
                *(arg1 + 0x28) = var_2d0;
                *(arg1 + 0x18) = var_2e0;
                *arg1 = rdx_3;
                arg1[1] = var_2f0;
                arg1[2] = var_2e8;
                core::ptr::drop_in_place$LT$core..result..Result$LT$uu_tail..args..Settings$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hf34a3916ba1d9edc(&var_410);
            }
            else
            {
                arg1[1] = var_2f0;
                arg1[2] = var_2e8;
                *arg1 = 5;
                core::ptr::drop_in_place$LT$core..result..Result$LT$uu_tail..args..Settings$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hf34a3916ba1d9edc(&var_410);
            }
        }
    }
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h868a47c059183b02(&var_3c0);
}
