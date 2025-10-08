
  int64_t rg::flags::hiargs::HiArgs::search_worker::hf358c6f28cd28c0f(int64_t* arg1, void* arg2, int128_t* arg3, void* arg4, int64_t* arg5)

{
    int64_t r14;
    r14 = 1;
    void var_430;
    rg::search::SearchWorkerBuilder::new::hd66e583a1cbf24b6(&var_430);
    int128_t var_528;
    int64_t var_518;
    int128_t var_360;
    int64_t var_350;
    
    if (!(0 + -(*(arg2 + 0x298))))
    {
        r14 = 1;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h92b52b9ab5dd1bb4(&var_360, *(arg2 + 0x2a0), *(arg2 + 0x2a8));
        var_518 = var_350;
        var_528 = var_360;
    }
    else
        var_528 = -0x8000000000000000;
    
    r14 = 1;
    char rax_2;
    int64_t* rdx_1;
    rax_2 = rg::search::SearchWorkerBuilder::preprocessor::hf9be5d148c0e1917(&var_430, &var_528);
    
    if (rax_2 & 1)
    {
        arg1[1] = rdx_1;
        *arg1 = 2;
        r14 = 1;
        core::ptr::drop_in_place$LT$rg..search..SearchWorkerBuilder$GT$::ha48ca4a404405145(
            &var_430);
        core::ptr::drop_in_place$LT$rg..search..Printer$LT$termcolor..Buffer$GT$$GT$::hc52ac80aa4cada35(arg5);
        core::ptr::drop_in_place$LT$grep_searcher..searcher..Searcher$GT$::h742cf81e5667d81c(arg4);
        return core::ptr::drop_in_place$LT$rg..search..PatternMatcher$GT$::h6514a31a5032fe4e(arg3);
    }
    
    _$LT$ignore..gitignore..Gitignore$u20$as$u20$core..clone..Clone$GT$::clone::h17cf217e3aef61a1(
        &var_360, arg2 + 0x188);
    int64_t var_300;
    int64_t var_4c8_1 = var_300;
    int128_t var_310;
    int128_t var_4d8_1 = var_310;
    int128_t var_320;
    int128_t var_4e8_1 = var_320;
    int128_t var_330;
    int128_t var_4f8_1 = var_330;
    int128_t var_340;
    int128_t var_508_1 = var_340;
    var_518 = var_350;
    var_528 = var_360;
    rg::search::SearchWorkerBuilder::preprocessor_globs::h64bcbf508a657fa8(rdx_1, &var_528);
    *(rdx_1 + 0x84) = *(arg2 + 0x38c);
    *(rdx_1 + 0x82) = *(arg2 + 0x318);
    rdx_1[0x10] = *(arg2 + 0x31a);
    int64_t var_538_1 = arg3[6];
    int128_t var_548_1 = arg3[5];
    int128_t var_558_1 = arg3[4];
    int128_t var_568_1 = arg3[3];
    int128_t var_578_1 = arg3[2];
    int128_t var_588_1 = arg3[1];
    int128_t var_598 = *arg3;
    memcpy(&var_528, arg5, 0xf0);
    rg::search::SearchWorkerBuilder::build::h2111ba1553679b5c(&var_360, &var_430, &var_598, arg4, 
        &var_528);
    memcpy(arg1, &var_360, 0x330);
    return core::ptr::drop_in_place$LT$rg..search..SearchWorkerBuilder$GT$::ha48ca4a404405145(
        &var_430);
}
