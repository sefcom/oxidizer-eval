long long fish::proc::process_mark_finished_children(unsigned long long *a0, unsigned int a1)
{
    struct_11 **v0;  // [sp-0x180], Other Possible Types: struct_4 **, unsigned long
    void* v1;  // [bp-0x178]
    unsigned long long v2;  // [sp-0x170]
    void* v3;  // [sp-0x168]
    unsigned long v4;  // [sp-0x160], Other Possible Types: unsigned long long
    char v5;  // [bp-0x158]
    char v6;  // [bp-0x158]
    int v7;  // [bp-0x158]
    int v8;  // [bp-0x158]
    char v9;  // [bp-0x158]
    int v10;  // [bp-0x158]
    unsigned long v11;  // [bp-0x150], Other Possible Types: unsigned long long
    int v12;  // [bp-0x150]
    void* v13;  // [sp-0x148]
    void* v14;  // [bp-0x148]
    void* v15;  // [bp-0x130]
    unsigned long long v16;  // [sp-0x128]
    void* v17;  // [sp-0x120]
    unsigned long v18;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned long long v19;  // [sp-0x110]
    unsigned long long *v20;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned int v21;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned int v22;  // [bp-0xf4]
    void* v23;  // [bp-0xf0]
    char v24;  // [bp-0xf0]
    char v25;  // [bp-0xf0]
    unsigned long long v26;  // [bp-0xe8]
    int v27;  // [bp-0xe8]
    void* v28;  // [bp-0xe0]
    unsigned int v29;  // [bp-0xd0]
    unsigned int v30;  // [bp-0xcc]
    int v31;  // [bp-0xc8]
    unsigned long long v32;  // [bp-0xc0]
    unsigned long long v33;  // [bp-0xb8]
    unsigned long v34;  // [bp-0xa8]
    unsigned long long v35;  // [bp-0xa0]
    int v36;  // [bp-0x98]
    int v37;  // [sp-0x98], Other Possible Types: char, unsigned long long
    int v38;  // [bp-0x98]
    char v39;  // [bp-0x88]
    unsigned short v40;  // [bp-0x78]
    int v41;  // [bp-0x78]
    unsigned long v42;  // [bp-0x70]
    char v43;  // [bp-0x68]
    char v44;  // [bp-0x58], Other Possible Types: unsigned short
    unsigned long long v45;  // [sp-0x50], Other Possible Types: unsigned long
    unsigned long long v46;  // [bp-0x48]
    unsigned long v47;  // [bp-0x38]
    struct_9 *v49;  // rax
    unsigned long long v50;  // rdx
    struct_8 **v51;  // rbp
    unsigned long v52;  // rax
    unsigned long long v53[7];  // rcx
    unsigned long v54;  // rax
    unsigned long v55;  // r13
    void* v56;  // rbx
    unsigned long v57;  // r12
    unsigned long v58;  // r12
    unsigned long long v59;  // rax
    unsigned long long v60;  // rax
    struct_12 *v61;  // rax
    struct_11 **v62;  // rdx
    unsigned long v63;  // rax
    struct_7 *v64;  // r12
    struct_7 *v65;  // r14
    void* v66;  // r15
    unsigned long v67;  // rbp
    unsigned int *v68;  // rax
    unsigned int v69;  // eax
    struct_7 *v70;  // r12
    unsigned int v71;  // ebx
    unsigned int *v72;  // rax
    unsigned int *v74;  // rax
    unsigned long long v75;  // rcx
    unsigned long long v76;  // rdx
    unsigned int v77;  // eax
    struct_5 *v80;  // rax
    struct_4 **v81;  // rbx
    unsigned long v82;  // rax
    struct_4 *v83;  // rcx
    unsigned long v84;  // r14
    unsigned long long v85;  // rbp
    unsigned long long v86;  // rbp
    struct_3 *v87;  // r12
    unsigned int v88;  // eax
    unsigned int v89;  // eax

    v21 = a1;
    *((uint128_t *)&v31) = 340282366920938463463374607431768211455;
    v33 = 18446744073709551615;
    v20 = a0;
    v49 = a0.jobs();
    v4 = v50;
    if (v49->field_10)
    {
        v51 = v49->field_8;
        v18 = &v51[v49->field_10];
        v52 = v51 + 1;
        do
        {
            v0 = v52;
            v53 = *(v51);
            v54 = v53[6];
            if (v53[6])
            {
                v55 = v53[5];
                v56 = 0;
                do
                {
                    if ((char)*(v51)->padding_0[16].can_reap((unsigned int)v56 + (unsigned int)v55))
                    {
                        if (v56 + v55 + 144.get())
                        {
                            v57 = v56 + v55 + 120;
                            (char)v31.set_min_from(1, v57);
                            (char)v31.set_min_from(0, v57);
                        }
                        if (*((long long *)(152 + v55 + (char *)v56)) >= 9223372036854775807)
                            core::cell::panic_already_mutably_borrowed(&g_14df788); /* do not return */
                        *((long long *)(152 + v55 + (char *)v56)) = *((long long *)(152 + v55 + (char *)v56)) + 1;
                        core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v56 + v55 + 152);
                        if (*((long long *)(160 + v55 + (char *)v56)))
                        {
                            v58 = v56 + v55 + 120;
                            (char)v31.set_min_from(2, v58);
                            (char)v31.set_min_from(0, v58);
                        }
                    }
                    v56 += 224;
                } while (v54 * 224 != v56);
            }
            v51 = v0;
            v52 = &v51[v51 != v18];
        } while (v51 != v18);
    }
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v4);
    v59 = fish::topic_monitor::topic_monitor_principal();
    v60 = v59.check(&(char)v31, (char)v21);
    if (!(char)v60)
        return v60;
    v61 = v20.jobs();
    v19 = v50;
    if (v61->field_10)
    {
        v62 = v61->field_8;
        v21 = &v62[v61->field_10];
        v63 = v62 + 1;
        v18 = &g_15a96b0;
        v64 = &v37;
        do
        {
            v4 = v63;
            v0 = v62;
            v34 = *(v62)->field_28;
            v35 = *(v62)->field_30 * 224 + *(v62)->field_28;
            while (true)
            {
                v65 = v64;
                v66 = v34.find();
                if (!v66)
                    break;
                v64 = v65;
                if ((char)*(v0)->padding_0[16].can_reap((unsigned int)v66))
                {
                    *((long long *)&v66[120]) = (long long)v31;
                    v64 = v65;
                    if ((long long)v66[128] != v32)
                    {
                        *((unsigned long long *)&v66[128]) = v32;
                        v22 = 4294967295;
                        v67 = v66 + 144;
                        v68 = v67.get();
                        if (!v68)
                            core::option::unwrap_failed(&g_14df6b0); /* do not return */
                        v69 = waitpid(*(v68), &v22, 11);
                        v70 = v65;
                        if (v69 < 0)
                        {
                            v37 = &g_14c74d8;
                            v70->field_8 = 1;
                            v70->field_10 = 8;
                            *((uint128_t *)&(&v70->field_10)[1]) = 0;
                            core::panicking::panic_fmt(v70, &g_14c74e8); /* do not return */
                        }
                        v64 = v70;
                        if (v69)
                        {
                            v71 = v69;
                            v72 = v67.get();
                            if (!v72)
                                core::option::unwrap_failed(&g_14df6c8); /* do not return */
                            if (v71 != *(v72))
                            {
                                v37 = &g_14df628;
                                v70->field_8 = 1;
                                v70->field_10 = 8;
                                *((uint128_t *)&(&v70->field_10)[1]) = 0;
                                core::panicking::panic_fmt(v70, &g_14df6e0); /* do not return */
                            }
                            v29 = 1;
                            v30 = v22;
                            fish::proc::handle_child_status(&*(v0)->padding_0[16], v66, 1, v30);
                            if (v30 == 127)
                                *(v0)->padding_0[16].group().set_is_foreground(0);
                            if (v30 == 65535)
                            {
                                *((char *)(*(v0)->padding_0[16].mut_flags() + 1)) = 0;
                                core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v50);
                            }
                            else if (!((char)v30 & 127))
                            {
                                goto LABEL_13f41c2;
                            }
                            if ((char)v29.signal_exited())
                            {
LABEL_13f41c2:
                                v64 = v65;
                                if ((char)core::sync::atomic::atomic_load(v18, 0))
                                {
                                    v15 = 0;
                                    v16 = 1;
                                    v17 = 0;
                                    v5.to_flog_str(&g_15a96a0);
                                    v64.into_iter(&v5);
                                    v15.spec_extend(v64);
                                    v15.push(58, &g_14df758);
                                    v15.push(32, &g_14df758);
                                    v1 = 0;
                                    v2 = 4;
                                    v3 = 0;
                                    if (!(long long)v66[88])
                                        core::option::unwrap_failed(&g_14df770); /* do not return */
                                    *((int128_t *)&v27) = *((int128_t *)((long long)v66[80] + 8));
                                    v24 = 1;
                                    v11 = v71;
                                    *((unsigned short *)&v7) = 8197;
                                    v47 = (long long)v66[168];
                                    v77 = v47.status_value();
                                    memcpy(&v39, &v27, 16);
                                    memcpy(&v36, &v24, 16);
                                    memcpy(&v43, &v14, 16);
                                    *((int128_t *)&v41) = (int128_t)v7;
                                    v44 = 8197;
                                    v45 = v77;
                                    fish_printf::printf_impl::sprintf_locale(&(unsigned short)v7, &v1, "Reaped external process '%ls' (pid %d, status %d)External process '%ls' (pid %d, %s)Reaped internal process '%ls' (id %llu, status %d)stoppedcontinuedassertion failed: status.stopped() || status.continued()", 49, v64, 3);
                                    (unsigned short)v7.unwrap(&g_14df758);
                                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(v64);
                                    *((int128_t *)&v8) = *((int128_t *)&v1);
                                    v14 = 0;
                                    v24.to_flog_str(&(unsigned short)v7);
                                    v64.into_iter(&v24);
                                    v15.spec_extend(v64);
                                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(unsigned short)v7);
                                    v15.push(10, &g_14df758);
                                    fish::flog::flog_impl(v16, 0);
                                    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v15, v16);
                                    v36 = v37;
                                }
                            }
                            else if (!(v30 != 127 & v30 != 65535))
                            {
                                v64 = v65;
                                if ((char)core::sync::atomic::atomic_load(v18, 0))
                                {
                                    v1 = 0;
                                    v2 = 1;
                                    v3 = 0;
                                    v5.to_flog_str(&g_15a96a0);
                                    v64.into_iter(&v5);
                                    v1.spec_extend(v64);
                                    v1.push(58, &g_14df6f8);
                                    v1.push(32, &g_14df6f8);
                                    v23 = 0;
                                    v26 = 4;
                                    v28 = 0;
                                    if (!(long long)v66[88])
                                        core::option::unwrap_failed(&g_14df710); /* do not return */
                                    *((int128_t *)&v12) = *((int128_t *)((long long)v66[80] + 8));
                                    v6 = 1;
                                    v74 = v67.get();
                                    if (!v74)
                                        core::option::unwrap_failed(&g_14df728); /* do not return */
                                    v75 = 9;
                                    v76 = "continuedassertion failed: status.stopped() || status.continued()";
                                    if (((char)v66[168] & 1))
                                    {
                                        v75 = ((int)v66[172] != 127) * 2 + 7;
                                        v76 = ((int)v66[172] == 127 ? "stoppedcontinuedassertion failed: status.stopped() || status.continued()" : "continuedassertion failed: status.stopped() || status.continued()");
                                    }
                                    memcpy(&v39, &v14, 16);
                                    memcpy(&v36, &v6, 16);
                                    v40 = 8197;
                                    v42 = *(v74);
                                    v44 = 0;
                                    v45 = v76;
                                    v46 = v75;
                                    fish_printf::printf_impl::sprintf_locale(&(unsigned short)v7, &v23, "External process '%ls' (pid %d, %s)Reaped internal process '%ls' (id %llu, status %d)stoppedcontinuedassertion failed: status.stopped() || status.continued()", 35, v64, 3);
                                    (unsigned short)v7.unwrap(&g_14df6f8);
                                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(v64);
                                    *((int128_t *)&v7) = *((int128_t *)&v23);
                                    v14 = 0;
                                    v23.to_flog_str(&(unsigned short)v7);
                                    v64.into_iter(&v23);
                                    v1.spec_extend(v64);
                                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(unsigned short)v7);
                                    v1.push(10, &g_14df6f8);
                                    fish::flog::flog_impl(v2, 0);
                                    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v2);
                                    v36 = v37;
                                }
                            }
                            else
                            {
                                core::panicking::panic("assertion failed: status.stopped() || status.continued()", 56, &g_14df740); /* do not return */
                            }
                        }
                    }
                }
            }
            v64 = v65;
            v62 = v4;
            v63 = &v62[v62 != v21];
        } while (v62 != v21);
    }
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v19);
    v80 = v20.jobs();
    v20 = v50;
    if (v80->field_10)
    {
        v81 = v80->field_8;
        v21 = &v81[v80->field_10];
        v82 = v81 + 1;
        v19 = &g_14df698;
        v4 = &g_15a9680;
        do
        {
            v18 = v82;
            v0 = v81;
            v83 = *(v81);
            if (v83->field_30)
            {
                v84 = &v83->field_28->field_98;
                v85 = v83->field_30 * 224;
                do
                {
                    v86 = v85;
                    if (*((long long *)v84) >= 9223372036854775807)
                        core::cell::panic_already_mutably_borrowed(0x14df698); /* do not return */
                    *((long long *)v84) = *((long long *)v84) + 1;
                    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v84);
                    if (*((long long *)(v84 + 8)))
                    {
                        v87 = v84 - 152;
                        if ((char)*(v0)->padding_0[16].can_reap((unsigned int)v87))
                        {
                            *((long long *)(v84 - 32)) = (long long)v31;
                            if (*((long long *)(v84 - 16)) != v33)
                            {
                                *((unsigned long long *)(v84 - 16)) = v33;
                                if (*((long long *)v84) >= 9223372036854775807)
                                {
                                    v19 = &g_14df680;
                                    v19 = &g_14df680;
                                    core::cell::panic_already_mutably_borrowed(&g_14df680); /* do not return */
                                }
                                *((long long *)v84) = *((long long *)v84) + 1;
                                if (!*((long long *)(v84 + 8)))
                                    core::option::unwrap_failed(&g_14df638); /* do not return */
                                v37 = v36;
                                if (*((long long *)(v84 + 8)) + 16.exited())
                                {
                                    v88 = *((long long *)(v84 + 8)) + 16.get_status();
                                    fish::proc::handle_child_status(&*(v0)->padding_0[16], v87, v88, (unsigned int)v50);
                                    v37 = v36;
                                    if ((char)core::sync::atomic::atomic_load(&g_15a9680, 0))
                                    {
                                        v15 = 0;
                                        v16 = 1;
                                        v17 = 0;
                                        v5.to_flog_str(&g_15a9670);
                                        v36.into_iter(&v5);
                                        v15.spec_extend(&v36);
                                        v15.push(58, &g_14df650);
                                        v15.push(32, &g_14df650);
                                        v1 = 0;
                                        v2 = 4;
                                        v3 = 0;
                                        if (!*((long long *)(v84 - 64)))
                                            core::option::unwrap_failed(&g_14df668); /* do not return */
                                        *((int128_t *)&v27) = *((int128_t *)(*((long long *)(v84 - 72)) + 8));
                                        v25 = 1;
                                        v11 = *((long long *)(*((long long *)(v84 + 8)) + 16));
                                        v9 = 4;
                                        v34 = *((long long *)(v84 + 16));
                                        v89 = v34.status_value();
                                        memcpy(&v39, &v27, 16);
                                        memcpy(&v36, &v24, 16);
                                        memcpy(&v43, &v14, 16);
                                        *((int128_t *)&v41) = (int128_t)v8;
                                        v44 = 8197;
                                        v45 = v89;
                                        fish_printf::printf_impl::sprintf_locale(&v9, &v1, "Reaped internal process '%ls' (id %llu, status %d)stoppedcontinuedassertion failed: status.stopped() || status.continued()", 50, &v37, 3);
                                        v9.unwrap(&g_14df650);
                                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v37);
                                        *((int128_t *)&v10) = *((int128_t *)&v1);
                                        v13 = 0;
                                        v25.to_flog_str(&v9);
                                        v37.into_iter(&v25);
                                        v15.spec_extend(&v37);
                                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v9);
                                        v15.push(10, &g_14df650);
                                        fish::flog::flog_impl(v16, 0);
                                        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v15, v16);
                                        v37 = v38;
                                    }
                                }
                                core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v84);
                            }
                        }
                    }
                    v84 += 224;
                    v85 = v86 - 224;
                } while (v86 != 224);
            }
            v81 = v18;
            v82 = &v81[v81 != v21];
        } while (v81 != v21);
    }
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v20);
    return fish::proc::reap_disowned_pids();
}
