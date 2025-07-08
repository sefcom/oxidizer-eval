
  int64_t* uu_tail::args::parse_args::h21b79a77363e2b6a(int64_t* arg1, int64_t arg2)

{
    void var_400;
    core::iter::traits::iterator::Iterator::collect::h9a07ea5ceb8902af(&var_400, arg2);
    int64_t var_2e8;
    uu_tail::args::uu_app::hb87d3ad1fe9d91d4(&var_2e8);
    int64_t var_3e8;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hb500688f0df0df44(
        &var_3e8, &var_400);
    int64_t var_320;
    clap_builder::builder::command::Command::try_get_matches_from::he22c6d91c73138b9(&var_320, 
        &var_2e8, &var_3e8);
    int64_t r15 = var_320;
    void* var_3f8;
    int64_t var_3f0;
    int64_t* var_3e0_1;
    void** const var_3d8_1;
    int128_t var_3d0;
    int128_t var_3c0;
    int128_t var_3b0;
    void* rax_3;
    int64_t rcx;
    void* r14_1;
    
    if (r15 != -0x8000000000000000)
    {
        int64_t var_2f0;
        int64_t var_368_1 = var_2f0;
        int128_t var_300;
        int128_t var_378_1 = var_300;
        int128_t var_310;
        int128_t var_388_1 = var_310;
        int128_t var_398 = var_320;
        uu_tail::args::Settings::from::h35563f42b90fb353(&var_2e8, &var_398);
        int64_t rdx_1 = var_2e8;
        int64_t* var_2e0;
        void** var_2d8;
        
        if (rdx_1 != 5)
        {
            int64_t var_2a0;
            int64_t var_3a0_1 = var_2a0;
            int128_t var_2b0;
            var_3b0 = var_2b0;
            int128_t var_2c0;
            var_3c0 = var_2c0;
            int128_t var_2d0;
            var_3d0 = var_2d0;
            var_3e8 = rdx_1;
            var_3e0_1 = var_2e0;
            var_3d8_1 = var_2d8;
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9697b187ba43e683(&var_398);
            
            if ((var_3f0 & 0xfffffffffffffffe) != 2)
                goto label_4aa6f4;
            
            rax_3 = var_3f8;
            r14_1 = rax_3 + 0x18;
            label_4aa63c:
            std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&var_2e8, 
                *(rax_3 + 0x20), *(rax_3 + 0x28));
            var_398 = 0;
            int64_t rax_8;
            uint64_t rdx_3;
            rax_8 = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(&var_398);
            
            if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h816ac8a5e781244a(
                var_2e0, var_2d8, rax_8, rdx_3))
            {
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hc14f4d026d489064(
                    &var_2e8);
                label_4aa7d0:
                *(arg1 + 0x40) = var_3b0;
                int128_t zmm0_4 = var_3e8;
                *(arg1 + 0x30) = var_3c0;
                *(arg1 + 0x20) = var_3d0;
                *(arg1 + 0x10) = var_3d8_1;
                *arg1 = zmm0_4;
            }
            else
            {
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hc14f4d026d489064(
                    &var_2e8);
                rax_3 = var_3f8;
                rcx = var_3f0;
                label_4aa698:
                void* rdx_5 = nullptr;
                
                if (rcx >= 3)
                    rdx_5 = rax_3 + 0x30;
                
                uu_tail::args::parse_obsolete::hfe2542368a23c75b(&var_2e8, r14_1, rdx_5);
                int64_t rdx_6 = var_2e8;
                
                if (rdx_6 != 6)
                {
                    if (rdx_6 == 5)
                        goto label_4aa7d0;
                    
                    arg1[9] = var_2a0;
                    *(arg1 + 0x38) = var_2b0;
                    *(arg1 + 0x28) = var_2c0;
                    *(arg1 + 0x18) = var_2d0;
                    *arg1 = rdx_6;
                    arg1[1] = var_2e0;
                    arg1[2] = var_2d8;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$uu_tail..args..Settings$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h81b323902802f082(&var_3e8);
                }
                else
                {
                    arg1[1] = var_2e0;
                    arg1[2] = var_2d8;
                    *arg1 = 5;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$uu_tail..args..Settings$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h81b323902802f082(&var_3e8);
                }
            }
        }
        else
        {
            arg1[1] = var_2e0;
            arg1[2] = var_2d8;
            *arg1 = 5;
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9697b187ba43e683(&var_398);
        }
    }
    else
    {
        int64_t var_318;
        var_3e0_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_318);
        var_3d8_1 = &data_5becb8;
        var_3e8 = 5;
        rcx = var_3f0;
        
        if ((rcx & 0xfffffffffffffffe) == 2)
        {
            rax_3 = var_3f8;
            r14_1 = rax_3 + 0x18;
            
            if (r15 != -0x8000000000000000)
                goto label_4aa63c;
            
            goto label_4aa698;
        }
        
        label_4aa6f4:
        *(arg1 + 0x40) = var_3b0;
        int64_t rax_12 = var_3e8;
        *(arg1 + 0x30) = var_3c0;
        *(arg1 + 0x20) = var_3d0;
        arg1[2] = var_3d8_1;
        arg1[3] = var_3d0;
        *arg1 = rax_12;
        arg1[1] = var_3e0_1;
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h11a21213503eb125(&var_400);
    return arg1;
}
