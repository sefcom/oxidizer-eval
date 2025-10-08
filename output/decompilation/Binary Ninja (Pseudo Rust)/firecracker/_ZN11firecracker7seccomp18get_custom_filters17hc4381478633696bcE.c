
  fn firecracker::seccomp::get_custom_filters::hc4381478633696bc(arg1: *mut i128, arg2: i32) -> i64

{
    let mut var_40: ();
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h8479b8c1b76c1df6(&var_40, 
        arg2);
    let mut result_1: i64;
    vmm::seccomp::deserialize_binary::h778388351cf38cc4(&result_1, &var_40);
    let result: i64 = result_1;
    let var_c0: i128;
    let var_b0: i128;
    
    if result != 0
    {
        let mut result_2: i64 = result;
        let var_90: i128 = var_c0;
        let var_80: i128 = var_b0;
        let var_a0: i64;
        let var_70: i64 = var_a0;
        return firecracker::seccomp::filter_thread_categories::ha917c4cd8472310f(arg1, &result_2);
    }
    
    let var_68: i128 = var_c0;
    let var_58: i128 = var_b0;
    *arg1.byte_offset(0x18) = var_b0;
    *arg1.byte_offset(8) = var_c0;
    *arg1 = 0;
    result
}
