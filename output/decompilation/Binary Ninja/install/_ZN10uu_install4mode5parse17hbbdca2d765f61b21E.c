
  int64_t uu_install::mode::parse::hbbdca2d765f61b21(char const (*** arg1)[0x88], void* arg2, void* arg3, char arg4, int32_t arg5)

{
    void* var_38 = arg2;
    void* var_30 = arg2 + arg3;
    
    if (!_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::hcf3b57975be3c5bb(core::iter::traits::iterator::Iterator::try_fold::hc0f81444595a2639(&var_38)))
        /* tailcall */
        return uucore::features::mode::parse_symbolic::h506995bac3fe2fa2(arg1, 0, arg2, arg3, arg5, 
            arg4);
    
    /* tailcall */
    return uucore::features::mode::parse_numeric::hf54e809090b43181(arg1, 0, arg2, arg3, arg4);
}
