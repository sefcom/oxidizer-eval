
  fn uu_split::number::DynamicWidthNumber::digits::hff29e0107769e312(arg1: *mut i128, arg2: u64, arg3: i8) -> i64

{
    let mut r14: u64 = arg2;
    let rbp: u64 = arg3;
    let mut rax_1: i64 = (rbp - 1) * rbp;
    let mut r15: i64 = 2;
    
    if rax_1 <= arg2
    {
        do
        {
            r14 -= rax_1;
            r15 += 1;
            rax_1 *= rbp;
        } while r14 >= rax_1;
    }
    
    let mut var_48: i64 = 0;
    let var_40: i64 = 1;
    let result: i64 = 0;
    
    if r14 != 0
    {
        if arg3 == 0
        {
            core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd();
            /* no return */
        }
        
        let mut cond:0_1: bool;
        
        do
        {
            let mut rdx_1: u8;
            let mut r13_1: u64;
            
            if r14 >> 0x20 == 0
            {
                let rax_6: i32 = r14;
                let temp2_2: i32 = rbp;
                rdx_1 = COMBINE(0, rax_6) % temp2_2;
                r13_1 = COMBINE(0, rax_6) / temp2_2;
            }
            else
            {
                let rdx: i64 = 0;
                let temp2_1: i32 = rbp;
                rdx_1 = COMBINE(rdx, r14) % temp2_1;
                r13_1 = COMBINE(rdx, r14) / temp2_1;
            }
            
            alloc::vec::Vec$LT$T$C$A$GT$::push::hf1e1eb1ae4f6230e(&var_48, rdx_1);
            cond:0_1 = r14 >= rbp;
            r14 = r13_1;
        } while cond:0_1;
    }
    
    alloc::vec::Vec$LT$T$C$A$GT$::resize::h073d932e12575a02(&var_48, r15, 0);
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::reverse::h611a04afb35bad30(var_40, result);
    arg1[1] = result;
    *arg1 = var_48;
    result
}
