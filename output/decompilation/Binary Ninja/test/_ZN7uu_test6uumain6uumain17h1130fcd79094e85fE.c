
  uint64_t uu_test::uumain::uumain::h1130fcd79094e85f(int64_t arg1)

{
    int64_t var_388 = arg1;
    int64_t rsi;
    int64_t var_380 = rsi;
    int64_t var_370;
    _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb56eb10b01392dc9(&var_370, &var_388);
    int64_t rbx = var_370;
    int64_t var_368;
    int64_t var_360;
    int64_t var_2f8;
    int64_t var_2f0;
    int64_t r13;
    int64_t r14;
    
    if (-(rbx) != -0x8000000000000000)
    {
        r14 = var_368;
        r13 = var_360;
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::had9e1c129a015e7b(&var_2f8, "test -> \x1b[2m -- \x1b[8mhelpNo…", 4);
        rbx = var_2f8;
        r14 = var_2f0;
        int64_t var_2e8;
        r13 = var_2e8;
    }
    
    void* rax_2;
    int64_t rdx;
    rax_2 = uucore::util_name::h074417a1e6395129();
    int128_t var_3c0;
    core::iter::traits::iterator::Iterator::collect::hfd648d74c24416de(&var_3c0, var_388);
    var_2f8 = 0;
    
    if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::ha65fb3c87ba1c23c(rax_2, rdx, 
            core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(&var_2f8)))
        goto label_4533ca;
    
    void* const r15 = -0x8000000000000000;
    int64_t var_3b0;
    
    if (!var_3b0)
        goto label_453517;
    
    int128_t var_3d8;
    int128_t var_338;
    void* r14_1;
    
    if (var_3b0 != 1)
        r14_1 = *var_3c0[8];
    else
    {
        r14_1 = *var_3c0[8];
        int64_t r12_1 = *(r14_1 + 8);
        uint64_t r13_1 = *(r14_1 + 0x10);
        char rax_5 = _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::h8faf1e7c8b6674ff(r12_1, r13_1, "--help--version/home/34r7hm4n/.r…", 6);
        char rax_6;
        
        if (!rax_5)
            rax_6 = _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::h8faf1e7c8b6674ff(r12_1, r13_1, "--version/home/34r7hm4n/.rustup/…", 9);
        
        if (rax_5 || rax_6)
        {
            uu_test::uu_app::hdf268f15ca51f7b3(&var_2f8);
            var_3d8 = rbx;
            *var_3d8[8] = r14;
            int64_t var_3c8_1 = r13;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h3430921a0960eea7(&var_338, &var_3c0);
            core::iter::traits::iterator::Iterator::chain::he887cc830149c6f6(&var_370, &var_3d8, 
                &var_338);
            clap_builder::builder::command::Command::get_matches_from::h6ed546cd803a2e7d(&var_338, 
                &var_2f8, &var_370);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h83d3c5c3bb5cfafb(&var_338);
            return 0;
        }
    }
    
    int64_t rbp_2 = var_3b0 - 1;
    var_3b0 = rbp_2;
    int64_t rax_9 = rbp_2 * 3;
    void* r12_2 = *(r14_1 + (rax_9 << 3));
    r13 = *(r14_1 + (rax_9 << 3) + 8);
    char rax_11;
    
    if (!(!r13 | r12_2 == -0x8000000000000000))
        rax_11 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h264aa89bb7f54a18(r13, *(r14_1 + (rax_9 << 3) + 0x10), "]missing ']'--help--version/home…", 1);
    
    uint64_t result;
    int64_t var_2e0;
    
    if (!r13 | r12_2 == -0x8000000000000000 || !rax_11)
    {
        r15 = r12_2;
        label_453517:
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::had9e1c129a015e7b(&var_370, "missing ']'--help--version/home/…", 0xb);
        int64_t var_2e8_2 = var_360;
        var_2f8 = var_370;
        var_2e0 = 2;
        result = alloc::boxed::Box$LT$T$GT$::new::hfd3520a0cacb99bb(&var_2f8);
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::ha5b50a9372fc615e(r15, r13);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::he507668ecf5fa430(&var_3c0);
    }
    else
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::ha5b50a9372fc615e(r12_2, r13);
        label_4533ca:
        int64_t var_2e8_1 = var_3b0;
        var_2f8 = var_3c0;
        uu_test::parser::parse::h797e9c3d2d2b1396(&var_370, &var_2f8);
        int64_t rax_13 = var_370;
        int64_t var_358;
        
        if (rax_13 != 7)
        {
            var_3d8 = *var_368[1];
            *var_3d8[0xf] = var_358;
            int128_t var_3a8_2 = var_3d8;
            *var_3a8_2[0xf] = *var_3d8[0xf];
            int64_t var_2e0_1 = *var_3a8_2[0xf];
            *var_2f0[1] = var_3a8_2;
            var_2f8 = rax_13;
            var_2f0 = var_368;
            result = alloc::boxed::Box$LT$T$GT$::new::h798b4c0ab9e6ff0a(&var_2f8);
        }
        else
        {
            int64_t var_328_1 = var_358;
            var_338 = var_368;
            uu_test::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h785697f62eea0848(&var_2f8, 
                &var_338);
            int64_t rcx_3 = var_2f8;
            char rax_14 = var_2f0;
            var_3d8 = *var_2f0[1];
            *var_3d8[0xf] = var_2e0;
            int128_t var_3a8_1 = var_3d8;
            *var_3a8_1[0xf] = *var_3d8[0xf];
            
            if (rcx_3 != 7)
            {
                int64_t var_2e0_2 = *var_3a8_1[0xf];
                *var_2f0[1] = var_3a8_1;
                var_2f8 = rcx_3;
                var_2f0 = rax_14;
                result = alloc::boxed::Box$LT$T$GT$::new::h798b4c0ab9e6ff0a(&var_2f8);
            }
            else if (!(rax_14 & 1))
                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(1);
            else
                result = 0;
        }
    }
    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::ha51acf210beffed0(rbx, r14);
    return result;
}
