long long fish::env::environment_impl::EnvStackImpl::remove(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned int a4)
{
    char v0[12];  // [bp-0x6c]
    char v1;  // [bp-0x6b]
    char v2;  // [bp-0x6a]
    char v3;  // [bp-0x69]
    char v4;  // [bp-0x68]
    char v5;  // [bp-0x61]
    struct_0 *v6;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x58]
    unsigned long long v8;  // [bp-0x50]
    uint128_t v9;  // [bp-0x48]
    char v11;  // bl
    unsigned long long v12;  // rax
    char v13;  // al
    char v14;  // dl
    char v15;  // al
    struct_0 *v16;  // r15
    unsigned long long v17;  // rax
    char v18;  // al
    char v19;  // dl
    char v21;  // bpl

    v0.new(a4);
    if (v5 && (char)fish::env::var::is_read_only(a2, a3))
    {
        v11 = 2;
        goto LABEL_13990fb;
    }
    if (v0)
    {
        if (v4)
        {
            v12 = fish::env::environment_impl::uvars();
            v13 = v12 + 8.remove(a2, a3);
            core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v12, v14 & 1);
            v11 = (v13 ^ 1) * 4;
            v21 = 1;
        }
        else
        {
            if (v3)
            {
                fish::env::environment_impl::EnvStackImpl::remove::remove_from_chain(a1, a2, a3);
                return 1 | v21 * 0x100 | v11 * 0x10000;
            }
            if (v1)
            {
                fish::env::environment_impl::EnvStackImpl::remove::remove_from_chain(a0, a2, a3);
            }
            else if (!v2)
            {
                v6 = &g_14d6c00;
                v7 = 1;
                v8 = 8;
                v9 = 0;
                core::panicking::panic_fmt(&v6, &g_14d6c58); /* do not return */
            }
            else if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(a0) + 1, 0, (unsigned long long)(char)(v2 < 0))))
            {
                v6 = a0;
                while (true)
                {
                    v16 = a0.next();
                    if (!v16)
                        break;
                    core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeRef>(&v6);
                    a0 = v16;
                    if (v16->field_10 >= 9223372036854775807)
                        core::cell::panic_already_mutably_borrowed(&g_14d6c70); /* do not return */
                    v16->field_10 = v16->field_10 + 1;
                    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(&v16->field_10);
                    v6 = a0;
                    if (v16->field_58)
                        break;
                    v6 = a0;
                }
                fish::env::environment_impl::EnvStackImpl::remove::remove_from_chain(v6, a2, a3);
                core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeRef>(&v6);
            }
            else
            {
                [D] Unsupported jumpkind Ijk_NoDecode at address 20550232()
            }
LABEL_13990fb:
        }
    }
    else
    {
        if ((char)a0.remove_from_chain(a2, a3))
        {
            goto LABEL_13990fb;
        }
        else
        {
            if ((char)a1.remove_from_chain(a2, a3))
                return 1 | v21 * 0x100 | v11 * 0x10000;
            v17 = fish::env::environment_impl::uvars();
            v18 = v17 + 8.remove(a2, a3);
            core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v17, v19 & 1);
            v11 = (v18 ^ 1) * 4;
        }
    }
    return v15 | v21 * 0x100 | v11 * 0x10000;
}
