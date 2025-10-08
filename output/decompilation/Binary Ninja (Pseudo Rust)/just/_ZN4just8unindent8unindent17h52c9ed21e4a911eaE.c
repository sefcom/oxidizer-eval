
  fn just::unindent::unindent::h52c9ed21e4a911ea(arg1: *mut i128, arg2: *mut i8, arg3: i64) -> *mut i128

{
    let mut var_88: i64 = 0;
    let var_80: *mut i8 = 8;
    let var_78: i64 = 0;
    let mut var_58: *mut i8 = arg2;
    let var_50: *mut c_void = &arg2[arg3];
    let var_48: i64 = 0;
    let mut r13: i64 = 0;
    let mut rdx: i64;
    
    loop
    {
        let mut rax_1: i64;
        rax_1 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_58);
        let mut rbx_1: i64 = 1;
        
        if rdx != 0xa
        {
            if rdx == 0x110000
            {
                break;
            }
            
            if rdx >= 0x80
            {
                let mut rcx_1: i64;
                rcx_1 = rdx < 0x10000;
                let mut rcx_2: i64 = rcx_1 | 0xfffffffffffffffc;
                
                if rdx < 0x800
                {
                    rcx_2 = -2;
                }
                
                if rax_1 == rcx_2 + arg3
                {
                    rbx_1 = 2;
                    
                    if rdx >= 0x800
                    {
                        rbx_1 = 4 - 0;
                    }
                }
                else
                {
                    continue;
                }
            }
            else if rax_1 != arg3 - 1
            {
                continue;
            }
        }
        
        let rbx_2: i64 = rbx_1 + rax_1;
        let mut rax_2: *mut c_void;
        let mut rdx_2: i64;
        rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(r13, rbx_2, arg2, arg3);
        
        if rax_2 == 0
        {
            core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, r13, rbx_2);
            /* no return */
        }
        
        alloc::vec::Vec$LT$T$C$A$GT$::push::h6fed9915a4cca328(&var_88, rax_2, rdx_2);
        r13 = rbx_2;
    }
    
    let rdi_3: *mut i64 = var_80;
    let mut rax_3: *mut i8;
    let mut rdx_3: *mut i8;
    rax_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h8e8ec918cf53d1e0(rdi_3, &rdi_3[var_78 * 2], rdx);
    let mut rbx_3: *mut i8 = rdx_3;
    
    if rax_3 == 0
    {
        rbx_3 = rax_3;
    }
    
    let mut rax_4: i64;
    let mut rdx_4: i64;
    rax_4 =
        alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h4882e918a7022fbf(var_78, 8, 0x10);
    let mut var_70: i64 = rax_4;
    let var_68: i64 = rdx_4;
    let var_60: i64 = 0;
    var_58 = var_80;
    let var_50_1: *mut c_void = &var_80[var_78 << 4];
    let var_48_1: i64 = 0;
    
    loop
    {
        let mut rax_9: i64;
        let mut rdx_6: *mut *mut i8;
        rax_9 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1433946cae7ad1f0(&var_58);
        
        if rdx_6 == 0
        {
            break;
        }
        
        let rbp_1: *mut i8 = *rdx_6;
        let r13_1: i64 = rdx_6[1];
        let mut rax_8: *mut c_void;
        let mut rdx_5: u64;
        
        if just::unindent::blank::hbfd378a8e0644ce4(rbp_1, r13_1) != 0
        {
            let mut rax_7: i64;
            rax_7 = rax_9 != var_78 - 1;
            let rcx_10: bool = rax_9 != 0 & rax_7;
            rax_8 = 1;
            
            if rcx_10 != 0
            {
                rax_8 = &data_46e198;
            }
            
            rdx_5 = rcx_10;
        }
        else
        {
            rax_8 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(rbx_3, rbp_1, r13_1);
            
            if rax_8 == 0
            {
                core::str::slice_error_fail::h1a2885084e28d077(rbp_1, r13_1, rbx_3, r13_1);
                /* no return */
            }
        }
        
        alloc::vec::Vec$LT$T$C$A$GT$::push::h6fed9915a4cca328(&var_70, rax_8, rdx_5);
    }
    
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hce1d56ed9ffb2283(&var_58, &var_70);
    core::iter::traits::iterator::Iterator::collect::h8cd5e0768337b274(arg1, &var_58);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$similar..algorithms..utils..UniqueItem$LT$similar..algorithms..utils..OffsetLookup$LT$u32$GT$$GT$$GT$$GT$::h4d36ad61a40c2c34(var_88, var_80);
    arg1
}
