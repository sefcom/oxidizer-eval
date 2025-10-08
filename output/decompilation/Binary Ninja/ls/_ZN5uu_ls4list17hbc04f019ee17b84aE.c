
  uint64_t uu_ls::list::hbc04f019ee17b84a(int64_t* arg1, uint64_t arg2)

{
    uint64_t rbp;
    uint64_t var_8 = rbp;
    int64_t var_4e8 = 0;
    void* var_4e0 = 8;
    int64_t var_4d8 = 0;
    int64_t var_4d0 = 0;
    void* var_4c8 = 8;
    int64_t var_4c0 = 0;
    int64_t var_460 = 0;
    int64_t var_458 = 8;
    int128_t var_450 = {0};
    int64_t var_440 = 8;
    int128_t var_438 = {0};
    int64_t rax = arg1[2];
    int64_t r14;
    r14 = 1;
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    int128_t var_4a0;
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h1c03d5309ed5e6af(&var_4a0, 
        &std::io::stdio::STDOUT::h411b213c5c9add46);
    bool o = 0 + -(*(arg2 + 0x18));
    void* r14_1 = arg2 + 0x18;
    int64_t rbx;
    rbx = o;
    
    if (o)
        r14_1 = nullptr;
    
    int64_t rax_1;
    int64_t rdx;
    rax_1 = std::thread::local::LocalKey$LT$T$GT$::with::hed3386b680b0f1b4();
    int128_t var_518 = data_6865a8;
    int128_t var_528 = *data_686598;
    int64_t var_500 = rdx;
    void* rax_2;
    int64_t rdx_1;
    rax_2 = std::thread::local::LocalKey$LT$T$GT$::with::hed3386b680b0f1b4();
    int128_t var_1e8 = data_6865a8;
    int128_t var_1f8 = *data_686598;
    int64_t var_1d0 = rdx_1;
    int128_t var_328;
    uu_ls::TimeStyler::new::hf5080b982bd19d16(&var_328, arg2 + 0xb8);
    int64_t var_4f0 = -0x8000000000000000;
    rbx *= 2;
    int64_t var_480;
    int64_t var_3f8 = var_480;
    int128_t var_490;
    int128_t var_408 = var_490;
    int128_t var_418 = var_4a0;
    char var_3a8 = 2;
    char var_393 = rbx;
    int128_t var_390 = var_528;
    int128_t var_380 = var_518;
    int128_t var_370 = rax_1;
    int128_t var_360 = var_1f8;
    int128_t var_350 = var_1e8;
    int128_t var_340 = rax_2;
    int128_t var_2f8;
    int128_t var_3c0 = var_2f8;
    int128_t var_308;
    int128_t var_3d0 = var_308;
    int128_t var_318;
    int128_t var_3e0 = var_318;
    int128_t var_3f0 = var_328;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h4f21cc0b69ec76ae(&var_528, arg1);
    int64_t i;
    uint64_t rdx_2;
    i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4e0eab2428047e55(&var_528);
    int32_t var_548;
    int128_t var_478;
    
    if (i)
    {
        char rsi_2 = *(arg2 + 0xf0);
        rbp = *(arg2 + 0xf3);
        char r15_1 = *(arg2 + 0xfa);
        
        do
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_328, i, rdx_2);
            int64_t var_468_1 = var_318;
            var_478 = var_328;
            var_328 = 0;
            var_4a0 = -0x8000000000000000;
            var_548 = 1;
            uu_ls::PathData::new::h2697718e531487bc(&var_1f8, &var_478, &var_328, &var_4a0, rbp, 
                r15_1, &var_528, 1);
            
            if (!uu_ls::PathData::get_metadata::h14c40f15e3077b4f(&var_1f8, &var_418))
                core::ptr::drop_in_place$LT$uu_ls..PathData$GT$::h76a87c73f87c0bb8(&var_1f8);
            else
            {
                void* rax_6 = uu_ls::PathData::file_type::h413d2014e9fb015b(&var_1f8, &var_418);
                
                if (!rax_6)
                {
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                    memcpy(&var_328, &var_1f8, 0x130);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h65f370254cdcedb4(&var_4e8, &var_328);
                }
                else if (rsi_2 & 1 || (*rax_6 & 0xf000) != 0x4000)
                {
                    memcpy(&var_328, &var_1f8, 0x130);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h65f370254cdcedb4(&var_4e8, &var_328);
                }
                else
                {
                    memcpy(&var_328, &var_1f8, 0x130);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h65f370254cdcedb4(&var_4d0, &var_328);
                }
            }
            
            i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4e0eab2428047e55(&var_528);
        } while (i);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$std..path..Path$GT$$GT$::h1c09c1bb6c47083d(&var_528);
    uint64_t r13 = arg2;
    uu_ls::sort_entries::hf04183368c5c3444(var_4e0, var_4d8, r13, &var_418);
    uu_ls::sort_entries::hf04183368c5c3444(var_4c8, var_4c0, r13, &var_418);
    uint64_t result;
    uint64_t rdx_8;
    
    if (var_393 == 2)
    {
        label_59a0d3:
        uint64_t result_2;
        result_2 =
            uu_ls::display_items::h730c32362a116b61(var_4e0, var_4d8, r13, &var_418, &var_460, rbp);
        result = result_2;
        
        if (result_2)
            goto label_59a0ee;
        
        var_4a0 = var_4c8;
        *var_4a0[8] = var_4c0 * 0x130 + var_4c8;
        var_490 = 0;
        int64_t rax_14;
        void* rdx_11;
        rax_14 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h888a3c3afef5132e(&var_4a0);
        
        if (rdx_11)
        {
            int64_t r14_5 = rax_14;
            void* r12_1 = rdx_11;
            int64_t var_530;
            var_530 = *(r13 + 0xf6);
            bool rcx_6 = rax >= 2 | *(r13 + 0xee);
            int64_t var_4f0_1 = var_4f0 + 2;
            
            while (true)
            {
                void* var_428;
                std::fs::read_dir::h9952d4fb94ce2eb2(&var_428, r12_1 + 0x18);
                char var_420;
                void* const var_1d8;
                void* const rbx_1;
                
                if (var_420 != 2)
                {
                    void* var_4b8 = var_428;
                    
                    if (rcx_6 & 1)
                    {
                        uint64_t result_6;
                        uint64_t rdx_19;
                        
                        if (r14_5 || var_4d8)
                        {
                            var_328 = &data_6866e0;
                            *var_328[8] = 1;
                            var_318 = 8;
                            var_318 = {0};
                            
                            if (std::io::Write::write_fmt::h700c3576e0a1d616(&var_418, &var_328))
                            {
                                result_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                label_59a6c2:
                                result = result_6;
                                core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h014e861f3293567c(
                                    &var_4b8);
                                goto label_59a0ee;
                            }
                            
                            if (uu_ls::show_dir_name::hae576568cd75c94b(r12_1, &var_418, arg2))
                            {
                                result_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                goto label_59a6c2;
                            }
                            
                            var_328 = &data_6866e0;
                            *var_328[8] = 1;
                            var_318 = 8;
                            var_318 = {0};
                            
                            if (std::io::Write::write_fmt::h700c3576e0a1d616(&var_418, &var_328))
                            {
                                result_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                goto label_59a6c2;
                            }
                        }
                        else
                        {
                            if (var_530 & 1)
                            {
                                uint64_t result_4;
                                result_4 = uu_ls::dired::indent::h7abdb3264981e476(&var_418);
                                result = result_4;
                                
                                if (result_4)
                                {
                                    core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h014e861f3293567c(&var_4b8);
                                    goto label_59a0ee;
                                }
                            }
                            
                            if (uu_ls::show_dir_name::hae576568cd75c94b(r12_1, &var_418, arg2))
                            {
                                result_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                goto label_59a6c2;
                            }
                            
                            var_328 = &data_6866e0;
                            *var_328[8] = 1;
                            var_318 = 8;
                            var_318 = {0};
                            
                            if (std::io::Write::write_fmt::h700c3576e0a1d616(&var_418, &var_328))
                            {
                                result_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                goto label_59a6c2;
                            }
                            
                            if (var_530 & 1)
                            {
                                int64_t r14_7 = *(r12_1 + 0x10);
                                uu_ls::dired::calculate_subdired::h7fcfc93e038bf6d6(&var_460, 
                                    r14_7);
                                *var_438[8] = *var_438[8] + r14_7 + 3;
                            }
                        }
                    }
                    
                    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h231d77f27934f929(&var_328);
                    var_1d8 = var_308;
                    var_1e8 = var_318;
                    var_1f8 = var_328;
                    rbx_1 = 1;
                    uucore::features::fs::FileInformation::from_path::he047f87eaabe1edc(&var_328, 
                        r12_1 + 0x18, *(r12_1 + 0x128));
                    r13 = arg2;
                    int64_t r14_6 = *var_328[8];
                    
                    if (var_328 == 1)
                    {
                        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                        core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$uucore..features..fs..FileInformation$GT$$GT$::h0387ae345f59a30b(var_1f8, *var_1f8[8]);
                        core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h014e861f3293567c(
                            &var_4b8);
                        goto label_59a0ee;
                    }
                    
                    void var_b8;
                    memcpy(&var_b8, &var_318, 0x88);
                    int64_t var_c0 = r14_6;
                    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h8f2f6429b9115ef1(
                        &var_1f8, &var_c0);
                    var_548 = &var_460;
                    uint64_t result_3;
                    uint64_t rdx_18;
                    result_3 = uu_ls::enter_directory::h92fbfb4f588426e1(r12_1, var_4b8, var_420, 
                        r13, &var_418, &var_1f8, var_548);
                    result = result_3;
                    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$uucore..features..fs..FileInformation$GT$$GT$::h0387ae345f59a30b(var_1f8, *var_1f8[8]);
                    
                    if (result)
                        goto label_59a0ee;
                }
                else
                {
                    rbx_1 = var_428;
                    void* const var_4a8 = rbx_1;
                    r13 = arg2;
                    
                    if (_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h6ed1f3d156b2ad73(&var_418))
                    {
                        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h6fdf0f570893b293(
                            &var_4a8);
                        goto label_59a0ee;
                    }
                    
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h523154303afc7abc(&var_328, *(r12_1 + 0x20), *(r12_1 + 0x28));
                    *var_1e8[8] = var_318;
                    var_1f8 = var_328;
                    uint32_t rdi_29 = *(r12_1 + 0x129);
                    var_1d8 = rbx_1;
                    var_1d0 = rdi_29;
                    var_1f8 = var_4f0_1;
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(rdi_29 + 1);
                    int64_t rax_21;
                    int64_t rdx_14;
                    rax_21 = uucore::util_name::h074417a1e6395129();
                    var_478 = rax_21;
                    *var_478[8] = rdx_14;
                    var_528 = &var_478;
                    *var_528[8] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf27cb4f53db833cd;
                    var_518 = &var_1f8;
                    *var_518[8] = _$LT$uu_ls..LsError$u20$as$u20$core..fmt..Display$GT$::fmt::hdc9e99969c77fead;
                    var_328 = &data_686b10;
                    *var_328[8] = 3;
                    var_308 = 0;
                    var_318 = &var_528;
                    *var_318[8] = 2;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_328);
                    core::ptr::drop_in_place$LT$uu_ls..LsError$GT$::h1c73d4e6f6d6872e(&var_1f8);
                }
                int64_t rax_16;
                void* rdx_12;
                rax_16 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h888a3c3afef5132e(&var_4a0);
                r14_5 = rax_16;
                r12_1 = rdx_12;
                
                if (!rdx_12)
                {
                    if (!(var_530 & 1))
                        goto label_59a638;
                    
                    break;
                }
            }
            
            if (!*(r13 + 0xf7))
                goto label_59a61c;
        }
        else if (*(r13 + 0xf6) & 1 && !*(r13 + 0xf7))
        {
            label_59a61c:
            uint64_t result_5;
            result_5 = uu_ls::dired::print_dired_output::h024401ebfd75ea3a(r13, &var_460, &var_418);
            result = result_5;
            
            if (result_5)
                goto label_59a0ee;
        }
        
        label_59a638:
        core::ptr::drop_in_place$LT$uu_ls..ListState$GT$::h4c2330fa816309ec(&var_418);
        core::ptr::drop_in_place$LT$uu_ls..dired..DiredOutput$GT$::h9ff404cb160e50f2(&var_460);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::hb7b3de00095adc1c(
            &var_4d0);
        result = 0;
    }
    else
    {
        if (!uu_ls::colors::StyleManager::get_normal_style::h68940fba9ff7dfe3(r14_1))
            goto label_59a0d3;
        
        char var_393_1 = 1;
        char var_3a8_1 = 2;
        var_528 = "\x1b[0mnameSJMTYDDTACDTBDSTCyanW…";
        *var_528[8] = 4;
        var_1f8 = &var_528;
        *var_1f8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf27cb4f53db833cd;
        var_328 = &data_4cf290;
        *var_328[8] = 1;
        var_308 = 0;
        var_318 = &var_1f8;
        *var_318[8] = 1;
        
        if (!std::io::Write::write_fmt::h700c3576e0a1d616(&var_418, &var_328))
            goto label_59a0d3;
        
        uint64_t result_1;
        result_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        result = result_1;
        label_59a0ee:
        core::ptr::drop_in_place$LT$uu_ls..ListState$GT$::h4c2330fa816309ec(&var_418);
        core::ptr::drop_in_place$LT$uu_ls..dired..DiredOutput$GT$::h9ff404cb160e50f2(&var_460);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::hb7b3de00095adc1c(
            &var_4d0);
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_ls..PathData$GT$$GT$::hb7b3de00095adc1c(
        &var_4e8);
    return result;
}
