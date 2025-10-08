long long fish::env::environment_impl::EnvStackImpl::set(struct struct_0 *a0[12], unsigned long long a1, unsigned long long a2, unsigned int a3, struct_1 *a4)
{
    unsigned int v0;  // [bp-0xbc]
    struct_0 *v1;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned int v2;  // [bp-0xb0]
    unsigned int v3;  // [bp-0xac]
    unsigned long v4;  // [bp-0xa8], Other Possible Types: unsigned long long
    char v5[12];  // [bp-0x94]
    char v6;  // [bp-0x93]
    char v7;  // [bp-0x92]
    char v8;  // [bp-0x91]
    char v9;  // [bp-0x90]
    char v10;  // [bp-0x8f]
    char v11;  // [bp-0x8e]
    char v12;  // [bp-0x8c]
    char v13;  // [bp-0x8b]
    int v14;  // [bp-0x88], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v15;  // [bp-0x80]
    char v16;  // [bp-0x78], Other Possible Types: unsigned long long, unsigned long
    uint128_t v17;  // [bp-0x70]
    unsigned long long v18;  // [bp-0x50]
    unsigned long long v19;  // [bp-0x48]
    unsigned long long v20;  // [bp-0x40]
    unsigned long long v21;  // [bp-0x38]
    struct_0 *v23;  // r13
    unsigned long v24;  // rbp
    char v25;  // bpl
    unsigned int v26;  // ebp
    char v27;  // bpl
    unsigned long long v28;  // r8
    char *v29;  // rcx
    struct_0 *v30;  // rdi
    unsigned long v32;  // r12
    unsigned long long v33;  // rax
    unsigned long long v34;  // rax
    char v35;  // r14b
    char v36;  // dl
    char v37;  // r13b
    char v38;  // bl

    v5.new(a3);
    if ((char)a0.try_set_electric(a1, a2, &v5, a4) != 5)
    {
        core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(a4);
        goto LABEL_1398d75;
    }
    v23 = a0[10];
    v4 = a0[11];
    (char)v14.find_variable(v23, a0[11], a1, a2);
    if (v14)
    {
        v24 = v16;
        core::ptr::drop_in_place<fish::env::var::EnvVar>(&(char)v14);
        v2 = (unsigned int)v24 & 255 & 0xffffff00 | (char)v24 & 1;
        v25 = (char)((v24 & 255) >> 2) & 1;
    }
    else
    {
        v25 = 2;
        v2 = 0;
    }
    v3 = (v10 ? v11 : 2);
    v26 = (!v12 ? v25 : v13);
    if (!v5)
    {
        v33 = v23.find_in_chain(a1, a2);
        v18 = v33;
        v21 = v33;
        if (v33)
        {
            v1 = v33;
            v16 = a4->field_10;
            *((uint128_t *)&v14) = a4->field_0;
            v33.set_in_node(a1, a2, &(char)v14, (char)v3 * 0x10000 | v26 * 0x100 | (char)v2);
            core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeRef>(&v1);
        }
        else
        {
            v34 = v4.find_in_chain(a1, a2);
            v19 = v34;
            v20 = v34;
            if (v34)
            {
                v1 = v34;
                v16 = a4->field_10;
                *((uint128_t *)&v14) = a4->field_0;
                v34.set_in_node(a1, a2, &(char)v14, (char)v3 * 0x10000 | v26 * 0x100 | (char)v2);
                v0 = 0;
                core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeRef>(&v1);
                v35 = 1;
            }
            else
            {
                v0 = 1;
                if (!_ZN4fish3env16environment_impl20UVAR_SCOPE_IS_GLOBAL17h1620f19708d430dbE.load())
                {
                    v37 = v36 & 1;
                    v4 = fish::env::environment_impl::uvars();
                    (char)v14.get(v4 + 8, a1, a2);
                    core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&(char)v14);
                    if (v14)
                    {
                        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v4, v37);
                        v16 = a4->field_10;
                        *((uint128_t *)&v14) = a4->field_0;
                        v0 = 0;
                        a1.set_universal(a2, &(char)v14, &v5);
                        v27 = 1;
                        goto LABEL_1398eb8;
                    }
                    else
                    {
                        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v4, v37);
                        v23 = a0[10];
                        v4 = a0[11];
                    }
                }
                v1 = v23.resolve_unspecified_scope(v4);
                v16 = a4->field_10;
                *((uint128_t *)&v14) = a4->field_0;
                v1.set_in_node(a1, a2, &(char)v14, (char)v3 * 0x10000 | v26 * 0x100 | (char)v2);
                v0 = 0;
                core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeRef>(&v1);
                v35 = v1 == v4;
LABEL_1398eb8:
                if (v19)
                    core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeRef>(&v19);
            }
            if (v18)
                core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeRef>(&v18);
        }
    }
    else if (!v9)
    {
        if (!v8)
            goto LABEL_1398ab5;
LABEL_1398b97:
        v16 = a4->field_10;
        *((uint128_t *)&v14) = a4->field_0;
        v28 = (char)v3 * 0x10000 | v26 * 0x100 | (char)v2;
        v29 = &(char)v14;
        v30 = v4;
LABEL_1398bd2:
        v30.set_in_node(a1, a2, v29, v28);
        goto LABEL_1398d75;
    }
    else if (_ZN4fish3env16environment_impl20UVAR_SCOPE_IS_GLOBAL17h1620f19708d430dbE.load())
    {
        if (v8 || _ZN4fish3env16environment_impl20UVAR_SCOPE_IS_GLOBAL17h1620f19708d430dbE.load())
            goto LABEL_1398b97;
LABEL_1398ab5:
        if (!v6)
        {
            if (!v7)
            {
                v14 = &g_14d6c00;
                v15 = 1;
                v16 = 8;
                v17 = 0;
                core::panicking::panic_fmt(&v14, &g_14d6c10); /* do not return */
            }
            if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(v23) + 1, 0, (unsigned long long)(char)(v7 < 0))))
            {
                v1 = v23;
                while (true)
                {
                    v32 = v23.next();
                    if (!v32)
                        break;
                    core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeRef>(&v1);
                    v23 = v32;
                    if (*((long long *)(v32 + 16)) >= 9223372036854775807)
                        core::cell::panic_already_mutably_borrowed(&g_14d6c28); /* do not return */
                    *((long long *)(v32 + 16)) = *((long long *)(v32 + 16)) + 1;
                    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v32 + 16);
                    v1 = v23;
                    if (*((char *)(v32 + 88)))
                        break;
                    v1 = v23;
                }
                v16 = a4->field_10;
                *((uint128_t *)&v14) = a4->field_0;
                v1.set_in_node(a1, a2, &(char)v14, (char)v3 * 0x10000 | v26 * 0x100 | (char)v2);
                core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeRef>(&v1);
            }
            else
            {
                [D] Unsupported jumpkind Ijk_NoDecode at address 20549478()
            }
LABEL_1398d75:
        }
        else if (v23 != v4)
        {
            v16 = a4->field_10;
            *((uint128_t *)&v14) = a4->field_0;
            v28 = (char)v3 * 0x10000 | v26 * 0x100 | (char)v2;
            v29 = &(char)v14;
            v30 = v23;
            goto LABEL_1398bd2;
        }
        else
        {
            v14 = &g_14d6bf0;
            v14 = &g_14d6bf0;
            v15 = 1;
            v16 = 8;
            v17 = 0;
            core::panicking::panic_fmt(&v14, &g_14d6c40); /* do not return */
        }
    }
    else
    {
        v16 = a4->field_10;
        *((uint128_t *)&v14) = a4->field_0;
        a1.set_universal(a2, &(char)v14, &v5);
        v27 = 1;
    }
    return v35 | v27 * 0x100 | v38 * 0x10000;
}
