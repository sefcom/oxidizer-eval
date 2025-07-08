
  fn uu_sort::tokenize_with_separator::hde6e77d93de0c763(arg1: i64, arg2: i64, arg3: i32, arg4: *mut i64) -> *mut i64

{
    let mut var_54: i32 = arg3;
    let mut var_50: i64 = arg1;
    let var_48: i64 = arg1 + arg2;
    let var_40: i64 = 0;
    let mut var_38: *mut i32 = &var_54;
    let mut i: *mut i64;
    let mut rdx: i64;
    i = core::iter::traits::iterator::Iterator::try_fold::hafeb71a2c09695d3(&var_50, &var_38);
    let mut r12: i64;
    
    if i == 0
    {
        r12 = 0;
        
        if 0 >= arg2
        {
            return i;
        }
    }
    else
    {
        let mut rbp_1: i64 = rdx;
        r12 = 0;
        
        do
        {
            alloc::vec::Vec$LT$T$C$A$GT$::push::h0ef512be9be90a46(arg4, r12, rbp_1);
            r12 = rbp_1 + 1;
            let mut rdx_2: i64;
            i = core::iter::traits::iterator::Iterator::try_fold::hafeb71a2c09695d3(&var_50, 
                &var_38);
            rbp_1 = rdx_2;
        } while i != 0;
        
        if r12 >= arg2
        {
            return i;
        }
    }
    
    alloc::vec::Vec$LT$T$C$A$GT$::push::h0ef512be9be90a46(arg4, r12, arg2)
}
