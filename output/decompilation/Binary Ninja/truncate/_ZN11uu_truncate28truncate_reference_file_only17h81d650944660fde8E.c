
  uint64_t uu_truncate::truncate_reference_file_only::h81d650944660fde8(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, char arg5)

{
    int32_t var_d8;
    std::fs::metadata::h460bc532d18d3302(&var_d8, arg1);
    
    if (var_d8 == 2)
    {
        int64_t var_d0;
        return uu_truncate::truncate_reference_and_size::_$u7b$$u7b$closure$u7d$$u7d$::h6c1eb193d24fc6ab(arg1, arg2, var_d0);
    }
    
    if (!arg4)
        return 0;
    
    int64_t i = 0;
    
    do
    {
        int64_t var_88;
        uint64_t result = uu_truncate::file_truncate::ha430ef778d6571e6(*(arg3 + i + 8), 
            *(arg3 + i + 0x10), arg5, var_88);
        
        if (result)
            return result;
        
        i += 0x18;
    } while (arg4 * 0x18 != i);
    
    return 0;
}
