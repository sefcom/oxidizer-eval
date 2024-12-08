long long uu_ls::dired::indent::h52b1e672ce4893b9(unsigned long long a0)
{
    unsigned long v0;  // [sp-0x30], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x28]
    unsigned long long v2;  // [sp-0x20]
    int v3;  // [sp-0x18]
    unsigned long long v5;  // rax

    v0 = &g_613318;
    v1 = 1;
    v2 = 8;
    *((int128_t *)&v3) = 0;
    v5 = std::io::Write::write_fmt::h9d32c17c2cadc496(a0, &v0);
    if (v5)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v5);
    return 0;
}
