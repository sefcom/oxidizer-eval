
  int64_t uu_stat::Stater::find_mount_point::hb64e131c06b92eb6(int64_t* arg1, void* arg2, void* arg3)

{
    uint64_t var_48;
    std::fs::canonicalize::h666f0a788dd30df7(&var_48, 
        _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h3692ed4e621a968b(arg3));
    uint64_t r14 = var_48;
    
    if (-(r14) == -0x8000000000000000)
    {
        int64_t result = core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h2e8638ca9d3a432a(&var_48);
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    char* var_40;
    
    if (*(arg2 + 0x48) == -0x8000000000000000)
    {
        label_47669b:
        *arg1 = -0x8000000000000000;
    }
    else
    {
        void* r12_1 = *(arg2 + 0x50);
        int64_t rbp_1 = *(arg2 + 0x58) * 0x18;
        int64_t var_38;
        char i;
        
        do
        {
            if (!rbp_1)
                goto label_47669b;
            
            i = std::path::Path::starts_with::h81555d14791e5ff7(var_40, var_38, r12_1);
            r12_1 += 0x18;
            rbp_1 -= 0x18;
        } while (!i);
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &var_48, r12_1 - 0x18);
        arg1[2] = var_38;
        *arg1 = var_48;
    }
    
    /* tailcall */
    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hf5e02e6973b3fafa(r14, var_40);
}
