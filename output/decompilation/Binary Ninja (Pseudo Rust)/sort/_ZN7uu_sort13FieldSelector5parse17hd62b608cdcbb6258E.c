
  fn uu_sort::FieldSelector::parse::hd62b608cdcbb6258(arg1: *mut i64, arg2: i64, arg3: u64, arg4: i64) -> *mut i64

{
    let mut var_d8: i64 = arg4;
    let mut var_68: ();
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_68, 
        0x2c, arg2, arg3);
    let mut var_78: i64 = 0;
    let var_70: u64 = arg3;
    let var_38: i16 = 1;
    let mut rax: *mut i8;
    let mut rdx_1: i64;
    rax = core::str::iter::SplitInternal$LT$P$GT$::next::hcedf3ecbc5351d30(&var_78);
    
    if rax == 0
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let mut var_d0: i64;
    uu_sort::FieldSelector::split_key_options::h52f8e7164abbfd25(&var_d0, rax, rdx_1);
    let r13: i64 = var_d0;
    let mut rax_1: *mut i8;
    let mut rdx_2: i64;
    rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::hcedf3ecbc5351d30(&var_78);
    let var_b8: i64;
    let mut var_98: i64;
    
    if rax_1 != 0
    {
        uu_sort::FieldSelector::split_key_options::h52f8e7164abbfd25(&var_98, rax_1, rdx_2);
        
        if var_b8 != 0
        {
            goto 'label_4d324b;
        }
        
        goto 'label_4d31d0;
    }
    
    var_98 = 0;
    let mut var_100: i64;
    let var_c8: i64;
    let var_99: i8;
    
    if var_b8 == 0
    {
        'label_4d31d0:
        let var_88: i64;
        let var_80: u64;
        
        if var_98 != 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf24dc1420a1402d1(var_88, var_80, 1, 0) == 0
        {
            goto 'label_4d324b;
        }
        
        var_100 = r13;
        let var_f8: i64 = var_c8;
        let var_f0: *mut i64 = &var_d8;
        let var_e8: *mut i64 = &var_98;
        uu_sort::FieldSelector::parse::_$u7b$$u7b$closure$u7d$$u7d$::h169e2419223beb2b(&var_d0, 
            &var_100);
        
        if var_99 == 2
        {
            goto 'label_4d328c;
        }
        
        goto 'label_4d322b;
    }
    
    'label_4d324b:
    var_100 = r13;
    let var_f8_1: i64 = var_c8;
    let var_c0: i64;
    let var_f0_1: i64 = var_c0;
    let var_e8_1: i64 = var_b8;
    uu_sort::FieldSelector::parse_with_options::h698e7c19784cfaad(&var_d0, &var_100, &var_98);
    
    if var_99 != 2
    {
        'label_4d322b:
        let var_a0: i64;
        arg1[6] = var_a0;
        let zmm0_1: i128 = var_d0;
        let var_b0: i128;
        *arg1.byte_offset(0x20) = var_b0;
        *arg1.byte_offset(0x10) = var_c0;
        *arg1 = zmm0_1;
    }
    else
    {
        'label_4d328c:
        *arg1 = uu_sort::FieldSelector::parse::_$u7b$$u7b$closure$u7d$$u7d$::h36e4ea784e6f9a09(
            arg2, arg3, &var_d0);
        arg1[1] = &data_58c448;
        *arg1.byte_offset(0x37) = 2;
    }
    
    arg1
}
