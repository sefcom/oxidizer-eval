long long uu_uniq::should_extract_obs_skip_chars(unsigned long long a0, unsigned long long a1, char a2, char a3)
{
    unsigned int v0;  // [bp-0x30], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rax

    v0 = 0;
    if ((char)core::slice::<impl [T]>::starts_with(a0, a1, ::0x462fb0::core::char::methods::encode_utf8_raw(43, &v0), v3) && !((~((char)uucore::mods::posix::posix_version()) | a2 | 199210 <= v3 | a3) & 1))
    {
        v0 = a0;
        v1 = a1 + a0;
        if (!v0.advance_by(1))
        {
            v4 = core::str::validations::next_code_point(&v0);
            if (((char)v4 & 1))
                return v4 & 0xffffffffffffff00 | (unsigned int)v3 - 48 < 10;
        }
    }
    return 0;
}
