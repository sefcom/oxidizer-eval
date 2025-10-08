
  fn alacritty::config::ui_config::LazyRegex::with_compiled::h48138ab86309e773(arg1: *mut c_void, arg2: *mut i64) -> i64

{
    if *arg1.byte_offset(0x10) != 0
    {
        core::cell::panic_already_borrowed::h29b197167d5655f2();
        /* no return */
    }
    
    *arg1.byte_offset(0x10) = -1;
    let rax: i64 = alacritty::config::ui_config::LazyRegexVariant::compiled::h75ac352b676053e5(arg1.
        byte_offset(0x18));
    
    if rax != 0
    {
        core::ops::function::FnOnce::call_once::h85ea745008baa361(arg2, rax);
    }
    
    /* tailcall */
    core::ptr::drop_in_place$LT$core..cell..RefMut$LT$std..collections..hash..map..HashMap$LT$usize$C$$LP$i32$C$polling..Event$RP$$GT$$GT$$GT$::h16540aa4a9ff850f(arg1.byte_offset(0x10))
}
