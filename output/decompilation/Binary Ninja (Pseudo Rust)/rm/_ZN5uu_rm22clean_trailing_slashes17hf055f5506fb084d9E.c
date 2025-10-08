
  fn uu_rm::clean_trailing_slashes::hf055f5506fb084d9(arg1: i64, arg2: i64) -> i64

{
    let mut result: i64 = arg1;
    let var_38: i64 = arg1;
    let var_30: i64 = arg2;
    let mut var_40: i64 = 0;
    
    if arg2 >= 2 && *(result + arg2 - 1) == 0x2f
    {
        let mut rcx_1: i64 = arg2;
        let mut rdx_1: i64;
        let mut cond:0_1: bool;
        
        do
        {
            if rcx_1 <= 1
            {
                rdx_1 = arg2 - 1;
                break;
            }
            
            rdx_1 = rcx_1 - 1;
            cond:0_1 = *(result + rcx_1 - 2) == 0x2f;
            rcx_1 = rdx_1;
        } while cond:0_1;
        let mut var_28: i64 = 0;
        let var_20_1: i64 = rdx_1;
        let var_18_1: i8 = 0;
        let mut result_1: i64;
        let mut rdx_3: i64;
        result_1 = _$LT$core..ops..range..RangeInclusive$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h9243e1a17a31bdc5(&var_28, result, arg2);
        result = result_1;
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$$RF$$u5b$u8$u5d$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h161a4a1502d63dd1(&var_40);
    result
}
