
  fn rg::search::SearchWorker$LT$W$GT$::search::h837a1853c9ec5f29(arg1: *mut i64, arg2: *mut i32, arg3: *mut i64) -> i64

{
    let rax_1: u64 = rg::haystack::Haystack::is_explicit::h64cc0399f7646269(arg3);
    let mut rbp: i8 = *arg2.byte_offset(rax_1 << 1).byte_offset(0x278);
    let r14: i8 = *arg2.byte_offset(rax_1 << 1).byte_offset(0x279);
    let mut var_c2: i8 = rbp;
    let mut rax_2: i64;
    let mut rdx: i64;
    rax_2 = rg::haystack::Haystack::path::hcb9efbeaa40de5df(arg3);
    let mut var_b8: *mut c_void;
    let mut var_88: *const i8;
    
    if core::sync::atomic::atomic_load::headb9992cbbd027a(
        &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 5
    {
        let mut var_60: i64 = rax_2;
        let var_58_1: i64 = rdx;
        let mut var_50: *mut i64 = &var_60;
        let var_48_1: fn(arg1: *mut i64, arg2: i64) -> u64 =
            _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
        let var_40_1: *mut i8 = &var_c2;
        let var_38_1: fn(arg1: i64, arg2: *mut i64) -> u64 = _$LT$grep_searcher..searcher..BinaryDetection$u20$as$u20$core..fmt..Debug$GT$::fmt::h3a76aecfa4983e9f;
        var_b8 = &data_7eb898;
        let var_b0: i8 = 2;
        let var_98_1: i64 = 0;
        let var_a8_1: *mut *mut i64 = &var_50;
        let var_a0_1: i64 = 2;
        let rax_4: i64 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb8b8);
        var_88 = "rg::searchpreprocessor command c…";
        let var_80_1: i64 = 0xa;
        let var_78_1: *const i8 = "rg::searchpreprocessor command c…";
        let var_70_1: i64 = 0xa;
        let var_68_1: i64 = rax_4;
        log::__private_api::log::h124fdfc9e9ed7585(&var_b8, 5, &var_88);
        rbp = var_c2;
    }
    
    grep_searcher::searcher::Searcher::set_binary_detection::hd7f4fb50cb7815e8(arg2, rbp, r14);
    
    if *arg3 == 0
    {
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        var_88 = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
        let mut rax_7: *mut i32;
        let mut rdx_5: i8;
        rax_7 = std::io::stdio::Stdin::lock::h8b2bf765bae79e2f(&var_88);
        var_b8 = rax_7;
        let var_d8_1: *const *mut c_void = &var_b8;
        rg::search::search_reader::h7f5dbec13f44e948(arg1, &arg2[0xb0], arg2, &arg2[0x42], rax_2);
        return core::ptr::drop_in_place$LT$std..sync..mpmc..zero..Channel$LT$rg..haystack..Haystack$GT$..recv..$u7b$$u7b$closure$u7d$$u7d$$GT$::h85409010ad860f66(var_b8, rdx_5 & 1);
    }
    
    if rg::search::SearchWorker$LT$W$GT$::should_preprocess::hf284b37ad5562aa3(arg2, rax_2) != 0
    {
        return rg::search::SearchWorker$LT$W$GT$::search_preprocessor::h295b0344cca9801b(arg1, 
            arg2, rax_2);
    }
    
    if arg2[0x9f] != 0 && globset::GlobSet::is_match::he75c47efc4dacc15(&arg2[0xa0], rax_2) != 0
    {
        return rg::search::SearchWorker$LT$W$GT$::search_decompress::hb296485a18d4d8f8(arg1, arg2, 
            rax_2);
    }
    
    rg::search::search_path::hcddb9f8857d0e766(arg1, &arg2[0xb0], arg2, &arg2[0x42], rax_2, rdx)
}
