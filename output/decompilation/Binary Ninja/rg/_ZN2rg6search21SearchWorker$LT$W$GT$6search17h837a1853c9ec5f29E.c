
  int64_t rg::search::SearchWorker$LT$W$GT$::search::h837a1853c9ec5f29(int64_t* arg1, int32_t* arg2, int64_t* arg3)

{
    uint64_t rax_1 = rg::haystack::Haystack::is_explicit::h64cc0399f7646269(arg3);
    char rbp = *(arg2 + (rax_1 << 1) + 0x278);
    char r14 = *(arg2 + (rax_1 << 1) + 0x279);
    char var_c2 = rbp;
    int64_t rax_2;
    int64_t rdx;
    rax_2 = rg::haystack::Haystack::path::hcb9efbeaa40de5df(arg3);
    void* const var_b8;
    char const* const var_88;
    
    if (core::sync::atomic::atomic_load::headb9992cbbd027a(
        &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 5)
    {
        int64_t var_60 = rax_2;
        int64_t var_58_1 = rdx;
        int64_t* var_50 = &var_60;
        uint64_t (* var_48_1)(int64_t* arg1, int64_t arg2) =
            _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
        char* var_40_1 = &var_c2;
        uint64_t (* var_38_1)(int64_t arg1, int64_t* arg2) = _$LT$grep_searcher..searcher..BinaryDetection$u20$as$u20$core..fmt..Debug$GT$::fmt::h3a76aecfa4983e9f;
        var_b8 = &data_7eb898;
        char var_b0 = 2;
        int64_t var_98_1 = 0;
        int64_t** var_a8_1 = &var_50;
        int64_t var_a0_1 = 2;
        int64_t rax_4 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb8b8);
        var_88 = "rg::searchpreprocessor command c…";
        int64_t var_80_1 = 0xa;
        char const* const var_78_1 = "rg::searchpreprocessor command c…";
        int64_t var_70_1 = 0xa;
        int64_t var_68_1 = rax_4;
        log::__private_api::log::h124fdfc9e9ed7585(&var_b8, 5, &var_88);
        rbp = var_c2;
    }
    
    grep_searcher::searcher::Searcher::set_binary_detection::hd7f4fb50cb7815e8(arg2, rbp, r14);
    
    if (!*arg3)
    {
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        var_88 = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
        int32_t* rax_7;
        char rdx_5;
        rax_7 = std::io::stdio::Stdin::lock::h8b2bf765bae79e2f(&var_88);
        var_b8 = rax_7;
        void* const* var_d8_1 = &var_b8;
        rg::search::search_reader::h7f5dbec13f44e948(arg1, &arg2[0xb0], arg2, &arg2[0x42], rax_2);
        return core::ptr::drop_in_place$LT$std..sync..mpmc..zero..Channel$LT$rg..haystack..Haystack$GT$..recv..$u7b$$u7b$closure$u7d$$u7d$$GT$::h85409010ad860f66(var_b8, rdx_5 & 1);
    }
    
    if (rg::search::SearchWorker$LT$W$GT$::should_preprocess::hf284b37ad5562aa3(arg2, rax_2))
        return rg::search::SearchWorker$LT$W$GT$::search_preprocessor::h295b0344cca9801b(arg1, 
            arg2, rax_2);
    
    if (arg2[0x9f] && globset::GlobSet::is_match::he75c47efc4dacc15(&arg2[0xa0], rax_2))
        return rg::search::SearchWorker$LT$W$GT$::search_decompress::hb296485a18d4d8f8(arg1, arg2, 
            rax_2);
    
    return rg::search::search_path::hcddb9f8857d0e766(arg1, &arg2[0xb0], arg2, &arg2[0x42], rax_2, 
        rdx);
}
