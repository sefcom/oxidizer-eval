
  fn uu_mv::rename_with_fallback::h3652858bdc29b866(arg1: i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64) -> *mut *mut c_void

{
    let mut var_50: i64 = arg5;
    let rax: *mut *mut c_void = std::fs::rename::hd8b2464d64e6b77a(arg1, arg2, arg3);
    let mut var_48: i64 = arg1;
    let var_40: i64 = arg2;
    let var_38: i64 = arg3;
    let var_30: i64 = arg4;
    let var_28: *mut i64 = &var_50;
    
    if rax == 0
    {
        return nullptr;
    }
    
    uu_mv::rename_with_fallback::_$u7b$$u7b$closure$u7d$$u7d$::h22f84ef8b347243a(&var_48, rax)
}
