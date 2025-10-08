
  fn bat::vscreen::AnsiStyle::update::h74afb5aba8a3519f(arg1: *mut i64, arg2: *mut i64) -> i64

{
    if 0 + -(*arg1)
    {
        let mut var_130: ();
        bat::vscreen::Attributes::new::h728f4794ce0bffea(&var_130);
        core::ptr::drop_in_place$LT$core..option..Option$LT$bat..vscreen..Attributes$GT$$GT$::haf4d6eb278505400(arg1);
        memcpy(arg1, &var_130, 0x110);
        
        if *arg1 == -0x8000000000000000
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
    }
    
    /* tailcall */
    bat::vscreen::Attributes::update::h8c610215620759fb(arg1, arg2)
}
