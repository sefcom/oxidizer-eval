long long uu_ls::dired::indent::h541a64321517b8c5(unsigned long long a0)
{
    unsigned long v0;  // [sp-0x30], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x28]
    unsigned long long v2;  // [sp-0x20]
    int v3;  // [sp-0x18]
    unsigned long long v5;  // rax

    v0 = &g_6136f8;
    v1 = 1;
    v2 = 8;
    *((uint128_t *)&v3) = 0;
    v5 = std::io::Write::write_fmt::h51abc44b465d2e67(a0, &v0);
    if (v5)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v5);
    return 0;
}
