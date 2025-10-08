
  fn uu_test::uumain::uumain::h1130fcd79094e85f(arg1: i64) -> u64

{
    let mut var_388: i64 = arg1;
    let rsi: i64;
    let var_380: i64 = rsi;
    let mut var_370: i64;
    _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb56eb10b01392dc9(&var_370, &var_388);
    let mut rbx: i64 = var_370;
    let var_368: i64;
    let var_360: i64;
    let mut var_2f8: i64;
    let mut var_2f0: i64;
    let mut r13: i64;
    let mut r14: i64;
    
    if -(rbx) != -0x8000000000000000
    {
        r14 = var_368;
        r13 = var_360;
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::had9e1c129a015e7b(&var_2f8, "test -> \x1b[2m -- \x1b[8mhelpNo…", 4);
        rbx = var_2f8;
        r14 = var_2f0;
        let var_2e8: i64;
        r13 = var_2e8;
    }
    
    let mut rax_2: *mut c_void;
    let mut rdx: i64;
    rax_2 = uucore::util_name::h074417a1e6395129();
    let mut var_3c0: i128;
    core::iter::traits::iterator::Iterator::collect::hfd648d74c24416de(&var_3c0, var_388);
    var_2f8 = 0;
    
    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::ha65fb3c87ba1c23c(rax_2, rdx, 
        core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(&var_2f8)) == 0
    {
        goto 'label_4533ca;
    }
    
    let mut r15: *mut c_void = -0x8000000000000000;
    let mut var_3b0: i64;
    
    if var_3b0 == 0
    {
        goto 'label_453517;
    }
    
    let mut var_3d8: i128;
    let mut var_338: i128;
    let mut r14_1: *mut c_void;
    
    if var_3b0 != 1
    {
        r14_1 = *var_3c0[8];
    }
    else
    {
        r14_1 = *var_3c0[8];
        let r12_1: i64 = *r14_1.byte_offset(8);
        let r13_1: u64 = *r14_1.byte_offset(0x10);
        let rax_5: i8 = _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::h8faf1e7c8b6674ff(r12_1, r13_1, "--help--version/home/34r7hm4n/.r…", 6);
        let mut rax_6: i8;
        
        if rax_5 == 0
        {
            rax_6 = _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::h8faf1e7c8b6674ff(r12_1, r13_1, "--version/home/34r7hm4n/.rustup/…", 9);
        }
        
        if rax_5 != 0 || rax_6 != 0
        {
            uu_test::uu_app::hdf268f15ca51f7b3(&var_2f8);
            var_3d8 = rbx;
            *var_3d8[8] = r14;
            let var_3c8_1: i64 = r13;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h3430921a0960eea7(&var_338, &var_3c0);
            core::iter::traits::iterator::Iterator::chain::he887cc830149c6f6(&var_370, &var_3d8, 
                &var_338);
            clap_builder::builder::command::Command::get_matches_from::h6ed546cd803a2e7d(&var_338, 
                &var_2f8, &var_370);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h83d3c5c3bb5cfafb(&var_338);
            return 0;
        }
    }
    
    let rbp_2: i64 = var_3b0 - 1;
    var_3b0 = rbp_2;
    let rax_9: i64 = rbp_2 * 3;
    let r12_2: *mut c_void = *r14_1.byte_offset(rax_9 << 3);
    r13 = *r14_1.byte_offset(rax_9 << 3).byte_offset(8);
    let mut rax_11: i8;
    
    if (r13 == 0 | r12_2 == -0x8000000000000000) == 0
    {
        rax_11 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h264aa89bb7f54a18(r13, *r14_1.byte_offset(rax_9 << 3).byte_offset(0x10), 
            "]missing ']'--help--version/home…", 1);
    }
    
    let mut result: u64;
    let mut var_2e0: i64;
    
    if (r13 == 0 | r12_2 == -0x8000000000000000) != 0 || rax_11 == 0
    {
        r15 = r12_2;
        'label_453517:
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::had9e1c129a015e7b(&var_370, "missing ']'--help--version/home/…", 0xb);
        let var_2e8_2: i64 = var_360;
        var_2f8 = var_370;
        var_2e0 = 2;
        result = alloc::boxed::Box$LT$T$GT$::new::hfd3520a0cacb99bb(&var_2f8);
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::ha5b50a9372fc615e(r15, r13);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::he507668ecf5fa430(&var_3c0);
    }
    else
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::ha5b50a9372fc615e(r12_2, r13);
        'label_4533ca:
        let var_2e8_1: i64 = var_3b0;
        var_2f8 = var_3c0;
        uu_test::parser::parse::h797e9c3d2d2b1396(&var_370, &var_2f8);
        let rax_13: i64 = var_370;
        let var_358: i64;
        
        if rax_13 != 7
        {
            var_3d8 = *var_368[1];
            *var_3d8[0xf] = var_358;
            let mut var_3a8_2: i128 = var_3d8;
            *var_3a8_2[0xf] = *var_3d8[0xf];
            let var_2e0_1: i64 = *var_3a8_2[0xf];
            *var_2f0[1] = var_3a8_2;
            var_2f8 = rax_13;
            var_2f0 = var_368;
            result = alloc::boxed::Box$LT$T$GT$::new::h798b4c0ab9e6ff0a(&var_2f8);
        }
        else
        {
            let var_328_1: i64 = var_358;
            var_338 = var_368;
            uu_test::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h785697f62eea0848(&var_2f8, 
                &var_338);
            let rcx_3: i64 = var_2f8;
            let rax_14: i8 = var_2f0;
            var_3d8 = *var_2f0[1];
            *var_3d8[0xf] = var_2e0;
            let mut var_3a8_1: i128 = var_3d8;
            *var_3a8_1[0xf] = *var_3d8[0xf];
            
            if rcx_3 != 7
            {
                let var_2e0_2: i64 = *var_3a8_1[0xf];
                *var_2f0[1] = var_3a8_1;
                var_2f8 = rcx_3;
                var_2f0 = rax_14;
                result = alloc::boxed::Box$LT$T$GT$::new::h798b4c0ab9e6ff0a(&var_2f8);
            }
            else if (rax_14 & 1) == 0
            {
                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(1);
            }
            else
            {
                result = 0;
            }
        }
    }
    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::ha51acf210beffed0(rbx, r14);
    result
}
