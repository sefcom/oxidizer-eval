long long fish::reader::ReaderData::try_apply_edit_to_autosuggestion(struct_0 *a0, unsigned long long a1[13])
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    unsigned long long v3;  // r15
    unsigned long long v4;  // r14
    unsigned long long v5;  // rdx
    unsigned int v6;  // ebp
    unsigned long long v7;  // rcx
    unsigned long long v8;  // r15
    unsigned long long v9;  // r12
    unsigned long long v10;  // r14
    unsigned long long v11;  // rax
    unsigned long long v12;  // r14

    v0 = v2;
    v3 = a0->field_510;
    if (!v3)
        return 0;
    v4 = a0->field_518.clone(a0->field_520);
    if (v5 < v4 || v5 > a0->field_30)
        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14dffe8); /* do not return */
    v0 = v5;
    v6 = a0->field_528;
    if (!(char)fish::wcstringutil::string_prefixes_string_maybe_case_insensitive(v6, v4 * 4 + a0->field_28, v5 - v4, a0->field_508, v3))
        core::panicking::panic("assertion failed: string_prefixes_string_maybe_case_insensitive(autosuggestion.icase,\n    &self.command_line.text()[autosuggestion.search_string_range.clone()],\n    &autosuggestion.text)assertion failed: self.history_search.active()bind scripts", 186, &g_14e0000); /* do not return */
    v7 = a1[11] - v4;
    if (a1[11] < v4)
        return 0;
    v8 = v3 - v7;
    if (v3 < v7)
    {
        return 0;
    }
    else if (a1[12] == v0)
    {
        v9 = a1[9];
        if ((char)fish::wcstringutil::string_prefixes_string_maybe_case_insensitive(v6, a1[8], v9, v7 * 4 + a0->field_508, v8) && v9 != v8)
        {
            v10 = v0;
            v11 = a1[11].len(v10).min(v10);
            v12 = v10 - v11;
            if (v10 < v11)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14e0018); /* do not return */
            }
            else if (!((char)__CFADD__(v12, v9)))
            {
                a0->field_520 = v12 + v9;
                return v11 & 0xffffffffffffff00 | 1;
            }
            else
            {
                core::panicking::panic_const::panic_const_add_overflow(&g_14e0018); /* do not return */
            }
        }
    }
    else
    {
        return 0;
    }
    return 0;
}
