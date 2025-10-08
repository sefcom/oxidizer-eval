
  fn uu_dd::parseargs::parse_bytes_with_opt_multiplier::hba7bf735da655d4c(arg1: *mut i64, arg2: i64, arg3: u64) -> *mut i64

{
    let mut var_88: i128;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_88, 
        0x78, arg2, arg3);
    let mut var_98: u64 = 0;
    let var_58: i16 = 1;
    let mut var_b0: i64;
    core::iter::traits::iterator::Iterator::collect::h743a2879142d859e(&var_b0, &var_98);
    let var_a0: i64;
    
    if var_a0 == 1
    {
        let var_a8: *mut i64;
        uu_dd::parseargs::parse_bytes_no_x::h5472f4e3f9be4cac(arg1, arg2, arg3, *var_a8, var_a8[1]);
        /* tailcall */
        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hf6c7f10f0c068d6a(
            var_b0, var_a8);
    }
    
    let mut var_50: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h9498cef3078a0b70(&var_50, &var_b0);
    let mut i_2: *mut i8;
    let mut rdx_3: u64;
    i_2 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he417a95ce55c1253(&var_50);
    let mut r12_1: i64;
    
    if i_2 == 0
    {
        r12_1 = 1;
    }
    else
    {
        let mut i_1: *mut i8 = i_2;
        let mut r13_1: u64 = rdx_3;
        r12_1 = 1;
        let mut i: *mut i8;
        
        do
        {
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(i_1, r13_1, "0", 1) != 0
            {
                uu_dd::parseargs::show_zero_multiplier_warning::h6f4af1804e1c11d6();
            }
            
            uu_dd::parseargs::parse_bytes_no_x::h5472f4e3f9be4cac(&var_98, arg2, arg3, i_1, r13_1);
            let mut rax_2: u64 = var_98;
            let mut rcx_4: u64 = arg3;
            let mut rdx_6: *mut i64;
            
            if rax_2 != 0xe
            {
                rdx_6 = arg1;
                *rdx_6.byte_offset(0x10) = var_88;
                'label_48e524:
                *rdx_6 = rax_2;
                rdx_6[1] = rcx_4;
                return core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$str$GT$$GT$::h773b74249533a103(&var_50);
            }
            
            if (r12_1 * rcx_4) >> 0x40 != {0}
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h074386e79a8fa9e7(&var_98, arg2, arg3);
                rcx_4 = var_98;
                rdx_6 = arg1;
                *rdx_6.byte_offset(0x10) = arg3;
                rax_2 = 0xd;
                goto 'label_48e524;
            }
            
            r12_1 *= rcx_4;
            let mut rdx_5: u64;
            i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he417a95ce55c1253(&var_50);
            i_1 = i;
            r13_1 = rdx_5;
        } while i != 0;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$str$GT$$GT$::h773b74249533a103(&var_50);
    arg1[1] = r12_1;
    *arg1 = 0xe;
    arg1
}
