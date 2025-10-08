
  fn uu_numfmt::parse_unit_size::h03bace1e31195027(arg1: *mut i64, arg2: *mut i8, arg3: i64) -> i64

{
    let mut var_c8: *mut i8 = arg2;
    let mut var_b8: i8 = 0;
    let mut var_70: ();
    core::iter::traits::iterator::Iterator::collect::h967ab1cd420e9d0a(&var_70, &var_c8);
    let var_60: u64;
    let mut rax_1: *mut c_void;
    let mut rdx_1: i64;
    rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(var_60, arg2, arg3);
    
    if rax_1 == 0
    {
        core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, var_60, arg3);
        /* no return */
    }
    
    let var_68: *mut i8;
    
    if var_60 == 0
    {
        'label_46c5dd:
        let mut rax_3: i8;
        let mut rdx_3: i64;
        rax_3 = uu_numfmt::parse_unit_size_suffix::hdf13b6214e4b882f(rax_1, rdx_1);
        
        if (rax_3 & 1) == 0
        {
            goto 'label_46c60c;
        }
        
        if var_60 == 0
        {
            arg1[1] = rdx_3;
            *arg1 = -0x8000000000000000;
        }
        else
        {
            core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_c8, 
                var_68, var_60);
            
            if var_c8 == 1
            {
                goto 'label_46c60c;
            }
            
            arg1[1] = rdx_3 * &arg2[arg3];
            *arg1 = -0x8000000000000000;
        }
    }
    else
    {
        alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h65bc8cec15465d63(&var_c8, var_60);
        let rsi_3: u64 = var_b8;
        let var_88_1: u64 = rsi_3;
        let mut var_98: i128 = var_c8;
        let rax_2: i8 = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h57e8dd7d227d19fb(*var_98[8], rsi_3, var_68, var_60);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h34fbae09aa78bed8(&var_98);
        
        if rax_2 == 0
        {
            goto 'label_46c5dd;
        }
        
        'label_46c60c:
        var_98 = 0;
        *var_98[8] = arg2;
        let var_88_2: i64 = arg3;
        let var_80_1: i8 = 1;
        let mut var_58: *mut i128 = &var_98;
        let var_50_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        var_c8 = &data_502800;
        let var_c0_1: i64 = 1;
        let var_a8_1: i64 = 0;
        var_b8 = &var_58;
        let var_b0_1: i64 = 1;
        let mut var_48: i128;
        core::option::Option$LT$T$GT$::map_or_else::h6181b64f68c0f373(&var_48, &var_c8);
        let var_38: i64;
        arg1[2] = var_38;
        *arg1 = var_48;
    }
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h34fbae09aa78bed8(&var_70)
}
