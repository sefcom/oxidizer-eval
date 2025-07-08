
  int128_t* uu_truncate::truncate_reference_file_only::h8a3d13789e4c1f75(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, char arg5)

{
    int32_t var_d8;
    std::fs::metadata::h6368ec5e748c38e4(&var_d8, arg1);
    
    if (var_d8 == 2)
    {
        int64_t var_d0;
        return uu_truncate::truncate_reference_file_only::_$u7b$$u7b$closure$u7d$$u7d$::h71e741134f9f8f00(arg1, arg2, var_d0);
    }
    
    var_d8 = arg3;
    int64_t var_d0_1 = arg3 + arg4 * 0x18;
    
    while (true)
    {
        void* rax_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f1a2111712b44af(&var_d8);
        
        if (!rax_2)
            break;
        
        int64_t var_88;
        int128_t* result = uu_truncate::file_truncate::h8689dfa8e5b80143(*(rax_2 + 8), 
            *(rax_2 + 0x10), arg5, var_88);
        
        if (result)
            return result;
    }
    
    return nullptr;
}
