long long uu_readlink::show::hd4a959746bf8b97f(unsigned long long a0, unsigned long long a1, char a2)
{
    char v0;  // [sp-0x69]
    char v1;  // [bp-0x68], Other Possible Types: unsigned long, unsigned long long
    char v2;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x58]
    unsigned long long v4;  // [sp-0x50]
    void* v5;  // [sp-0x48]
    unsigned long v6;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x30]
    int v8;  // [sp-0x28]
    unsigned long long v10;  // rsi
    unsigned long long v11;  // rdx

    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v1, a0, a1);
    if (v1)
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    *((int128_t *)&v8) = *((int128_t *)&v2);
    v6 = &v8;
    v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h317c2396352be667;
    v1 = &g_4140f0;
    v2 = 1;
    v5 = 0;
    v3 = &v6;
    v4 = 1;
    std::io::stdio::_print::he918bceb0c89db46(&v1, v10, v11);
    if (a2 == 11)
    {
        v1 = std::io::stdio::stdout::h077da66234850927();
        return _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(&v1, v10, v11);
    }
    v0 = a2;
    v6 = &v0;
    v7 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h1cda345fbd5bfac0;
    v1 = &g_4140f0;
    v2 = 1;
    v5 = 0;
    v3 = &v6;
    v4 = 1;
    std::io::stdio::_print::he918bceb0c89db46(&v1, v10, v11);
}
