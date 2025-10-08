
  fn rg::flags::doc::render_custom_markup::h0fb1cb8c658149ec(arg1: *mut i128, arg2: *mut i8, arg3: *mut c_void) -> i64

{
    let mut r15: *mut c_void = arg3;
    let mut r14: *mut i8 = arg2;
    let mut var_40: *const i8 = "flag-negateinternal error: enter…";
    let var_38: i64 = 0xb;
    let mut rax: i64;
    let mut rdx: u64;
    rax = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h02ccee15b84dfdd3(r15, 1, 1);
    let mut var_a8: i64 = rax;
    let var_a0: u64 = rdx;
    let var_98: i64 = 0;
    let mut var_c8: *const *const i8 = &var_40;
    let var_c0: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
    let mut var_70: *mut *mut [i8; 0xfb] = &data_7ead28;
    let var_68: i64 = 2;
    let var_50: i64 = 0;
    let var_60: *mut *const *const i8 = &var_c8;
    let var_58: i64 = 1;
    let mut var_88: i128;
    core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_88, 0, rdx, &var_70);
    var_c8 = var_88;
    
    loop
    {
        let mut rax_2: i8;
        let mut rdx_2: *mut c_void;
        rax_2 = core::str::_$LT$impl$u20$str$GT$::find::h2e6bfdbb875eb727(r14, r15, &var_c8);
        
        if (rax_2 & 1) == 0
        {
            break;
        }
        
        let mut rax_3: i64;
        let mut rdx_4: i64;
        rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(rdx_2, r14, r15);
        
        if rax_3 == 0
        {
            core::str::slice_error_fail::h1a2885084e28d077(r14, r15, nullptr, rdx_2);
            /* no return */
        }
        
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_a8, rax_3, rdx_4 + rax_3);
        let var_78: i64;
        let rbp_2: *mut c_void = rdx_2.byte_offset(var_78);
        let mut rax_4: *mut c_void;
        let mut rdx_7: i64;
        rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(rbp_2, r14, r15);
        
        if rax_4 == 0
        {
            core::str::slice_error_fail::h1a2885084e28d077(r14, r15, rbp_2, r15);
            /* no return */
        }
        
        let mut rax_5: i8;
        let mut rdx_8: *mut c_void;
        rax_5 = core::str::_$LT$impl$u20$str$GT$::find::h93486ebb28bd6af0(rax_4, rdx_7);
        
        if (rax_5 & 1) == 0
        {
            var_88 = &var_c8;
            *var_88[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_70 = &data_7ead48;
            let var_68_1: i64 = 2;
            let var_50_1: i64 = 0;
            let var_60_1: *mut i128 = &var_88;
            let var_58_1: i64 = 1;
            core::panicking::panic_fmt::h96f341d36638c225(&var_70);
            /* no return */
        }
        
        let rbx_2: *mut c_void = rdx_8.byte_offset(rbp_2);
        let mut rax_6: *mut c_void;
        let mut rdx_10: u64;
        rax_6 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rbp_2, rbx_2, r14, r15);
        
        if rax_6 == 0
        {
            core::str::slice_error_fail::h1a2885084e28d077(r14, r15, rbp_2, rbx_2);
            /* no return */
        }
        
        rg::flags::doc::man::generate_flag::_$u7b$$u7b$closure$u7d$$u7d$::h4e6e445adcbab60f(rax_6, 
            rdx_10, &var_a8);
        let mut rax_7: *mut c_void;
        let mut rdx_13: *mut c_void;
        rax_7 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(rbx_2.byte_offset(1), r14, r15);
        
        if rax_7 == 0
        {
            core::str::slice_error_fail::h1a2885084e28d077(r14, r15, rbx_2.byte_offset(1), r15);
            /* no return */
        }
        
        r15 = rdx_13;
        r14 = rax_7;
    }
    
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_a8, r14, r15.byte_offset(r14));
    arg1[1] = var_98;
    *arg1 = var_a8;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_c8)
}
