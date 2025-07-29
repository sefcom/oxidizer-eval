long long uu_cut::get_delimiters(unsigned long long a0[5], unsigned long long a1)
{
    char v0;  // [bp-0x58], Other Possible Types: unsigned long
    unsigned long long v1;  // [bp-0x50]
    unsigned long v2;  // [bp-0x48]
    unsigned int v3;  // [bp-0x40]
    char v5;  // bpl
    unsigned long long v6[3];  // rax
    char *v8;  // r14
    unsigned long long v10[3];  // r13
    unsigned long long v11;  // r15
    unsigned long long v13;  // r12
    unsigned long long v14;  // rbp
    unsigned long long v16;  // rdx
    unsigned long long v17[3];  // rax
    unsigned long v18;  // rax

    v5 = a1.get_flag("whitespace-delimiteddelimiter''cut-error-delimiter-must-be-single-character", 20);
    v0.try_get_one(a1, "delimiter''cut-error-delimiter-must-be-single-character", 9);
    v6 = "delimiter''cut-error-delimiter-must-be-single-character".unwrap(9, &v0);
    if (v6)
    {
        if (v5)
        {
            v8 = &v0;
            uucore::mods::locale::get_message(v8, "cut-error-delimiter-and-whitespace-conflict(uutils coreutils) 0.1.0cut-usagecut-aboutcut-after-helpbytescut-help-bytescharacterscut-help-characterscut-help-delimiterDELIMcut-help-whitespace-delimitedWHITESPACEfieldscut-help-fieldscomplementcut-help-complem", 43);
            v3 = 1;
            *((double *)&a0[1]) = v8.new();
            a0[2] = &g_58bcf8;
            a0[0] = 1;
            return a0;
        }
        v10 = v6;
        v11 = &g_416a2c;
        v13 = 1;
        if (!(char)v6[1].eq(v6[2]))
        {
            v14 = v10[2];
            v13 = 1;
            if (v14)
            {
                v0.try_from(v10[1], v14);
                if (!((v0 & 1) || v1.count(v2 + v1) <= 1))
                {
LABEL_4ae545:
                    v8 = &v0;
                    uucore::mods::locale::get_message(v8, "cut-error-delimiter-must-be-single-character", 44);
                    v3 = 1;
                    *((double *)&a0[1]) = v8.new();
                    a0[2] = &g_58bcf8;
                    a0[0] = 1;
                    return a0;
                }
                v0.try_from(v10[1], v10[2]);
                if (!(v14 == 1 || !v0))
                    goto LABEL_4ae545;
                v11 = v10.from();
                v13 = v16;
            }
        }
    }
    else
    {
        v11 = (!v5 ? "\t/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs" : 0);
        v13 = 1;
    }
    v0.try_get_one(a1, "output-delimiterClapErrorWrapperPermissionDeniedStripPrefixError", 16);
    v17 = "output-delimiterClapErrorWrapperPermissionDeniedStripPrefixError".unwrap(16, &v0);
    v18 = (!v17 ? 0 : uu_cut::get_delimiters::{{closure}}(v17[1], v17[2]));
    a0[1] = v11;
    a0[2] = v13;
    a0[3] = v18;
    a0[4] = v16;
    a0[0] = 0;
    return a0;
}
