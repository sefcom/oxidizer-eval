
  fn bat::theme::color_scheme_impl::h893fb72bbe578005(arg1: i8) -> i64

{
    let rax: i64;
    let var_8: i64 = rax;
    
    if arg1 == 0
    {
        if _$LT$bat..theme..TerminalColorSchemeDetector$u20$as$u20$bat..theme..ColorSchemeDetector$GT$::should_detect::hf8d13adc4ef70a6c() != 0
        {
            /* tailcall */
            return _$LT$bat..theme..TerminalColorSchemeDetector$u20$as$u20$bat..theme..ColorSchemeDetector$GT$::detect::h97f366d7cf98ecca();
        }
    }
    else
    {
        if arg1 == 1
        {
            /* tailcall */
            return _$LT$bat..theme..TerminalColorSchemeDetector$u20$as$u20$bat..theme..ColorSchemeDetector$GT$::detect::h97f366d7cf98ecca();
        }
        
        bat::theme::color_scheme_from_system::ha72283e88c744bcb();
    }
    
    2
}
