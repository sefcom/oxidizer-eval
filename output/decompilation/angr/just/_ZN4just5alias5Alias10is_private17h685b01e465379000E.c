char just::alias::Alias::is_private(unsigned long long a0)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx

    v2 = a0 + 32.lexeme();
    v0 = 0;
    if ((char)core::slice::<impl [T]>::starts_with(v2, v3, ::0x5fb200::core::char::methods::encode_utf8_raw(95, &v0), v3))
        return 1;
    a0.contains(15);
    return 1;
}
