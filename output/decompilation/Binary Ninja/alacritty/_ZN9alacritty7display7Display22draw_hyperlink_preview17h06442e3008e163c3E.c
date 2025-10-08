
  int64_t alacritty::display::Display::draw_hyperlink_preview::h06442e3008e163c3(void* arg1, void* arg2, int32_t arg3, int32_t arg4, int64_t arg5)

{
    int32_t r15 = arg5;
    int64_t var_178 = arg5;
    int64_t var_198 = *(arg1 + 0x7a0);
    void* rsi = nullptr;
    
    if (*(arg1 + 0x758) != 2)
        rsi = arg1 + 0x728;
    
    void var_c0;
    core::iter::traits::iterator::Iterator::chain::h0b78b35f524935ab(&var_c0, rsi, arg1 + 0x760);
    int64_t* var_a0 = &var_198;
    int64_t var_190;
    core::iter::traits::iterator::Iterator::collect::h7140d2817fc35ef4(&var_190, &var_c0);
    int64_t var_180;
    int64_t var_188;
    
    if (!var_180)
        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$clap_builder..util..id..Id$C$clap_builder..builder..arg_predicate..ArgPredicate$C$core..option..Option$LT$clap_builder..builder..os_str..OsStr$GT$$RP$$GT$$GT$::hb1850bbe1054744e(var_190, var_188);
    int64_t r13_1 = var_180 << 1;
    int64_t rax_2;
    int64_t rdx_1;
    rax_2 = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h6d79adff25664689(r13_1, 4, 8);
    int64_t var_1c0 = rax_2;
    int64_t var_1b0_1 = 0;
    int64_t rax_3 = *(arg1 + 0x798);
    
    if (rax_3 > r13_1)
    {
        r13_1 = 1;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hc5018d8de0a68ccc(&var_1c0, *(arg1 + 0xc8) & 1, 
            *(arg1 + 0xd8));
        alloc::vec::Vec$LT$T$C$A$GT$::push::hc5018d8de0a68ccc(&var_1c0, arg3 & 1, arg4);
        rax_3 = *(arg1 + 0x798);
    }
    
    int64_t var_158 = 2;
    int64_t var_140_1 = 2;
    int64_t* var_128_1 = &var_178;
    int64_t var_120_1 = var_180;
    int64_t* var_118_1 = &var_1c0;
    int32_t var_110_1 = -(r15);
    int32_t var_10c_1 = ~r15 + rax_3;
    char var_108_1 = 0;
    int16_t* rax_5 = arg2 + 0x273;
    
    if (*(arg2 + 0x1f8) & 1)
        rax_5 = arg2 + 0x1f9;
    
    uint32_t rax_8 = rax_5[1] << 0x10 | *rax_5;
    void* rax_9 = arg2 + 0x270;
    
    if (*(arg2 + 0x1fc) & 1)
        rax_9 = arg2 + 0x1fd;
    
    uint32_t rax_12 = *(rax_9 + 2) << 0x10 | *rax_9;
    void var_100;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h62c023f15cddc5c5(&var_100, &var_190);
    core::iter::traits::iterator::Iterator::zip::had26b8161789ea72(&var_c0, &var_100, &var_158);
    
    while (true)
    {
        _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::h9f14dc4adb0f2181(&var_100, &var_c0);
        int32_t var_d8;
        
        if (var_d8 == 0x110001)
            break;
        
        int64_t var_d0;
        int64_t var_170 = var_d0;
        int64_t var_c8;
        int64_t var_168_1 = var_c8;
        int64_t var_160_1 = var_198;
        alacritty::display::damage::FrameDamage::damage_line::hb967af29845291d1(*(arg1 + 0x20), 
            *(arg1 + 0x28), &var_170);
        alacritty::display::damage::FrameDamage::damage_line::hb967af29845291d1(*(arg1 + 0x58), 
            *(arg1 + 0x60), &var_170);
        alacritty::renderer::Renderer::draw_string::he0cf7f189aeb0195(arg1 + 0xe0, var_d0, var_c8, 
            rax_8, rax_12, &var_100, arg1 + 0x798, arg1 + 0x5f8);
    }
    
    core::ptr::drop_in_place$LT$core..iter..adapters..zip..Zip$LT$alloc..vec..into_iter..IntoIter$LT$alacritty..string..StrShortener$GT$$C$core..iter..adapters..flatten..FlatMap$LT$core..iter..adapters..take..Take$LT$core..iter..adapters..filter_map..FilterMap$LT$core..iter..adapters..map..Map$LT$core..iter..adapters..rev..Rev$LT$core..ops..range..RangeInclusive$LT$i32$GT$$GT$$C$alacritty..display..Display..draw_hyperlink_preview..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$alacritty..display..Display..draw_hyperlink_preview..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$C$core..option..Option$LT$alacritty_terminal..index..Point$LT$usize$GT$$GT$$C$alacritty..display..Display..draw_hyperlink_preview..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::he9ef3c79b25c85f5(&var_c0);
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$alacritty_terminal..index..Line$GT$$GT$$GT$::h1577cbfb0b7f6601(var_1c0, rdx_1);
}
