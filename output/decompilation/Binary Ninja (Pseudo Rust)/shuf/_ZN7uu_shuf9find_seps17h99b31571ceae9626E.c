
  fn uu_shuf::find_seps::h99b31571ceae9626(arg1: *mut i64, arg2: i8)

{
    let mut i: i64 = arg1[2];
    
    if i != 0
    {
        let mut rbx_1: *mut i64 = arg1;
        
        if i != 1 || rbx_1[1][1] != 0
        {
            let var_60_1: *mut i64 = rbx_1;
            
            do
            {
                let i_1: i64 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::backward_unchecked::hafc0b4d583767e83(i);
                i = i_1;
                let rsi: i64 = rbx_1[2];
                
                if i_1 >= rsi
                {
                    core::panicking::panic_bounds_check::h25a5330941572dd1(i, rsi);
                    /* no return */
                }
                
                let rax_1: *mut *mut i8 = rbx_1[1];
                let rcx_2: i64 = i << 4;
                
                if core::slice::memchr::memchr::hd9bdb72df61b073b(arg2, *rax_1.byte_offset(rcx_2), 
                    *rax_1.byte_offset(rcx_2).byte_offset(8)) == 1
                {
                    let mut rax_2: i64;
                    let mut rdx_2: i64;
                    rax_2 = alloc::vec::Vec$LT$T$C$A$GT$::swap_remove::hd8884eae080ccab8(rbx_1, i);
                    let mut var_50: i64 = rax_2;
                    let var_48_1: i64 = rax_2;
                    let var_40_1: i64 = rax_2 + rdx_2;
                    let mut var_38: i8 = arg2;
                    let mut j: *mut i64;
                    let mut rdx_3: i64;
                    j = memchr::arch::generic::memchr::Iter::next::h49b397ad764296c0(&var_50, 
                        &var_38);
                    let mut r15_1: i64;
                    
                    if j == 0
                    {
                        r15_1 = 0;
                        rbx_1 = var_60_1;
                    }
                    else
                    {
                        let mut r13_1: i64 = rdx_3;
                        r15_1 = 0;
                        rbx_1 = var_60_1;
                        
                        do
                        {
                            let mut rax_5: i64;
                            let mut rdx_5: i64;
                            rax_5 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hc642f9dd373424d2(r15_1, r13_1, rax_2, rdx_2);
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h77e0d20633c95084(rbx_1, rax_5, 
                                rdx_5);
                            r15_1 = r13_1 + 1;
                            let mut rdx_6: i64;
                            j = memchr::arch::generic::memchr::Iter::next::h49b397ad764296c0(
                                &var_50, &var_38);
                            r13_1 = rdx_6;
                        } while j != 0;
                    }
                    
                    if rdx_2 > r15_1
                    {
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h77e0d20633c95084(rbx_1, rax_2 + r15_1, 
                            rdx_2 - r15_1);
                    }
                }
            } while i != 0;
        }
        else
        {
            rbx_1[2] = 0;
        }
    }
}
