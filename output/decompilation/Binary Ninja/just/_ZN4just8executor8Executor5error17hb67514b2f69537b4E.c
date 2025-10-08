
  int64_t just::executor::Executor::error::hb67514b2f69537b4(char* arg1, int64_t* arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    int64_t var_38 = arg3;
    int64_t r13 = *arg2;
    int64_t result;
    int128_t var_80;
    int64_t var_70;
    
    if (!r13)
    {
        void* r13_1 = arg2[1];
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &var_80, r13_1 + 0x18);
        void* rbx_1 = *(r13_1 + 8);
        int64_t i = *(r13_1 + 0x10) * 0x30;
        
        while (i)
        {
            alloc::string::String::push::h0ede46164189e411(&var_80, 0x20);
            int64_t rsi_2 = *(rbx_1 + 8);
            i -= 0x30;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hb25a112a407b21ec(&var_80, rsi_2, *(rbx_1 + 0x10) + rsi_2);
            rbx_1 += 0x30;
        }
        
        *(arg1 + 0x30) = var_70;
        *(arg1 + 0x20) = var_80;
        *(arg1 + 8) = arg3;
        *(arg1 + 0x10) = arg4;
        result = arg5;
        *(arg1 + 0x18) = result;
        *arg1 = 0x29;
    }
    else
    {
        int64_t rsi = arg2[2];
        int64_t var_58;
        int64_t var_48;
        
        if (!rsi)
            var_58 = -0x8000000000000000;
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_80, rsi, arg2[3]);
            var_48 = var_70;
            var_58 = var_80;
        }
        
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_80, r13, arg2[1]);
        *(arg1 + 0x48) = var_70;
        *(arg1 + 0x38) = var_80;
        *(arg1 + 0x30) = var_48;
        *(arg1 + 0x20) = var_58;
        *(arg1 + 8) = arg3;
        *(arg1 + 0x10) = arg4;
        result = arg5;
        *(arg1 + 0x18) = result;
        *arg1 = 0x2b;
    }
    return result;
}
