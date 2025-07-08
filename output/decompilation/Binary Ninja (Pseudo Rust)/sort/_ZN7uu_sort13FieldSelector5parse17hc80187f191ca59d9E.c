
  fn uu_sort::FieldSelector::parse::hc80187f191ca59d9(arg1: *mut i64, arg2: i64, arg3: u64, arg4: i64) -> *mut i64

{
    let mut var_f8: i64 = arg4;
    let mut var_68: ();
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&var_68, 
        0x2c, arg2, arg3);
    let mut var_78: i64 = 0;
    let var_70: u64 = arg3;
    let var_38: i16 = 1;
    let mut rax: *mut i8;
    let mut rdx_1: *mut c_void;
    rax = core::str::iter::SplitInternal$LT$P$GT$::next::h1ca17ad8b676764c(&var_78);
    
    if rax == 0
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    let mut var_d0: i64;
    uu_sort::FieldSelector::split_key_options::h3befb314b865dbc5(&var_d0, rax, rdx_1);
    let r13: i64 = var_d0;
    let mut rax_1: *mut i8;
    let mut rdx_2: *mut c_void;
    rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::h1ca17ad8b676764c(&var_78);
    let mut var_f0: i64;
    let var_b8: i64;
    
    if rax_1 != 0
    {
        core::ops::function::FnOnce::call_once::h0bf0484f61ddc553(&var_f0, rax_1, rdx_2);
        
        if var_b8 != 0
        {
            goto 'label_52132b;
        }
        
        goto 'label_5212b0;
    }
    
    var_f0 = 0;
    let mut var_128: i128;
    let mut var_118: i128;
    let var_e0: i128;
    let var_c8: i64;
    let var_99: i8;
    
    if var_b8 == 0
    {
        'label_5212b0:
        
        if var_f0 != 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb9af56cf5f49fd41(var_e0, *var_e0[8], 1, 0) == 0
        {
            goto 'label_52132b;
        }
        
        var_128 = r13;
        *var_128[8] = var_c8;
        var_118 = &var_f8;
        *var_118[8] = &var_f0;
        uu_sort::FieldSelector::parse::_$u7b$$u7b$closure$u7d$$u7d$::hbfab5933502ce6d9(&var_d0, 
            &var_128);
        
        if var_99 == 2
        {
            goto 'label_521382;
        }
        
        goto 'label_521308;
    }
    
    'label_52132b:
    let mut var_98: i64 = r13;
    let var_90_1: i64 = var_c8;
    let var_c0: i64;
    let var_88_1: i64 = var_c0;
    let var_80_1: i64 = var_b8;
    var_118 = var_e0;
    var_128 = var_f0;
    uu_sort::FieldSelector::parse_with_options::hf97b85c869b37397(&var_d0, &var_98, &var_128);
    
    if var_99 != 2
    {
        'label_521308:
        let var_a0: i64;
        arg1[6] = var_a0;
        let zmm0_2: i128 = var_d0;
        let var_b0: i128;
        *arg1.byte_offset(0x20) = var_b0;
        *arg1.byte_offset(0x10) = var_c0;
        *arg1 = zmm0_2;
    }
    else
    {
        'label_521382:
        var_118 = var_c0;
        var_128 = var_d0;
        *arg1 = uu_sort::FieldSelector::parse::_$u7b$$u7b$closure$u7d$$u7d$::h449a10a279cbece7(
            arg2, arg3, &var_128);
        arg1[1] = &data_5ff678;
        *arg1.byte_offset(0x37) = 2;
    }
    
    arg1
}
