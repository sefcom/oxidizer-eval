
  int64_t bat::syntax_mapping::SyntaxMapping::start_offload_build_all::hd06ba260de1f2570(void* arg1)

{
    int64_t* rdx = *(arg1 + 0x30);
    int64_t temp0 = *rdx;
    *rdx += 1;
    
    if (temp0 <= -1)
        trap(6);
    
    int64_t var_48 = -0x8000000000000000;
    int64_t var_58 = 0;
    char var_30 = 0;
    void var_28;
    std::thread::Builder::spawn_unchecked::h31f93f9b9d33a5c3(&var_28, &var_58);
    core::result::Result$LT$T$C$E$GT$::expect::h0e103480dd3d7923(&var_58, &var_28);
    return 
        core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h7c4bfb4d6f3d2cd3(
        &var_58);
}
