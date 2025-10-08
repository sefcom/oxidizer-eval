
  fn uu_uniq::handle_obsolete::haf9e8c417503fdd5(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64 @ r15) -> i64

{
    let var_8: i64 = arg4;
    let mut var_80: i64 = -0x8000000000000000;
    let mut var_68: i64 = -0x8000000000000000;
    let mut var_a2: i8 = 0;
    let mut var_a1: i8 = 0;
    let mut var_a0: *mut i64 = &var_80;
    let var_98: *mut i64 = &var_68;
    let var_90: *mut i8 = &var_a2;
    let var_88: *mut i8 = &var_a1;
    let mut var_50: i64;
    core::iter::traits::iterator::Iterator::filter_map::h2424cec6f5fbd74f(&var_50, arg2, arg3, 
        &var_a0);
    let mut rdx: i64 =
        core::iter::traits::iterator::Iterator::collect::h1eec4f759b0db5a3(&var_a0, &var_50);
    let rax: i64 = var_80;
    let mut result: i64;
    let mut r14: i64;
    let mut rax_1: i64;
    
    if rax != -0x8000000000000000
    {
        let var_78: i128;
        let var_48_2: i128 = var_78;
        var_50 = rax;
        let mut rax_2: i64;
        rax_2 = uu_uniq::handle_obsolete::_$u7b$$u7b$closure$u7d$$u7d$::h8d9ea62ae7968a62(&var_50);
        r14 = rax_2;
        arg4 = rdx;
        rax_1 = var_68;
        
        if rax_1 != -0x8000000000000000
        {
            'label_45cce2:
            let var_60: i128;
            let var_48_1: i128 = var_60;
            var_50 = rax_1;
            result =
                uu_uniq::handle_obsolete::_$u7b$$u7b$closure$u7d$$u7d$::h8d9ea62ae7968a62(&var_50);
        }
        else
        {
            result = 0;
        }
    }
    else
    {
        r14 = 0;
        rax_1 = var_68;
        
        if rax_1 != -0x8000000000000000
        {
            goto 'label_45cce2;
        }
        
        result = 0;
    }
    arg1[4] = var_90;
    *arg1.byte_offset(0x10) = var_a0;
    *arg1 = r14;
    arg1[1] = arg4;
    arg1[5] = result;
    arg1[6] = rdx;
    result
}
