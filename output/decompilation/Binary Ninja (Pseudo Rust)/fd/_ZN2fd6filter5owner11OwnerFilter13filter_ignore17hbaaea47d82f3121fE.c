
  fn fd::filter::owner::OwnerFilter::filter_ignore::hbaaea47d82f3121f(arg1: *mut i32, arg2: *mut i32) -> i64

{
    let rax: i64;
    let var_18: i64 = rax;
    let rcx: i32;
    let mut result: i8 = _$LT$fd..filter..owner..Check$LT$T$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h1af06540f0d526a6(*arg2, arg2[1], 2, rcx);
    
    if result != 0
    {
        result = _$LT$fd..filter..owner..Check$LT$T$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h1af06540f0d526a6(arg2[2], arg2[3], 2, rcx);
        
        if result != 0
        {
            *arg1 = 3;
            return result;
        }
    }
    
    *arg1 = *arg2;
    result
}
