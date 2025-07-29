long long uu_split::n_chunks_by_line(struct_0 *a0, unsigned int a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x109]
    char v1;  // [bp-0x109]
    struct_0 *v2;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned int v3;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned int v4;  // [bp-0x100]
    unsigned long long v5;  // [bp-0xf8]
    unsigned long long v6;  // [bp-0xf0]
    unsigned long long v7;  // [bp-0xe8]
    unsigned long long v8;  // [bp-0xe0]
    void* v9;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0xd0]
    unsigned long long v11;  // [bp-0xc8]
    void* v12;  // [bp-0xc0]
    unsigned long long v13;  // [bp-0xb8]
    void* v14;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long v15;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v16;  // [bp-0xa0]
    void* v17;  // [bp-0x98]
    unsigned long long v18;  // [bp-0x90]
    void* v19;  // [bp-0x88]
    unsigned long long v21;  // [bp-0x78]
    unsigned long long v22;  // [bp-0x70]
    unsigned long long v23;  // [bp-0x68]
    unsigned long long v24;  // [bp-0x60]
    unsigned long long v25;  // [bp-0x58]
    void* v26;  // [bp-0x50]
    unsigned long long v27;  // [bp-0x48]
    char v28;  // [bp-0x40]
    char v29;  // [bp-0x38]
    unsigned long long v31;  // rdx
    void* v32;  // rax
    unsigned long long v35;  // r14
    struct_0 *v37;  // rdx
    char v38;  // cl
    struct_0 *v39;  // rdx
    struct_0 *v41;  // rdx
    unsigned long long v42;  // r12
    unsigned long long v43;  // rbp
    void* v44;  // r15
    unsigned long long v45;  // rbx
    unsigned long long v46;  // rax
    unsigned int v47;  // eax
    unsigned long v49;  // rax
    unsigned long long v50;  // rbp
    void* v51;  // r13
    unsigned long long v52;  // rbx
    unsigned int v54;  // ebx
    unsigned long v55;  // rax

    v10 = a4;
    v17 = 0;
    v18 = 1;
    v19 = 0;
    v2 = a0;
    if (uu_split::get_input_size(&a0->padding_10[96], a1, &v17, a0->field_0, a0->field_8))
    {
        v32 = v31.from();
        ::0x4ad900::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v17);
        return v32;
    }
    v9 = 0;
    if (!v31 && (a3 || v2->field_a1 == 1))
    {
        ::0x4ad900::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v17);
        return 0;
    }
    v25 = std::io::stdio::stdout();
    v11 = v25.lock();
    v12 = 0;
    v13 = 8;
    v14 = 0;
    if (!a2)
        core::panicking::panic_const::panic_const_div_by_zero(&g_5a6fa8); /* do not return */
    v16 = v31;
    if ((v31 | a2) >> 32)
    {
        v8 = ((unsigned long long)((0 CONCAT v31) % a2) CONCAT (unsigned long long)((0 CONCAT v31) / a2)) >> 64;
        v35 = (unsigned long long)((0 CONCAT v31) % a2) CONCAT (unsigned long long)((0 CONCAT v31) / a2);
        if (!a3)
            goto LABEL_4b28a9;
LABEL_4b2864:
        v37 = v2;
        v38 = v37->field_a1;
        v39 = v37;
        goto LABEL_4b2935;
    }
    *((unsigned int *)&v8) = ((unsigned int)((0 CONCAT (unsigned int)v31) % (a2 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v31) / (a2 & 4294967295))) >> 32;
    v35 = ((unsigned int)((0 CONCAT (unsigned int)v31) % (a2 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v31) / (a2 & 4294967295))) & 4294967295;
    if (!(!a3))
        goto LABEL_4b2864;
LABEL_4b28a9:
    v15 = 1;
    v38 = v2->field_a1;
    v25.init(a2, v2, v2->field_a1);
    v32 = v26;
    v3 = v27;
    if (v25 == 0x8000000000000000)
    {
        goto LABEL_4b2cb4;
    }
    else
    {
        v12.drop_in_place<alloc::vec::Vec<uu_split::OutFile>>();
        v12 = v25;
        v13 = v32;
        v14 = v3;
        v39 = v2;
LABEL_4b2935:
        v41 = v39;
        v42 = v35 + 1 - (v8 < 1);
        v25 = 1;
        v26 = 0;
        *((unsigned int *)&v27) = a1;
        v28 = 0;
        v29 = v41->field_a2;
        v0 = v38 ^ 1;
        v3 = v29;
        v9 = a3;
        if (((char)a3 & 1))
        {
            v43 = 1;
            v2 = 9223372036854775809;
            v44 = 0;
            while (true)
            {
                v22.next(&v25);
                if (v22 == 9223372036854775809)
                    goto LABEL_4b2c5d;
                v45 = v23;
                if (v22 == 0x8000000000000000)
                    goto LABEL_4b2c42;
                v5 = v22;
                v6 = v45;
                v7 = v24;
                if (v44 + v7 < v16)
                    v5.push(v4, &g_5a6fc0);
                if (v43 == v10)
                    break;
LABEL_4b2a52:
                v44 += v7;
                v47 = 4294967295;
                if (v42 > v44)
                {
                    v1 = v0;
                }
                else
                {
                    do
                    {
                        v42 = v42 + v35 + (v43 < v8);
                        v43 += 1;
                        v47 += 1;
                        v1 = v0;
                    } while (v42 <= v44);
                }
                v49 = v47;
                if (v47 <= 0)
                    v49 = 0;
                if ((v1 & 1))
                    v49 = 0;
                if (v9)
                    v49 = 0;
                v43 -= v49;
                if (v43 <= v10)
                {
                    ::0x4ad900::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v5);
                }
                else
                {
                    ::0x4ad900::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v5);
                    goto LABEL_4b2c5d;
                }
            }
            v46 = v11.write_all(v6, v7);
            if (!v46)
                goto LABEL_4b2a52;
            v32 = v46.from();
            goto LABEL_4b2ca4;
        }
        else
        {
            v15 = v41->field_88;
            v50 = 1;
            v10 = 9223372036854775809;
            v51 = 0;
        }
    }
    while (true)
    {
        v22.next(&v25);
        if (v22 == 9223372036854775809)
        {
LABEL_4b2c5d:
            v12.drop_in_place<alloc::vec::Vec<uu_split::OutFile>>();
            core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v11);
            ::0x4ad900::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v17);
            return 0;
        }
        v45 = v23;
        if (v22 != 0x8000000000000000)
        {
            v5 = v22;
            v6 = v45;
            v7 = v24;
            v52 = v45;
            if (v7 + v51 < v16)
            {
                v5.push(v4, &g_5a6fc0);
                v52 = v6;
            }
            v32.get_writer(&v12, v50 - 1, v2);
            if (v32)
                goto LABEL_4b2caa;
            uu_split::custom_write_all(&v32, v52, v7, v21, v15);
            if ((char)v32 == 1)
            {
                v32 = v21.from();
LABEL_4b2ca4:
LABEL_4b2caa:
                ::0x4ad900::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v5);
LABEL_4b2cb4:
                v12.drop_in_place<alloc::vec::Vec<uu_split::OutFile>>();
                core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v11);
                ::0x4ad900::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v17);
                return v32;
            }
            v51 += v7;
            v54 = 4294967295;
            if (v42 <= v51)
            {
                do
                {
                    v42 = v42 + v35 + (v50 < v8);
                    v50 += 1;
                    v54 += 1;
                } while (v42 <= v51);
            }
            ::0x4ad900::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v5);
            v55 = v54;
            if (v54 <= 0)
                v55 = 0;
            if ((v0 & 1))
                v55 = 0;
            if (v9)
                v55 = 0;
            v50 -= v55;
        }
        else
        {
LABEL_4b2c42:
            v32 = v45.from();
            goto LABEL_4b2cb4;
        }
    }
}
