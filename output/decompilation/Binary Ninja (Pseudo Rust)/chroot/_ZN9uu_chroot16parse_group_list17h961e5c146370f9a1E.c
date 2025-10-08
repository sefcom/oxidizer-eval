
  fn uu_chroot::parse_group_list::h961e5c146370f9a1(arg1: *mut i32, arg2: i64, arg3: u64) -> i64

{
    let mut var_150: *mut *mut i64;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(
        &var_150, 0x2c, arg2, arg3);
    let mut var_160: *mut i64 = nullptr;
    let mut var_158: *mut c_void = arg3;
    let var_120: i16 = 1;
    let mut var_d8: i64;
    core::iter::traits::iterator::Iterator::collect::hc6e6e32a66244622(&var_d8, &var_160);
    let mut var_118: i128;
    let var_d0: *mut i64;
    let var_c8: i64;
    let mut r14: *mut i64;
    
    if var_c8 == 1
    {
        r14 = var_d0;
        let mut rax_1: i64;
        let mut rdx_1: u64;
        rax_1 = core::str::_$LT$impl$u20$str$GT$::trim_matches::he490630ed8633fd2(*r14, r14[1]);
        
        if rdx_1 == 0
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9f2965073c9f102f(&var_160, rax_1, 0);
            *var_160[4] = var_160;
            var_150 = var_150;
            *arg1 = 4;
            'label_466c63:
            let rcx_1: *mut *mut i64 = var_150;
            *arg1.byte_offset(4) = var_160;
            *arg1.byte_offset(0x10) = var_158;
            *arg1.byte_offset(0x18) = rcx_1;
        }
        else
        {
            let rax_2: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18);
            
            if rax_2 == 0
            {
                alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                /* no return */
            }
            
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9f2965073c9f102f(&var_160, rax_1, rdx_1);
            let rax_3: *mut *mut i64 = var_150;
            let var_108_1: *mut *mut i64 = rax_3;
            let zmm0_1: i128 = var_160;
            var_118 = zmm0_1;
            *(rax_2 + 0x10) = rax_3;
            *rax_2 = zmm0_1;
            *arg1.byte_offset(8) = 1;
            *arg1.byte_offset(0x10) = rax_2;
            *arg1.byte_offset(0x18) = 1;
            *arg1 = 0xe;
            r14 = var_d0;
        }
        
        /* tailcall */
        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h79c3796c70dc8d4d(
            var_d8, r14);
    }
    
    r14 = var_d0;
    var_160 = r14;
    var_158 = &r14[var_c8 * 2];
    
    if _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::all::hf037d8f689b44d8f(&var_160) != 0
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9f2965073c9f102f(&var_160, arg2, arg3);
        *var_160[4] = var_160;
        var_150 = var_150;
        *arg1 = 5;
        goto 'label_466c63;
    }
    
    let mut var_c0: i64 = 0;
    let var_b8: i64 = 8;
    let var_b0: i64 = 0;
    let mut var_88: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hbd31ef3f4dd053dd(&var_88, &var_d8);
    let mut var_164: i8 = 0;
    
    loop
    {
        let mut rax_8: i64;
        let mut rdx_4: u64;
        rax_8 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h03a637a8b496c07f(&var_88);
        
        if rax_8 == 0
        {
            break;
        }
        
        let mut rax_9: i64;
        let mut rdx_5: u64;
        rax_9 = core::str::_$LT$impl$u20$str$GT$::trim_matches::he490630ed8633fd2(rax_8, rdx_4);
        let mut var_e8: i64;
        let mut var_a8: *mut i64;
        
        if rdx_5 != 0
        {
            let rax_13: i8 =
                core::str::pattern::Pattern::is_prefix_of::hb5e922bbb1679761(rax_9, rdx_5);
            let mut rax_14: i8;
            
            if rax_13 != 0
            {
                rax_14 = core::str::pattern::Pattern::is_suffix_of::h4d12b2a3f6b8ec0d(rax_9, rdx_5);
            }
            
            if rax_13 == 0 || rax_14 == 0
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9f2965073c9f102f(&var_160, rax_9, rdx_5);
                let var_108_2: *mut *mut i64 = var_150;
                var_118 = var_160;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h1e8619c8d8ef628a(&var_c0, &var_118);
                continue;
            }
            
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9f2965073c9f102f(&var_160, rax_8, rdx_4);
            let var_100_2: *mut *mut i64 = var_150;
            var_118 = var_160;
            var_118 = 4;
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(0x7d);
            let mut rax_17: i64;
            let mut rdx_10: i64;
            rax_17 = uucore::util_name::h074417a1e6395129();
            var_e8 = rax_17;
            let var_e0_2: i64 = rdx_10;
            var_a8 = &var_e8;
            let var_a0_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd4727b3c80c27e33;
            let var_98_2: *mut i128 = &var_118;
            let var_90_2: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = _$LT$uu_chroot..error..ChrootError$u20$as$u20$core..fmt..Display$GT$::fmt::hde4c65801cafeee4;
            var_160 = &data_4fab48;
            let var_158_2: i64 = 3;
            let var_140_2: i64 = 0;
            var_150 = &var_a8;
            let var_148_2: i64 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_160);
            core::ptr::drop_in_place$LT$uu_chroot..error..ChrootError$GT$::h70d0c8dd677b313f(
                &var_118);
        }
        else if rdx_4 == 0
        {
            continue;
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9f2965073c9f102f(&var_160, rax_8, rdx_4);
            let var_100_1: *mut *mut i64 = var_150;
            var_118 = var_160;
            var_118 = 4;
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(0x7d);
            let mut rax_11: i64;
            let mut rdx_7: i64;
            rax_11 = uucore::util_name::h074417a1e6395129();
            var_e8 = rax_11;
            let var_e0_1: i64 = rdx_7;
            var_a8 = &var_e8;
            let var_a0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd4727b3c80c27e33;
            let var_98_1: *mut i128 = &var_118;
            let var_90_1: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = _$LT$uu_chroot..error..ChrootError$u20$as$u20$core..fmt..Display$GT$::fmt::hde4c65801cafeee4;
            var_160 = &data_4fab48;
            let var_158_1: i64 = 3;
            let var_140_1: i64 = 0;
            var_150 = &var_a8;
            let var_148_1: i64 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_160);
            core::ptr::drop_in_place$LT$uu_chroot..error..ChrootError$GT$::h70d0c8dd677b313f(
                &var_118);
        }
        var_164 = 1;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$str$GT$$GT$::h0039c72f5ec7f340(&var_88);
    let mut result: i32;
    
    if (var_164 & 1) == 0
    {
        *arg1.byte_offset(0x18) = var_b0;
        *arg1.byte_offset(8) = var_c0;
        result = 0xe;
    }
    else
    {
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h9c5285db89163a1f(&var_c0);
        result = 3;
    }
    
    *arg1 = result;
    result
}
