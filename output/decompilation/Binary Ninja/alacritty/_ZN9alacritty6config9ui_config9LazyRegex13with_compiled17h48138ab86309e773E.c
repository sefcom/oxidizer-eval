
  int64_t alacritty::config::ui_config::LazyRegex::with_compiled::h48138ab86309e773(void* arg1, int64_t* arg2)

{
    if (*(arg1 + 0x10))
    {
        core::cell::panic_already_borrowed::h29b197167d5655f2();
        /* no return */
    }
    
    *(arg1 + 0x10) = -1;
    int64_t rax =
        alacritty::config::ui_config::LazyRegexVariant::compiled::h75ac352b676053e5(arg1 + 0x18);
    
    if (rax)
        core::ops::function::FnOnce::call_once::h85ea745008baa361(arg2, rax);
    
    /* tailcall */
    return core::ptr::drop_in_place$LT$core..cell..RefMut$LT$std..collections..hash..map..HashMap$LT$usize$C$$LP$i32$C$polling..Event$RP$$GT$$GT$$GT$::h16540aa4a9ff850f(arg1 + 0x10);
}
