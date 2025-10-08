long long fish::reader::combine_command_and_autosuggestion(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6)
{
    unsigned long long v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x78]
    unsigned long long v3;  // [bp-0x70]
    char v4;  // [bp-0x68], Other Possible Types: unsigned long, unsigned long long
    unsigned long v5;  // [bp-0x60], Other Possible Types: unsigned long long
    char v6;  // [bp-0x48]
    unsigned long long v7;  // rax
    unsigned long long v8;  // r14
    unsigned long long v9;  // r13
    unsigned long long v10;  // rdx
    unsigned long long v11;  // r15
    char *v12;  // rsi
    unsigned long long v13;  // r15
    unsigned long long v14;  // r15

    if (!a6)
    {
        core::panicking::panic("assertion failed: !autosuggestion.is_empty()assertion failed: autosuggestion.len() >= line_range.len()assertion failed: string_prefixes_string_case_insensitive(line, autosuggestion)assertion failed: query.is_none()forcedhighlightselectionpager_search_field", 44, &g_14dfdd8); /* do not return */
    }
    else if (a6 >= a3.len(a4))
    {
        v7 = a3.len(a4);
        if (a6 < v7)
            core::panicking::panic_const::panic_const_sub_overflow(&g_14dfe08); /* do not return */
        v8 = a4 - a3;
        if (a4 >= a3 && a2 >= a4)
        {
            v2 = v7;
            v3 = a6 - v7;
            v0 = a2 - a4;
            v9 = a1 + a3 * 4;
            if (!(char)fish::wcstringutil::string_prefixes_string(v9, v8, a5, a6))
            {
                if (!(char)fish::wcstringutil::string_prefixes_string_case_insensitive(v9, v8, a5, a6))
                    core::panicking::panic("assertion failed: string_prefixes_string_case_insensitive(line, autosuggestion)assertion failed: query.is_none()forcedhighlightselectionpager_search_field_positionhistory searchautosuggestionleft_promptmode_promptright_promptpagerrepaint needed becausechan", 79, &g_14dfe38); /* do not return */
                if (!v1)
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14dfe50); /* do not return */
                fish::parse_util::parse_util_token_extent(&v4, a1, v1, v1 - 1);
                if (v5 < v4 || v5 > v1)
                    core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14dfe68); /* do not return */
                v4 = v4 * 4 + a1;
                v5 = a1 + v5 * 4;
                if (v4.try_fold().eq(1))
                    goto LABEL_13fa604;
                if (a4 == a3)
                    core::option::unwrap_failed(&g_14dfe80); /* do not return */
                a3 >> 63.unwrap(&g_14dfe98);
                v4.to_vec(a1, a3);
                v6.add(&v4, a5, a6);
                v10 = a1 + a4 * 4;
                v11 = a0;
                v12 = &v6;
                v13 = v11;
            }
            else
            {
LABEL_13fa604:
                v4.to_vec(a1, a4);
                v6.add(&v4, a5 + v2 * 4, v3);
                v10 = a4 * 4 + a1;
                v11 = a0;
                v12 = &v6;
                v13 = v11;
            }
            v14 = v13;
            v11.add(v12, v10, v0);
            return v14;
        }
        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14dfe20); /* do not return */
    }
    else
    {
        core::panicking::panic("assertion failed: autosuggestion.len() >= line_range.len()assertion failed: string_prefixes_string_case_insensitive(line, autosuggestion)assertion failed: query.is_none()forcedhighlightselectionpager_search_field_positionhistory searchautosuggestionleft_pr", 58, &g_14dfdf0); /* do not return */
    }
}
