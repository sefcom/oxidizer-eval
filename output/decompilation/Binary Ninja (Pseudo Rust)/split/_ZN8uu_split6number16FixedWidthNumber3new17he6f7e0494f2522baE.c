
  fn uu_split::number::FixedWidthNumber::new::he6f7e0494f2522ba(arg1: *mut i128, arg2: i8, arg3: i64, arg4: u64) -> *mut i128

{
    let mut r14: u64 = arg4;
    let mut var_38: i128;
    _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h6057a164085cb6e9(
        &var_38, arg3);
    let i_1: i64;
    let mut i: i64 = i_1;
    
    if arg2 != 0
    {
        let r15_1: u64 = arg2;
        
        while i != 0
        {
            let i_2: i64 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::backward_unchecked::hafc0b4d583767e83(i);
            i = i_2;
            
            if i_2 >= i_1
            {
                core::panicking::panic_bounds_check::h25a5330941572dd1(i, i_1);
                /* no return */
            }
            
            let mut rax_2: u64;
            let mut rdx_1: u8;
            
            if r14 >> 0x20 != 0
            {
                let rdx: i64 = 0;
                rax_2 = COMBINE(rdx, r14) / r15_1;
                rdx_1 = COMBINE(rdx, r14) % r15_1;
            }
            else
            {
                let rax_5: i32 = r14;
                let temp2_2: i32 = r15_1;
                rax_2 = COMBINE(0, rax_5) / temp2_2;
                rdx_1 = COMBINE(0, rax_5) % temp2_2;
            }
            
            *var_38[8][i] = rdx_1;
            let cond:0_1: bool = r14 < r15_1;
            r14 = rax_2;
            
            if cond:0_1
            {
                goto 'label_4db768;
            }
        }
    }
    else if i != 0
    {
        core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd();
        /* no return */
    }
    
    if r14 == 0
    {
        'label_4db768:
        arg1[1] = i_1;
        *arg1 = var_38;
        *arg1.byte_offset(0x18) = arg2;
    }
    else
    {
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&var_38);
    }
    
    arg1
}
