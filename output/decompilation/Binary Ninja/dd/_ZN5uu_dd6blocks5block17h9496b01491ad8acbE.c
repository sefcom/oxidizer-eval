
  int64_t uu_dd::blocks::block::h9496b01491ad8acb(int128_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, char arg5, void* arg6)

{
    int64_t var_48 = arg4;
    int64_t var_40 = arg2;
    int64_t var_38 = arg3;
    char var_30 = 0;
    int64_t var_78 = 0;
    int64_t var_70 = 8;
    int64_t var_68 = 0;
    int128_t var_60;
    core::iter::traits::iterator::Iterator::fold::h6a212979afd94415(&var_60, &var_40, &var_78, 
        &var_48, arg6 + 0x18);
    int64_t result;
    
    if (result && (!arg5 || !*(arg6 + 8)))
    {
        int64_t r14_1 = *var_60[8];
        int64_t r12_1 = (result - 1) * 3;
        int64_t rax_1 = *(r14_1 + (r12_1 << 3) + 8);
        int64_t rcx_2 = *(r14_1 + (r12_1 << 3) + 0x10) + rax_1;
        var_78 = rax_1;
        int64_t var_70_1 = rcx_2;
        
        if (_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::all::hf24369e89937bc37(&var_78))
        {
            int128_t* rax_3 = r14_1 + (r12_1 << 3);
            result -= 1;
            int64_t var_68_1 = rax_3[1];
            var_78 = *rax_3;
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$u8$GT$$GT$$GT$::ha6c7b13acc23cf42(&var_78);
        }
    }
    
    arg1[1] = result;
    *arg1 = var_60;
    return result;
}
