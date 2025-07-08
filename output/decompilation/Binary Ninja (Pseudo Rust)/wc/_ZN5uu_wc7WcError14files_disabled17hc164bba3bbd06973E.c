
  fn uu_wc::WcError::files_disabled::hc164bba3bbd06973(arg1: *mut i64) -> u64

{
    let mut var_40: i64;
    let rdx: size_t;
    let rsi: i64;
    std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&var_40, rsi, rdx);
    let mut var_28: i128;
    let mut result: u64;
    let var_38: i64;
    let result_1: u64;
    
    if var_40 != -0x8000000000000000
    {
        result = result_1;
        var_28 = var_40;
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8d59d4d5d5f04802(&var_28, 
            var_38, result_1);
    }
    arg1[3] = result;
    *arg1.byte_offset(8) = var_28;
    *arg1 = -0x7fffffffffffffff;
    result
}
