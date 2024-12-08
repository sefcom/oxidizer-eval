long long uu_uniq::should_extract_obs_skip_chars::hbb1a9847c94b4df4(unsigned long long a0, unsigned long long a1, char a2, char a3)
{
    unsigned int v0;  // [bp-0x30], Other Possible Types: unsigned long
    unsigned long long v1;  // [sp-0x28]
    unsigned long long v3;  // rdx
    void* v4;  // rax
    unsigned long long v5;  // rdi
    unsigned long long v6;  // rsi

    v0 = 0;
    if (!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hb372adb45d08adee(a0, a1, ::0x4bc110::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(43, &v0), v3))
        return 0;
    if (!uucore::mods::posix::posix_version::hb46bded69e119222())
    {
        return 0;
    }
    else if (v3 > 199209)
    {
        return 0;
    }
    else if (!a2 && !a3)
    {
        v0 = a0;
        v1 = a1 + a0;
        v5 = 0x110000;
        if (!_$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::advance_by::h7ba654970d2c1b3e(&v0, v6, v3))
            v5 = ((int)::0x4bc010::core::str::validations::next_code_point::h8f0957b6990844ba(&v0) ? (unsigned int)v3 : 0x110000);
        v4 = core::option::Option$LT$T$GT$::map_or::hf13a34bddf194011(v5);
        return v4;
    }
}
