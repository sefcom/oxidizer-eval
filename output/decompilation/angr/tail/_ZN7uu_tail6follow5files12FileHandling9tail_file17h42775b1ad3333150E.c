long long uu_tail::follow::files::FileHandling::tail_file(struct_1 *a0, struct_0 *a1, unsigned long long a2, unsigned long long a3, unsigned int a4)
{
    unsigned long long v0[6];  // [bp-0x148]
    unsigned long long v1;  // [bp-0x140]
    int v2;  // [bp-0x138]
    unsigned long v3;  // [bp-0x130]
    unsigned long long v4;  // [bp-0x128]
    void* v5;  // [bp-0x120]
    char v6;  // [bp-0x118]
    int v7;  // [bp-0xf0], Other Possible Types: char
    unsigned long v8;  // [bp-0xe0]
    char v9;  // [bp-0xd8], Other Possible Types: unsigned long long
    int v10;  // [bp-0xd8]
    unsigned long long v11;  // [bp-0xd0]
    unsigned long v12;  // [bp-0xc8], Other Possible Types: unsigned long long
    struct_2 *v14;  // rax
    unsigned long long v15;  // rax
    unsigned long v16;  // rdx
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax
    unsigned long v21;  // rdx

    v4 = 18446744073709551615;
    v5 = 0;
    *(v0) = 0;
    v1 = 8;
    *((uint128_t *)&v2) = 0;
    v14 = a1.get_mut(a2, a3);
    if (v14->field_c8)
    {
        v15 = v0.fill(&v14->field_c8);
        if (!v15)
            goto LABEL_513103;
        a0->field_0 = v15;
        *((unsigned long *)&a0->field_8) = v16;
    }
    else
    {
LABEL_513103:
        if (v3)
        {
            if ((char)a1.needs_header(a2, a3, a4))
            {
                v9.clone(a1.get(a2, a3) + 176);
                a1 + 3.print(v11, v12);
                ::0x511030::core::ptr::drop_in_place<alloc::string::String>(&v9);
            }
            v9 = std::io::stdio::stdout();
            v6.with_capacity(0x2000, v9.lock());
            v19 = v0.print(&v6);
            if (!v19)
            {
                v20 = v6.flush();
                if (v20)
                {
                    v19 = v20.from();
                    goto LABEL_5131ba;
                }
                else
                {
                    std::sys::pal::unix::os::split_paths::bytes_to_path(&v7, a2, a3);
                    v12 = a1->field_10;
                    *((uint128_t *)&v10) = a1->field_0;
                    *((void*)&a1->field_0) = v7;
                    a1->field_10 = v8;
                    ::0x5114d0::core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v9);
                    v9 = 2;
                    (unsigned int)a1.update_metadata(a2, a3, &v9);
                    a0->field_8 = 1;
                    a0->field_0 = 0;
                    ::0x5118e0::core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v6);
                }
            }
            else
            {
LABEL_5131ba:
                a0->field_0 = v19;
                *((unsigned long *)&a0->field_8) = v21;
                ::0x5118e0::core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v6);
            }
        }
        else
        {
            a0->field_8 = 0;
            a0->field_0 = 0;
        }
    }
    ::0x5111f0::core::ptr::drop_in_place<uu_tail::chunks::BytesChunkBuffer>(&v0);
    return a0;
}
