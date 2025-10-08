long long uu_split::n_chunks_by_byte(struct_0 *a0, unsigned long a1, unsigned long long a2[3], unsigned long a3, unsigned long a4)
{
    void* v0;  // [bp-0x158]
    unsigned long long v1;  // [bp-0x150]
    void* v2;  // [bp-0x148]
    unsigned long long v3;  // [bp-0x140]
    void* v4;  // [bp-0x138], Other Possible Types: char *, unsigned long long
    int v5;  // [bp-0x138]
    char *v6;  // [bp-0x130], Other Possible Types: unsigned long long [3], unsigned long long
    char *v7;  // [bp-0x128], Other Possible Types: unsigned long long [3], unsigned long long
    unsigned int v8;  // [bp-0x120], Other Possible Types: unsigned long long
    void* v9;  // [bp-0x118]
    void* v10;  // [bp-0x108]
    char *v11;  // [bp-0x100], Other Possible Types: unsigned long long
    void* v12;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0xf0]
    unsigned long long v14;  // [bp-0xe8]
    unsigned long long v15[3];  // [bp-0xe0]
    unsigned long long v16[3];  // [bp-0xd0]
    void* v17;  // [bp-0xc8]
    unsigned long long v18;  // [bp-0xc0]
    void* v19;  // [bp-0xb8]
    unsigned long v20;  // [bp-0xa8]
    unsigned long long v21;  // [bp-0xa0]
    unsigned long long v22[3];  // [bp-0x98]
    char v23;  // [bp-0x90]
    unsigned long long v24;  // [bp-0x88]
    void* v25;  // [bp-0x80]
    unsigned long v26;  // [bp-0x78]
    char v27;  // [bp-0x70]
    unsigned long v28;  // [bp-0x68]
    unsigned long long v29;  // [bp-0x60]
    char *v30;  // [bp-0x58]
    unsigned long long v31;  // [bp-0x50]
    int v32;  // [bp-0x48], Other Possible Types: char
    char v33;  // [bp-0x38]
    unsigned long long v35[3];  // rdx
    unsigned long long v36[3];  // r12
    char *v37;  // r14
    unsigned long long v38;  // r13
    unsigned long long v39[3];  // 4096
    unsigned long long v42;  // rax
    unsigned long long v44[3];  // r15
    unsigned long long v46[3];  // r14
    unsigned long long v47[3];  // r14
    unsigned long long v49[3];  // r12
    unsigned long long v50;  // rax
    char *v51;  // rax
    char *v52;  // r15
    unsigned long long v53[3];  // r14
    unsigned long v54;  // rbp
    unsigned long long v55[3];  // rax
    unsigned long long v56[3];  // rbp
    unsigned long v57;  // r13
    unsigned long long v58;  // rax
    unsigned long long v59[3];  // rbx

    v17 = 0;
    v18 = 1;
    v19 = 0;
    v20 = &a0->padding_10[96];
    v36 = v35;
    if (((char)uu_split::get_input_size(&a0->padding_10[96], a1, &v17, a0->field_0, a0->field_8) & 1))
    {
        v37 = v35.from();
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v17, v18);
        return v37;
    }
    v38 = v18;
    v24 = v38;
    v25 = 0;
    v26 = a1;
    v27 = 0;
    if (!a3)
    {
        if (a2 < v35)
            v39 = a2;
        else
            v39 = v35;
        if (a0->field_a1)
            a2 = v39;
        else
            a2 = a2;
        if (!a2)
        {
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v17, v38);
            return 0;
        }
    }
    else if (!v35)
    {
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v17, v38);
        return 0;
    }
    else if (!a2)
    {
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v17, v38);
        return 0;
    }
    v4 = std::io::stdio::stdout();
    v3 = v4.lock();
    v10 = 0;
    v11 = 8;
    v12 = 0;
    if ((v35 | a2) >> 32)
    {
        v42 = (unsigned long long)((0 CONCAT v35) % (uint128_t)a2) CONCAT (unsigned long long)((0 CONCAT v35) / (uint128_t)a2);
        v14 = ((unsigned long long)((0 CONCAT v35) % (uint128_t)a2) CONCAT (unsigned long long)((0 CONCAT v35) / (uint128_t)a2)) >> 64;
    }
    else
    {
        v42 = ((unsigned int)((0 CONCAT (unsigned int)v35) % (a2 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v35) / (a2 & 4294967295))) & 4294967295;
        *((unsigned int *)&v14) = ((unsigned int)((0 CONCAT (unsigned int)v35) % (a2 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v35) / (a2 & 4294967295))) >> 32;
    }
    v13 = v42;
    v15[0] = a2;
    v44 = a2;
    if (!a3)
    {
        v4.init(a2, a0, 0);
        v37 = v6;
        if ((char)(((0 ^ v4) & (0 ^ -(v4))) >> 63))
            goto LABEL_470f2e;
        v10.drop_in_place<alloc::vec::Vec<uu_split::OutFile>>();
        v10 = v4;
        v11 = v37;
        v12 = v7;
        v44[0] = v15;
    }
    v21 = 1;
    v22[0] = v44;
    v23 = 0;
    if (((char)v21.spec_next() & 1))
    {
        if (((char)a3 & 1))
        {
            while (true)
            {
                v47 = v46;
                v0 = 0;
                v1 = 1;
                v2 = 0;
                if (!v36)
                    goto LABEL_470dbf;
                if (v47 == v15)
                    v49 = v36;
                else
                    v49 = v13 + ((char *)&v47[0] + 1 < v14);
                v4 = &v24;
                v6[0] = v49;
                v7[0] = v49;
                if (((char)std::io::default_read_to_end(&v4, &v0) & 1))
                {
LABEL_470e0f:
                    v16[0] = v59;
                    v28 = v20;
                    v29 = <alloc::string::String as core::fmt::Display>::fmt;
                    v30 = &v16;
                    v31 = <std::io::error::Error as core::fmt::Display>::fmt;
                    v4 = &g_50b040;
                    v6 = 2;
                    v9 = 0;
                    v7 = &v28;
                    v8 = 2;
                    v32.map_or_else(0, &v4);
                    v8 = 1;
                    v5 = v32;
                    v7 = *((long long *)&v33);
                    v37 = v4.new();
                    core::ptr::drop_in_place<std::io::error::Error>(&v16);
                    goto LABEL_470f1f;
                }
                else if (v47 != a4)
                {
                    v36 -= v35;
                    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(0, 1);
                    v46 = v35;
                    if (!((char)v21.spec_next() & 1))
                        goto LABEL_470dcb;
                }
                else
                {
                    v50 = v3.write_all(1, 0);
                    if (v50)
                        v51 = v50.from();
                    else
                        goto LABEL_470dbf;
LABEL_470f12:
                    v37 = v51;
LABEL_470f1f:
                    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(0, 1);
LABEL_470f2e:
                    v10.drop_in_place<alloc::vec::Vec<uu_split::OutFile>>();
                    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v3);
                    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v17, v38);
                    return v37;
                }
            }
        }
        else
        {
            v52 = &v4;
        }
        while (true)
        {
            v53 = v46;
            v0 = 0;
            v1 = 1;
            v2 = 0;
            if (!v36)
                break;
            v54 = (char *)&v53[0] + 1;
            v55 = v13 + (v54 < v14);
            if (v53 == v15)
                v55 = v36;
            v4 = &v24;
            v6[0] = v55;
            v7[0] = v55;
            if (((char)std::io::default_read_to_end(v52, &v0) & 1))
                goto LABEL_470e0f;
            v52.get_writer(&v10, v54, a0);
            v37 = v4;
            v56 = v6;
            if (v4)
                goto LABEL_470f1f;
            v57 = v56[2];
            if (0 < v56[0] - v57)
            {
                memcpy(v56[1] + v57, 0x1, 0);
                v56[2] = v57;
                v52 = &v4;
                goto LABEL_470d69;
            }
            v58 = v56.write_all_cold(1, 0);
            v52 = &v4;
            if (v58)
            {
                v51 = v58.from();
                goto LABEL_470f12;
            }
LABEL_470d69:
            v36 -= v35;
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(0, 1);
            v46 = v35;
            if (!((char)v21.spec_next() & 1))
                goto LABEL_470dcb;
        }
LABEL_470dbf:
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(0, 1);
    }
LABEL_470dcb:
    v10.drop_in_place<alloc::vec::Vec<uu_split::OutFile>>();
    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v3);
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v17, v38);
    return 0;
}
