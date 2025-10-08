
  int64_t* check_docs::extract_starts_and_ends::h30dde6298c2e4524(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_98;
    regex::regex::string::Regex::new::hc0aabeb8c92c5bf9(&var_98, 
        "^(.+):(\d+):\s*(?:/{2,}|/\*)\s*A…");
    int64_t rax = var_98;
    int128_t var_90;
    int128_t var_b8 = var_90;
    int64_t var_80;
    
    if (!rax)
    {
        *var_90[8] = var_80;
        var_98 = var_b8;
        arg1[1] = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::ha1d16daf0c272c04(&var_98);
        *arg1 = -0x8000000000000000;
    }
    else
    {
        int64_t var_28_1 = var_80;
        int128_t var_38_1 = var_b8;
        int64_t var_40 = rax;
        int64_t var_70;
        check_docs::extract_starts_and_ends::_$u7b$$u7b$closure$u7d$$u7d$::h5404a495eb6554e3(
            &var_70, arg2, arg3, &var_40);
        int64_t rcx_3 = var_70;
        uint64_t var_68;
        
        if (rcx_3 != -0x8000000000000000)
        {
            int64_t var_58 = rcx_3;
            uint64_t var_50_1 = var_68;
            regex::regex::string::Regex::new::hc0aabeb8c92c5bf9(&var_98, 
                "^(.+):(\d+):\s*(?:/{2,}|/\*)\s*A…");
            int64_t rax_2 = var_98;
            int128_t var_b8_1 = var_90;
            uint64_t rax_3;
            
            if (!rax_2)
            {
                *var_90[8] = var_80;
                var_98 = var_b8_1;
                rax_3 = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::ha1d16daf0c272c04(&var_98);
                label_4ed4f2:
                arg1[1] = rax_3;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$check_docs..Anchor$GT$$GT$::h01addc0fc9fc5f6e(&var_58);
            }
            else
            {
                int64_t var_28_2 = var_80;
                int128_t var_38_2 = var_b8_1;
                var_40 = rax_2;
                check_docs::extract_starts_and_ends::_$u7b$$u7b$closure$u7d$$u7d$::h5404a495eb6554e3(&var_70, arg2, arg3, &var_40);
                int64_t rcx_7 = var_70;
                rax_3 = var_68;
                
                if (rcx_7 == -0x8000000000000000)
                    goto label_4ed4f2;
                
                int64_t var_60;
                arg1[2] = var_60;
                *arg1 = var_58;
                arg1[3] = rcx_7;
                arg1[4] = rax_3;
                arg1[5] = var_60;
            }
        }
        else
        {
            arg1[1] = var_68;
            *arg1 = -0x8000000000000000;
        }
    }
    return arg1;
}
