
  int64_t ruff_python_formatter::string::normalize::is_fstring_with_quoted_debug_expression::h3c23dfe7f06b780a(void* arg1, int64_t* arg2)

{
    int64_t rax = *(arg1 + 8);
    int64_t rcx = *(arg1 + 0x10);
    int64_t var_10 = rax;
    int64_t var_8 = rcx * 0x50 + rax;
    /* tailcall */
    return _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h0e6737ab96195750(
        core::iter::traits::iterator::Iterator::try_fold::h64f6702d0c55a617(&var_10, arg2, arg1), 
        1);
}
