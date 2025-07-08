
  fn uu_cat::splice::copy_exact::h7c8774a5e534cde3(arg1: i32, arg2: i64, arg3: i64) -> u64

{
    let var_1030: i64 = 0;
    let var_2030: i64 = 0;
    let var_3030: i64 = 0;
    let mut var_4030: i64 = 0;
    let mut rbx: i64 = arg3;
    let mut rbp: i32 = arg1;
    memset(&var_4030, 0, 0x4000);
    
    if rbx != 0
    {
        let var_406c_1: i32 = rbp;
        let var_4058: i64;
        let mut temp0_1: i64;
        
        do
        {
            let mut var_4060: i32;
            nix::unistd::read::hcf76a36f5eebd624(&var_4060, rbp, &var_4030, 0x4000);
            let var_405c: i32;
            
            if var_4060 != 0
            {
                return var_405c;
            }
            
            let mut var_4068: i64 = var_4058;
            
            if var_4058 == 0
            {
                var_4060 = &data_518990;
                let var_4058_1: i64 = 1;
                let var_4050: i64 = 8;
                let var_4048: i128 = {0};
                core::panicking::assert_failed::hb6f5ab042e2fb42a(&var_4068, &var_4060);
                /* no return */
            }
            
            let mut rbp_1: i64 = 0;
            
            do
            {
                let mut rax_1: i64;
                let mut rdx_2: u64;
                rax_1 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2183ab5a6b7a9c40(rbp_1, var_4058, &var_4030);
                nix::unistd::write::h6382312308a73468(&var_4060, arg2, rax_1, rdx_2);
                
                if var_4060 != 0
                {
                    return var_405c;
                }
                
                if var_4058 == 0
                {
                    uu_cat::splice::copy_exact::panic_cold_explicit::ha5b0297eb3513873();
                    /* no return */
                }
                
                rbp_1 += var_4058;
            } while rbp_1 < var_4058;
            
            temp0_1 = rbx;
            rbx -= var_4058;
            rbp = var_406c_1;
        } while temp0_1 != var_4058;
    }
    
    0x86
}
