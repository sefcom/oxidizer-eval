
  int64_t ruff_python_formatter::string::docstring::CodeExampleRst::push_format_action::h57ee3deea7ce478b(int128_t* arg1, int64_t* arg2)

{
    int64_t rcx = *(arg1 + 8);
    int64_t rax_1 = arg1[1] * 0x38 + rcx;
    int64_t var_58 = rcx;
    int64_t var_50 = rax_1;
    char rax_2;
    int64_t rdx;
    rax_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::rposition::h68a1a993e732f9f5(&var_58);
    void var_48;
    alloc::vec::Vec$LT$T$C$A$GT$::split_off::h92211539bbd88443(&var_48, arg1, 
        core::option::Option$LT$T$GT$::map_or::h4c7096001882a936(rax_2, rdx));
    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h8415858ef55ebe0c(arg2, arg1);
    void var_30;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hf19b7bd6dd2fcad4(&var_30, &var_48);
    return _$LT$alloc..collections..vec_deque..VecDeque$LT$T$C$A$GT$$u20$as$u20$alloc..collections..vec_deque..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::h88538b08b6ae9f24(arg2, &var_30);
}
