long long fish::event::fire_internal(unsigned long long a0, struct_0 *a1)
{
    void* v0;  // [bp-0x238]
    unsigned long long v1;  // [bp-0x230]
    void* v2;  // [bp-0x228]
    struct_2 *v3;  // [bp-0x218]
    unsigned int v4;  // [bp-0x20c]
    int v5;  // [bp-0x208], Other Possible Types: char
    void* v6;  // [bp-0x1f0], Other Possible Types: char, unsigned long
    unsigned long long v7;  // [bp-0x1e8]
    void* v8;  // [bp-0x1e0], Other Possible Types: struct_0 *
    int v9;  // [bp-0x1b8]
    unsigned long long v10;  // [bp-0x1b0]
    struct_0 *v11;  // [bp-0x1a8]
    unsigned long v12;  // [bp-0x1a0]
    unsigned long long v13;  // [bp-0x198]
    unsigned long long v14[3];  // [bp-0x190]
    unsigned long long v15;  // [bp-0x188]
    unsigned long long v16[3];  // [bp-0x180]
    unsigned long v17;  // [bp-0x178]
    struct_0 *v18;  // [bp-0x170]
    unsigned long long v19;  // [bp-0x168]
    unsigned long v20;  // [bp-0x160]
    unsigned long long v21;  // [bp-0x158]
    void* v22;  // [bp-0x150]
    char v23;  // [bp-0x148]
    int v24;  // [bp-0x128]
    char v25;  // [bp-0x118]
    unsigned long long v26;  // [bp-0x108]
    char v27;  // [bp-0x100]
    int v28;  // [bp-0xe8], Other Possible Types: char
    char v29;  // [bp-0xd8]
    char v30;  // [bp-0xc8]
    char v31;  // [bp-0xb0]
    char v32;  // [bp-0x98]
    char v33;  // [bp-0x80]
    char v34;  // [bp-0x58]
    unsigned long long v36[4];  // rax
    unsigned long long v37[4];  // r15
    char v38;  // dl
    struct_2 *v39;  // rax
    unsigned long v40;  // r14
    unsigned long v41;  // rcx
    unsigned long long v42[3];  // rbp
    unsigned long long v43;  // rax
    void* v44;  // rdx
    unsigned long long v45;  // rax

    v20 = a0 + 64;
    v33.scoped_mod(a0 + 64);
    v6.lock();
    v36 = v6.expect(&g_14d7840);
    v37 = v36;
    v6 = v36[2];
    v7 = v36[2] + v37[3] * 8;
    v8 = a1;
    v27.collect(&v6);
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v37, v38 & 1);
    v23.into_iter(&v27);
    if (v23.next())
    {
        v40 = a1->field_10;
        v41 = (!v40 ? 0 : 24);
        v16[0] = a1->field_8;
        v14[0] = &a1->field_8->padding_0[v41];
        v12 = a1 + 1;
        v15 = v41 - v40 * 24;
        v19 = &g_15a94a0;
        v13 = &g_15a9490;
        do
        {
            v3 = v39;
            if (!(char)core::sync::atomic::atomic_load((char *)&v39[1].field_18 + 4, 0))
            {
                v4 = 0;
                v18 = a1;
                fish::builtins::fish_indent::fish_indent::{{closure}}(&v6, v39->field_18, v39->field_20);
                v11 = v8;
                *((int128_t *)&v9) = *((int128_t *)&v6);
                v17 = v40;
                if (v40)
                {
                    do
                    {
                        v42 = v14;
                        (char)v9.push(32);
                        fish::common::escape(&v6, v16[1], v16[2]);
                        (char)v9.spec_extend(v7, v7 + v8 * 4);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
                        v14 = v42 + 1;
                        v15 += 24;
                        v16 = v42;
                    } while (v15 != 24);
                }
                v34.scoped_mod(v20);
                v28.get_last_statuses(a0);
                memcpy(&v25, &v29, 16);
                v24 = v28;
                v26 = a0;
                if ((char)core::sync::atomic::atomic_load(&g_15a94a0, 0))
                {
                    v0 = 0;
                    v1 = 1;
                    v2 = 0;
                    v5.to_flog_str(&g_15a9490);
                    v6.into_iter(&v5);
                    v0.spec_extend(&v6);
                    v0.push(58, &g_14d7858);
                    v0.push(32, &g_14d7858);
                    v30.to_vec("Firing event '' to handler 'Mutex poisoned!Mutex poisonedEvent %ls\nExecuted job %d from command '%ls'src/exec.rs", 14);
                    v6.into_iter(&v30);
                    v0.spec_extend(&v6);
                    v0.push(32, &g_14d7858);
                    v43 = v12.str_param1();
                    if (!v43)
                        v44 = 0;
                    if (!v43)
                        v43 = 4;
                    v21 = v43;
                    v22 = v44;
                    v5.to_flog_str(&v21);
                    v6.into_iter(&v5);
                    v0.spec_extend(&v6);
                    v0.push(32, &g_14d7858);
                    v31.to_vec("' to handler 'Mutex poisoned!Mutex poisonedEvent %ls\nExecuted job %d from command '%ls'src/exec.rs", 14);
                    v6.into_iter(&v31);
                    v0.spec_extend(&v6);
                    v0.push(32, &g_14d7858);
                    v5.to_flog_str(&v39->padding_0[16]);
                    v6.into_iter(&v5);
                    v0.spec_extend(&v6);
                    v0.push(32, &g_14d7858);
                    v32.to_vec("'exit handler for process exit handler for job ", 1);
                    v6.into_iter(&v32);
                    v0.spec_extend(&v6);
                    v0.push(10, &g_14d7858);
                    fish::flog::flog_impl(v1, 0);
                    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
                }
                v6.clone(v18);
                v5.event_block(&v6);
                v45 = a0.push_block(&v5);
                v6 = 0;
                v7 = 8;
                v8 = 0;
                v5.eval(a0, v10, v11, &v6);
                core::ptr::drop_in_place<fish::io::IoChain>(&v6);
                a0.pop_block(v45);
                core::sync::atomic::atomic_store((char *)&v39[1].field_18 + 5, 1, 0);
                goto (long long)(g_9f3ce4[v39->field_28] + (char *)&g_9f3ce4[0]);
            }
            core::ptr::drop_in_place<alloc::sync::Arc<fish::event::EventHandler>>(&v3);
            v39 = v23.next();
        } while (v39);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::sync::Arc<fish::event::EventHandler>>>(&v23);
    return core::ptr::drop_in_place<fish::common::ScopeGuard<&fish::common::ScopedCell<fish::parser::ScopedData>,fish::common::ScopedCell<fish::parser::ScopedData>::scoped_mod<fish::reader::reader_read::{{closure}}>::{{closure}}>>(&v33);
}
