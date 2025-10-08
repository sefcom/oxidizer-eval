long long fish::builtins::shared::builtin_gettext(unsigned long a0, struct_0 *a1, unsigned long long a2[4], unsigned long a3)
{
    unsigned long long v0[1][3];  // [bp-0x40]
    unsigned long long v2;  // rbx
    unsigned long v3;  // r14
    unsigned long long v4;  // rax

    if (!a3)
        core::slice::index::slice_start_index_len_fail(1, 0, &g_14c62d0); /* do not return */
    v2 = a3 * 16;
    if (v2 == 16)
        return 0;
    v3 = &a2[2];
    do
    {
        v0.to_vec(*((long long *)v3), *((long long *)(v3 + 8)));
        v4 = v0.localize();
        a1->field_8.append(v4, a2);
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
        v3 += 16;
    } while (v3 != v2 + (char *)a2);
    return 0;
}
