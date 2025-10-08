long long uu_split::n_chunks_by_line(struct_0 *a0, unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned long a4)
{
    char v0;  // [bp-0x119]
    struct_0 *v1;  // [bp-0x110], Other Possible Types: unsigned long long
    unsigned int v2;  // [bp-0x108]
    unsigned int v3;  // [bp-0x108]
    unsigned long long v4;  // [bp-0x100]
    void* v5;  // [bp-0xf8]
    void* v6;  // [bp-0xf0], Other Possible Types: unsigned long long
    void* v7;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0xe0]
    void* v9;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0xd0]
    unsigned long long v11;  // [bp-0xd0]
    unsigned long long v12;  // [bp-0xc8]
    unsigned long long v13;  // [bp-0xc0]
    unsigned long long v14;  // [bp-0xb8]
    void* v15;  // [bp-0xb0]
    unsigned long long v16;  // [bp-0xa8]
    void* v17;  // [bp-0xa0]
    unsigned long long v18;  // [bp-0x98]
    unsigned long long v19;  // [bp-0x80]
    void* v20;  // [bp-0x78], Other Possible Types: unsigned long long
    void* v21;  // [bp-0x70]
    unsigned long v22;  // [bp-0x68], Other Possible Types: unsigned long long
    char v23;  // [bp-0x60]
    char v24;  // [bp-0x58]
    unsigned long v25;  // [bp-0x50]
    unsigned long long v26;  // [bp-0x48]
    unsigned long long v27;  // [bp-0x40]
    char v28;  // [bp-0x38]
    unsigned long long v30;  // rdx
    void* v31;  // rax
    unsigned long long v34;  // r13
    char v36;  // dl
    unsigned long long v37;  // rbx
    unsigned long long v38;  // r14
    void* v39;  // rbp
    unsigned long long v40;  // r15
    unsigned long long v41;  // r15
    unsigned long long v43;  // r15
    unsigned long long v44;  // rax
    unsigned int v45;  // eax
    unsigned long long v46;  // r12
    unsigned long v47;  // rax

    v15 = 0;
    v16 = 1;
    v17 = 0;
    if (((char)uu_split::get_input_size(&a0->padding_10[96], a1, &v15, a0->field_0, a0->field_8) & 1))
    {
        v31 = v30.from();
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v15, v16);
        return v31;
    }
    v16 = v16;
    if (!v30)
    {
        if (a3)
        {
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v15, v16);
            return v31;
        }
        else if (a0->field_a1)
        {
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v15, v16);
            return v31;
        }
    }
    v20 = std::io::stdio::stdout();
    v9 = 0;
    v4 = v20.lock();
    v5 = 0;
    v6 = 8;
    v7 = 0;
    if (!a2)
        core::panicking::panic_const::panic_const_div_by_zero(&g_50b060); /* do not return */
    if ((v30 | a2) >> 32)
    {
        v8 = ((unsigned long long)((0 CONCAT v30) % a2) CONCAT (unsigned long long)((0 CONCAT v30) / a2)) >> 64;
        v34 = (unsigned long long)((0 CONCAT v30) % a2) CONCAT (unsigned long long)((0 CONCAT v30) / a2);
        if (!a3)
            goto LABEL_47113e;
LABEL_4710fb:
        v18 = v30;
        v36 = a0->field_a1;
        goto LABEL_4711d0;
    }
    else
    {
        *((unsigned int *)&v8) = ((unsigned int)((0 CONCAT (unsigned int)v30) % (a2 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v30) / (a2 & 4294967295))) >> 32;
        v34 = ((unsigned int)((0 CONCAT (unsigned int)v30) % (a2 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v30) / (a2 & 4294967295))) & 4294967295;
        if (a3)
            goto LABEL_4710fb;
LABEL_47113e:
        v36 = a0->field_a1;
        v20.init(a2, a0, a0->field_a1);
        v31 = v21;
        v1 = v22;
        if (v20 != 0x8000000000000000)
        {
            v5.drop_in_place<alloc::vec::Vec<uu_split::OutFile>>();
            v18 = v30;
            v5 = v20;
            v6 = v31;
            v7 = v1;
LABEL_4711d0:
            v37 = v34 + 1 - (v8 < 1);
            v20 = v16;
            v21 = 0;
            v22 = a1;
            v23 = 0;
            v24 = a0->field_a2;
            v1 = a0;
            v25 = a0->field_88;
            v0 = v36 ^ 1;
            v38 = 1;
            v9 = 9223372036854775809;
            v2 = v24;
            v39 = 0;
            v10 = a3;
            while (true)
            {
                v26.next(&v20);
                if (v26 == 9223372036854775809)
                {
LABEL_4713f5:
                    v5.drop_in_place<alloc::vec::Vec<uu_split::OutFile>>();
                    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v4);
                    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v15, v16);
                    return v31;
                }
                v40 = v27;
                if (v26 == 0x8000000000000000)
                {
                    v31 = v40.from();
                    break;
                }
                v12 = v26;
                v13 = v40;
                v14 = *((long long *)&v28);
                v41 = v40;
                if (v14 + v39 < v18)
                {
                    v12.push(v3, &g_50b078);
                    v41 = v13;
                }
                v43 = v41;
                if (!((char)v10 & 1))
                {
                    v31.get_writer(&v5, v38 - 1, v1);
                    if (v31)
                        goto LABEL_471445;
                    uu_split::custom_write_all(&v31, v43, v14, v19, v25);
                    if ((char)v31 == 1)
                    {
                        v31 = v19.from();
                        goto LABEL_47143f;
                    }
                }
                else if (v38 == a4)
                {
                    v44 = v4.write_all(v43, v14);
                    if (v44)
                    {
                        v31 = v44.from();
LABEL_47143f:
LABEL_471445:
                        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v12, v13);
                        break;
                    }
                }
                v39 += v14;
                v45 = 4294967295;
                if (v37 > v39)
                {
                    v11 = v10;
                }
                else
                {
                    do
                    {
                        v37 = v37 + v34 + (v38 < v8);
                        v38 += 1;
                        v45 += 1;
                        v11 = v10;
                    } while (v37 <= v39);
                }
                v46 = v11;
                v47 = v45;
                if (v45 <= 0)
                    v47 = 0;
                if ((v0 & 1))
                    v47 = 0;
                if (v46)
                    v47 = 0;
                v38 -= v47;
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v12, v13);
                if ((v38 > a4 & (char)v46))
                    goto LABEL_4713f5;
            }
        }
    }
    v5.drop_in_place<alloc::vec::Vec<uu_split::OutFile>>();
    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v4);
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v15, v16);
    return v31;
}
