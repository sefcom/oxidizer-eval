
  fn uu_cat::splice::copy_exact::hb9a3658d2a5b3f83(arg1: i32, arg2: i64) -> u64

{
    let var_1030: i64 = 0;
    let var_2030: i64 = 0;
    let var_3030: i64 = 0;
    let mut var_4030: i64 = 0;
    let mut r13: i64 = arg2;
    let mut rbp: i32 = arg1;
    memset(&var_4030, 0, 0x4000);
    let var_4074: i32 = rbp;
    let mut cond:0_1: bool;
    
    do
    {
        let mut var_4060: i8;
        nix::unistd::read::h78a928634cf125b8(&var_4060, rbp, &var_4030, 0x4000);
        let var_405c: i32;
        
        if (var_4060 & 1) != 0
        {
            return var_405c;
        }
        
        let var_4058: i64;
        let mut var_4068: i64 = var_4058;
        
        if var_4058 == 0
        {
            var_4060 = &data_4eaa18;
            let var_4058_1: i64 = 1;
            let var_4050: i64 = 8;
            let var_4048: i128 = {0};
            core::panicking::assert_failed::h449f2a7fe5426575(1, &var_4068, &data_4196d8[8], 
                &var_4060);
            /* no return */
        }
        
        let mut rbp_1: i64 = 0;
        
        do
        {
            let mut rax_1: i64;
            let mut rdx_3: u64;
            rax_1 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hefdaf78919a7c5d0(rbp_1, var_4058, &var_4030, 0x4000);
            nix::unistd::write::h281d4b2e67027cb0(&var_4060, rax_1, rdx_3);
            
            if var_4060 == 1
            {
                return var_405c;
            }
            
            if var_4058 == 0
            {
                uu_cat::splice::copy_exact::panic_cold_explicit::h2877317a069a73d3();
                /* no return */
            }
            
            rbp_1 += var_4058;
        } while rbp_1 < var_4058;
        
        cond:0_1 = r13 != var_4058;
        r13 -= var_4058;
        rbp = var_4074;
    } while cond:0_1;
    0x86
}
