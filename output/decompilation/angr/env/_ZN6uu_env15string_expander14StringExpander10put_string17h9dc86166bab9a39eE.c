long long uu_env::string_expander::StringExpander::put_string::h9dc86166bab9a39e(unsigned long long a0, unsigned long long a1[3])
{
    unsigned long long v0;  // [sp-0x28]
    unsigned long long v1;  // [sp-0x20]
    unsigned long long v2;  // [sp-0x18]
    unsigned long v4;  // rdx

    v1 = _$LT$std..ffi..os_str..OsString$u20$as$u20$core..convert..AsRef$LT$std..ffi..os_str..OsStr$GT$$GT$::as_ref::h3aeb49a5fcb4de5c(a1[1], a1[2]);
    v2 = v4;
    v0 = 0x8000000000000000;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h0480c74d12e82013(a0, v1, v4 + v1);
    ::0x4d8530::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$$u5b$u8$u5d$$GT$$GT$::hdc3450eb31f9c716(&v0);
    return ::0x4d84f0::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h80807dd825e9bc0c(a1);
}
