
  int64_t alacritty::message_bar::Message::pad_text::ha652db38986a3243(int128_t* arg1, int64_t* arg2, int64_t arg3, int32_t arg4[0x4] @ zmm0)

{
    char* rdi = arg2[1];
    int64_t rax = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(rdi, &rdi[arg2[2]], arg4);
    int64_t rsi_2 = 0;
    
    if (arg3 >= rax)
        rsi_2 = arg3 - rax;
    
    void var_30;
    _$LT$T$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h4e14528b5566b325(
        &var_30, rsi_2);
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..Extend$LT$char$GT$$GT$::extend::h51d11e0496b22872(arg2, &var_30);
    int64_t result = arg2[2];
    arg1[1] = result;
    *arg1 = *arg2;
    return result;
}
