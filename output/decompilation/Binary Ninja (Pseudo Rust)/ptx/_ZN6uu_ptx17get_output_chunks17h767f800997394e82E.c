
  fn uu_ptx::get_output_chunks::h767f800997394e82(arg1: *mut i128, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: i64, arg7: *mut c_void) -> i64

{
    let rax: i64 = *arg7.byte_offset(0x50);
    let r15_1: u64 = *arg7.byte_offset(0x48) >> 1;
    let rax_1: i64 = core::cmp::max_by::hbbe48af9e9e1ea74(r15_1 - rax);
    let rax_2: i64 = *arg7.byte_offset(0x28);
    let rax_3: i64 = core::cmp::max_by::hbbe48af9e9e1ea74(!((rax_2 << 1) + arg4) + r15_1);
    let mut var_1b8: *const i8;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hbb163462bfbc6d30(&var_1b8, r15_1, 0);
    let var_1b0: i64;
    
    if var_1b8 != 0
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(var_1b0);
        /* no return */
    }
    
    let mut var_168: i64 = var_1b0;
    let var_1a8: i64;
    let var_160: i64 = var_1a8;
    let mut var_158: i64 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hbb163462bfbc6d30(&var_1b8, r15_1, 0);
    
    if var_1b8 != 0
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(var_1b0);
        /* no return */
    }
    
    let mut var_188: i64 = var_1b0;
    let var_180: i64 = var_1a8;
    let mut var_178: i64 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hbb163462bfbc6d30(&var_1b8, r15_1, 0);
    
    if var_1b8 != 0
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(var_1b0);
        /* no return */
    }
    
    let mut var_128: i64 = var_1b0;
    let var_120: i64 = var_1a8;
    let var_118: i64 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hbb163462bfbc6d30(&var_1b8, r15_1, 0);
    
    if var_1b8 != 0
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(var_1b0);
        /* no return */
    }
    
    let mut var_110: i64 = var_1b0;
    let var_108: i64 = var_1a8;
    let var_100: i64 = 0;
    let mut rbx: *mut c_void;
    rbx = 1;
    let rdx: i64 = uu_ptx::trim_idx::hb7cdb8e465fc0246(arg2, arg3, 0, arg3);
    let mut rax_10: i64;
    let mut rdx_3: i64;
    rax_10 = uu_ptx::trim_idx::hb7cdb8e465fc0246(arg2, arg3, 
        uu_ptx::trim_broken_word_left::hd50f7f90ebb3c8c6(arg2, arg3, 
            core::cmp::max_by::hbbe48af9e9e1ea74(rdx - rax_1), rdx), 
        rdx);
    let mut rax_11: i64;
    let mut rdx_5: i64;
    rax_11 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h9dd60db5726c3817(rax_10, rdx_3, arg2, arg3);
    let mut var_c0: ();
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::ha7897a8cad1cbef8(&var_c0, rax_11);
    let var_b8: i64;
    let var_b0: i64;
    let mut rax_12: i64;
    let mut rdx_7: u64;
    rax_12 =
        core::slice::iter::Iter$LT$T$GT$::make_slice::hd2a6d42d8182f9eb(var_b8, var_b0 + var_b8);
    let mut rcx_4: i32;
    rcx_4 = 1;
    let var_1c8: i32 = rcx_4;
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h3f74110675a0c169(&var_188, rax_12, rdx_7);
    
    if rax_1 < var_178
    {
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: max_before_siz…");
        /* no return */
    }
    
    let rdx_8: i64 = uu_ptx::trim_idx::hb7cdb8e465fc0246(arg5, arg6, 0, 
        uu_ptx::trim_broken_word_right::hfe7aac5c1f353599(arg5, arg6, 0, 
            core::cmp::min_by::hf83f431a39c20930(rax_3, arg6)));
    let mut rax_16: i64;
    let mut rdx_10: i64;
    rax_16 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h9dd60db5726c3817(0, rdx_8, arg5, arg6);
    let mut var_a8: ();
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::ha7897a8cad1cbef8(&var_a8, rax_16);
    let var_a0: i64;
    let var_98: i64;
    let mut rax_17: i64;
    let mut rdx_12: u64;
    rax_17 =
        core::slice::iter::Iter$LT$T$GT$::make_slice::hd2a6d42d8182f9eb(var_a0, var_98 + var_a0);
    let mut rcx_8: i32;
    rcx_8 = 1;
    let mut var_1c8_1: i32 = rcx_8;
    let mut var_140: *mut i64 = &var_128;
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h3f74110675a0c169(&var_128, rax_17, rdx_12);
    
    if rax_3 < var_118
    {
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: max_after_size…");
        /* no return */
    }
    
    let rax_19: i64 = uu_ptx::trim_idx::hb7cdb8e465fc0246(arg5, arg6, rdx_8, arg6);
    let mut rax_23: i64;
    let mut rdx_16: i64;
    rax_23 = uu_ptx::trim_idx::hb7cdb8e465fc0246(arg5, arg6, rax_19, 
        uu_ptx::trim_broken_word_right::hfe7aac5c1f353599(arg5, arg6, rax_19, 
            core::cmp::min_by::hf83f431a39c20930(arg6, 
                rax_19 + core::cmp::max_by::hbbe48af9e9e1ea74(rax_1 - (var_178 + rax)))));
    let mut rax_24: i64;
    let mut rdx_18: i64;
    rax_24 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h9dd60db5726c3817(rax_23, rdx_16, arg5, arg6);
    let mut var_90: ();
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::ha7897a8cad1cbef8(&var_90, rax_24);
    var_1c8_1 = rdx_16;
    let var_88: i64;
    let var_80: i64;
    let mut rax_25: i64;
    let mut rdx_20: u64;
    rax_25 =
        core::slice::iter::Iter$LT$T$GT$::make_slice::hd2a6d42d8182f9eb(var_88, var_80 + var_88);
    let mut r13_4: i64;
    r13_4 = 1;
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h3f74110675a0c169(&var_110, rax_25, rdx_20);
    let rdx_21: i64 = uu_ptx::trim_idx::hb7cdb8e465fc0246(arg2, arg3, 0, rax_10);
    let mut rax_31: i64;
    let mut rdx_24: i64;
    rax_31 = uu_ptx::trim_idx::hb7cdb8e465fc0246(arg2, arg3, 
        uu_ptx::trim_broken_word_left::hd50f7f90ebb3c8c6(arg2, arg3, 
            core::cmp::max_by::hbbe48af9e9e1ea74(rdx_21
                - core::cmp::max_by::hbbe48af9e9e1ea74(rax_3 - (rax + var_118))), 
            rdx_21), 
        rdx_21);
    let mut rax_32: i64;
    let mut rdx_26: i64;
    rax_32 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h9dd60db5726c3817(rax_31, rdx_24, arg2, arg3);
    let mut var_78: ();
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::ha7897a8cad1cbef8(&var_78, rax_32);
    let var_70: i64;
    let var_68: i64;
    let mut rax_33: i64;
    let mut rdx_28: u64;
    rax_33 =
        core::slice::iter::Iter$LT$T$GT$::make_slice::hd2a6d42d8182f9eb(var_70, var_68 + var_70);
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h3f74110675a0c169(&var_168, rax_33, rdx_28);
    
    if rdx_8 != arg6
    {
        if rax_23 != var_1c8_1
        {
            var_140 = &var_110;
        }
        
        if rax_23 == var_1c8_1 || var_1c8_1 != arg6
        {
            let rdi_50: i64 = *arg7.byte_offset(0x20);
            let mut rax_35: i64;
            let mut rdx_29: u64;
            rax_35 = core::slice::iter::Iter$LT$T$GT$::make_slice::hd2a6d42d8182f9eb(rdi_50, 
                rax_2 + rdi_50);
            alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h3f74110675a0c169(var_140, rax_35, 
                rdx_29);
        }
    }
    
    if rax_10 != 0
    {
        let mut var_f8: *mut c_void;
        
        if rax_31 == rdx_24
        {
            var_f8 = arg7.byte_offset(0x18);
            let var_f0_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            let var_e8_1: *mut i64 = &var_188;
            let var_e0_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_1b8 = &data_4562c0;
            let var_1b0_1: i64 = 2;
            let var_198_1: i64 = 0;
            let var_1a8_1: *mut *mut c_void = &var_f8;
            let var_1a0_1: i64 = 2;
            let mut var_60: i128;
            core::option::Option$LT$T$GT$::map_or_else::hb716a3158a91a555(&var_60, &var_1b8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_188);
            let var_50: i64;
            var_178 = var_50;
            var_188 = var_60;
        }
        else if rax_31 != 0
        {
            var_f8 = arg7.byte_offset(0x18);
            let var_f0_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            let var_e8_2: *mut i64 = &var_168;
            let var_e0_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_1b8 = &data_4562c0;
            let var_1b0_2: i64 = 2;
            let var_198_2: i64 = 0;
            let var_1a8_2: *mut *mut c_void = &var_f8;
            let var_1a0_2: i64 = 2;
            let mut var_48: i128;
            core::option::Option$LT$T$GT$::map_or_else::hb716a3158a91a555(&var_48, &var_1b8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_168);
            let var_38: i64;
            var_158 = var_38;
            var_168 = var_48;
        }
    }
    
    arg1[1] = var_100;
    *arg1 = var_110;
    *arg1.byte_offset(0x28) = var_178;
    *arg1.byte_offset(0x18) = var_188;
    arg1[3] = var_128;
    arg1[4] = var_118;
    *arg1.byte_offset(0x48) = var_168;
    *arg1.byte_offset(0x58) = var_158;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_78);
    let var_1c8_2: i32 = 0;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_90);
    let var_1c8_3: i32 = 0;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_a8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_c0)
}
