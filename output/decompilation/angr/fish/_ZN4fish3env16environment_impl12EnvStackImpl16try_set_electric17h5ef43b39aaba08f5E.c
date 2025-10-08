long long fish::env::environment_impl::EnvStackImpl::try_set_electric(struct_1 *a0, unsigned long long a1, unsigned long long a2, char a3[12], void* a4)
{
    unsigned long v0;  // [bp-0x90]
    int v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    int v3;  // [bp-0x78]
    void* v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    uint128_t v8;  // [bp-0x48]
    struct_3 *v10;  // rax
    unsigned long v11;  // rcx
    unsigned long long v12;  // rcx
    unsigned long long v13;  // r13
    struct_2 *v14;  // rax
    struct_0 *v15;  // rdi
    unsigned int v16;  // eax
    unsigned long v17;  // rcx

    v10 = a1.for_name(a2);
    if (!v10)
    {
        v12 = v17 & 0xffffffffffffff00 | 5;
    }
    else if (a3[0])
    {
        v12 = v11 & 0xffffffffffffff00 | 2;
        if (a3[3])
            goto LABEL_139990e;
    }
    else
    {
LABEL_139990e:
        if (a3[11])
        {
            v12 = v12 & 0xffffffffffffff00 | 1;
            if (!(v10->field_10 & 1))
                goto LABEL_139991d;
        }
        else
        {
LABEL_139991d:
            if (a3[5])
            {
                v12 = 2;
                if (a3[6 + ((v10->field_10 & 4) < 1)])
                    goto LABEL_139993b;
            }
            else
            {
LABEL_139993b:
                v13 = a1 + a2 * 4;
                if (a1.eq_by(v13, "umask", &g_a16015))
                    return fish::env::environment_impl::set_umask((long long)a4[8], (long long)a4[16]);
                if (!a1.eq_by(v13, "PWDsrc/env/environment.rsCDPATH", "src/env/environment.rsCDPATH"))
                {
                    v4 = (long long)a4[16];
                    *((int128_t *)&v3) = *((int128_t *)a4);
                    *((unsigned long long *)a4) = 0;
                    *((unsigned long long *)&a4[8]) = 8;
                    *((unsigned long long *)&a4[16]) = 0;
                    v16 = v10->field_10 >> 2 & 1;
                    *((long long *)&a0->padding_18[56]).set_in_node(a1, a2, &v3, v16 * 0x10000 | v16);
                    v12 = 0;
                }
                else if ((long long)a4[16] == 1)
                {
                    *((unsigned long long *)&a4[16]) = 0;
                    v14 = (long long)a4[8];
                    if ((char)(((0 ^ v14->field_0) & (0 ^ -(v14->field_0))) >> 63))
                        core::option::unwrap_failed(&g_14d6d50); /* do not return */
                    v0 = v14->field_0;
                    *((int128_t *)&v1) = *((int128_t *)&(&v14->field_0)[1]);
                    if ((char)(long long)v1.eq(v2, a0->field_0[1], a0->field_8))
                    {
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
                        v12 = 0;
                    }
                    else
                    {
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a0);
                        a0->field_8 = v2;
                        *((int128_t *)&a0->field_0[0]) = *((int128_t *)&v0);
                        v15 = *((long long *)&a0->padding_18[56]);
                        if (v15->field_10)
                            core::cell::panic_already_borrowed(&g_14d6d68); /* do not return */
                        v15->field_10 = 18446744073709551615;
                        v15 + 1.changed_exported();
                        core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(&v15->field_10);
                        v12 = 0;
                    }
                }
                else
                {
                    v5 = &g_14d6d40;
                    v6 = 1;
                    v7 = 8;
                    v8 = 0;
                    core::panicking::panic_fmt(&v5, &g_14d6d80); /* do not return */
                }
            }
        }
    }
    return v12 & 4294967295;
}
