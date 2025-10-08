
  int64_t ruff_python_formatter::string::docstring::is_rst_option::h85d4d44a3db9c66f(int64_t arg1, int64_t arg2)

{
    int64_t rax;
    int64_t rdx;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::hd401112d4c765288(arg1, arg2);
    int32_t var_28 = 0;
    char* rax_1;
    uint64_t rdx_1;
    rax_1 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x3a, &var_28);
    
    if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf48f8dbcb851e47f(rax, rdx, 
            rax_1, rdx_1))
        return 0;
    
    var_28 = rax;
    int64_t var_20 = rdx + rax;
    char var_18 = 0;
    return _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h0e6737ab96195750(
        _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::ha107697c28683076(&var_28), 
        1);
}
