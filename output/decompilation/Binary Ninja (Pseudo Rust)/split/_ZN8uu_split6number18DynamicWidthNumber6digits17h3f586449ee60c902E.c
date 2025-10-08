
  fn uu_split::number::DynamicWidthNumber::digits::h3f586449ee60c902(arg1: *mut i128, arg2: u64, arg3: i8) -> i64

{
    let mut r14: u64 = arg2;
    let rbx: u64 = arg3;
    let mut rax_1: i64 = (rbx - 1) * rbx;
    let mut r15: i64 = 2;
    
    if arg2 >= rax_1
    {
        do
        {
            r14 -= rax_1;
            r15 += 1;
            rax_1 *= rbx;
        } while r14 >= rax_1;
    }
    
    let mut var_50: i64 = 0;
    let var_48: i64 = 1;
    let result: i64 = 0;
    
    if r14 != 0
    {
        if arg3 == 0
        {
            core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
            /* no return */
        }
        
        let mut cond:0_1: bool;
        
        do
        {
            let mut rdx_1: u8;
            let mut rbp_1: u64;
            
            if r14 >> 0x20 == 0
            {
                let rax_6: i32 = r14;
                let temp2_2: i32 = rbx;
                rdx_1 = COMBINE(0, rax_6) % temp2_2;
                rbp_1 = COMBINE(0, rax_6) / temp2_2;
            }
            else
            {
                let rdx: i64 = 0;
                let temp2_1: i32 = rbx;
                rdx_1 = COMBINE(rdx, r14) % temp2_1;
                rbp_1 = COMBINE(rdx, r14) / temp2_1;
            }
            
            alloc::vec::Vec$LT$T$C$A$GT$::push::hec3bc305ec2b1aaa(&var_50, rdx_1);
            cond:0_1 = r14 >= rbx;
            r14 = rbp_1;
        } while cond:0_1;
    }
    
    alloc::vec::Vec$LT$T$C$A$GT$::resize::hb2fbbb6384bf1fbf(&var_50, r15);
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::reverse::h9b9aacd060e138af(var_48, result);
    arg1[1] = result;
    *arg1 = var_50;
    result
}
