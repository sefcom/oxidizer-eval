
  fn uu_numfmt::parse_unit_size::hba45e7319bcb81ae(arg1: *mut i64, arg2: *mut *mut c_void, arg3: *mut c_void) -> i64

{
    let rax: *mut c_void = arg2.byte_offset(arg3);
    let mut var_c0: *mut *mut c_void = arg2;
    let mut var_b0: i8 = 0;
    let mut var_90: ();
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h1d245a97348b10d3(&var_90, &var_c0);
    let var_80: u64;
    let mut rax_1: *mut c_void;
    let mut rdx_1: i64;
    rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(var_80, arg2, arg3);
    
    if rax_1 == 0
    {
        core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, var_80, arg3);
        /* no return */
    }
    
    if var_80 == 0
    {
        goto 'label_4c01b6;
    }
    
    alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&var_c0, "0K", 1, var_80);
    let var_88: *mut i8;
    
    if alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::hf0c8d218e68d96bc(rax, var_b0, var_88, var_80) == 0
    {
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb0bde7aa45c92349(&var_c0);
        'label_4c01b6:
        let mut rax_3: i64;
        let mut rdx_3: i64;
        rax_3 = uu_numfmt::parse_unit_size_suffix::h0d4904f7b87ea86b(rax_1, rdx_1);
        
        if rax_3 != 1
        {
            goto 'label_4c01f3;
        }
        
        if var_80 == 0
        {
            arg1[1] = rdx_3;
            *arg1 = -0x8000000000000000;
        }
        else
        {
            core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_c0, var_88, var_80);
            
            if var_c0 != 0
            {
                goto 'label_4c01f3;
            }
            
            arg1[1] = rdx_3 * rax;
            *arg1 = -0x8000000000000000;
        }
    }
    else
    {
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb0bde7aa45c92349(&var_c0);
        'label_4c01f3:
        let mut var_68: i64 = 0;
        let var_60_1: *mut *mut c_void = arg2;
        let var_58_1: *mut c_void = arg3;
        let var_50_1: i8 = 1;
        let mut var_78: *mut i64 = &var_68;
        let var_70_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_c0 = &data_535880;
        let var_b8_1: i64 = 1;
        let var_a0_1: i64 = 0;
        var_b0 = &var_78;
        let var_a8_1: i64 = 1;
        let mut var_48: i128;
        core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(&var_48, &var_c0);
        let var_38: i64;
        arg1[2] = var_38;
        *arg1 = var_48;
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb0bde7aa45c92349(&var_90)
}
