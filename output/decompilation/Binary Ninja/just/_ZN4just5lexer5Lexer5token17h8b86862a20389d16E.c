
  int64_t just::lexer::Lexer::token::h8b86862a20389d16(void* arg1)

{
    int128_t zmm1 = *(arg1 + 0x80);
    int64_t var_30 = *(arg1 + 0xa8);
    char rsi;
    char var_10 = rsi;
    int64_t var_28 = *(arg1 + 0xa0) - *(arg1 + 0xb8);
    int128_t var_20 = *(arg1 + 0xb0);
    int128_t var_50 = *(arg1 + 0x70);
    int128_t var_40 = zmm1;
    alloc::vec::Vec$LT$T$C$A$GT$::push::h613e59c6bb8d58d5(arg1 + 0x48, &var_50);
    int64_t result = *(arg1 + 0xa0);
    *(arg1 + 0xb8) = result;
    *(arg1 + 0xa8) = *(arg1 + 0x90);
    return result;
}
