
  fn check_docs::extract_starts_and_ends::h30dde6298c2e4524(arg1: *mut i64, arg2: i64, arg3: i64) -> *mut i64

{
    let mut var_98: i64;
    regex::regex::string::Regex::new::hc0aabeb8c92c5bf9(&var_98, 
        "^(.+):(\d+):\s*(?:/{2,}|/\*)\s*A…");
    let rax: i64 = var_98;
    let mut var_90: i128;
    let var_b8: i128 = var_90;
    let var_80: i64;
    
    if rax == 0
    {
        *var_90[8] = var_80;
        var_98 = var_b8;
        arg1[1] = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::ha1d16daf0c272c04(&var_98);
        *arg1 = -0x8000000000000000;
    }
    else
    {
        let var_28_1: i64 = var_80;
        let var_38_1: i128 = var_b8;
        let mut var_40: i64 = rax;
        let mut var_70: i64;
        check_docs::extract_starts_and_ends::_$u7b$$u7b$closure$u7d$$u7d$::h5404a495eb6554e3(
            &var_70, arg2, arg3, &var_40);
        let rcx_3: i64 = var_70;
        let var_68: u64;
        
        if rcx_3 != -0x8000000000000000
        {
            let mut var_58: i64 = rcx_3;
            let var_50_1: u64 = var_68;
            regex::regex::string::Regex::new::hc0aabeb8c92c5bf9(&var_98, 
                "^(.+):(\d+):\s*(?:/{2,}|/\*)\s*A…");
            let rax_2: i64 = var_98;
            let var_b8_1: i128 = var_90;
            let mut rax_3: u64;
            
            if rax_2 == 0
            {
                *var_90[8] = var_80;
                var_98 = var_b8_1;
                rax_3 = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::ha1d16daf0c272c04(&var_98);
                'label_4ed4f2:
                arg1[1] = rax_3;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$check_docs..Anchor$GT$$GT$::h01addc0fc9fc5f6e(&var_58);
            }
            else
            {
                let var_28_2: i64 = var_80;
                let var_38_2: i128 = var_b8_1;
                var_40 = rax_2;
                check_docs::extract_starts_and_ends::_$u7b$$u7b$closure$u7d$$u7d$::h5404a495eb6554e3(&var_70, arg2, arg3, &var_40);
                let rcx_7: i64 = var_70;
                rax_3 = var_68;
                
                if rcx_7 == -0x8000000000000000
                {
                    goto 'label_4ed4f2;
                }
                
                let var_60: i64;
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
    arg1
}
