
  uint64_t uu_cat::splice::copy_exact::hb9a3658d2a5b3f83(int32_t arg1, int64_t arg2)

{
    int64_t var_1030 = 0;
    int64_t var_2030 = 0;
    int64_t var_3030 = 0;
    int64_t var_4030 = 0;
    int64_t r13 = arg2;
    int32_t rbp = arg1;
    memset(&var_4030, 0, 0x4000);
    int32_t var_4074 = rbp;
    bool cond:0_1;
    
    do
    {
        char var_4060;
        nix::unistd::read::h78a928634cf125b8(&var_4060, rbp, &var_4030, 0x4000);
        int32_t var_405c;
        
        if (var_4060 & 1)
            return var_405c;
        
        int64_t var_4058;
        int64_t var_4068 = var_4058;
        
        if (!var_4058)
        {
            var_4060 = &data_4eaa18;
            int64_t var_4058_1 = 1;
            int64_t var_4050 = 8;
            int128_t var_4048 = {0};
            core::panicking::assert_failed::h449f2a7fe5426575(1, &var_4068, &data_4196d8[8], 
                &var_4060);
            /* no return */
        }
        
        int64_t rbp_1 = 0;
        
        do
        {
            int64_t rax_1;
            uint64_t rdx_3;
            rax_1 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hefdaf78919a7c5d0(rbp_1, var_4058, &var_4030, 0x4000);
            nix::unistd::write::h281d4b2e67027cb0(&var_4060, rax_1, rdx_3);
            
            if (var_4060 == 1)
                return var_405c;
            
            if (!var_4058)
            {
                uu_cat::splice::copy_exact::panic_cold_explicit::h2877317a069a73d3();
                /* no return */
            }
            
            rbp_1 += var_4058;
        } while (rbp_1 < var_4058);
        
        cond:0_1 = r13 != var_4058;
        r13 -= var_4058;
        rbp = var_4074;
    } while (cond:0_1);
    return 0x86;
}
