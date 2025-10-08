
  int64_t uu_cp::Attributes::parse_iter::ha78706e08b35f5c6(int64_t* arg1, int128_t* arg2)

{
    int32_t var_b8 = 0;
    int64_t result_1 = 0;
    int128_t var_78 = arg2[1];
    int128_t var_88 = *arg2;
    
    for (void* i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5fb2cad82e47e650(&var_88); i; i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5fb2cad82e47e650(&var_88))
    {
        char* rax;
        uint64_t rdx_1;
        rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h1e9ed5ccbb1261f3(i);
        int64_t var_68;
        uu_cp::Attributes::parse_single_string::h449cff6f35e43c9c(&var_68, rax, rdx_1);
        int64_t rax_1 = var_68;
        int64_t var_60;
        int64_t var_b0 = var_60;
        
        if (rax_1 != -0x7ffffffffffffff4)
        {
            int32_t var_34;
            *(arg1 + 0x34) = var_34;
            int128_t var_44;
            *(arg1 + 0x24) = var_44;
            int128_t var_54;
            *(arg1 + 0x14) = var_54;
            int32_t var_58;
            arg1[2] = var_58;
            arg1[1] = var_b0;
            *arg1 = rax_1;
            return core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$alloc..string..String$GT$$GT$::h1635ce62a861a981(&var_88);
        }
        
        int64_t result_2;
        uu_cp::Attributes::union::h43e8d826b0daba39(&result_2, &result_1, &var_b0);
        int32_t var_8c;
        var_b8 = var_8c;
        result_1 = result_2;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$alloc..string..String$GT$$GT$::h1635ce62a861a981(&var_88);
    arg1[2] = var_b8;
    int64_t result = result_1;
    arg1[1] = result;
    *arg1 = -0x7ffffffffffffff4;
    return result;
}
