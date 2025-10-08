long long fish::exec::exec_process_in_job(unsigned long long a0, void* a1, unsigned long long a2, struct_0 *a3, unsigned int a4, unsigned int a5, unsigned long long a6, char a7)
{
    unsigned int v0;  // [bp-0xf8]
    unsigned int v1;  // [bp-0xf4]
    unsigned int v2;  // [bp-0xec]
    int v3;  // [bp-0xe8]
    unsigned long v4;  // [bp-0xd8]
    unsigned long long v5;  // [bp-0xc8]
    int v6;  // [bp-0xc8]
    void* v7;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0xb8], Other Possible Types: unsigned int
    unsigned short v9;  // [bp-0xb4], Other Possible Types: unsigned int
    unsigned long long v10;  // [bp-0xb0], Other Possible Types: char
    unsigned long v11;  // [bp-0xa8]
    void* v12;  // [bp-0xa0]
    void* v13;  // [bp-0x90]
    unsigned long long v14;  // [bp-0x80]
    char *v15;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v16;  // [bp-0x68]
    unsigned int v17;  // [bp-0x60]
    void* v18;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v19;  // [bp-0x48]
    struct_0 *v20;  // [bp-0x40]
    unsigned long v21;  // [bp-0x38]
    unsigned long long v22;  // [bp-0x30]
    unsigned long long v23;  // [bp-0x28]
    unsigned long long v24;  // r12
    unsigned long long v25;  // rbx
    unsigned int v26;  // eax
    unsigned int v27;  // eax
    char v28;  // al
    unsigned int v29;  // eax
    unsigned int *v31;  // rax
    struct_1 *v33;  // rax
    unsigned long long v34;  // rdx
    unsigned long long v35;  // rbp
    void* v36;  // r13

    v23 = v24;
    v22 = v25;
    v14 = a2;
    v0 = v26 & 0xffffff00 | 1;
    v1 = v0 & 0xffffff00 | 1;
    v2 = a5;
    v20 = a3;
    fish::trace::trace_if_enabled_with_args(a0, 4, 0, (long long)a1[80], (long long)a1[88]);
    v4 = a3->field_10;
    *((uint128_t *)&v3) = a3->field_0;
    v27 = (unsigned int)a3->field_10 & 0xffffff00 | 1;
    v1 = v27;
    if (a5 != -1)
    {
        v5 = 1;
        v7 = 1;
        v8 = a5;
        v9 = (int)a1[208];
        v10 = 0;
        v0 = (int)a1[208] & 0xffffff00 | 1;
        v1 = 0;
        v1 = 0;
        v27 = v3.push(v5.new(), &g_14d7e98);
    }
    v0 = v27 & 0xffffff00 | 1;
    v21 = a0 + 472;
    v5.get_pwd_slash(a0 + 472);
    v28 = v3.append_from_specs(a1 + 96, v7, *((long long *)&v8));
    v29 = (unsigned int)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v5);
    if (v28)
    {
        if (a4 != -1)
        {
            v5 = 1;
            v7 = 1;
            v8 = a4;
            v9 = 0;
            v10 = 1;
            v0 = 0;
            v0 = 0;
            v3.push(v5.new(), &g_14d7e98);
        }
        else
        {
            v0 = a4 & 0xffffff00 | 1;
        }
        *((unsigned long long *)&v6) = 1;
        v7 = 0;
        v8 = 2;
        v10 = a6;
        v11 = a6 + 4;
        v12 = 0;
        v13 = 0;
        while (true)
        {
            v31 = (unsigned long long)v6.next();
            if (!v31)
                break;
            v15 = 1;
            v16 = 1;
            v17 = *(v31);
            v3.push(v15.new(), &g_14d7f38);
        }
        if (*((int *)a1) != 3)
        {
            v33 = a0.libdata_mut();
            if ((char)_ccall(4, 24, v33->field_58 + 1, 0, (unsigned long long)(char)(*((int *)a1) < 3)))
                core::panicking::panic_const::panic_const_add_overflow(&g_14d7ed8); /* do not return */
            v33->field_58 = v33->field_58 + 1;
            core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v34);
        }
        v18 = 0;
        if ((long long)a1[40])
        {
            v9 = 13;
            *((uint128_t *)&v6) = 0;
            v8 = 0;
            v18 = 1;
            v19 = a0.push_block(&(unsigned long long)v6);
            v15 = &v18;
            v16 = a0;
            if ((long long)a1[40])
            {
                v35 = (long long)a1[32];
                v36 = 0;
                do
                {
                    (unsigned long long)v6.clone(*((long long *)(32 + v35 + (char *)v36)), *((long long *)(40 + v35 + (char *)v36)));
                    v21.set(*((long long *)(8 + v35 + (char *)v36)), *((long long *)(16 + v35 + (char *)v36)), 17, &(unsigned long long)v6);
                    v36 += 48;
                } while ((long long)a1[40] * 48 != v36);
            }
        }
        else
        {
            v15 = &v18;
            v16 = a0;
        }
        a1.check_generations_before_launch();
        goto (long long)(g_9f3da0[*((long long *)a1)] + (char *)&g_9f3da0[0]);
    }
    else
    {
        v0 = v29 & 0xffffff00 | 1;
        core::ptr::drop_in_place<fish::io::IoChain>(&v3);
        if (a4 != -1 && (char)v0)
            core::ptr::drop_in_place<std::os::fd::owned::OwnedFd>(a4);
        if (a5 == -1 || !(char)v1)
            return 1;
        core::ptr::drop_in_place<std::os::fd::owned::OwnedFd>(a5);
        return 1;
    }
}
