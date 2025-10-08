
  fn just::unresolved_recipe::_$LT$impl$u20$just..recipe..Recipe$LT$just..unresolved_dependency..UnresolvedDependency$GT$$GT$::resolve::h282f902b1bf99931(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: u64, arg5: *mut i64) -> i64

{
    let r8: i64 = arg2[5];
    let mut var_190: i64 = r8;
    let rax_1: i64 = arg5[2];
    let mut var_188: i64 = rax_1;
    let mut var_1f8: u64;
    let mut var_158: *mut *mut c_void;
    let mut var_68: i64;
    
    if r8 != rax_1
    {
        let mut var_180: i64 = r8;
        var_68 = rax_1;
        var_1f8 = &var_180;
        let var_1f0: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        let var_1e8_2: *mut i64 = &var_68;
        let var_1e0: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        var_158 = &data_831928;
        let var_150_1: i64 = 2;
        let var_148_2: *mut u64 = &var_1f8;
        let var_140_2: i64 = 2;
        let var_138_2: i64 = 0;
        core::panicking::assert_failed::h449f2a7fe5426575(0, &var_190, &var_188, &var_158);
        /* no return */
    }
    
    let rsi: i64 = arg2[4];
    core::iter::traits::iterator::Iterator::zip::hdb4c70db203b6305(&var_68, rsi, r8 * 0x30 + rsi, 
        arg5[1], r8);
    let mut i_2: *mut c_void;
    let mut rdx_3: *mut i64;
    i_2 = _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::h23faae95849f4f62(&var_68);
    let var_148: i64;
    
    if i_2 != 0
    {
        let mut i_1: *mut c_void = i_2;
        let mut r13_1: *mut i64 = rdx_3;
        let mut i: *mut c_void;
        
        do
        {
            let mut rax_3: *mut c_void;
            let mut rdx_4: u64;
            rax_3 = just::token::Token::lexeme::h66587cdf67f63270(
                just::namepath::Namepath::last::hd204dfab89d26ff3(*i_1.byte_offset(0x20), 
                *i_1.byte_offset(0x28)));
            let mut var_178: *mut c_void = rax_3;
            let var_170_1: u64 = rdx_4;
            let mut rax_4: *mut c_void;
            let mut rdx_5: i64;
            rax_4 = just::token::Token::lexeme::h66587cdf67f63270((*r13_1).byte_offset(0xa0));
            let mut var_168: *mut c_void = rax_4;
            let var_160_1: i64 = rdx_5;
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(rax_3, rdx_4, rax_4, rdx_5) == 0
            {
                var_158 = nullptr;
                core::panicking::assert_failed::hd806a79f1961bff5(0, &var_178, &var_168, &var_158);
                /* no return */
            }
            
            let rax_6: *mut c_void = *r13_1;
            just::recipe::Recipe$LT$D$GT$::argument_range::hb6d51d234f252302(&var_158, 
                *rax_6.byte_offset(0x60), *rax_6.byte_offset(0x68));
            
            if core::ops::range::RangeBounds::contains::hb1bc8a8e40d7f57e(&var_158, 
                *i_1.byte_offset(0x10)) == 0
            {
                let rax_19: *mut i128 = just::namepath::Namepath::last::hd204dfab89d26ff3(
                    *i_1.byte_offset(0x20), *i_1.byte_offset(0x28));
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha18ac3b8a47dca8f(&var_158, *i_1.byte_offset(0x20), *i_1.byte_offset(0x28));
                var_1f8 = var_158;
                let rbp_1: i64 = *i_1.byte_offset(0x10);
                let rax_21: *mut c_void = *r13_1;
                let rbx_3: *mut i32 = *rax_21.byte_offset(0x60);
                let r14_3: i64 = *rax_21.byte_offset(0x68);
                let rax_22: i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hca6170881fec0ef2(rbx_3, (r14_3 * 0xd0).byte_offset(rbx_3));
                let rax_23: i64 =
                    just::recipe::Recipe$LT$D$GT$::max_arguments::h4d291109c050f382(rbx_3, r14_3);
                let mut var_150: i64;
                var_150 = var_1f8;
                let var_140_1: i64 = var_148;
                let var_138_1: i64 = rbp_1;
                let var_130_1: i64 = rax_22;
                let mut var_128: i128;
                var_128 = rax_23;
                var_158 = -0x8000000000000019;
                just::token::Token::error::h986494da066a4455(&var_1f8, rax_19, &var_158);
                let var_1b8: i128;
                *arg1.byte_offset(0x48) = var_1b8;
                let zmm0_3: i128 = var_1f8;
                let var_1c8: i128;
                *arg1.byte_offset(0x38) = var_1c8;
                let var_1d8: i128;
                *arg1.byte_offset(0x28) = var_1d8;
                *arg1.byte_offset(0x18) = var_148;
                *arg1.byte_offset(8) = zmm0_3;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..sync..Arc$LT$just..recipe..Recipe$GT$$GT$$GT$::h1d087e065d0c4e7c(arg5);
                return core::ptr::drop_in_place$LT$just..recipe..Recipe$LT$just..unresolved_dependency..UnresolvedDependency$GT$$GT$::ha19f91e5b971396e(arg2);
            }
            
            let mut rdx_8: *mut i64;
            i = _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::h23faae95849f4f62(&var_68);
            i_1 = i;
            r13_1 = rdx_8;
        } while i != 0;
    }
    
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h0ac5e7818b1c5b68(&var_1f8, &arg2[3]);
    core::iter::traits::iterator::Iterator::zip::ha813e2278cf83b22(&var_158, &var_1f8, arg5);
    core::iter::traits::iterator::Iterator::collect::hc7286269246af594(&var_68, &var_158);
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_158, arg3, arg4);
    var_1f8 = var_158;
    
    if var_148 != 0
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hb25a112a407b21ec(&var_1f8, ":: [private]\nexport no entry fo…", " [private]\nexport no entry foun…");
    }
    
    let mut rax_9: *mut c_void;
    let mut rdx_11: *mut c_void;
    rax_9 = just::token::Token::lexeme::h66587cdf67f63270(&arg2[0x12]);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hb25a112a407b21ec(&var_1f8, rax_9, rdx_11.byte_offset(rax_9));
    let var_70_1: i64 = arg2[0x1d];
    let var_80_1: i128 = *arg2.byte_offset(0xd8);
    let var_58: i64;
    let var_130: i64 = var_58;
    let mut var_140: i64;
    var_140 = var_68;
    let var_f8_1: i128 = *arg2.byte_offset(0x60);
    let var_e8_1: i64 = arg2[0xe];
    let rbx_2: i32 = arg2[0x1f];
    let var_118_1: i64 = arg2[8];
    let var_128_1: i128 = *arg2.byte_offset(0x30);
    let var_c8_1: i128 = *arg2.byte_offset(0x90);
    let var_b8_1: i128 = *arg2.byte_offset(0xa0);
    let var_a8_1: i128 = *arg2.byte_offset(0xb0);
    let var_98_1: i128 = *arg2.byte_offset(0xc0);
    let var_88_1: i64 = arg2[0x1a];
    let var_e0_1: i128 = var_1f8;
    let var_d0_1: i64 = var_148;
    let var_110_1: i128 = *arg2.byte_offset(0x48);
    let var_100_1: i64 = arg2[0xb];
    let r14_2: i64 = arg2[0x1e];
    let rbp: i16 = *arg2.byte_offset(0xfc);
    let r15_2: i8 = *arg2.byte_offset(0xfe);
    var_158 = *arg2;
    let var_148_1: i64 = arg2[2];
    memcpy(arg1, &var_158, 0xf0);
    arg1[0x1e] = r14_2;
    arg1[0x1f] = rbx_2;
    *arg1.byte_offset(0xfc) = rbp;
    *arg1.byte_offset(0xfe) = r15_2;
    core::ptr::drop_in_place$LT$regex..error..Error$GT$::h38559d1aa9a290b7(&arg2[0xf])
}
