
  uint64_t zoxide::db::stream::Stream::filter_by_exists::h7f6b4e7bfdd84ce2(char arg1, char arg2, int64_t arg3, int64_t arg4)

{
    uint64_t result;
    result = 1;
    
    if (!(arg1 & 1))
        return result;
    
    int64_t* (* r8_1)(int64_t* arg1, int64_t arg2) = std::fs::metadata::h89fd6dba8fa68dee;
    
    if (arg2 & 1)
        r8_1 = std::fs::symlink_metadata::h6f5d64136f1a98f2;
    
    int32_t var_b0;
    r8_1(&var_b0, arg3, arg4);
    int64_t rax;
    
    if (var_b0 != 2)
    {
        int32_t var_78;
        bool var_bf_1 = (0xf000 & var_78) == 0x4000;
        rax = 0;
    }
    else
    {
        int64_t var_a8;
        int64_t var_b8_1 = var_a8;
        rax = 1;
    }
    
    char var_c0 = rax;
    return core::result::Result$LT$T$C$E$GT$::unwrap_or_default::h796bef404eb8c9ff(&var_c0);
}
