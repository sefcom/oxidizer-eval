
  fn uu_unexpand::next_char_info::hde71cd1c734c3431(arg1: *mut u64, arg2: i32, arg3: *mut i8, arg4: i64, arg5: i64)

{
    let mut rcx: i64;
    let mut rbx: u64;
    let mut r14: u64;
    let mut rax: u32;
    
    if arg2 == 0
    {
        if arg5 >= arg4
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(arg5, arg4);
            /* no return */
        }
        
        rax = arg3[arg5];
        r14 = 1;
        
        if rax == 8
        {
            rbx = 0;
        }
        else if rax == 9
        {
            rbx = 2;
        }
        else
        {
            rbx = 3;
            
            if rax == 0x20
            {
                rbx = 1;
            }
        }
        
        rcx = 1;
    }
    else
    {
        if arg5 >= arg4
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(arg5, arg4);
            /* no return */
        }
        
        let mut r15_1: i64;
        r15_1 = arg3[arg5] < 0;
        r14 = 1;
        rbx = 3;
        
        if r15_1 + arg5 + 1 > arg4
        {
            rcx = 1;
        }
        else
        {
            let r12_1: *mut u64 = arg1;
            let mut rax_1: *mut i8;
            let mut rdx: i64;
            rax_1 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h148ae85790082177(arg5, r15_1 + arg5 + 1, arg3, arg4);
            let mut var_38: i32;
            core::str::converts::from_utf8::h8a6dc80f786921e0(&var_38, rax_1, rdx);
            
            if var_38 != 1
            {
                let var_30: i64;
                let mut var_48: i64 = var_30;
                let var_28: i64;
                let var_40_1: i64 = var_28 + var_30;
                let mut rdx_1: i32;
                rax = core::str::validations::next_code_point::h18154aa5f33c59d0(&var_48, rbx);
                rcx = 1;
                rbx = 3;
                
                if (rax & 1) == 0
                {
                    r14 = 1;
                    arg1 = r12_1;
                }
                else if rdx_1 == 8
                {
                    rbx = 0;
                    r14 = 0;
                    arg1 = r12_1;
                }
                else
                {
                    arg1 = r12_1;
                    
                    if rdx_1 == 9
                    {
                        rbx = 2;
                        r14 = 0;
                    }
                    else if rdx_1 == 0x20
                    {
                        rbx = 1;
                        r14 = 0;
                    }
                    else if rdx_1 < 0x7f
                    {
                        r14 = rdx_1 >= 0x20;
                        rcx = r15_1 + 1;
                    }
                    else if rdx_1 <= 0x9f
                    {
                        r14 = 0;
                        rcx = r15_1 + 1;
                    }
                    else
                    {
                        arg1 = r12_1;
                        r14 = unicode_width::tables::lookup_width::h2b8e7fd08bce4cb3(rdx_1);
                        rcx = r15_1 + 1;
                    }
                }
            }
            else
            {
                rcx = 1;
                arg1 = r12_1;
            }
        }
    }
    arg1[1] = rbx;
    *arg1 = r14;
    arg1[2] = rcx;
}
