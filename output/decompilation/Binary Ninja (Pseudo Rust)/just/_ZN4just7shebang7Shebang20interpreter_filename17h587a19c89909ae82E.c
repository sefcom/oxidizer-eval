
  fn just::shebang::Shebang::interpreter_filename::h587a19c89909ae82(arg1: i64, arg2: i64) -> i64

{
    let mut var_60: ();
    _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h473cefa6588d8442(&var_60, 0x5c0000002f, arg1, arg2);
    let var_30: i64 = 0;
    let var_28: i64 = arg2;
    let var_20: i16 = 1;
    let mut result: i64 =
        core::str::iter::SplitInternal$LT$P$GT$::next_back::h25cc641d7490d8fb(&var_60);
    
    if result == 0
    {
        result = arg1;
    }
    
    result
}
