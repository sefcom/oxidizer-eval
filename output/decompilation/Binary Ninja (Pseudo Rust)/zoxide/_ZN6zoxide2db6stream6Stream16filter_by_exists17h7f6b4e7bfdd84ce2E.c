
  fn zoxide::db::stream::Stream::filter_by_exists::h7f6b4e7bfdd84ce2(arg1: i8, arg2: i8, arg3: i64, arg4: i64) -> u64

{
    let mut result: u64;
    result = 1;
    
    if (arg1 & 1) == 0
    {
        return result;
    }
    
    let mut r8_1: fn(arg1: *mut i64, arg2: i64) -> *mut i64 = std::fs::metadata::h89fd6dba8fa68dee;
    
    if (arg2 & 1) != 0
    {
        r8_1 = std::fs::symlink_metadata::h6f5d64136f1a98f2;
    }
    
    let mut var_b0: i32;
    r8_1(&var_b0, arg3, arg4);
    let mut rax: i64;
    
    if var_b0 != 2
    {
        let var_78: i32;
        let var_bf_1: bool = (0xf000 & var_78) == 0x4000;
        rax = 0;
    }
    else
    {
        let var_a8: i64;
        let var_b8_1: i64 = var_a8;
        rax = 1;
    }
    
    let mut var_c0: i8 = rax;
    core::result::Result$LT$T$C$E$GT$::unwrap_or_default::h796bef404eb8c9ff(&var_c0)
}
