
  int64_t uu_shuf::parse_range::h2eee9452bf64266b(int64_t* arg1, int64_t arg2)

{
    char* var_40;
    int64_t rdx;
    core::str::_$LT$impl$u20$str$GT$::split_once::h879d31c8ba3e2bc2(&var_40, arg2, rdx);
    char* rsi = var_40;
    int64_t result;
    
    if (!rsi)
    {
        result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6d7e89e89902d216(&arg1[1], "missing '-'", 0xb);
        *arg1 = 1;
    }
    else
    {
        char var_68;
        int64_t var_38;
        core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_68, rsi, 
            var_38);
        
        if (var_68)
        {
            label_469023:
            char var_67;
            char var_69 = var_67;
            int128_t var_58;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h546dbc70de56d72b(
                &var_58, &var_69);
            int64_t result_1;
            result = result_1;
            *(arg1 + 8) = var_58;
            arg1[3] = result;
            *arg1 = 1;
        }
        else
        {
            char* var_30;
            int64_t var_28;
            core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_68, 
                var_30, var_28);
            
            if (var_68 == 1)
                goto label_469023;
            
            int64_t var_60;
            int64_t rdx_3;
            rdx_3 = var_60 != var_60 + 1;
            
            if (var_60 > var_60 & rdx_3)
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6d7e89e89902d216(&arg1[1], "start exceeds endmissing '-'", 0x11);
                result = 1;
            }
            else
            {
                arg1[1] = var_60;
                arg1[2] = var_60;
                arg1[3] = 0;
                result = 0;
            }
            
            *arg1 = result;
        }
    }
    
    return result;
}
