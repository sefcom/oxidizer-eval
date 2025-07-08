
  uint64_t uu_uniq::Uniq::cmp_key::ha1dc2d98ed65ef9e(int64_t* arg1, char* arg2, uint64_t arg3, int64_t arg4, void* arg5)

{
    void var_30;
    uu_uniq::Uniq::skip_fields::hde61277d301acf25(&var_30, *arg1, arg1[1], arg2, arg3);
    int64_t rdx_1 = arg1[4];
    int64_t var_20;
    int64_t rcx_1;
    int64_t rdx_2;
    
    if (arg1[2])
    {
        rcx_1 = var_20;
        
        if (rdx_1)
            rcx_1 = arg1[5];
        
        if (!var_20)
            goto label_4bd194;
        
        rdx_2 = arg1[3];
        
        if (*(arg1 + 0x34))
            goto label_4bd106;
        
        if (rdx_2)
            goto label_4bd1f1;
        
        goto label_4bd1b7;
    }
    
    int32_t rax_2;
    int64_t var_50;
    int64_t var_28;
    
    if (rdx_1)
    {
        if (!var_20)
            goto label_4bd194;
        
        rcx_1 = arg1[5];
        
        if (!*(arg1 + 0x34))
        {
            label_4bd1b7:
            
            if (rcx_1 == var_20)
                goto label_4bd1c4;
            
            rdx_2 = 0;
            label_4bd1f1:
            var_50 = var_28;
            int64_t var_48_4 = var_20 + var_28;
            int64_t var_40_2 = rdx_2;
            int64_t var_38_2 = rcx_1;
            rax_2 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h3c5213e1c3586ea6(arg4, arg5, &var_50);
        }
        else
        {
            rdx_2 = 0;
            label_4bd106:
            
            if (rdx_2 || rcx_1 != var_20)
            {
                label_4bd15c:
                var_50 = var_28;
                int64_t var_48_1 = var_20 + var_28;
                int64_t var_40_1 = rdx_2;
                int64_t var_38_1 = rcx_1;
                rax_2 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h3c5213e1c3586ea6(arg4, arg5, &var_50);
            }
            else
            {
                label_4bd118:
                var_50 = var_28;
                int64_t var_48 = var_20 + var_28;
                rax_2 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h3c5213e1c3586ea6(arg4, arg5, &var_50);
            }
        }
    }
    else if (!var_20)
    {
        label_4bd194:
        var_50 = var_28;
        int64_t var_48_2 = var_20 + var_28;
        rax_2 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h3c5213e1c3586ea6(arg4, arg5, &var_50);
    }
    else
    {
        if (*(arg1 + 0x34))
        {
            rdx_2 = 0;
            rcx_1 = var_20;
            
            if (rcx_1 != var_20)
                goto label_4bd15c;
            
            goto label_4bd118;
        }
        
        label_4bd1c4:
        var_50 = var_28;
        int64_t var_48_3 = var_20 + var_28;
        rax_2 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h3c5213e1c3586ea6(arg4, arg5, &var_50);
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0ecdab8b58963e2c(&var_30);
    return rax_2;
}
