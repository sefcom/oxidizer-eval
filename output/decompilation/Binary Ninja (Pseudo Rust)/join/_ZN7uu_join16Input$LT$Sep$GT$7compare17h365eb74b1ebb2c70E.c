
  fn uu_join::Input$LT$Sep$GT$::compare::h365eb74b1ebb2c70(arg1: i8, arg2: i64, arg3: u64, arg4: i64, arg5: u64) -> *mut i8

{
    if (arg2 != 0 & arg4 != 0) == 0
    {
        if arg2 == 0
        {
            return 0 - 0;
        }
        
        return 1;
    }
    
    if (arg1 & 1) != 0
    {
        let mut var_28: i64 = arg2;
        let var_20: u64 = arg3;
        let mut var_18: i64 = arg4;
        let var_10: u64 = arg5;
        return _$LT$uu_join..CaseInsensitiveSlice$u20$as$u20$core..cmp..Ord$GT$::cmp::hd7c29e2189cad42a(&var_28, &var_18);
    }
    
    let mut result_1: i64 = arg3 - arg5;
    
    if arg3 < arg5
    {
        arg5 = arg3;
    }
    
    let mut result: i64 = memcmp(arg2, arg4, arg5);
    
    if result != 0
    {
        result_1 = result;
    }
    
    result = result_1 > 0;
    result -= result_1 < 0;
    result
}
