
  int64_t* uu_sort::Line::create::h02d624bca8c26abf(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t* arg5, int64_t* arg6, void* arg7)

{
    arg6[2] = 0;
    
    if (*(arg7 + 0x60))
        uu_sort::tokenize::hb47c688654b41b2e(arg2, arg3, *(arg7 + 0x78), arg6);
    
    int64_t rax = *(arg7 + 8);
    int64_t rcx_2 = *(arg7 + 0x10) * 0x38 + rax;
    int64_t var_80 = rax;
    int64_t var_78 = rcx_2;
    int64_t var_70 = arg2;
    int64_t var_68 = arg3;
    int64_t* var_60 = arg6;
    
    for (int64_t* i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1dc45998b69df0a3(&var_80); i; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1dc45998b69df0a3(&var_80))
    {
        void* var_58;
        core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h2f50737dd865e250(&var_58, &var_70, i);
        char var_38;
        char rcx_6 = var_38 - 2;
        
        if (var_38 - 2 >= 3)
            rcx_6 = 1;
        
        int64_t var_50;
        int64_t var_48;
        
        if (rcx_6 == 2)
        {
            if (*(var_58 + 0x37))
                alloc::vec::Vec$LT$T$C$A$GT$::push::he8aa91f7f4c1aff9(arg5, var_50, var_48);
        }
        else if (rcx_6 != 1)
            alloc::vec::Vec$LT$T$C$A$GT$::push::h7cac5b45018ed91a(&arg5[6], var_50, var_48);
        else
        {
            int64_t var_40;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h68d358aa572f8f14(&arg5[3], var_40, var_38 & 1);
            alloc::vec::Vec$LT$T$C$A$GT$::push::he8aa91f7f4c1aff9(arg5, var_50, var_48);
        }
    }
    
    *arg1 = arg2;
    arg1[1] = arg3;
    arg1[2] = arg4;
    return arg1;
}
