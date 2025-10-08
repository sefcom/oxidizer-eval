long long just::line::Line::is_continuation(unsigned long a0, unsigned long a1)
{
    unsigned long v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    unsigned long long v5;  // rsi
    unsigned long long v6;  // r14
    unsigned long long v7;  // rbx
    unsigned long v8;  // rax
    unsigned long long v9;  // rax
    unsigned long long v10;  // rdx

    if (!a1)
        return 0;
    v5 = a1 * 128;
    if (*((int *)(a0 + v5 - 128)) != 18)
        return 0;
    v3 = v6;
    v2 = v7;
    v0 = v8;
    v9 = a0 + v5 - 120.lexeme();
    v1 = 0;
    return core::slice::<impl [T]>::ends_with(v9, v10, ::0x5fb200::core::char::methods::encode_utf8_raw(92, &v1), v10);
}
