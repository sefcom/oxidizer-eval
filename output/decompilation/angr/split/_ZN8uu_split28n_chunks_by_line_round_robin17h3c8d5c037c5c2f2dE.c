long long uu_split::n_chunks_by_line_round_robin(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4)
{
    void* v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    void* v2;  // [bp-0x90], Other Possible Types: unsigned long long
    void* v3;  // [bp-0x80]
    unsigned long long v4;  // [bp-0x78]
    void* v5;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x68]
    unsigned int v7;  // [bp-0x5c]
    char v8;  // [bp-0x58]
    int v9;  // [bp-0x57]
    unsigned long long v10;  // [bp-0x50]
    unsigned long v11;  // [bp-0x48]
    void* v12;  // [bp-0x38]
    unsigned long v14;  // r13
    void* v15;  // r12
    unsigned long v16;  // rdx
    unsigned long long v17;  // r15
    unsigned long long v18;  // rax
    unsigned long v19;  // rdx
    void* v20;  // rbp
    char *v21;  // r12
    void* v22;  // rbx
    unsigned long v23;  // rdx
    unsigned long long v26;  // rdx
    unsigned long v28;  // rdx
    unsigned long long v30;  // r12

    v0 = std::io::stdio::stdout();
    v6 = v0.lock();
    v3 = 0;
    v4 = 8;
    v5 = 0;
    if (!a3)
    {
        v0.init(a2, a0, a0->field_a1);
        if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        {
            v3.drop_in_place<alloc::vec::Vec<uu_split::OutFile>>();
            core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v6);
            return v30;
        }
        v3.drop_in_place<alloc::vec::Vec<uu_split::OutFile>>();
        v3 = v0;
        v4 = v1;
        v5 = v2;
        if (a2)
        {
            v11 = a0->field_88;
            v20 = 0;
            v7 = a0->field_a2;
            v21 = &v8;
            v22 = 0;
            while (true)
            {
                v0 = 0;
                v17 = 1;
                v2 = 0;
                if (((char)a1.read_until(v7, &v0) & 1))
                    break;
                if (!v23)
                    goto LABEL_471864;
                v12 = 0;
                v21.get_writer(&v3, (!(v20 | a2) >> 32 ? ((unsigned int)((0 CONCAT (unsigned int)v20) % (a2 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v20) / (a2 & 4294967295))) >> 32 : ((unsigned long long)((0 CONCAT v20) % a2) CONCAT (unsigned long long)((0 CONCAT v20) / a2)) >> 64), a0);
                v30 = *((long long *)&v8);
                if (*((long long *)&v8))
                    goto LABEL_471893;
                uu_split::custom_write_all(v21, v17, 0, v10, v11);
                if (v8 == 1)
                {
                    v30 = v10.from();
LABEL_47188d:
LABEL_471893:
                    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(0, v17);
                    v3.drop_in_place<alloc::vec::Vec<uu_split::OutFile>>();
                    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v6);
                    return v30;
                }
                v22 += (char)v9 ^ 1;
                if (v22 == a2)
                    goto LABEL_471864;
                v20 += 1;
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(0, v17);
            }
        }
        else
        {
            v0 = 0;
            v17 = 1;
            v2 = 0;
            if (!((char)a1.read_until(v7, &v0) & 1))
            {
                if (v28)
                    core::panicking::panic_const::panic_const_rem_by_zero(&g_50b0a8); /* do not return */
LABEL_471864:
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(0, v17);
                v3.drop_in_place<alloc::vec::Vec<uu_split::OutFile>>();
                core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v6);
                return 0;
            }
        }
    }
    else if (a2)
    {
        v14 = a4 - 1;
        v15 = 0;
        while (true)
        {
            v0 = 0;
            v17 = 1;
            v2 = 0;
            if (((char)a1.read_until(a0->field_a2, &v0) & 1))
                break;
            if (!v16)
                goto LABEL_471864;
            v17 = v17;
            if ((v15 | a2) >> 32)
            {
                if (((unsigned long long)((0 CONCAT v15) % a2) CONCAT (unsigned long long)((0 CONCAT v15) / a2)) >> 64 != v14)
                    goto LABEL_4715b0;
            }
            else
            {
                if (((unsigned int)((0 CONCAT (unsigned int)v15) % (a2 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v15) / (a2 & 4294967295))) >> 32 != v14)
                    goto LABEL_4715b0;
            }
            v18 = v6.write_all(v17, 0);
            if (!v18)
            {
LABEL_4715b0:
                v15 += 1;
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(0, v17);
            }
            else
            {
                v30 = v18.from();
                goto LABEL_47188d;
            }
        }
    }
    else
    {
        v0 = 0;
        v17 = 1;
        v2 = 0;
        if (!((char)a1.read_until(a0->field_a2, &v0) & 1))
        {
            if (v19)
                core::panicking::panic_const::panic_const_rem_by_zero(&g_50b090); /* do not return */
            goto LABEL_471864;
        }
    }
    v30 = v26.from();
    goto LABEL_471893;
}
