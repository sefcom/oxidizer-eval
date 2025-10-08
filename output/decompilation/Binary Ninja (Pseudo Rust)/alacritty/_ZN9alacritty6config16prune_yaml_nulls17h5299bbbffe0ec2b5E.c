
  fn alacritty::config::prune_yaml_nulls::h5299bbbffe0ec2b5(arg1: *mut i128) -> i64

{
    let rsi: i8;
    let mut result: i64 = alacritty::config::prune_yaml_nulls::walk::hc2d85b513bfb25bc(arg1, rsi);
    
    if result != 0
    {
        let mut rax: i64;
        let mut rdx_1: i64;
        rax = std::thread::local::LocalKey$LT$T$GT$::with::h1712436c6fb8facc();
        let mut var_50: i128;
        indexmap::map::IndexMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::had451597c2bab510(
            &var_50, rax, rdx_1);
        core::ptr::drop_in_place$LT$serde_yaml..value..Value$GT$::h9fe2f02f8bf51b64(arg1);
        let result_1: i64;
        result = result_1;
        arg1[4] = result;
        let zmm0_1: i128 = var_50;
        let var_20: i128;
        arg1[3] = var_20;
        let var_30: i128;
        arg1[2] = var_30;
        let var_40: i128;
        arg1[1] = var_40;
        *arg1 = zmm0_1;
    }
    
    result
}
