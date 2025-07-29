long long uu_split::n_chunks_by_line_round_robin(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4)
{
    unsigned long long v0;  // [bp-0xa0]
    void* v1;  // [bp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x98]
    void* v3;  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x88]
    void* v5;  // [bp-0x80]
    unsigned long long v6;  // [bp-0x78]
    void* v7;  // [bp-0x70], Other Possible Types: unsigned long long
    char v8;  // [bp-0x60]
    int v9;  // [bp-0x5f]
    unsigned long long v10;  // [bp-0x58]
    unsigned long v11;  // [bp-0x50]
    void* v12;  // [bp-0x40]
    unsigned long long v13;  // [bp-0x38]
    unsigned long v15;  // r12
    void* v16;  // r15
    unsigned long v17;  // rdx
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax
    unsigned long v20;  // rdx
    void* v22;  // r13
    void* v23;  // r15
    unsigned long long v24;  // 4096
    unsigned long v26;  // rdx
    unsigned long long v28;  // rdx
    unsigned long v31;  // rdx

    v0 = std::io::stdio::stdout();
    v4 = v0.lock();
    v5 = 0;
    v6 = 8;
    v7 = 0;
    if (!a3)
    {
        v0.init(a2, a0, a0->field_a1);
        if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        {
            v5.drop_in_place<alloc::vec::Vec<uu_split::OutFile>>();
            core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v4);
            return v2;
        }
        v5.drop_in_place<alloc::vec::Vec<uu_split::OutFile>>();
        v5 = v0;
        v6 = v2;
        v7 = v3;
        if (a2)
        {
            v11 = a0->field_88;
            v22 = 0;
            v23 = 0;
            v24 = a1;
            while (true)
            {
                v1 = 0;
                v2 = 1;
                v3 = 0;
                if (v24.read_until(a0->field_a2, &v1))
                    break;
                if (!v26)
                    goto LABEL_4b30b4;
                v13 = 1;
                v12 = 0;
                v8.get_writer(&v5, (!(v22 | a2) >> 32 ? ((unsigned int)((0 CONCAT (unsigned int)v22) % (a2 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v22) / (a2 & 4294967295))) >> 32 : ((unsigned long long)((0 CONCAT v22) % a2) CONCAT (unsigned long long)((0 CONCAT v22) / a2)) >> 64), a0);
                v19 = *((long long *)&v8);
                if (!(!*((long long *)&v8)))
                    goto LABEL_4b308f;
                uu_split::custom_write_all(&v8, 1, 0, v10, v11);
                if (v8)
                {
                    v19 = v10.from();
                    goto LABEL_4b3089;
                }
                v23 += (char)v9 ^ 1;
                if (v23 == a2)
                    goto LABEL_4b30b4;
                ::0x4ad900::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v1);
                v22 += 1;
                v24 = a1;
            }
            goto LABEL_4b308f;
        }
        else
        {
            v1 = 0;
            v2 = 1;
            v3 = 0;
            if (!a1.read_until(a0->field_a2, &v1))
            {
                if (v31)
                    core::panicking::panic_const::panic_const_rem_by_zero(&g_5a6ff0); /* do not return */
LABEL_4b30b4:
                ::0x4ad900::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v1);
                v5.drop_in_place<alloc::vec::Vec<uu_split::OutFile>>();
                core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v4);
                return 0;
            }
        }
    }
    else if (a2)
    {
        v15 = a4 - 1;
        v16 = 0;
        while (true)
        {
            v1 = 0;
            v2 = 1;
            v3 = 0;
            if (a1.read_until(a0->field_a2, &v1))
                break;
            if (!v17)
                goto LABEL_4b30b4;
            if ((v16 | a2) >> 32)
            {
                if (!(((unsigned long long)((0 CONCAT v16) % a2) CONCAT (unsigned long long)((0 CONCAT v16) / a2)) >> 64 == v15))
                    goto LABEL_4b2e7b;
            }
            else
            {
                if (!(((unsigned int)((0 CONCAT (unsigned int)v16) % (a2 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v16) / (a2 & 4294967295))) >> 32 == v15))
                    goto LABEL_4b2e7b;
            }
            v18 = v4.write_all(1, 0);
            if (v18)
            {
                v19 = v18.from();
                goto LABEL_4b3089;
            }
LABEL_4b2e7b:
            ::0x4ad900::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v1);
            v16 += 1;
        }
        goto LABEL_4b3089;
    }
    else
    {
        v1 = 0;
        v2 = 1;
        v3 = 0;
        if (!a1.read_until(a0->field_a2, &v1))
        {
            if (v20)
                core::panicking::panic_const::panic_const_rem_by_zero(&g_5a6fd8); /* do not return */
            goto LABEL_4b30b4;
        }
    }
    v19 = v28.from();
LABEL_4b3089:
LABEL_4b308f:
    ::0x4ad900::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v1);
    v5.drop_in_place<alloc::vec::Vec<uu_split::OutFile>>();
    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v4);
    return v19;
}
