
  fn zoxide::util::path_to_str::h52f975d9744c5a30(arg1: *mut i64, arg2: i64) -> i64

{
    let mut rax: *mut i8;
    let mut rdx_1: u64;
    rax = std::path::_$LT$impl$u20$core..convert..AsRef$LT$std..path..Path$GT$$u20$for$u20$alloc..string..String$GT$::as_ref::h38bd28293a94b618(arg2);
    let mut var_30: i8;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_30, rax, rdx_1);
    let mut rsi_2: i64;
    let var_28: i64;
    
    if var_30 != 0
    {
        rsi_2 = 0;
    }
    else
    {
        rsi_2 = var_28;
    }
    let var_20: i64;
    /* tailcall */
    anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$core..convert..Infallible$GT$$u20$for$u20$core..option..Option$LT$T$GT$$GT$::with_context::h58288445aa8c0a57(arg1, rsi_2, var_20, rax, rdx_1)
}
