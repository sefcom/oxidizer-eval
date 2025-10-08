long long uu_sort::tokenize(unsigned long long a0, unsigned long long a1, unsigned int a2, struct_0 *a3)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    if (a3->field_10)
    {
        v0 = v2;
        core::panicking::panic("assertion failed: token_buffer.is_empty()failed to parse field index ", 41, &g_58cf70); /* do not return */
    }
    else if (a2 == 0x110000)
    {
        return uu_sort::tokenize_default(a0, a1, a3);
    }
    else
    {
        return uu_sort::tokenize_with_separator(a0, a1, a2, a3);
    }
}
