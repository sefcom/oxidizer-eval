long long fish::builtins::printf::string_to_scalar_type(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x40]
    char v1;  // [bp-0x3f]
    unsigned long v2;  // [bp-0x38]
    char v3;  // [bp-0x30], Other Possible Types: unsigned long long
    char v4;  // [bp-0x28]
    unsigned long long v6;  // rcx
    unsigned long long v7;  // rax

    if ((int)a0.char_at(a1, 0) != 34 && (int)a0.char_at(a1, 0) != 39)
    {
        v0.raw_string_to_scalar_type(a0, a1, v6, &v3);
        fish::builtins::printf::builtin_printf_state_t::verify_numeric(a2, a0, a1, v3, *((long long *)&v4), (v0 ? v1 : 3));
        v7 = 0.from();
        if (v0)
            return v7;
        return v2;
    }
    return (unsigned int)a0.char_at(a1, 1).from_ord();
}
