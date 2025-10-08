
  uint64_t uu_fmt::uumain::uumain::hae5114733245429c(int64_t arg1)

{
    void var_328;
    core::iter::traits::iterator::Iterator::collect::h759cd8083e21001f(&var_328, arg1);
    int64_t var_318;
    
    if (var_318 < 2)
        goto label_4593ed;
    
    int64_t var_360;
    void* var_320;
    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_360, *(var_320 + 0x20), 
        *(var_320 + 0x28));
    int64_t r14_1 = var_360;
    int32_t var_2f8 = 0;
    uint64_t var_358;
    int64_t var_350;
    uint64_t result;
    int64_t* var_3c8;
    int64_t var_3b0;
    int128_t var_3a0;
    uint64_t result_2;
    uint64_t var_2e8;
    int128_t var_2e0;
    
    if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h2f7e75ad3812e3c5(var_358, 
        var_350, core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(&var_2f8)))
    {
        label_4593e0:
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h63be63cb12ea7cae(r14_1, 
            var_358);
        label_4593ed:
        uu_fmt::uu_app::hd997317a638f119d(&var_2f8);
        clap_builder::builder::command::Command::try_get_matches_from::hc5387d2547950a86(&var_3b0, 
            &var_2f8, var_320, var_318);
        int64_t rax_11 = var_3b0;
        int64_t var_3a8;
        
        if (-(rax_11) != -0x8000000000000000)
        {
            int64_t var_380;
            int64_t var_330_1 = var_380;
            int128_t var_390;
            int128_t var_340_1 = var_390;
            var_350 = var_3a0;
            var_360 = rax_11;
            int64_t var_358_1 = var_3a8;
            uu_fmt::extract_files::h7eb5920ec72ef96b(&var_2f8, &var_360);
            int64_t* rax_13 = var_2f8;
            result = result_2;
            
            if (rax_13 != -0x8000000000000000)
            {
                var_3c8 = rax_13;
                uint64_t result_1 = result;
                uint64_t var_3b8_1 = var_2e8;
                uu_fmt::FmtOptions::from_matches::hd6bbd71d93b7e3cd(&var_2f8, &var_360);
                int64_t rax_14 = var_2f8;
                uint64_t result_3 = result_2;
                
                if (rax_14 != -0x7fffffffffffffff)
                {
                    int64_t var_2b0;
                    int64_t var_368_1 = var_2b0;
                    int128_t var_2c0;
                    int128_t var_378_1 = var_2c0;
                    int128_t var_2d0;
                    var_390 = var_2d0;
                    var_3a0 = var_2e0;
                    var_3b0 = rax_14;
                    uint64_t result_5 = result_3;
                    var_3a0 = var_2e8;
                    std::io::stdio::stdout::hb6a8e10bcccf3287();
                    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hebf4758887d0f244(&var_2f8, &std::io::stdio::STDOUT::h411b213c5c9add46);
                    uint64_t rbp_1 = result + var_2e8 * 0x18;
                    
                    while (true)
                    {
                        uint64_t result_4 = result + 0x18;
                        
                        if (result == rbp_1)
                            result_4 = result;
                        
                        if (result == rbp_1 || !result)
                        {
                            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::h6e836767ef73b73b(&var_2f8);
                            core::ptr::drop_in_place$LT$uu_fmt..FmtOptions$GT$::hd8fc986a7b44390a(
                                &var_3b0);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h0a5997a825bb75ab(&var_3c8);
                            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd8f12037e4f82ebf(&var_360);
                            result = 0;
                            goto label_4595bf;
                        }
                        
                        uint64_t result_6;
                        uint64_t rdx_9;
                        result_6 = uu_fmt::process_file::hfbd28097bf8da567(*(result + 8), 
                            *(result + 0x10), &var_3b0, &var_2f8);
                        result_3 = result_6;
                        result = result_4;
                        
                        if (!result_6)
                            continue;
                        
                        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::h6e836767ef73b73b(&var_2f8);
                        core::ptr::drop_in_place$LT$uu_fmt..FmtOptions$GT$::hd8fc986a7b44390a(
                            &var_3b0);
                        break;
                    }
                }
                
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h0a5997a825bb75ab(&var_3c8);
                result = result_3;
            }
            
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd8f12037e4f82ebf(&var_360);
        }
        else
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_3a8);
    }
    else
    {
        uint64_t result_7 = var_358 + var_350;
        var_2f8 = var_358;
        result_2 = result_7;
        
        if (_$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::advance_by::h79c51f2353e76d38(&var_2f8, 1))
            goto label_4593e0;
        
        char rax_4;
        int32_t rdx_3;
        rax_4 = core::str::validations::next_code_point::hdb1075951a601d60(&var_2f8, var_358);
        
        if (!(rax_4 & rdx_3 - 0x30 < 0xa))
            goto label_4593e0;
        
        var_2f8 = var_358;
        result_2 = result_7;
        var_2e8 = 2;
        
        if (!_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h66873fb54fc57961(_$LT$core..iter..adapters..skip..Skip$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h4f6e50e460f55ef3(&var_2f8)))
            goto label_4593e0;
        
        var_2f8 = 0;
        int64_t rax_8;
        int64_t rdx_6;
        rax_8 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(&var_2f8), var_358, 
            var_350);
        
        if (!rax_8)
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        var_3b0 = 0;
        int64_t var_3a8_1 = rax_8;
        var_3a0 = rdx_6;
        *var_3a0[8] = 1;
        var_3c8 = &var_3b0;
        int64_t (* var_3c0_1)(int32_t* arg1, int64_t* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        var_2f8 = &data_4ef678;
        int64_t var_2f0 = 1;
        *var_2e0[8] = 0;
        int64_t** var_2e8_1 = &var_3c8;
        var_2e0 = 1;
        int128_t var_310;
        core::option::Option$LT$T$GT$::map_or_else::h8548059c7e77ef31(&var_310, &var_2f8);
        var_2e0 = 1;
        var_2f8 = var_310;
        int64_t var_300;
        int64_t var_2e8_2 = var_300;
        result = alloc::boxed::Box$LT$T$GT$::new::h0f44b896e975adcb(&var_2f8);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h63be63cb12ea7cae(r14_1, 
            var_358);
    }
    label_4595bf:
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h2d38861785ff8296(&var_328);
    return result;
}
