
  char* fd::regex_helper::hir_has_uppercase_char::h47600744d8eac6fa(int64_t* arg1)

{
    char rax_4;
    
    while (true)
    {
        int64_t rdx_1 = *arg1;
        int64_t r8_1 = rdx_1 - 2;
        
        if (r8_1 >= 8)
            r8_1 = 2;
        
        int64_t var_38;
        
        if (r8_1 - 1 <= 6)
            switch (r8_1)
            {
                case 1:
                {
                    char* rbx_1 = arg1[1];
                    void* r14_1 = arg1[2];
                    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_38, rbx_1, r14_1);
                    char* var_20;
                    
                    if (var_38 & 1)
                    {
                        var_20 = rbx_1;
                        void* var_18_1 = r14_1 + rbx_1;
                        return _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::hdb2b8379688b931c(&var_20);
                    }
                    
                    char* var_30;
                    var_20 = var_30;
                    void* var_28;
                    void* var_18_2 = var_28 + var_30;
                    rax_4 = core::iter::traits::iterator::Iterator::try_fold::hb263849006ded29d(
                        &var_20);
                    break;
                    break;
                }
                case 2:
                {
                    if (!(rdx_1 & 1))
                    {
                        int64_t rax_7 = arg1[2];
                        int64_t rcx_9 = rax_7 + (arg1[3] << 3);
                        var_38 = rax_7;
                        int64_t var_30_3 = rcx_9;
                        rax_4 = core::iter::traits::iterator::Iterator::try_fold::h8988d4c59a076347(
                            &var_38);
                    }
                    else
                    {
                        int64_t rax_3 = arg1[2];
                        int64_t rcx_5 = rax_3 + (arg1[3] << 1);
                        var_38 = rax_3;
                        int64_t var_30_2 = rcx_5;
                        rax_4 = core::iter::traits::iterator::Iterator::try_fold::hc1c7f954704853d3(
                            &var_38);
                    }
                    
                    break;
                    break;
                }
                case 4:
                {
                    arg1 = arg1[2];
                    continue;
                }
                case 5:
                {
                    arg1 = arg1[1];
                    continue;
                }
                case 6:
                case 7:
                {
                    int64_t rax = arg1[2];
                    int64_t rcx = arg1[3];
                    var_38 = rax;
                    int64_t var_30_1 = rcx * 0x30 + rax;
                    return _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::haa53f3d57c60f664(&var_38);
                    break;
                }
            }
        return 0;
    }
    
    return _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::hf5117a12fd3a5609(rax_4);
}
