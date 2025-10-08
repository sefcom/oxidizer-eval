
  void bat::assets::build_assets::acknowledgements::build_acknowledgements::h985f29fe48cdf84e(char* arg1, int64_t arg2, int64_t arg3, int32_t arg4)

{
    if (!arg4)
    {
        *(arg1 + 8) = -0x8000000000000000;
        *arg1 = 0xd;
        return;
    }
    
    void** const var_1e0 = &data_acdf98;
    int64_t var_1d8_1 = 1;
    void var_2f8;
    void* var_1d0_1 = &var_2f8;
    int128_t var_1c8_1 = {0};
    int128_t var_2d8;
    core::option::Option$LT$T$GT$::map_or_else::hec96efa742f30dcc(&var_2d8, 
        "Copyright (c) 2018-2021 bat-deve…", 0xfa, &var_1e0);
    walkdir::WalkDir::new::h459c167d76fb9d91(&var_1e0, arg2);
    int128_t var_270;
    walkdir::WalkDir::sort_by::h6657eda31431a47e(&var_270, &var_1e0);
    int128_t var_238;
    int128_t var_150_1 = var_238;
    int128_t var_248;
    int128_t var_160_1 = var_248;
    int128_t var_258;
    int128_t var_170_1 = var_258;
    int128_t var_188_1 = var_270;
    int64_t var_260;
    int64_t var_178_1 = var_260;
    var_1e0 = nullptr;
    int64_t var_1d0_2 = 0;
    var_1c8_1 = 8;
    var_1c8_1 = {0};
    int64_t var_1b0_1 = 8;
    int128_t var_1a8_1 = {0};
    int64_t var_198_1 = 8;
    int64_t var_190_1 = 0;
    int128_t var_140_1 = {0};
    int64_t var_130_1 = -0x7fffffffffffffff;
    int64_t var_100_1 = -0x7fffffffffffffff;
    int64_t var_d0_1 = arg2;
    int64_t var_c8_1 = arg3;
    int64_t var_c0_1 = -0x7fffffffffffffff;
    int64_t var_78_1 = -0x7fffffffffffffff;
    
    while (true)
    {
        int64_t var_228;
        _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf4f2140db3f21559(&var_228, &var_1e0);
        
        if (var_228 == -0x8000000000000000)
        {
            core::ptr::drop_in_place$LT$core..iter..adapters..flatten..FlatMap$LT$core..iter..adapters..flatten..Flatten$LT$walkdir..IntoIter$GT$$C$core..option..Option$LT$bat..assets..build_assets..acknowledgements..PathAndStem$GT$$C$bat..assets..build_assets..acknowledgements..build_acknowledgements..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::ha54413022cf6097c(&var_1e0);
            int64_t var_2c8;
            *(arg1 + 0x18) = var_2c8;
            *(arg1 + 8) = var_2d8;
            *arg1 = 0xd;
            break;
        }
        
        char var_2c0;
        bat::assets::build_assets::acknowledgements::handle_file::hb5a8e1bdb81e5e02(&var_2c0, 
            &var_228);
        char rax_2 = var_2c0;
        int64_t var_2b8;
        int128_t var_2b0;
        
        if (rax_2 != 0xd)
        {
            int32_t var_2bf;
            *(arg1 + 4) = var_2bf;
            *(arg1 + 1) = var_2bf;
            int128_t var_280;
            *(arg1 + 0x40) = var_280;
            int128_t var_290;
            *(arg1 + 0x30) = var_290;
            int128_t var_2a0;
            *(arg1 + 0x20) = var_2a0;
            *(arg1 + 0x10) = var_2b0;
            *arg1 = rax_2;
            *(arg1 + 8) = var_2b8;
            core::ptr::drop_in_place$LT$bat..assets..build_assets..acknowledgements..PathAndStem$GT$::h4560092f5c8bce4c(&var_228);
            core::ptr::drop_in_place$LT$core..iter..adapters..flatten..FlatMap$LT$core..iter..adapters..flatten..Flatten$LT$walkdir..IntoIter$GT$$C$core..option..Option$LT$bat..assets..build_assets..acknowledgements..PathAndStem$GT$$C$bat..assets..build_assets..acknowledgements..build_acknowledgements..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::ha54413022cf6097c(&var_1e0);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_2d8);
            break;
        }
        
        if (var_2b8 != -0x8000000000000000)
        {
            var_2c0 = var_2b8;
            var_2b8 = var_2b0;
            int64_t var_1f0;
            int64_t var_1e8;
            bat::assets::build_assets::acknowledgements::append_to_acknowledgements::he3cabe6578d3b81f(&var_2d8, var_1f0, var_1e8, var_2b8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_2c0);
        }
        
        core::ptr::drop_in_place$LT$bat..assets..build_assets..acknowledgements..PathAndStem$GT$::h4560092f5c8bce4c(&var_228);
    }
}
