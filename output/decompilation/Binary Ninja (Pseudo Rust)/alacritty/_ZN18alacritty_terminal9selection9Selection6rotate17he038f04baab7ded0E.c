
  fn alacritty_terminal::selection::Selection::rotate::he038f04baab7ded0(arg1: *mut i128, arg2: *mut i64, arg3: i64, arg4: i32, arg5: i32, arg6: i32, arg7: i32) -> *mut i128

{
    let rax: i32 = alacritty_terminal::grid::Dimensions::bottommost_line::h4f75d9959625aee4(arg4);
    let mut r12: *mut i64 = &arg2[3];
    let temp0: i8 = _$LT$alacritty_terminal..index..Point$LT$L$C$C$GT$$u20$as$u20$core..cmp..Ord$GT$::cmp::h2b413278cc536aee(*arg2, arg2[1], arg2[3], arg2[4]);
    let mut rbx: *mut i64 = r12;
    
    if temp0 > 0
    {
        rbx = arg2;
    }
    
    if temp0 <= 0
    {
        r12 = arg2;
    }
    
    let mut r13: i32 = r12[1];
    let mut rax_1: i32;
    rax_1 = r13 >= arg5;
    let mut rcx_1: bool = arg5 == 0 | rax_1;
    rax_1 = r13 < arg6;
    let mut result: *mut i128;
    
    if (rcx_1 & rax_1) == 0
    {
        'label_7746cb:
        rax_1 = arg5 == 0;
        let rdi_3: i32 = rbx[1];
        rcx_1 = rdi_3 >= arg5 | rax_1;
        rax_1 = rdi_3 < arg6;
        
        if (rcx_1 & rax_1) == 0
        {
            'label_774723:
            result = arg2[6];
            arg1[3] = result;
            let zmm0: i128 = *arg2;
            let zmm1: i128 = *arg2.byte_offset(0x10);
            arg1[2] = *arg2.byte_offset(0x20);
            arg1[1] = zmm1;
            *arg1 = zmm0;
        }
        else
        {
            let rax_2: i32 = core::cmp::Ord::min::h08e004ced85b11eb(rdi_3 - arg7, rax);
            rbx[1] = rax_2;
            
            if rax_2 >= r13
            {
                if rax_2 >= arg6
                {
                    if arg2[6] != 1
                    {
                        *rbx = alacritty_terminal::grid::Dimensions::last_column::h43ccb5805f51a6ac(
                            arg3);
                        rbx[2] = 1;
                    }
                    
                    rbx[1] = arg6 - 1;
                }
                
                goto 'label_774723;
            }
            
            result = arg1;
            *result.byte_offset(0x28) = 2;
        }
    }
    else
    {
        rax_1 = core::cmp::Ord::min::h08e004ced85b11eb(r13 - arg7, rax);
        r13 = rax_1;
        r12[1] = rax_1;
        
        if rax_1 < arg6 || rbx[1] >= arg6
        {
            if arg5 == 0
            {
                goto 'label_7746cb;
            }
            
            if r13 < arg5
            {
                if arg2[6] != 1
                {
                    *r12 = 0;
                    r12[2] = 0;
                }
                
                r12[1] = arg5;
                r13 = arg5;
            }
            
            goto 'label_7746cb;
        }
        
        result = arg1;
        *result.byte_offset(0x28) = 2;
    }
    
    result
}
