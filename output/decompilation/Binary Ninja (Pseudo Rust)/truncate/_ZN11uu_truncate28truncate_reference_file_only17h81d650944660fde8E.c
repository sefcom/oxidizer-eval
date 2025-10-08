
  fn uu_truncate::truncate_reference_file_only::h81d650944660fde8(arg1: i64, arg2: i64, arg3: i64, arg4: i64, arg5: i8) -> u64

{
    let mut var_d8: i32;
    std::fs::metadata::h460bc532d18d3302(&var_d8, arg1);
    
    if var_d8 == 2
    {
        let var_d0: i64;
        return uu_truncate::truncate_reference_and_size::_$u7b$$u7b$closure$u7d$$u7d$::h6c1eb193d24fc6ab(arg1, arg2, var_d0);
    }
    
    if arg4 == 0
    {
        return 0;
    }
    
    let mut i: i64 = 0;
    
    do
    {
        let var_88: i64;
        let result: u64 = uu_truncate::file_truncate::ha430ef778d6571e6(*(arg3 + i + 8), 
            *(arg3 + i + 0x10), arg5, var_88);
        
        if result != 0
        {
            return result;
        }
        
        i += 0x18;
    } while arg4 * 0x18 != i;
    
    0
}
