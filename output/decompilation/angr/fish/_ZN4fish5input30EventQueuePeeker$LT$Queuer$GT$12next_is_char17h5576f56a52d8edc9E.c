long long fish::input::EventQueuePeeker<Queuer>::next_is_char(struct_0 *a0, unsigned int a1, unsigned long a2, char a3)
{
    int v0;  // [sp-0x178], Other Possible Types: void*, char
    int v1;  // [bp-0x178], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x170]
    char *v3;  // [sp-0x168], Other Possible Types: void*, unsigned long, unsigned long long
    void* v4;  // [sp-0x158]
    char v5;  // [bp-0x158]
    char v6;  // [bp-0x158]
    int v7;  // [bp-0x158]
    unsigned long long v8;  // [sp-0x150]
    void* v9;  // [sp-0x148], Other Possible Types: unsigned long long
    unsigned long v10;  // [bp-0x140]
    char v11;  // [bp-0x13c]
    char v12;  // [bp-0x13b]
    char v13;  // [bp-0x13a]
    char v14;  // [bp-0x139]
    char *v15;  // [bp-0x138], Other Possible Types: char, unsigned long long
    int v16;  // [bp-0x138]
    unsigned long long v17;  // [sp-0x130]
    int v18;  // [sp-0x128], Other Possible Types: char *, char, unsigned long, unsigned long long
    char *v19;  // [bp-0x128]
    int v20;  // [sp-0x120], Other Possible Types: unsigned long long
    int v21;  // [sp-0x118], Other Possible Types: void*, char *, char
    void* v22;  // [bp-0x118]
    unsigned long long v23;  // [bp-0x110]
    int v24;  // [sp-0x108], Other Possible Types: unsigned long long
    int v25;  // [bp-0x108]
    unsigned long long v26;  // [bp-0x100]
    int v27;  // [sp-0xf8], Other Possible Types: char *, unsigned long long
    unsigned long long v28;  // [bp-0xf0]
    int v29;  // [bp-0xe8], Other Possible Types: void*, char
    void* v30;  // [bp-0xd8], Other Possible Types: unsigned long
    unsigned long long v31;  // [bp-0xd0]
    void* v32;  // [bp-0xc8]
    char v33;  // [bp-0xc0]
    char v34;  // [bp-0xa8]
    char v35;  // [bp-0x90]
    char v36;  // [bp-0x78]
    char v37;  // [bp-0x60]
    char v38;  // [bp-0x48]
    unsigned long v40;  // rsi
    unsigned long v41;  // r14
    unsigned long v42;  // rax
    unsigned long long v43;  // rax
    unsigned long long v44;  // rax
    int v45;  // xmm0
    int v46;  // xmm0
    int v47;  // xmm1
    unsigned long long v48;  // rcx
    unsigned long long v49[3];  // r13
    unsigned long long v50;  // r12
    unsigned long v51;  // r15
    unsigned long v52;  // r14
    unsigned long v53;  // rax
    unsigned long v54;  // cc_ndep
    unsigned long long v55;  // rax
    unsigned long long v56;  // rax
    unsigned long v57;  // cc_dep1
    unsigned long v58;  // rcx
    unsigned long v59;  // cc_ndep
    unsigned long v60;  // rax
    unsigned long long v61;  // rax

    v10 = a2;
    v40 = a0->field_10;
    v41 = a0->field_20;
    if (v41 > v40)
    {
        v15 = &g_14daaf0;
        v17 = 1;
        v18 = 8;
        *((uint128_t *)&v20) = 0;
        core::panicking::panic_fmt(&v15, &g_14dabc0); /* do not return */
    }
    if (a3)
    {
        v43 = v42 & 0xffffffffffffff00 | 4;
        if (a0->field_30)
            return v42 & 0xffffffffffffff00 | 4;
        if (v41 == v40)
        {
            if ((char)core::sync::atomic::atomic_load(&g_15a99b0, 0))
            {
                v4 = 0;
                v8 = 1;
                v9 = 0;
                v0.to_flog_str(&g_15a99a0);
                v15.into_iter(&v0);
                v4.spec_extend(&v15);
                v4.push(58, &g_14dabf0);
                v4.push(32, &g_14dabf0);
                v33.to_vec("reading timed escapematched escape prefix in raw escape sequencematched delayed escape prefix in alt sequencelegacy binding matched prefix of key encoding but did not consume all of ittorn sequence, rearranging eventsEvents left on the queue - missing rest", 20);
                v15.into_iter(&v33);
                v4.spec_extend(&v15);
                v4.push(10, &g_14dabf0);
                fish::flog::flog_impl(v8, 0);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v4, v8);
            }
            v15.readch_timed_esc(a0->field_18);
            v44 = 9223372036854775812;
            if (v15 == 9223372036854775812)
                goto LABEL_13c6785;
LABEL_13c645a:
            v45 = *((int128_t *)&v15);
            memcpy(&v29, &v21, 16);
            *((int128_t *)&v27) = *((int128_t *)&v18);
            v24 = v45;
            if ((char)core::sync::atomic::atomic_load(&g_15a99b0, 0))
            {
                v30 = 0;
                v31 = 1;
                v32 = 0;
                v1.to_flog_str(&g_15a99a0);
                v15.into_iter(&v1);
                v30.spec_extend(&v15);
                v30.push(58, &g_14dac08);
                v30.push(32, &g_14dac08);
                *((char **)&v7) = &(char)v24;
                v8 = <fish::input_common::CharEvent as core::fmt::Debug>::fmt;
                v15 = &g_14dab60;
                v17 = 1;
                v22 = 0;
                v19 = &(unsigned long long)v7;
                v20 = 1;
                v1.map_or_else(&v15);
                *((int128_t *)&v7) = *((int128_t *)&v1);
                v9 = v3;
                v15.clone(&(unsigned long long)v7);
                v3 = v19;
                memcpy(&v1, &v15, 16);
                v15.into_iter(&v1);
                v30.spec_extend(&v15);
                core::ptr::drop_in_place<alloc::string::String>(&(unsigned long long)v7);
                v30.push(10, &g_14dac08);
                fish::flog::flog_impl(v31, 0);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v30, v31);
            }
            v46 = (int128_t)v24;
            v47 = (int128_t)v27;
            v21 = v29;
            v18 = v47;
            v16 = v46;
            v43 = a0.push(&(unsigned long long)v16, &g_14dac20);
            v40 = a0->field_10;
            v41 = a0->field_20;
        }
LABEL_13c678e:
        if (v41 >= v40)
            core::panicking::panic_bounds_check(v41, v40, &g_14dac38); /* do not return */
        v48 = v41 * 48;
        if (*((long long *)(a0->field_8 + v48)) < 9223372036854775812)
            return v43 & 0xffffffffffffff00 | 4;
        v49 = a0->field_8 + v48;
        v50 = v49[1];
        v51 = v49[2];
        v44 = v50.equal(v51, &g_551074, 1);
        if ((char)v44 && !v11 && (v12 & 1) && !v13 && !(v14 & 1))
        {
            a0->field_20 = v41 + 1;
            a0->field_28 = 0;
            if ((char)core::sync::atomic::atomic_load(&g_15a99b0, 0))
            {
                v0 = 0;
                v2 = 1;
                v3 = 0;
                v24.to_flog_str(&g_15a99a0);
                v15.into_iter(&v24);
                v0.spec_extend(&v15);
                v0.push(58, &g_14dad70);
                v0.push(32, &g_14dad70);
                v35.to_vec("matched delayed escape prefix in alt sequencelegacy binding matched prefix of key encoding but did not consume all of ittorn sequence, rearranging eventsEvents left on the queue - missing restart or consume?-- ", 45);
                v15.into_iter(&v35);
                v0.spec_extend(&v15);
                v0.push(10, &g_14dad70);
                fish::flog::flog_impl(1, 0);
                goto LABEL_13c6ea2;
            }
        }
        else
        {
            if (!(char)a1)
            {
                v5 = fish::input_common::match_key_event_to_key(v49 + 1, &(char)v10);
                if (v5 == 4)
                {
                    return v5 & 0xffffffffffffff00 | 4;
                }
                else if (!a0->field_28)
                {
                    a0->field_20 = v41 + 1;
                    if (!(char)core::sync::atomic::atomic_load(&g_15a99b0, 0))
                        return v5;
                    v0 = 0;
                    v2 = 1;
                    v3 = 0;
                    v24.to_flog_str(&g_15a99a0);
                    v15.into_iter(&v24);
                    v0.spec_extend(&v15);
                    v0.push(58, &g_14dac50);
                    v0.push(32, &g_14dac50);
                    v36.to_vec("matched full key", 16);
                    v15.into_iter(&v36);
                    v0.spec_extend(&v15);
                    v0.push(32, &g_14dac50);
                    v15.spec_to_string(&(char)v10);
                    v27 = v19;
                    memcpy(&v24, &v15, 16);
                    v15.into_iter(&v24);
                    v0.spec_extend(&v15);
                    v0.push(32, &g_14dac50);
                    v37.to_vec("kindDiskchtsorhikSAVkcpykcrt", 4);
                    v15.into_iter(&v37);
                    v0.spec_extend(&v15);
                    v0.push(32, &g_14dac50);
                    v24.to_flog_str(&v5);
                    v15.into_iter(&v24);
                    v0.spec_extend(&v15);
                    v0.push(10, &g_14dac50);
                    fish::flog::flog_impl(v2, 0);
                    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v2);
                    return v6;
                }
                else
                {
                    core::panicking::panic("assertion failed: self.subidx == 0adding peeked matched char  with offset  within raw sequence of length  against raw escape sequence", 34, &g_14dac68); /* do not return */
                }
            }
            if (v51)
            {
                if (a0->field_28 >= v51)
                    core::panicking::panic_bounds_check(a0->field_28, v51, &g_14dac80); /* do not return */
                v52 = &a0->field_28;
                v15 = *((int *)(v50 + a0->field_28 * 4)).from_single_char();
                v44 = v15.eq(&(char)v10);
                if ((char)v44)
                {
                    v53 = *((long long *)v52) + 1;
                    if ((char)_ccall(4, 24, *((long long *)v52) + 1, 0, _ccall(17, v44 & 255, 0, v54)))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14dad28); /* do not return */
                    *((unsigned long *)v52) = v53;
                    if (v53 == v51)
                    {
                        if (!((char)_ccall(4, 24, a0->field_20 + 1, 0, (unsigned long long)(char)(v53 < v51))))
                        {
                            a0->field_20 = a0->field_20 + 1;
                            a0->field_28 = 0;
                        }
                        else
                        {
                            core::panicking::panic_const::panic_const_add_overflow(&g_14dad40); /* do not return */
                        }
                    }
                    v55 = (unsigned long long)core::sync::atomic::atomic_load(&g_15a99b0, 0);
                    if (!(char)v55)
                        return v55 & 0xffffffffffffff00 | 3;
                    v4 = 0;
                    v8 = 1;
                    v9 = 0;
                    v24.to_flog_str(&g_15a99a0);
                    v15.into_iter(&v24);
                    v4.spec_extend(&v15);
                    v4.push(58, &g_14dad58);
                    v4.push(32, &g_14dad58);
                    v30 = v51;
                    v15 = &(char)v10;
                    v17 = <fish::key::Key as core::fmt::Display>::fmt;
                    v18 = v52;
                    v20 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
                    v21 = &v30;
                    v23 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
                    *((unsigned long long **)&v25) = &g_14dab70;
                    v26 = 3;
                    v29 = 0;
                    v27 = &v15;
                    v28 = 3;
                    v1.map_or_else(&(unsigned long long)v25);
                    *((int128_t *)&v25) = *((int128_t *)&v1);
                    v27 = v3;
                    v15.clone(&(unsigned long long)v25);
                    v3 = v18;
                    *((int128_t *)&v0) = *((int128_t *)&v15);
                    v15.into_iter(&v1);
                    v4.spec_extend(&v15);
                    core::ptr::drop_in_place<alloc::string::String>(&(unsigned long long)v25);
                    v4.push(10, &g_14dad58);
                    fish::flog::flog_impl(1, 0);
                    goto LABEL_13c6b24;
                }
                if (*((int *)(v50 + a0->field_28 * 4)) == 27)
                {
                    v56 = v44 & 0xffffffffffffff00 | 4;
                    if (v11)
                        return v56;
                    if (!(v12 & 1))
                        return v56;
                    if ((v13 & 1))
                        return v56;
                    v57 = v14 & 1;
                    if ((v14 & 1))
                        return v56;
                    v58 = *((long long *)v52) + 1;
                    if ((char)_ccall(4, 24, *((long long *)v52) + 1, 0, _ccall(17, v57, 0, v59)))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14dac98); /* do not return */
                    if (v58 == v51)
                    {
                        if ((char)_ccall(4, 24, a0->field_20 + 1, 0, (unsigned long long)(char)(v58 < v51)))
                            core::panicking::panic_const::panic_const_add_overflow(&g_14dacf8); /* do not return */
                        a0->field_20 = a0->field_20 + 1;
                        a0->field_28 = 0;
                        if (!(char)core::sync::atomic::atomic_load(&g_15a99b0, 0))
                            return a0.next_is_char(a1, (unsigned int)v10, 1);
                        v0 = 0;
                        v2 = 1;
                        v3 = 0;
                        v24.to_flog_str(&g_15a99a0);
                        v15.into_iter(&v24);
                        v0.spec_extend(&v15);
                        v0.push(58, &g_14dad10);
                        v0.push(32, &g_14dad10);
                        v38.to_vec("matched escape prefix in raw escape sequencematched delayed escape prefix in alt sequencelegacy binding matched prefix of key encoding but did not consume all of ittorn sequence, rearranging eventsEvents left on the queue - missing restart or consume?-- ", 44);
                        v15.into_iter(&v38);
                        v0.spec_extend(&v15);
                        v0.push(10, &g_14dad10);
                        fish::flog::flog_impl(1, 0);
LABEL_13c6ea2:
                        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(0, 1);
                        return a0.next_is_char(a1, (unsigned int)v10, 1);
                    }
                    else
                    {
                        if (!((char)_ccall(2, 8, v58, v51, _ccall(17, v57, 0, v59))))
                            return v56;
                        v44 = *((int *)(v50 + v58 * 4)).from_single_char();
                        if ((unsigned int)v44 != 0x110000)
                        {
                            if ((int)v10 != (unsigned int)v44)
                                return v44 & 0xffffffffffffff00 | 4;
                            v60 = *((long long *)v52) + 2;
                            if ((char)__CFADD__(*((long long *)v52), 2))
                                core::panicking::panic_const::panic_const_add_overflow(&g_14dacb0); /* do not return */
                            *((unsigned long *)v52) = v60;
                            if (v60 == v51)
                            {
                                if (!((char)_ccall(4, 24, a0->field_20 + 1, 0, (unsigned long long)(char)(v60 < v51))))
                                {
                                    a0->field_20 = a0->field_20 + 1;
                                    a0->field_28 = 0;
                                }
                                else
                                {
                                    core::panicking::panic_const::panic_const_add_overflow(&g_14dacc8); /* do not return */
                                }
                            }
                            v61 = (unsigned long long)core::sync::atomic::atomic_load(&g_15a99b0, 0);
                            if (!(char)v61)
                                return v61 & 0xffffffffffffff00 | 3;
                            v4 = 0;
                            v8 = 1;
                            v9 = 0;
                            v24.to_flog_str(&g_15a99a0);
                            v15.into_iter(&v24);
                            v4.spec_extend(&v15);
                            v4.push(58, &g_14dace0);
                            v4.push(32, &g_14dace0);
                            *((char **)&v1) = &(char)v10;
                            v2 = <fish::key::Key as core::fmt::Display>::fmt;
                            v15 = &g_14daba0;
                            v17 = 2;
                            v21 = 0;
                            v18 = &(unsigned long long)v1;
                            v20 = 1;
                            v24.map_or_else(&v15);
                            *((int128_t *)&v1) = (int128_t)v24;
                            v3 = v27;
                            v15.clone(&(unsigned long long)v1);
                            v27 = v18;
                            *((int128_t *)&v25) = *((int128_t *)&v15);
                            v15.into_iter(&v24);
                            v4.spec_extend(&v15);
                            core::ptr::drop_in_place<alloc::string::String>(&(unsigned long long)v1);
                            v4.push(10, &g_14dace0);
                            fish::flog::flog_impl(1, 0);
LABEL_13c6b24:
                            return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<i8>>(0, 1) & 0xffffffffffffff00 | 3;
                        }
                    }
                }
            }
        }
    }
    else
    {
        if (v41 != v40)
            goto LABEL_13c678e;
        if ((char)core::sync::atomic::atomic_load(&g_15a99b0, 0))
        {
            v4 = 0;
            v8 = 1;
            v9 = 0;
            (char)v1.to_flog_str(&g_15a99a0);
            v15.into_iter(&(char)v1);
            v4.spec_extend(&v15);
            v4.push(58, &g_14dabd8);
            v4.push(32, &g_14dabd8);
            v34.to_vec("readch timed sequence keyreading timed escapematched escape prefix in raw escape sequencematched delayed escape prefix in alt sequencelegacy binding matched prefix of key encoding but did not consume all of ittorn sequence, rearranging eventsEvents left on", 25);
            v15.into_iter(&v34);
            v4.spec_extend(&v15);
            v4.push(10, &g_14dabd8);
            fish::flog::flog_impl(v8, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v4, v8);
        }
        v15.readch_timed_sequence_key(a0->field_18);
        v44 = 9223372036854775812;
        if (v15 != 9223372036854775812)
            goto LABEL_13c645a;
LABEL_13c6785:
        a0->field_30 = 1;
    }
    return v44 & 0xffffffffffffff00 | 4;
}
