
  int64_t alacritty::config::prune_yaml_nulls::h5299bbbffe0ec2b5(int128_t* arg1)

{
    char rsi;
    int64_t result = alacritty::config::prune_yaml_nulls::walk::hc2d85b513bfb25bc(arg1, rsi);
    
    if (result)
    {
        int64_t rax;
        int64_t rdx_1;
        rax = std::thread::local::LocalKey$LT$T$GT$::with::h1712436c6fb8facc();
        int128_t var_50;
        indexmap::map::IndexMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::had451597c2bab510(
            &var_50, rax, rdx_1);
        core::ptr::drop_in_place$LT$serde_yaml..value..Value$GT$::h9fe2f02f8bf51b64(arg1);
        int64_t result_1;
        result = result_1;
        arg1[4] = result;
        int128_t zmm0_1 = var_50;
        int128_t var_20;
        arg1[3] = var_20;
        int128_t var_30;
        arg1[2] = var_30;
        int128_t var_40;
        arg1[1] = var_40;
        *arg1 = zmm0_1;
    }
    
    return result;
}
