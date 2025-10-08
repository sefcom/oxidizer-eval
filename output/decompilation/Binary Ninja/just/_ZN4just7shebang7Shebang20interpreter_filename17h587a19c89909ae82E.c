
  int64_t just::shebang::Shebang::interpreter_filename::h587a19c89909ae82(int64_t arg1, int64_t arg2)

{
    void var_60;
    _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h473cefa6588d8442(&var_60, 0x5c0000002f, arg1, arg2);
    int64_t var_30 = 0;
    int64_t var_28 = arg2;
    int16_t var_20 = 1;
    int64_t result = core::str::iter::SplitInternal$LT$P$GT$::next_back::h25cc641d7490d8fb(&var_60);
    
    if (!result)
        result = arg1;
    
    return result;
}
