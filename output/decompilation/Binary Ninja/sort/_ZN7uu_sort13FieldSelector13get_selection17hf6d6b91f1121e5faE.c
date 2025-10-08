
  uint64_t uu_sort::FieldSelector::get_selection::hf6d6b91f1121e5fa(uint64_t* arg1, int64_t* arg2, char* arg3, uint64_t arg4, int64_t* arg5, int64_t arg6)

{
    uint64_t r12 = arg4;
    int64_t* rcx = nullptr;
    
    if (*(arg2 + 0x36))
        rcx = arg5;
    
    uint64_t rax;
    int64_t rdx_1;
    rax = uu_sort::FieldSelector::get_range::h36eed4fe0a7f87ec(arg2, arg3, r12, rcx, arg6);
    uint64_t rbx = rax;
    int64_t r14 = rdx_1;
    void* rax_1;
    uint64_t rdx_3;
    rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax, rdx_1, arg3, r12);
    void* rdi_7;
    
    if (!rax_1)
        rdi_7 = arg3;
    else
    {
        uint64_t result = *(arg2 + 0x35);
        int64_t var_60;
        char var_58;
        
        if (result < 2)
        {
            bool var_34_1 = result == 1;
            int64_t var_3c = 0x2e00110000;
            uu_sort::numeric_str_cmp::NumInfo::parse::h9568947bf0c3d82d(&var_60, rax_1, rdx_3, 
                &var_3c);
            int64_t r12_1 = var_60;
            int64_t var_50;
            int64_t var_48;
            int64_t rdx_5;
            result = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(var_50, var_48, rax_1, rdx_3);
            
            if (!result)
            {
                core::str::slice_error_fail::h1a2885084e28d077(rax_1, rdx_3, var_50, var_48);
                /* no return */
            }
            
            *arg1 = result;
            arg1[1] = rdx_5;
            arg1[2] = r12_1;
            arg1[3] = var_58;
            return result;
        }
        
        uint64_t rbp;
        
        if (result != 2)
        {
            *arg1 = rax_1;
            arg1[1] = rdx_3;
            rbp = 4;
            arg1[3] = rbp;
            return result;
        }
        
        r12 = rdx_3;
        uint64_t rax_2;
        int64_t rdx_6;
        rax_2 = uu_sort::get_leading_gen::h7fd24a66a114d51a(rax_1, rdx_3);
        rbx = rax_2;
        r14 = rdx_6;
        void* rax_3;
        int64_t* rdx_8;
        rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_2, rdx_6, rax_1, r12);
        
        if (rax_3)
        {
            double zmm0_1 = core::num::dec2flt::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$f64$GT$::from_str::h05023748d9faa6d2(&var_60, rax_3, rdx_8);
            uint64_t* rcx_4;
            
            if (!var_60)
            {
                zmm0_1 = var_58;
                rcx_4 = arg1;
                
                if (FCMP_UO(zmm0_1, zmm0_1))
                    result = 1;
                else if (-0x10000000000000 < zmm0_1)
                {
                    zmm0_1 - inf.0;
                    result = 3 + 1;
                }
                else
                    result = 2;
            }
            else
            {
                result = 0;
                rcx_4 = arg1;
            }
            
            *rcx_4 = result;
            rcx_4[1] = zmm0_1;
            rbp = 2;
            rcx_4[3] = rbp;
            return result;
        }
        
        rdi_7 = rax_1;
    }
    
    core::str::slice_error_fail::h1a2885084e28d077(rdi_7, r12, rbx, r14);
    /* no return */
}
