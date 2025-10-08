long long just::line::Line::is_comment(unsigned int *a0, unsigned int a1)
{
    unsigned long v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    unsigned long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx

    v0 = v3;
    v4 = a0.first(a1);
    if (!v4)
        return 0;
    v1 = 0;
    return core::slice::<impl [T]>::starts_with(v4, v5, ::0x5fb200::core::char::methods::encode_utf8_raw(35, &v1), v5);
}
