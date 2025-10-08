
  uint64_t forc_crypto::has_sensible_info::hdcf6a8a75752cdf1(int64_t arg1)

{
    char var_48;
    serde_json::value::to_value::hd8c76e686e47df0b(&var_48, arg1);
    uint32_t rax = var_48;
    int64_t rbx = 0;
    
    if (rax == 6)
        core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h8c3816a840eb2f41(&var_48);
    else
    {
        if (rax != 5)
        {
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h05e5c3c511967cda(&var_48);
            return rbx;
        }
        
        int128_t var_40;
        int128_t var_28 = var_40;
        int64_t var_30;
        int64_t var_18_1 = var_30;
        int64_t rax_2 =
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h1293bc298712dbcc(
            var_28, *var_28[8]);
        core::ptr::drop_in_place$LT$serde_json..map..Map$LT$alloc..string..String$C$serde_json..value..Value$GT$$GT$::hbfd65977d82915b4(&var_28);
        rbx = rax_2;
        uint32_t rax_3 = var_48;
        
        if (rax_3 != 5)
        {
            if (rax_3 != 6)
            {
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h05e5c3c511967cda(
                    &var_48);
                return rbx;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h8c3816a840eb2f41(&var_48);
        }
    }
    
    return rbx;
}
