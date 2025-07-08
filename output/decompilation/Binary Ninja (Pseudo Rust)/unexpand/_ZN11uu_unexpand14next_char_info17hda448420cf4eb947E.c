
  fn uu_unexpand::next_char_info::hda448420cf4eb947(arg1: *mut i64, arg2: i32, arg3: *mut i8, arg4: i64, arg5: i64) -> u64

{
    let mut rbx: u64;
    let var_18: u64 = rbx;
    let mut result: u64;
    
    if arg2 == 0
    {
        if arg5 < arg4
        {
            let rcx: u32 = arg3[arg5];
            result = 1;
            
            if rcx == 8
            {
                rbx = 0;
            }
            else if rcx == 9
            {
                rbx = 2;
            }
            else
            {
                rbx = 3;
                
                if rcx == 0x20
                {
                    rbx = 1;
                }
            }
            
            goto 'label_4b2aa1;
        }
    }
    else if arg5 < arg4
    {
        let mut r14_1: i64;
        r14_1 = arg3[arg5] < 0;
        let mut rcx_1: i64;
        
        if r14_1 + arg5 + 1 <= arg4
        {
            let r15_1: *mut i64 = arg1;
            let mut rax: *mut i8;
            let mut rdx: i64;
            rax = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h794715884ecee730(arg5, r14_1 + arg5 + 1, arg3, arg4);
            let mut var_30: i64;
            core::str::converts::from_utf8::ha1effb4cca6d9901(&var_30, rax, rdx);
            
            if var_30 == 0
            {
                let var_28: i64;
                let mut var_40: i64 = var_28;
                let var_20: i64;
                let var_38_1: i64 = var_20 + var_28;
                let mut rax_2: i32;
                let mut rdx_1: i32;
                rax_2 = core::str::validations::next_code_point::h56f7f2fe969e6a13(&var_40, rbx);
                rcx_1 = 1;
                rbx = 3;
                
                if rax_2 == 0
                {
                    result = 1;
                    arg1 = r15_1;
                }
                else
                {
                    arg1 = r15_1;
                    
                    if rdx_1 == 8
                    {
                        rbx = 0;
                        result = 0;
                    }
                    else if rdx_1 == 9
                    {
                        rbx = 2;
                        result = 0;
                    }
                    else if rdx_1 == 0x20
                    {
                        rbx = 1;
                        result = 0;
                    }
                    else if rdx_1 < 0x7f
                    {
                        result = rdx_1 >= 0x20;
                        rcx_1 = r14_1 + 1;
                    }
                    else if rdx_1 <= 0x9f
                    {
                        result = 0;
                        rcx_1 = r14_1 + 1;
                    }
                    else
                    {
                        result = unicode_width::tables::charwidth::lookup_width::hfd0b3b0958e151ec(
                            rdx_1);
                        arg1 = r15_1;
                        rcx_1 = r14_1 + 1;
                    }
                }
            }
            else
            {
                result = 1;
                rbx = 3;
                rcx_1 = 1;
                arg1 = r15_1;
            }
        }
        else
        {
            result = 1;
            rbx = 3;
            'label_4b2aa1:
            rcx_1 = 1;
        }
        
        arg1[1] = rbx;
        *arg1 = result;
        arg1[2] = rcx_1;
        return result;
    }
    core::panicking::panic_bounds_check::h25a5330941572dd1(arg5, arg4);
    /* no return */
}
