
  int64_t zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::save::h965acf6a20fff002(void* arg1)

{
    if (*(arg1 + 0x38) != 1)
        return 0;
    
    *(arg1 + 0x10);
    int64_t var_38;
    zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::serialize::h481efb032ccf3bd4(&var_38, *(arg1 + 8));
    int64_t rcx = var_38;
    int64_t result_1;
    int64_t result = result_1;
    
    if (-(rcx) != -0x8000000000000000)
    {
        int64_t var_20 = rcx;
        int64_t result_2 = result;
        int64_t var_28;
        int64_t var_10_1 = var_28;
        result = anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::context::h36cd762370f4003e(zoxide::util::write::hfde126fc3b935f00(arg1 + 0x18, &var_20), 
            "could not write to databasesrc/d…");
        
        if (!result)
        {
            *(arg1 + 0x38) = 0;
            return 0;
        }
    }
    
    return result;
}
