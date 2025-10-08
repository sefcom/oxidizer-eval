
  int64_t alacritty::display::hint::visible_unique_hyperlinks_iter::h56872e0ca65821a6(int64_t* arg1, void* arg2)

{
    int64_t r15_1 = *(arg2 + 0xb8) - 1;
    int32_t r12_1 = ~*(arg2 + 0xc8);
    int32_t rsi = *(arg2 + 0xc0);
    int32_t rax = core::cmp::Ord::min::h08e004ced85b11eb(rsi + r12_1, rsi - 1);
    int64_t result = _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h1264fc145c2ba3a1(&arg1[9]);
    *arg1 = 0;
    arg1[4] = arg2 + 0x28;
    arg1[5] = r15_1;
    arg1[6] = r12_1;
    arg1[7] = r15_1;
    arg1[8] = rax;
    return result;
}
