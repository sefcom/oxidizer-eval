
  char* fuel_core_version::find_dependency_version::h34d3c1ceae644609(uint64_t* arg1, char* arg2)

{
    char* result =
        toml::value::Value::get::hd18e411ca8cd7591(arg2, "workspacedependenciesfuel-corefu…", 9);
    
    if (result)
    {
        result = toml::value::Value::get::hd18e411ca8cd7591(result, 
            "dependenciesfuel-corefuel-core-v…", 0xc);
        
        if (result)
        {
            result = toml::value::Value::get::hd18e411ca8cd7591(result, 
                "fuel-corefuel-core-versionmanife…", 9);
            
            if (result)
            {
                uint32_t rcx_1 = *result;
                
                if (!rcx_1)
                    /* tailcall */
                    return _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(arg1, &result[8]);
                
                if (rcx_1 == 6)
                {
                    result = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h8d563fb2184b048d(*(result + 8), *(result + 0x10));
                    
                    if (result && !*result)
                        /* tailcall */
                        return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he0e13f7bf8301396(arg1, *(result + 0x10), *(result + 0x18));
                }
            }
        }
    }
    
    *arg1 = -0x8000000000000000;
    return result;
}
