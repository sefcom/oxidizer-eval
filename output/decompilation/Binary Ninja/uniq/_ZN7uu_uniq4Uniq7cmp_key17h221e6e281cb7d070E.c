
  uint64_t uu_uniq::Uniq::cmp_key::h221e6e281cb7d070(int64_t* arg1, char* arg2, uint64_t arg3, int64_t* arg4)

{
    void var_28;
    uu_uniq::Uniq::skip_fields::hde61277d301acf25(&var_28, *arg1, arg1[1], arg2, arg3);
    int64_t rdx_1 = arg1[4];
    int64_t var_18;
    int64_t rcx_1;
    int64_t rdx_2;
    
    if (arg1[2])
    {
        rcx_1 = var_18;
        
        if (rdx_1)
            rcx_1 = arg1[5];
        
        if (!var_18)
            goto label_4bcfd0;
        
        rdx_2 = arg1[3];
        
        if (*(arg1 + 0x34))
            goto label_4bcf51;
        
        if (rdx_2)
            goto label_4bd021;
        
        goto label_4bcfed;
    }
    
    int32_t rax_2;
    int64_t var_48;
    int64_t var_20;
    
    if (rdx_1)
    {
        if (!var_18)
            goto label_4bcfd0;
        
        rcx_1 = arg1[5];
        
        if (!*(arg1 + 0x34))
        {
            label_4bcfed:
            
            if (rcx_1 == var_18)
                goto label_4bcffa;
            
            rdx_2 = 0;
            label_4bd021:
            var_48 = var_20;
            int64_t var_40_4 = var_18 + var_20;
            int64_t var_38_2 = rdx_2;
            int64_t var_30_2 = rcx_1;
            rax_2 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::h300cb8706f3cca4b(arg4, 
                &var_48, &data_530350);
        }
        else
        {
            rdx_2 = 0;
            label_4bcf51:
            
            if (rdx_2 || rcx_1 != var_18)
            {
                label_4bcfa1:
                var_48 = var_20;
                int64_t var_40_1 = var_18 + var_20;
                int64_t var_38_1 = rdx_2;
                int64_t var_30_1 = rcx_1;
                rax_2 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::h300cb8706f3cca4b(
                    arg4, &var_48, &data_5303c0);
            }
            else
            {
                label_4bcf63:
                var_48 = var_20;
                int64_t var_40 = var_18 + var_20;
                rax_2 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::h300cb8706f3cca4b(
                    arg4, &var_48, &data_530388);
            }
        }
    }
    else if (!var_18)
    {
        label_4bcfd0:
        var_48 = var_20;
        int64_t var_40_2 = var_18 + var_20;
        rax_2 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::h300cb8706f3cca4b(arg4, 
            &var_48, &data_530318);
    }
    else
    {
        if (*(arg1 + 0x34))
        {
            rdx_2 = 0;
            rcx_1 = var_18;
            
            if (rcx_1 != var_18)
                goto label_4bcfa1;
            
            goto label_4bcf63;
        }
        
        label_4bcffa:
        var_48 = var_20;
        int64_t var_40_3 = var_18 + var_20;
        rax_2 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::h300cb8706f3cca4b(arg4, 
            &var_48, &data_530318);
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0ecdab8b58963e2c(&var_28);
    return rax_2;
}
