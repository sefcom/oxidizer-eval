long long uu_dd::progress::ProgUpdate::write_transfer_stats::h72fbc0aa2e615bbe(void* a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    unsigned long v0;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x38]
    unsigned long long v2;  // [sp-0x30]
    int v3;  // [sp-0x28]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned int v7;  // rcx
    unsigned int v8;  // r8
    unsigned int v9;  // r9

    if (!a2 || (v0 = (unsigned long long)&g_5624a8, v1 = (unsigned long long)1, v2 = (unsigned long long)8, *((int128_t *)&v3) = 0, v5 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::h82787f8382d2102c(a1, &v0, a2), !v5))
    {
        v5 = uu_dd::progress::ProgUpdate::write_io_lines::h21e0c6ac1bc632a9(a0, a1, a2);
        if (!v5)
        {
            v6 = uu_dd::progress::ProgUpdate::write_prog_line::h73fbaadaf172cb94(a0, a1, 0, v7, v8, v9);
            return v6;
        }
    }
    v6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v5);
    return v6;
}
