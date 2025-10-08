void fish::input::EventQueuePeeker<Queuer>::find_mapping(unsigned long long *a0, struct_0 *a1, unsigned int a2, unsigned long long a3[6])
{
    unsigned long long v0;  // [bp-0x168]
    unsigned long long v1;  // [bp-0x160]
    void* v3;  // [bp-0x158]
    unsigned long long v4;  // [bp-0x150]
    void* v5;  // [bp-0x148]
    struct_1 *v6;  // [bp-0x140]
    unsigned long long v7;  // [bp-0x138]
    void* v8;  // [bp-0x130]
    unsigned long long v9;  // [bp-0x128]
    void* v10;  // [bp-0x120]
    void* v11;  // [bp-0x118]
    unsigned long v12;  // [bp-0x108]
    void* v13;  // [bp-0x100]
    unsigned long v14;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long *v15;  // [bp-0xf0], Other Possible Types: unsigned long long
    unsigned long long v16;  // [bp-0xe8]
    int v18;  // [bp-0xd8]
    int v19;  // [bp-0xc8]
    int v20;  // [bp-0xb8]
    int v21;  // [bp-0xa8]
    unsigned long v22;  // [bp-0x98]
    char v23;  // [bp-0x90]
    unsigned long long v24;  // [bp-0x88]
    unsigned long long v25;  // [bp-0x80]
    int v26;  // [bp-0x78]
    char v28;  // [bp-0x68]
    char v29;  // [bp-0x58]
    char v30;  // [bp-0x48]
    void* v32;  // rbx
    char *v33;  // r15
    void* v34;  // rax
    void* v35;  // r12
    char *v36;  // r14
    unsigned long long *v37;  // rax
    char v38;  // bpl
    unsigned long long v41;  // r13
    unsigned long long v42;  // r15
    int v43;  // xmm0
    int v44;  // xmm1
    int v45;  // xmm0
    int v46;  // xmm1

    fish::input::input_get_bind_mode(&v23, a2, &g_14c7518);
    v32 = &v28;
    v28.chain(a3[1], a3[2] * 104 + a3[1], a3[4], a3[5] * 104 + a3[4]);
    v3 = 0;
    v4 = 1;
    v5 = 0;
    v33 = &v29;
    v34 = core::iter::adapters::chain::and_then_or_clear(&v28).or_else(&v29);
    if (v34)
    {
        v35 = v34;
        v12 = &a1->field_20;
        v0 = 0x8000000000000000;
        do
        {
            if (!(char)(long long)v35[56].eq((long long)v35[64], v24, v25))
            {
LABEL_13c75c0:
                v35 = v32;
                continue;
            }
            if ((long long)v35[16])
            {
                v36 = v33;
                if (!(char)a1.try_peek_sequence((int)v35[100], (long long)v35[8], (long long)v35[16], &v3))
                {
                    v33 = v36;
                    v35 = v32;
                    goto LABEL_13c778e;
                }
                v37 = 4.alloc_impl(8, 0);
                if (!v37)
                    alloc::alloc::handle_alloc_error(4, 8); /* do not return */
                *(v37) = 62722;
                v14 = 1;
                v15 = v37;
                v16 = 1;
                v38 = (long long)v35[8].eq((long long)v35[16], v37, 1);
                core::ptr::drop_in_place<alloc::vec::Vec<fish::key::Key>>(&v14);
                v11 = 0;
                v7 = 1;
                v14 = 1;
                v15 = 1;
                if (!v38 && v14.all())
                {
                    v41 = v1;
                    v42 = v0;
                    v14.clone(v35);
                    v6->field_60 = v22;
                    *((void*)&v6->field_50) = v21;
                    *((void*)&v6->field_40) = v20;
                    v43 = *((int128_t *)&v14);
                    v44 = *((int128_t *)&v16);
                    *((void*)&v6->field_30) = v19;
                    *((void*)&v6->field_20) = v18;
                    *((void*)&v6->field_10) = v44;
                    *((void*)&v6->field_0) = v43;
                    goto LABEL_13c7976;
                }
                if (v0 != 0x8000000000000000)
                {
                    if (v38)
                    {
                        v35 = v32;
                        v33 = v36;
                        goto LABEL_13c778e;
                    }
                    else if (!(char)1.partial_cmp(0, v1, v13) >> 7 && !(char)1.partial_cmp(0, v1, v13) == 2)
                    {
                        v7 = 1;
                        v11 = 0;
                    }
                    else
                    {
                        v35 = v32;
                        v33 = v36;
LABEL_13c778e:
                        v5 = 0;
                        *((uint128_t *)v12) = 0;
                        continue;
                    }
                }
                v3 = 0;
                v4 = 1;
                *((int128_t *)&v26) = *((int128_t *)v12);
                core::ptr::drop_in_place<core::option::Option<fish::input::EventQueuePeeker<Queuer>::find_mapping::MatchedMapping>>(v0, v1);
                v13 = 0;
                v1 = 1;
                v0 = 0;
                v33 = v36;
                goto LABEL_13c778e;
            }
            else
            {
                if (v0 != 0x8000000000000000)
                    goto LABEL_13c75c0;
                *((int128_t *)&v26) = *((int128_t *)v12);
                core::ptr::drop_in_place<core::option::Option<fish::input::EventQueuePeeker<Queuer>::find_mapping::MatchedMapping>>(0x8000000000000000, v1);
                v1 = 1;
                v13 = 0;
                v0 = 0;
            }
            v32 = v35;
            v35 = core::iter::adapters::chain::and_then_or_clear(&v28).or_else(v33);
        } while (v35);
    }
    else
    {
        v0 = 0x8000000000000000;
    }
    v14 = a1->field_8;
    v15 = a1->field_10 * 48 + a1->field_8;
    if (v14.any())
    {
        v42 = v0;
        v41 = v1;
        if ((char)core::sync::atomic::atomic_load(&g_15a99b0, 0))
        {
            v8 = 0;
            v9 = 1;
            v10 = 0;
            v28.to_flog_str(&g_15a99a0);
            v14.into_iter(&v28);
            v8.spec_extend(&v14);
            v8.push(58, &g_14dadb8);
            v8.push(32, &g_14dadb8);
            v30.to_vec("torn sequence, rearranging eventsEvents left on the queue - missing restart or consume?-- ", 33);
            v14.into_iter(&v30);
            v8.spec_extend(&v14);
            v8.push(10, &g_14dadb8);
            fish::flog::flog_impl(v9, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v8, v9);
        }
        *(a0) = 0x8000000000000000;
LABEL_13c7976:
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(0, 1);
        core::ptr::drop_in_place<core::option::Option<fish::input::EventQueuePeeker<Queuer>::find_mapping::MatchedMapping>>(v42, v41);
    }
    else
    {
        if (v0 == 0x8000000000000000)
        {
            *(a0) = 0x8000000000000000;
        }
        else
        {
            *((void*)&a1->field_20) = v26;
            core::ptr::drop_in_place<fish::io::BufferElement>(v0, v1);
            v14.clone(v32);
            v6->field_60 = v22;
            *((void*)&v6->field_50) = v21;
            *((void*)&v6->field_40) = v20;
            v45 = *((int128_t *)&v14);
            v46 = *((int128_t *)&v16);
            *((void*)&v6->field_30) = v19;
            *((void*)&v6->field_20) = v18;
            *((void*)&v6->field_10) = v46;
            *((void*)&v6->field_0) = v45;
        }
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(0, 1);
    }
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v23);
    return;
}
