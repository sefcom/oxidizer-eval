
  fn uu_ptx::get_output_chunks::h0c2bb66b7373631a(arg1: *mut i128, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: i64, arg7: *mut c_void) -> i64

{
    let rax: i64 = *arg7.byte_offset(0x50);
    let rbp_1: u64 = *arg7.byte_offset(0x48) >> 1;
    let rax_1: i64 = core::cmp::Ord::max::hecb99a5fb0c577c5(rbp_1 - rax);
    let rax_2: i64 = *arg7.byte_offset(0x28);
    let rax_3: i64 = core::cmp::Ord::max::hecb99a5fb0c577c5(!((rax_2 << 1) + arg4) + rbp_1);
    let mut rax_4: i64;
    let mut rdx: i64;
    rax_4 = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h41210ac9edb33abe(rbp_1, 1, 1);
    let mut var_198: i64 = rax_4;
    let var_190: i64 = rdx;
    let mut var_188: i64 = 0;
    let mut rax_5: i64;
    let mut rdx_1: i64;
    rax_5 = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h41210ac9edb33abe(rbp_1, 1, 1);
    let mut var_1b8: i64 = rax_5;
    let var_1b0: i64 = rdx_1;
    let mut var_1a8: i64 = 0;
    let mut rax_6: i64;
    let mut rdx_2: i64;
    rax_6 = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h41210ac9edb33abe(rbp_1, 1, 1);
    let mut var_158: i64 = rax_6;
    let var_150: i64 = rdx_2;
    let var_148: i64 = 0;
    let mut rax_7: i64;
    let mut rdx_3: i64;
    rax_7 = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h41210ac9edb33abe(rbp_1, 1, 1);
    let mut var_140: i64 = rax_7;
    let var_138: i64 = rdx_3;
    let var_130: i64 = 0;
    let rdx_4: i64 = uu_ptx::trim_idx::h946357e36774701b(arg2, arg3, 0, arg3);
    let mut rax_10: i64;
    let mut rdx_7: i64;
    rax_10 = uu_ptx::trim_idx::h946357e36774701b(arg2, arg3, 
        uu_ptx::trim_broken_word_left::hd74c554aea0eb997(arg2, arg3, 
            core::cmp::Ord::max::hecb99a5fb0c577c5(rdx_4 - rax_1), rdx_4), 
        rdx_4);
    let mut rax_11: i64;
    let mut rdx_9: i64;
    rax_11 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h599a73c91ae99f33(rax_10, rdx_7, arg2, arg3);
    let mut var_c0: ();
    core::iter::traits::iterator::Iterator::collect::h271c5ff291e66d45(&var_c0, rax_11);
    let var_b8: i64;
    let var_b0: i64;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hf791cfea2baa4756(&var_1b8, var_b8, var_b0 + var_b8);
    
    if rax_1 < var_1a8
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: max_before_siz…");
        /* no return */
    }
    
    let rdx_13: i64 = uu_ptx::trim_idx::h946357e36774701b(arg5, arg6, 0, 
        uu_ptx::trim_broken_word_right::h89ebaf4ee7dd174e(arg5, arg6, 0, 
            core::cmp::Ord::min::hd46f433d625ea8eb(rax_3, arg6)));
    let mut rax_15: i64;
    let mut rdx_15: i64;
    rax_15 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h599a73c91ae99f33(0, rdx_13, arg5, arg6);
    let mut var_a8: ();
    core::iter::traits::iterator::Iterator::collect::h271c5ff291e66d45(&var_a8, rax_15);
    let mut var_180: *mut i64 = &var_158;
    let var_a0: i64;
    let var_98: i64;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hf791cfea2baa4756(&var_158, var_a0, var_98 + var_a0);
    
    if rax_3 < var_148
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: max_after_size…");
        /* no return */
    }
    
    let rax_17: i64 = uu_ptx::trim_idx::h946357e36774701b(arg5, arg6, rdx_13, arg6);
    let mut rax_21: i64;
    let mut rdx_22: i64;
    rax_21 = uu_ptx::trim_idx::h946357e36774701b(arg5, arg6, rax_17, 
        uu_ptx::trim_broken_word_right::h89ebaf4ee7dd174e(arg5, arg6, rax_17, 
            core::cmp::Ord::min::hd46f433d625ea8eb(arg6, 
                rax_17 + core::cmp::Ord::max::hecb99a5fb0c577c5(rax_1 - (var_1a8 + rax)))));
    let mut rax_22: i64;
    let mut rdx_24: i64;
    rax_22 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h599a73c91ae99f33(rax_21, rdx_22, arg5, arg6);
    let mut var_90: ();
    core::iter::traits::iterator::Iterator::collect::h271c5ff291e66d45(&var_90, rax_22);
    let var_88: i64;
    let var_80: i64;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hf791cfea2baa4756(&var_140, var_88, var_80 + var_88);
    let rdx_28: i64 = uu_ptx::trim_idx::h946357e36774701b(arg2, arg3, 0, rax_10);
    let mut rax_28: i64;
    let mut rdx_31: i64;
    rax_28 = uu_ptx::trim_idx::h946357e36774701b(arg2, arg3, 
        uu_ptx::trim_broken_word_left::hd74c554aea0eb997(arg2, arg3, 
            core::cmp::Ord::max::hecb99a5fb0c577c5(rdx_28
                - core::cmp::Ord::max::hecb99a5fb0c577c5(rax_3 - (rax + var_148))), 
            rdx_28), 
        rdx_28);
    let mut rax_29: i64;
    let mut rdx_33: i64;
    rax_29 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h599a73c91ae99f33(rax_28, rdx_31, arg2, arg3);
    let mut var_78: ();
    core::iter::traits::iterator::Iterator::collect::h271c5ff291e66d45(&var_78, rax_29);
    let var_70: i64;
    let var_68: i64;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hf791cfea2baa4756(&var_198, var_70, var_68 + var_70);
    
    if rdx_13 != arg6
    {
        if rax_21 != rdx_22
        {
            var_180 = &var_140;
        }
        
        if rax_21 == rdx_22 || rdx_22 != arg6
        {
            let rsi_26: i64 = *arg7.byte_offset(0x20);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hf791cfea2baa4756(var_180, rsi_26, rax_2 + rsi_26);
        }
    }
    
    if rax_10 != 0
    {
        let mut var_128: *mut c_void;
        let mut var_f0: *const i8;
        
        if rax_28 == rdx_31
        {
            var_128 = arg7.byte_offset(0x18);
            let var_120_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            let var_118_1: *mut i64 = &var_1b8;
            let var_110_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_f0 = &data_455170;
            let var_e8_1: i64 = 2;
            let var_d0_1: i64 = 0;
            let var_e0_1: *mut *mut c_void = &var_128;
            let var_d8_1: i64 = 2;
            let mut var_60: i128;
            core::option::Option$LT$T$GT$::map_or_else::h4a28e95acdffaeae(&var_60, &var_f0);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_1b8);
            let var_50: i64;
            var_1a8 = var_50;
            var_1b8 = var_60;
        }
        else if rax_28 != 0
        {
            var_128 = arg7.byte_offset(0x18);
            let var_120_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            let var_118_2: *mut i64 = &var_198;
            let var_110_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_f0 = &data_455170;
            let var_e8_2: i64 = 2;
            let var_d0_2: i64 = 0;
            let var_e0_2: *mut *mut c_void = &var_128;
            let var_d8_2: i64 = 2;
            let mut var_48: i128;
            core::option::Option$LT$T$GT$::map_or_else::h4a28e95acdffaeae(&var_48, &var_f0);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_198);
            let var_38: i64;
            var_188 = var_38;
            var_198 = var_48;
        }
    }
    
    arg1[1] = var_130;
    *arg1 = var_140;
    *arg1.byte_offset(0x28) = var_1a8;
    *arg1.byte_offset(0x18) = var_1b8;
    arg1[3] = var_158;
    arg1[4] = var_148;
    *arg1.byte_offset(0x48) = var_198;
    *arg1.byte_offset(0x58) = var_188;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_78);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_90);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_a8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_c0)
}
