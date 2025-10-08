
  uint64_t uu_comm::OrderChecker::verify_order::h2c1501d0f87e8821(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    uint64_t rcx = arg1[2];
    uint64_t result;
    int128_t var_70;
    uint64_t var_60;
    int64_t rsi_2;
    int64_t rdi_2;
    
    if (!rcx)
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h397e91f739d192db(&var_70, arg2, arg3);
        rdi_2 = *arg1;
        rsi_2 = arg1[1];
        label_45740c:
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::he0a0047fc625cdb7(rdi_2, rsi_2);
        arg1[2] = var_60;
        *arg1 = var_70;
        result = 1;
    }
    else
    {
        int64_t r14_1 = arg1[1];
        
        if (_$LT$A$u20$as$u20$core..slice..cmp..SliceChain$GT$::chaining_ge::hfc119572dc8ad81e(
            arg2, arg3, r14_1, rcx))
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h397e91f739d192db(&var_70, arg2, arg3);
            rdi_2 = *arg1;
            rsi_2 = r14_1;
            goto label_45740c;
        }
        
        if (*(arg1 + 0x1a) != 1)
        {
            char const* const rcx_1 = "12";
            
            if (arg1[3])
                rcx_1 = "2";
            
            char const* const var_30 = rcx_1;
            int64_t var_28_1 = 1;
            char const* const* var_40 = &var_30;
            int64_t (* var_38_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4b6cb7d1e879db89;
            var_70 = &data_4e0c58;
            *var_70[8] = 2;
            int64_t var_50_1 = 0;
            var_60 = &var_40;
            int64_t var_58_1 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_70);
            *(arg1 + 0x1a) = 1;
        }
        
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h397e91f739d192db(&var_70, arg2, arg3);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::he0a0047fc625cdb7(*arg1, r14_1);
        arg1[2] = var_60;
        *arg1 = var_70;
        result = *(arg1 + 0x19) ^ 1;
    }
    return result;
}
