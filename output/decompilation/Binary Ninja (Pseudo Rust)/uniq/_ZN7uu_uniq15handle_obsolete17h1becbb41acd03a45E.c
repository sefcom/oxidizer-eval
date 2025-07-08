
  fn uu_uniq::handle_obsolete::h1becbb41acd03a45(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64 @ r15) -> i64

{
    let var_10: i64 = arg4;
    let mut var_a0: *mut i64 = -0x8000000000000000;
    let mut var_88: *mut i64 = -0x8000000000000000;
    let mut var_c2: i8 = 0;
    let mut var_c1: i8 = 0;
    let mut var_c0: *mut i64 = &var_a0;
    let mut var_b8: *mut i64 = &var_88;
    let var_b0: *mut i8 = &var_c2;
    let var_a8: *mut i8 = &var_c1;
    let mut var_58: ();
    core::iter::traits::iterator::Iterator::filter_map::hcec70c5cd690a3a4(&var_58, arg2, arg3, 
        &var_c0);
    let mut var_70: i128;
    let mut rdx: i64 = _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h5a1dfc9d90ab14e5(&var_70, &var_58);
    let rax: *mut i64 = var_a0;
    let mut result: i64;
    let mut r14: i64;
    let mut rax_1: *mut i64;
    
    if rax != -0x8000000000000000
    {
        let var_98: i128;
        var_b8 = var_98;
        var_c0 = rax;
        let mut rbp: i64;
        rbp = 1;
        let mut rax_2: i64;
        rax_2 = uu_uniq::handle_obsolete::_$u7b$$u7b$closure$u7d$$u7d$::h80beacdf87cc02d6(&var_c0);
        r14 = rax_2;
        arg4 = rdx;
        rax_1 = var_88;
        
        if rax_1 == -0x8000000000000000
        {
            result = 0;
        }
        else
        {
            'label_4702f3:
            let var_80: i128;
            var_b8 = var_80;
            var_c0 = rax_1;
            result =
                uu_uniq::handle_obsolete::_$u7b$$u7b$closure$u7d$$u7d$::h80beacdf87cc02d6(&var_c0);
        }
    }
    else
    {
        r14 = 0;
        rax_1 = var_88;
        
        if rax_1 != -0x8000000000000000
        {
            goto 'label_4702f3;
        }
        
        result = 0;
    }
    let var_60: i64;
    arg1[4] = var_60;
    *arg1.byte_offset(0x10) = var_70;
    *arg1 = r14;
    arg1[1] = arg4;
    arg1[5] = result;
    arg1[6] = rdx;
    result
}
