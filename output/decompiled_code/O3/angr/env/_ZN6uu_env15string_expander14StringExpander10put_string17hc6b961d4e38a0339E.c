long long uu_env::string_expander::StringExpander::put_string::hc6b961d4e38a0339(unsigned long long a0, unsigned long long a1[3], unsigned long a2)
{
    unsigned long long v0;  // [sp-0x28]
    unsigned long long v1;  // [sp-0x20]
    unsigned long long v2;  // [sp-0x18]
    unsigned long v4;  // rdx

    v1 = ::0x4d89d0::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..convert..AsRef$LT$std..ffi..os_str..OsStr$GT$$GT$::as_ref::h3aeb49a5fcb4de5c(a1[1], a1[2]);
    v2 = v4;
    v0 = 0x8000000000000000;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hab9e76ba9ca8ff28(a0, v1, v4 + v1);
    ::0x4d8560::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$$u5b$u8$u5d$$GT$$GT$::h94a17acc0baf8617(&v0);
    return ::0x4d8520::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h054e1f6a29e5c406(a1);
}
