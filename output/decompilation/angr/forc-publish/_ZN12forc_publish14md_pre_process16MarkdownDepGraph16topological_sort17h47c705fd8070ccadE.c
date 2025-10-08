void forc_publish::md_pre_process::MarkdownDepGraph::topological_sort(unsigned long long *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x160]
    unsigned long long v1;  // [bp-0x158]
    int v2;  // [bp-0x150]
    unsigned long long v3;  // [bp-0x140]
    int v4;  // [bp-0x138], Other Possible Types: char
    unsigned long long v5;  // [bp-0x130]
    unsigned long long v6;  // [bp-0x128]
    unsigned long long v7;  // [bp-0x118]
    int v8;  // [bp-0x118]
    int v9;  // [bp-0x118]
    int v10;  // [bp-0x110]
    int v11;  // [bp-0x108]
    unsigned long long v12;  // [bp-0xf8]
    struct_1 *v13;  // [bp-0xf0]
    void* v14;  // [bp-0xe8]
    unsigned long long v15;  // [bp-0xe0]
    void* v16;  // [bp-0xd8]
    unsigned long long v18;  // [bp-0xd0]
    unsigned long long v19;  // [bp-0xc8]
    unsigned long long v20;  // [bp-0xc0]
    int v21;  // [bp-0xb8]
    int v22;  // [bp-0xb8]
    int v23;  // [bp-0xb8]
    int v24;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v25;  // [bp-0xa8]
    unsigned long long v26;  // [bp-0x98]
    int v27;  // [bp-0x88]
    int v28;  // [bp-0x78]
    unsigned long v29;  // [bp-0x70]
    unsigned long long v30;  // [bp-0x68]
    unsigned long long v31;  // [bp-0x60]
    int v32;  // [bp-0x58], Other Possible Types: char
    unsigned long long v33;  // [bp-0x48]
    unsigned long long v35;  // rax
    int v36;  // ymm0
    int v37;  // ymm0, Other Possible Types: uint256_t
    unsigned long long v38;  // rdx
    unsigned long long v39[3];  // rax
    unsigned long long v40;  // r14
    uint256_t v41;  // ymm0
    uint256_t v42;  // ymm0
    unsigned long long v43[3];  // rax
    uint256_t v44;  // ymm0
    unsigned int *v45;  // rax
    void* v46;  // r13
    unsigned long long v47;  // rax
    unsigned long long v48[3];  // r14
    struct_0 *v49;  // rax
    unsigned int v50;  // 4096
    unsigned long long *v51;  // r14
    unsigned long long v52;  // rbx

    v35 = std::thread::local::LocalKey<T>::with();
    *((uint128_t *)&v27) = g_1253140;
    v37 = (v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | g_1253140) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | g_1253150;
    *((uint128_t *)&v28) = g_1253150;
    v30 = v35;
    v31 = v38;
    v32.iter(a1);
    if (v32.next())
    {
        v40 = v38;
        do
        {
            v22 = v21;
            v0.clone(v39[1], v39[2]);
            v24 = (long long)v2;
            v41 = v37 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v0);
            memcpy(&v22, &v0, 16);
            v0.rustc_entry(&v27, &v22);
            if (v0 == 0x8000000000000000)
            {
                v42 = v41 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v1);
                *((int128_t *)&v10) = *((int128_t *)&v1);
                v7 = 0x8000000000000000;
            }
            else
            {
                v12 = v3;
                v42 = v41 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v0);
                v11 = v2;
                *((int128_t *)&v8) = *((int128_t *)&v0);
            }
            v7.or_insert();
            v0.iter(v40);
            v26 = v3;
            v37 = v42 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v0);
            v24 = v2;
            memcpy(&v22, &v0, 16);
            if (v22.next())
            {
                do
                {
                    v0.clone(v43[1], v43[2]);
                    v6 = (long long)v2;
                    v44 = v37 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v0);
                    memcpy(&v4, &v0, 16);
                    v0.rustc_entry(&v27, &v4);
                    if (v0 == 0x8000000000000000)
                    {
                        v37 = v44 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v1);
                        *((int128_t *)&v10) = *((int128_t *)&v1);
                        v7 = 0x8000000000000000;
                    }
                    else
                    {
                        v12 = v3;
                        v37 = v44 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v0);
                        v11 = v2;
                        *((int128_t *)&v9) = *((int128_t *)&v0);
                    }
                    v45 = v7.or_insert();
                    *(v45) = *(v45) + 1;
                    v43 = v22.next();
                } while (v43);
            }
            v39 = v32.next();
            v40 = v38;
            v21 = v23;
        } while (v39);
    }
    v0.iter(&v27);
    v7.collect(&v0);
    v14 = 0;
    v15 = 8;
    v16 = 0;
    (char)v18.pop_front(&v7);
    if (v18 == 0x8000000000000000)
    {
        v46 = 0;
    }
    else
    {
        v46 = 0;
        do
        {
            v6 = v20;
            *((int128_t *)&v4) = *((int128_t *)&v18);
            v0.clone(v5, v20);
            v24 = (long long)v2;
            memcpy(&v22, &v0, 16);
            v14.push(&v21);
            v47 = a1.get_inner(&(char)v4);
            if (v47)
            {
                v0.iter(v47 + 24);
                while (true)
                {
                    v48 = v0.next();
                    if (!v48)
                        break;
                    v49 = v27.get_inner_mut(v48);
                    if (!v49)
                        core::option::unwrap_failed(&g_1253f10); /* do not return */
                    v50 = v49->field_18;
                    v49->field_18 = v49->field_18 - 1;
                    if (v50 == 1)
                    {
                        v21.clone(v48[1], v48[2]);
                        v33 = v25;
                        v32 = v23;
                        v7.push_back(&v32);
                    }
                }
            }
            v46 += 1;
            core::ptr::drop_in_place<std::path::PathBuf>((long long)v4, v5);
            (char)v18.pop_front(&v7);
        } while (v18 != 0x8000000000000000);
    }
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(0x8000000000000000, v19);
    if (v46 == v29)
    {
        v51 = a0;
        *((unsigned long long *)((char *)&v13->field_8 + 8)) = 0;
        *((int128_t *)&(&v13->padding_0)[1]) = *((int128_t *)&v14);
        v52 = 6;
    }
    else
    {
        core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v14);
        v52 = 3;
        v51 = a0;
    }
    core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<std::path::PathBuf>>(&v7);
    core::ptr::drop_in_place<std::collections::hash::map::HashMap<std::path::PathBuf,i32>>(&v27);
    *(v51) = v52;
    return;
}
