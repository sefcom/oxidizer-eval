
  fn uu_sort::tokenize_with_separator::he3a58287ffd73c4e(arg1: i64, arg2: i64, arg3: i32, arg4: *mut i64) -> i64

{
    let mut var_5c: i32 = arg3;
    let mut var_50: i64 = arg1;
    let var_48: i64 = arg1 + arg2;
    let var_40: i64 = 0;
    let mut var_38: *mut i32 = &var_5c;
    let mut result: i8;
    let mut rdx: i64;
    result = core::iter::traits::iterator::Iterator::try_fold::h6349d0229f81716e(&var_50, &var_38);
    let mut rdx_3: i64;
    let mut r12: i64;
    
    if (result & 1) == 0
    {
        r12 = 0;
        rdx_3 = arg2;
        
        if 0 >= rdx_3
        {
            return result;
        }
    }
    else
    {
        let mut rbp_1: i64 = rdx;
        r12 = 0;
        
        do
        {
            alloc::vec::Vec$LT$T$C$A$GT$::push::h5e09b1a2e814c1b4(arg4, r12, rbp_1);
            r12 = rbp_1 + 1;
            let mut rdx_2: i64;
            result = core::iter::traits::iterator::Iterator::try_fold::h6349d0229f81716e(&var_50, 
                &var_38);
            rbp_1 = rdx_2;
        } while (result & 1) != 0;
        
        rdx_3 = arg2;
        
        if r12 >= rdx_3
        {
            return result;
        }
    }
    
    alloc::vec::Vec$LT$T$C$A$GT$::push::h5e09b1a2e814c1b4(arg4, r12, rdx_3)
}
