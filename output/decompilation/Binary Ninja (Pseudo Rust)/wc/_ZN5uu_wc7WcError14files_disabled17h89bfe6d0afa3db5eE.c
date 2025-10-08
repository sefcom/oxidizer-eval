
  fn uu_wc::WcError::files_disabled::h89bfe6d0afa3db5e(arg1: *mut i64) -> u64

{
    let mut var_40: i64;
    let rdx: u64;
    let rsi: i64;
    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_40, rsi, rdx);
    let mut var_28: i128;
    let mut result: u64;
    let var_38: i64;
    let result_1: u64;
    
    if !(0 + -(var_40))
    {
        result = result_1;
        var_28 = var_40;
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h805faec68bbcdbaf(&var_28, var_38, result_1);
    }
    arg1[3] = result;
    *arg1.byte_offset(8) = var_28;
    *arg1 = -0x7fffffffffffffff;
    result
}
