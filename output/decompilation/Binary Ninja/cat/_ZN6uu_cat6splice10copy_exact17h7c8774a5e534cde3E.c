
  uint64_t uu_cat::splice::copy_exact::h7c8774a5e534cde3(int32_t arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_1030 = 0;
    int64_t var_2030 = 0;
    int64_t var_3030 = 0;
    int64_t var_4030 = 0;
    int64_t rbx = arg3;
    int32_t rbp = arg1;
    memset(&var_4030, 0, 0x4000);
    
    if (rbx)
    {
        int32_t var_406c_1 = rbp;
        int64_t var_4058;
        int64_t temp0_1;
        
        do
        {
            int32_t var_4060;
            nix::unistd::read::hcf76a36f5eebd624(&var_4060, rbp, &var_4030, 0x4000);
            int32_t var_405c;
            
            if (var_4060)
                return var_405c;
            
            int64_t var_4068 = var_4058;
            
            if (!var_4058)
            {
                var_4060 = &data_518990;
                int64_t var_4058_1 = 1;
                int64_t var_4050 = 8;
                int128_t var_4048 = {0};
                core::panicking::assert_failed::hb6f5ab042e2fb42a(&var_4068, &var_4060);
                /* no return */
            }
            
            int64_t rbp_1 = 0;
            
            do
            {
                int64_t rax_1;
                uint64_t rdx_2;
                rax_1 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2183ab5a6b7a9c40(rbp_1, var_4058, &var_4030);
                nix::unistd::write::h6382312308a73468(&var_4060, arg2, rax_1, rdx_2);
                
                if (var_4060)
                    return var_405c;
                
                if (!var_4058)
                {
                    uu_cat::splice::copy_exact::panic_cold_explicit::ha5b0297eb3513873();
                    /* no return */
                }
                
                rbp_1 += var_4058;
            } while (rbp_1 < var_4058);
            
            temp0_1 = rbx;
            rbx -= var_4058;
            rbp = var_406c_1;
        } while (temp0_1 != var_4058);
    }
    
    return 0x86;
}
