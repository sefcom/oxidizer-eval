void fish::complete::Completer::perform_for_commandline_impl(struct_0 *a0, unsigned long long a1[3])
{
    char v0;  // [bp-0x1f9]
    struct_0 *v1;  // [bp-0x1f8]
    unsigned long long v3;  // [bp-0x1f0]
    unsigned long long v5;  // [bp-0x1e8]
    void* v6;  // [bp-0x1d8]
    unsigned long long v7;  // [bp-0x1d0]
    unsigned long long v8;  // [bp-0x1d0]
    void* v10;  // [bp-0x1c8]
    unsigned long long v14;  // [bp-0x1b0]
    unsigned long long v15;  // [bp-0x1a8]
    void* v16;  // [bp-0x1a0]
    unsigned long long v17;  // [bp-0x198]
    void* v18;  // [bp-0x190]
    int v19;  // [bp-0x188]
    int v20;  // [bp-0x188]
    unsigned long long v21[3];  // [bp-0x178]
    unsigned long long v22[3];  // [bp-0x178]
    unsigned long v34;  // [bp-0xf0]
    unsigned long long v35;  // [bp-0xe8]
    int v36;  // [sp-0xe8]
    unsigned long long v37;  // [bp-0xe0]
    unsigned long long v38[3];  // [bp-0xd8]
    char v39;  // [bp-0xd0]
    int v45;  // [bp-0x68]
    unsigned long long v46;  // [bp-0x60]
    unsigned long long v47[3];  // [bp-0x58]
    void* v48;  // [bp-0x48]
    unsigned long long v49;  // [bp-0x40]
    void* v50;  // [bp-0x38]
    unsigned long long v51;  // [bp-0x18]
    unsigned long long v53;  // r14
    unsigned long long v54;  // r14
    unsigned long long v55;  // rbp
    unsigned long long v56;  // rsi
    void* v57;  // r14
    void* v58;  // r14
    void* v61;  // rax
    unsigned long long v62;  // r13
    unsigned long long v63;  // r13
    unsigned long long v64;  // r15
    unsigned long long v65;  // rax
    unsigned long long v66;  // rdx
    unsigned long long v69;  // rdi
    void* v70;  // r14
    unsigned long long v71;  // rdi
    unsigned long long v72;  // rax
    unsigned long long v75;  // rdi
    void* v76;  // r14
    unsigned long long v77;  // rax
    unsigned long long v78;  // rcx
    struct_1 *v79;  // r13
    void* v80;  // r15
    unsigned long v81;  // r15
    void* v82;  // rcx
    unsigned long long v84;  // rdx
    unsigned long long v85;  // rsi
    unsigned long long v86;  // rdi
    char v87;  // al
    unsigned long v88;  // rdx
    unsigned long v89;  // cc_ndep
    unsigned long v90;  // r14
    unsigned long v91;  // rsi
    unsigned long long v92;  // rdx
    unsigned int v93;  // eax

    v51 = v53;
    v54 = a1[2];
    v0 = a0->field_70;
    v3 = a1[2];
    do
    {
        v55 = v54;
        v56 = a1[2];
        if (!v54)
            goto LABEL_138ae15;
        v54 = v55 - 1;
    } while ((int)a1[1].char_at(a1[2], v54) == 32);
    v56 = a1[2];
LABEL_138ae15:
    v6 = 0;
    v8 = 4;
    v10 = 0;
    fish::parse_util::parse_util_process_extent(a1[1], v56, v55, &v6);
    v57 = v10;
    v58 = v57;
    if (v0)
    {
        v35 = v8;
        v37 = v8 + v57 * 20;
        v39 = 0;
        v38[0] = a1;
        v35.drain(&v6, v35.fold());
        core::ptr::drop_in_place<alloc::vec::drain::Drain<fish::tokenizer::Tok>>(&v35);
        v58 = v10;
    }
    v61 = v58;
    v16 = 0;
    v17 = 8;
    v18 = 0;
    if (v61)
    {
        v62 = v61 * 20;
        v7 = v8;
        while (true)
        {
            v63 = v62;
            v64 = v7;
            if (v64.location_in_or_at_end_of_source_range(v3))
                break;
            v65 = v64.get_source(a1[1], a1[2]);
            if (fish::tokenizer::variable_assignment_equals_pos(v65, v66) != 1)
                break;
            v35.to_vec(v65, v66);
            v21[0] = v38;
            memcpy(&v19, &v35, 16);
            v16.push(&v19, &g_14d5b98);
            v19 = v20;
            v7 = v64 + 20;
            v62 = v63 - 20;
            if (v63 == 20)
                break;
        }
        v20 = v19;
    }
    (unsigned long long)v36.drain(&v6, 0);
    core::ptr::drop_in_place<alloc::vec::drain::Drain<fish::tokenizer::Tok>>(&(unsigned long long)v36);
    if (!v10)
    {
        if (!v0)
        {
            v48 = 0;
            v49 = 4;
            v50 = 0;
            a0.complete_cmd(&v48);
            a0.complete_abbr(&v48);
        }
LABEL_138b840:
        core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v16);
        core::ptr::drop_in_place<alloc::vec::Vec<fish::tokenizer::Tok>>(v6, v8);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a1);
        return;
    }
    v69 = v8;
    if (v10 == v57)
    {
        v34 = a1[1];
        v15 = a1[2];
        v70 = v57;
        v71 = v69;
    }
    else
    {
        v72 = v69.offset();
        v34 = a1[1].index(a1[2], v72, &g_14d5bb0);
        v15 = v66;
        v70 = v10;
        v71 = v8;
    }
    v75 = v71;
    v76 = v70;
    v77 = &g_14d5bc8;
    if (!v76)
    {
LABEL_138b91c:
        core::option::unwrap_failed(v77); /* do not return */
    }
    v78 = v76 * 5;
    if (!v75 + v78 * 4 - 20)
        goto LABEL_138b91c;
    if (*((char *)(v75 + v78 * 4 - 3)) == 10)
        goto LABEL_138b840;
    v6.retain();
    if (!v10)
    {
        v84 = &g_14d5be0;
        v85 = 36;
        v86 = "assertion failed: !tokens.is_empty()assertion failed: matches!(tok.type_, TokenType::string | TokenType::redirect)";
LABEL_138b12c:
        core::panicking::panic(v86, v85, v84); /* do not return */
    }
    v79 = v8;
    v80 = 0x14 * v10 + (char *)v79;
    v81 = v80 - 20;
    if (v80 == 20)
    {
        v77 = &g_14d5bf8;
        goto LABEL_138b91c;
    }
    if (v79->field_11 != 1 || !(char)v80[3])
        goto LABEL_138b840;
    v82 = 0;
    do
    {
        if (*((char *)(v79 + v82 + 17)) != 1 && *((char *)(v79 + v82 + 17)) != 8)
        {
            v84 = &g_14d5cb8;
            v85 = 78;
            v86 = "assertion failed: matches!(tok.type_, TokenType::string | TokenType::redirect)";
            goto LABEL_138b12c;
        }
        v82 += 20;
    } while (v10 * 20 != v82);
    v5 = v81.get_source(a1[1], a1[2]);
    if (v81.location_in_or_at_end_of_source_range(v3) && ((char)a0.try_complete_variable(v5, v66) || (char)a0.try_complete_user(v5, v66)))
        goto LABEL_138b840;
    if (v79.location_in_or_at_end_of_source_range(v3))
    {
        v87 = fish::tokenizer::variable_assignment_equals_pos(v5, v66);
        if ((v87 & 1))
        {
            v88 = v66 + 1;
            if ((char)_ccall(4, 24, v66 + 1, 0, _ccall(17, (unsigned long long)(v87 & 1), 0, v89)))
            {
                core::panicking::panic_const::panic_const_add_overflow(&g_14d5c70); /* do not return */
            }
            else if (v66 >= v88)
            {
                v90 = a0->field_10;
                a0.complete_param_expand(v5 + v88 * 4, v66 - v88, 1, 0, (char)v80[2]);
                v91 = a0->field_10;
                if (v90 > v91)
                {
                    core::slice::index::slice_start_index_len_fail(v90, v91, &g_14d5ca0); /* do not return */
                }
                else if (v90 != v91)
                {
                    v92 = v90 * 56;
                    do
                    {
                        *((char *)(a0->field_8 + v92 + 51)) = *((char *)(a0->field_8 + v92 + 51)) | 1;
                        v92 += 56;
                    } while (v91 * 56 != v92);
                }
            }
            else
            {
                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14d5c88); /* do not return */
            }
        }
        else
        {
            (unsigned long long)v36.to_vec(v5, v66);
            v47[0] = v38;
            *((int128_t *)&v45) = *((int128_t *)&(unsigned long long)v36);
            fish::builtins::fish_indent::fish_indent::{{closure}}(&(unsigned long long)v36, v46, v38);
            v22[0] = v38;
            memcpy(&v19, &v35, 16);
            v1.complete_abbr(&v20);
            v1.complete_cmd(&(char)v45);
            goto LABEL_138b840;
        }
        goto LABEL_138b840;
    }
    v93 = (char)v80[3];
    v14 = 4;
}
