long long uu_sort::tokenize(unsigned long long a0, unsigned long long a1, unsigned int a2, struct_0 *a3)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    if (a3->field_10)
    {
        v0 = v2;
        core::panicking::panic("assertion failed: token_buffer.is_empty()fielderrorsort-field-index-cannot-be-zerosort-failed-parse-field-indexkeysort-failed-parse-char-indexoptionsort-invalid-optionsort-invalid-char-index-zero-startinternal error: entered unreachable code: This should o", 41, &g_670638); /* do not return */
    }
    if (!(a2 == 0x110000))
        goto LABEL_0x50ce40;
    return uu_sort::tokenize_default(a0, a1, a3);
}
