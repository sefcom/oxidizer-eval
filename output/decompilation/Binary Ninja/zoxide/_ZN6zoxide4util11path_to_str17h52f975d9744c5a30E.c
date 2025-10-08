
  int64_t zoxide::util::path_to_str::h52f975d9744c5a30(int64_t* arg1, int64_t arg2)

{
    char* rax;
    uint64_t rdx_1;
    rax = std::path::_$LT$impl$u20$core..convert..AsRef$LT$std..path..Path$GT$$u20$for$u20$alloc..string..String$GT$::as_ref::h38bd28293a94b618(arg2);
    char var_30;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_30, rax, rdx_1);
    int64_t rsi_2;
    int64_t var_28;
    
    if (var_30)
        rsi_2 = 0;
    else
        rsi_2 = var_28;
    int64_t var_20;
    /* tailcall */
    return anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$core..convert..Infallible$GT$$u20$for$u20$core..option..Option$LT$T$GT$$GT$::with_context::h58288445aa8c0a57(arg1, rsi_2, var_20, rax, rdx_1);
}
