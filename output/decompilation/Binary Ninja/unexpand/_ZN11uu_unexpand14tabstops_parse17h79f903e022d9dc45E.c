
  void* uu_unexpand::tabstops_parse::h79f903e022d9dc45(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    void var_68;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&var_68, 
        arg2, arg3);
    int64_t var_b8 = 0;
    int64_t var_b0 = 8;
    int64_t var_a8 = 0;
    int64_t var_78 = 0;
    int64_t var_70 = arg3;
    int16_t var_38 = 1;
    
    while (true)
    {
        char* rax_1;
        int64_t rdx;
        rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::hc3086131f80cc882(&var_78);
        int64_t rax_4;
        
        if (!rax_1)
        {
            int64_t r15_1 = var_b0 + (var_a8 << 3);
            var_78 = var_b0;
            int64_t var_70_1 = r15_1;
            
            if (!_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::hfb74872ec2eaf285(&var_78))
            {
                if (_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h5c45441c9d008661(var_b0, r15_1) & 1)
                {
                    void* result = &arg1[1];
                    *(result + 0x10) = var_a8;
                    *result = var_b8;
                    *arg1 = 0;
                    return result;
                }
                
                rax_4 = -0x7ffffffffffffffe;
            }
            else
                rax_4 = -0x8000000000000000;
            
            goto label_4b193e;
        }
        
        char var_a0;
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_a0, rax_1, rdx);
        
        if (var_a0)
        {
            char var_9f;
            
            if (var_9f == 2)
            {
                rax_4 = -0x7fffffffffffffff;
                label_4b193e:
                arg1[1] = rax_4;
                *arg1 = 1;
                return 
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::h1b908adb0cd1da04(
                    &var_b8);
            }
            
            int64_t rax_6;
            uint64_t rdx_2;
            rax_6 =
                core::str::_$LT$impl$u20$str$GT$::trim_start_matches::he524a6a972df7d79(rax_1, rdx);
            int128_t var_90;
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hde6101a7564f34fb(
                &var_90, rax_6, rdx_2);
            int64_t var_80;
            arg1[3] = var_80;
            *(arg1 + 8) = var_90;
            *arg1 = 1;
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::h1b908adb0cd1da04(
                &var_b8);
        }
        
        int64_t var_98;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h7c81b2a5e929de98(&var_b8, var_98);
    }
}
