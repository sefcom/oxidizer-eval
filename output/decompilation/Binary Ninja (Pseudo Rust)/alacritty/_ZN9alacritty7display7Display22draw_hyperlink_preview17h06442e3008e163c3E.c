
  fn alacritty::display::Display::draw_hyperlink_preview::h06442e3008e163c3(arg1: *mut c_void, arg2: *mut c_void, arg3: i32, arg4: i32, arg5: i64) -> i64

{
    let r15: i32 = arg5;
    let mut var_178: i64 = arg5;
    let mut var_198: i64 = *arg1.byte_offset(0x7a0);
    let mut rsi: *mut c_void = nullptr;
    
    if *arg1.byte_offset(0x758) != 2
    {
        rsi = arg1.byte_offset(0x728);
    }
    
    let mut var_c0: ();
    core::iter::traits::iterator::Iterator::chain::h0b78b35f524935ab(&var_c0, rsi, 
        arg1.byte_offset(0x760));
    let var_a0: *mut i64 = &var_198;
    let mut var_190: i64;
    core::iter::traits::iterator::Iterator::collect::h7140d2817fc35ef4(&var_190, &var_c0);
    let var_180: i64;
    let var_188: i64;
    
    if var_180 == 0
    {
        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$clap_builder..util..id..Id$C$clap_builder..builder..arg_predicate..ArgPredicate$C$core..option..Option$LT$clap_builder..builder..os_str..OsStr$GT$$RP$$GT$$GT$::hb1850bbe1054744e(var_190, var_188);
    }
    let mut r13_1: i64 = var_180 << 1;
    let mut rax_2: i64;
    let mut rdx_1: i64;
    rax_2 = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h6d79adff25664689(r13_1, 4, 8);
    let mut var_1c0: i64 = rax_2;
    let var_1b0_1: i64 = 0;
    let mut rax_3: i64 = *arg1.byte_offset(0x798);
    
    if rax_3 > r13_1
    {
        r13_1 = 1;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hc5018d8de0a68ccc(&var_1c0, 
            *arg1.byte_offset(0xc8) & 1, *arg1.byte_offset(0xd8));
        alloc::vec::Vec$LT$T$C$A$GT$::push::hc5018d8de0a68ccc(&var_1c0, arg3 & 1, arg4);
        rax_3 = *arg1.byte_offset(0x798);
    }
    
    let mut var_158: i64 = 2;
    let var_140_1: i64 = 2;
    let var_128_1: *mut i64 = &var_178;
    let var_120_1: i64 = var_180;
    let var_118_1: *mut i64 = &var_1c0;
    let var_110_1: i32 = -(r15);
    let var_10c_1: i32 = !r15 + rax_3;
    let var_108_1: i8 = 0;
    let mut rax_5: *mut i16 = arg2.byte_offset(0x273);
    
    if (*arg2.byte_offset(0x1f8) & 1) != 0
    {
        rax_5 = arg2.byte_offset(0x1f9);
    }
    
    let rax_8: u32 = rax_5[1] << 0x10 | *rax_5;
    let mut rax_9: *mut c_void = arg2.byte_offset(0x270);
    
    if (*arg2.byte_offset(0x1fc) & 1) != 0
    {
        rax_9 = arg2.byte_offset(0x1fd);
    }
    
    let rax_12: u32 = *rax_9.byte_offset(2) << 0x10 | *rax_9;
    let mut var_100: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h62c023f15cddc5c5(&var_100, &var_190);
    core::iter::traits::iterator::Iterator::zip::had26b8161789ea72(&var_c0, &var_100, &var_158);
    
    loop
    {
        _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::h9f14dc4adb0f2181(&var_100, &var_c0);
        let var_d8: i32;
        
        if var_d8 == 0x110001
        {
            break;
        }
        
        let var_d0: i64;
        let mut var_170: i64 = var_d0;
        let var_c8: i64;
        let var_168_1: i64 = var_c8;
        let var_160_1: i64 = var_198;
        alacritty::display::damage::FrameDamage::damage_line::hb967af29845291d1(
            *arg1.byte_offset(0x20), *arg1.byte_offset(0x28), &var_170);
        alacritty::display::damage::FrameDamage::damage_line::hb967af29845291d1(
            *arg1.byte_offset(0x58), *arg1.byte_offset(0x60), &var_170);
        alacritty::renderer::Renderer::draw_string::he0cf7f189aeb0195(arg1.byte_offset(0xe0), 
            var_d0, var_c8, rax_8, rax_12, &var_100, arg1.byte_offset(0x798), 
            arg1.byte_offset(0x5f8));
    }
    
    core::ptr::drop_in_place$LT$core..iter..adapters..zip..Zip$LT$alloc..vec..into_iter..IntoIter$LT$alacritty..string..StrShortener$GT$$C$core..iter..adapters..flatten..FlatMap$LT$core..iter..adapters..take..Take$LT$core..iter..adapters..filter_map..FilterMap$LT$core..iter..adapters..map..Map$LT$core..iter..adapters..rev..Rev$LT$core..ops..range..RangeInclusive$LT$i32$GT$$GT$$C$alacritty..display..Display..draw_hyperlink_preview..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$alacritty..display..Display..draw_hyperlink_preview..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$C$core..option..Option$LT$alacritty_terminal..index..Point$LT$usize$GT$$GT$$C$alacritty..display..Display..draw_hyperlink_preview..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::he9ef3c79b25c85f5(&var_c0);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$alacritty_terminal..index..Line$GT$$GT$$GT$::h1577cbfb0b7f6601(var_1c0, rdx_1)
}
