long long fish::history::file::offset_of_next_item_fish_2_0(unsigned long a0, unsigned long long a1, unsigned long long *a2, unsigned long a3, unsigned int a4)
{
    void* v0;  // [bp-0x168]
    unsigned long long v1;  // [bp-0x160]
    void* v2;  // [bp-0x158]
    unsigned long long v3;  // [bp-0x148]
    unsigned long v4;  // [bp-0x140]
    unsigned long long v5;  // [bp-0x128]
    unsigned long long v6;  // [bp-0x120]
    unsigned long long v7;  // [bp-0x118]
    unsigned long long v8;  // [bp-0x110]
    void* v9;  // [bp-0x108]
    void* v10;  // [bp-0x108]
    unsigned long long v11;  // [bp-0x100]
    unsigned long long v12;  // [bp-0x100]
    unsigned long long v13;  // [bp-0xf8]
    char v14;  // [bp-0xf0]
    int v15;  // [bp-0xd8]
    int v16;  // [bp-0xc8]
    int v17;  // [bp-0xb0]
    int v18;  // [bp-0x98]
    int v19;  // [bp-0x80]
    int v20;  // [bp-0x68]
    char v21;  // [bp-0x50]
    char v23;  // al
    unsigned long long v25;  // rdx
    unsigned long long v26;  // r13
    unsigned long long v27;  // r15
    unsigned long long v28;  // r13
    unsigned long long v29;  // r13
    unsigned long long v31;  // rax
    unsigned long long v32;  // rax

    if (a1 < *(a2))
        core::slice::index::slice_start_index_len_fail(v3, a1, &g_14d9c98); /* do not return */
    v3 = *(a2);
    fish::history::file::complete_lines(&v14, a0 + v3, a1 - v3);
    v8 = &g_15a9380;
    v7 = &g_15a9370;
    v6 = &g_15a9860;
    v23 = 0;
    while (true)
    {
        v9 = 0;
        memcpy(&v11, &v15, 16);
        v11 = v12;
        if (!(v23 & 1))
        {
            v11 = v14.next();
            v13 = v25;
        }
        v26 = v13;
        v27 = v11;
        if (!v27)
            return 0;
        if (!(char)core::slice::<impl [T]>::starts_with(v27, v26, " +-/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/fish-shell/crates/printf/src/printf_impl.rs0X0xassertion failed: c == '0' || c == ' '", 1) && !(char)core::slice::<impl [T]>::starts_with(v27, v26, "%---...- cmd: - cmd: - cmd:    when:ignoring corrupted history entry around offset%s: %d.%06d ms%s: ??? mssrc/history.rswrealpath failed to produce a canonical version of ''.", 1) && !(char)core::slice::<impl [T]>::starts_with(v27, v26, "---...- cmd: - cmd: - cmd:    when:ignoring corrupted history entry around offset%s: %d.%06d ms%s: ??? mssrc/history.rswrealpath failed to produce a canonical version of ''.", 3))
        {
            v28 = v26;
            if (!(char)core::slice::<impl [T]>::starts_with(v27, v28, "...- cmd: - cmd: - cmd:    when:ignoring corrupted history entry around offset%s: %d.%06d ms%s: ??? mssrc/history.rswrealpath failed to produce a canonical version of ''.", 3))
            {
                while (true)
                {
                    v29 = v28;
                    if (!(char)core::slice::<impl [T]>::starts_with(v27, v29, "- cmd: - cmd: - cmd:    when:ignoring corrupted history entry around offset%s: %d.%06d ms%s: ??? mssrc/history.rswrealpath failed to produce a canonical version of ''.", 14))
                        break;
                    v27 = core::slice::<impl [T]>::strip_prefix(v27, v29);
                    if (!v27)
                        core::option::unwrap_failed(&g_14d9c80); /* do not return */
                    v28 = v25;
                }
                if (!(char)core::slice::<impl [T]>::starts_with(v27, v29, "- cmd:    when:ignoring corrupted history entry around offset%s: %d.%06d ms%s: ??? mssrc/history.rswrealpath failed to produce a canonical version of ''.", 15))
                {
                    if (!(char)core::slice::<impl [T]>::starts_with(v27, v29, &g_9f6b7a, 1))
                    {
                        if ((char)core::slice::<impl [T]>::starts_with(v27, v29, "- cmd- when:%---...- cmd: - cmd: - cmd:    when:ignoring corrupted history entry around offset%s: %d.%06d ms%s: ??? mssrc/history.rswrealpath failed to produce a canonical version of ''.", 5) && a4 != 0x3b9aca00)
                        {
                            while (true)
                            {
                                v31 = v9.next_if();
                                if (!v31)
                                    break;
                                v32 = fish::history::file::parse_timestamp(v31, v25);
                                if ((unsigned int)v25 != 0x3b9aca00)
                                {
                                    if (v32 == v4)
                                    {
                                        if ((unsigned int)v25 <= a4)
                                            break;
                                        goto LABEL_13be8c0;
                                    }
                                    else
                                    {
                                        if (v32 <= v4)
                                            break;
                                        goto LABEL_13be8c0;
                                    }
                                }
                            }
                        }
                        if ((char)core::sync::atomic::atomic_load(&g_15a9860, 0))
                        {
                            v0 = 0;
                            v1 = 1;
                            v2 = 0;
                            v16.to_flog_str(&g_15a9850);
                            v21.into_iter(&v16);
                            v0.spec_extend(&v21);
                            v0.push(58, &g_14d9c50);
                            v0.push(32, &g_14d9c50);
                            v19.to_vec("ignoring corrupted history entry around offset%s: %d.%06d ms%s: ??? mssrc/history.rswrealpath failed to produce a canonical version of ''.", 46);
                            v21.into_iter(&v19);
                            v0.spec_extend(&v21);
                            v0.push(32, &g_14d9c50);
                            v20.to_vec(core::fmt::num::imp::<impl usize>::_fmt(v3, &v21, 20), a2);
                            v21.into_iter(&v20);
                            v0.spec_extend(&v21);
                            v0.push(10, &g_14d9c50);
                            fish::flog::flog_impl(1, 0);
LABEL_13be8a4:
                            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(0, 1);
                        }
                    }
                    else if ((char)core::sync::atomic::atomic_load(&g_15a9380, 0))
                    {
                        v0 = 0;
                        v1 = 1;
                        v2 = 0;
                        v16.to_flog_str(&g_15a9370);
                        v21.into_iter(&v16);
                        v0.spec_extend(&v21);
                        v0.push(58, &g_14d9c68);
                        v0.push(32, &g_14d9c68);
                        v17.to_vec("ignoring corrupted history entry around offset%s: %d.%06d ms%s: ??? mssrc/history.rswrealpath failed to produce a canonical version of ''.", 46);
                        v21.into_iter(&v17);
                        v0.spec_extend(&v21);
                        v0.push(32, &g_14d9c68);
                        v18.to_vec(core::fmt::num::imp::<impl usize>::_fmt(v3, &v21, 20), a2);
                        v21.into_iter(&v18);
                        v0.spec_extend(&v21);
                        v0.push(10, &g_14d9c68);
                        fish::flog::flog_impl(1, 0);
                        goto LABEL_13be8a4;
                    }
                }
            }
        }
LABEL_13be8c0:
        v23 = (char)v9;
    }
    v10 = 0;
    memcpy(&v11, &v15, 16);
    if (!((char)v10 & 1))
        v12 = v14.next();
    if (v12)
        a1 = fish::history::file::offset_of_next_item_fish_2_0::offset(v5, v12);
    *(a2) = a1;
    fish::history::file::offset_of_next_item_fish_2_0::offset(v5, v27);
    return 1;
}
