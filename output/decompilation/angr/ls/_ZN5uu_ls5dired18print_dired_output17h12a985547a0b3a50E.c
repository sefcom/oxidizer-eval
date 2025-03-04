long long uu_ls::dired::print_dired_output::h12a985547a0b3a50(struct_0 *a0, unsigned long long a1[6], unsigned long long a2)
{
    unsigned long v0;  // [sp-0x50]
    unsigned long long v1;  // [sp-0x48]
    unsigned long v2;  // [sp-0x40]
    unsigned long long v3;  // [sp-0x38]
    char *v4;  // [sp-0x30]
    unsigned long long v5;  // [sp-0x28]
    void* v6;  // [sp-0x20]
    unsigned long long v8;  // rax
    unsigned long long v10;  // rcx

    v8 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h5d2671fc0ed75d53(a2);
    if (v8)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v8);
    v10 = a1[2];
    if (v10)
        uu_ls::dired::print_positions::h1699d046e996e251("//DIRED////SUBDIRED//--dired-Descapeliteralquote-name", 9, a1[1], v10);
    if (a0->field_e6)
        uu_ls::dired::print_positions::h1699d046e996e251("//SUBDIRED//--dired-Descapeliteralquote-name", 12, a1[4], a1[5]);
    v0 = &a0[1].padding_0[14];
    v1 = _$LT$uucore..features..quoting_style..QuotingStyle$u20$as$u20$core..fmt..Display$GT$::fmt::h8d278e288b2ed706;
    v2 = &g_613708;
    v3 = 2;
    v6 = 0;
    v4 = &v0;
    v5 = 1;
    std::io::stdio::_print::he918bceb0c89db46(&v2);
    return 0;
}
