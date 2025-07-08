
  fn uu_cp::Attributes::parse_iter::h4e9dbe07d5fad3ae(arg1: *mut i64, arg2: *mut i128) -> i64

{
    let mut var_c8: i32 = 0;
    let mut result_1: i64 = 0;
    let var_88: i128 = arg2[1];
    let mut var_98: i128 = *arg2;
    
    for let mut i: *mut c_void = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h994b0ddc6629aff1(&var_98); i != 0; i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h994b0ddc6629aff1(&var_98)
    {
        let mut rax: *mut i8;
        let mut rdx_1: u64;
        rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h889a363637bfddd1(i);
        let mut var_70: i64;
        uu_cp::Attributes::parse_single_string::hf0de3a52359f0529(&var_70, rax, rdx_1);
        let rax_1: i64 = var_70;
        let var_68: i64;
        let mut var_c0: i64 = var_68;
        
        if rax_1 != 0xd
        {
            let var_4c: i128;
            *arg1.byte_offset(0x30) = var_4c;
            *arg1.byte_offset(0x24) = var_4c;
            let var_5c: i128;
            *arg1.byte_offset(0x14) = var_5c;
            let var_60: i32;
            arg1[2] = var_60;
            arg1[1] = var_c0;
            *arg1 = rax_1;
            return core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$alloc..string..String$GT$$GT$::hffdb868510db594f(&var_98);
        }
        
        let mut result_2: i64;
        uu_cp::Attributes::union::h2578ff077a39174b(&result_2, &result_1, &var_c0);
        let var_9c: i32;
        var_c8 = var_9c;
        result_1 = result_2;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$alloc..string..String$GT$$GT$::hffdb868510db594f(&var_98);
    arg1[2] = var_c8;
    let result: i64 = result_1;
    arg1[1] = result;
    *arg1 = 0xd;
    result
}
