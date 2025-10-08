void uu_tail::follow::files::FileHandling::tail_file(void* a0, void* a1, unsigned long long a2, unsigned long long a3, unsigned int a4)
{
    void* v0;  // [bp-0x148]
    unsigned long long v1;  // [bp-0x140]
    int v2;  // [bp-0x138]
    unsigned long v3;  // [bp-0x130]
    unsigned long long v4;  // [bp-0x128]
    void* v5;  // [bp-0x120]
    char v6;  // [bp-0x118]
    int v7;  // [bp-0xf0], Other Possible Types: char
    unsigned long v8;  // [bp-0xe0]
    unsigned long long v9[1];  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0xd0]
    char v11;  // [bp-0xc8]
    unsigned long long v13[27];  // rax
    unsigned long long v14;  // rax
    unsigned long v15;  // rdx
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax
    unsigned long v20;  // rdi
    unsigned long long v21;  // rsi
    unsigned long v22;  // rdx

    v4 = 18446744073709551615;
    v5 = 0;
    v0 = 0;
    v1 = 8;
    *((uint128_t *)&v2) = 0;
    v13 = a1.get_mut(a2, a3);
    if (v13[25])
    {
        v14 = v0.fill(v13[25], v13[26]);
        if (v14)
        {
            *((unsigned long long *)a0) = v14;
            *((unsigned long *)&a0[8]) = v15;
        }
        else
        {
            if (!v3)
                goto LABEL_4a2bbc;
            if ((char)a1.needs_header(a2, a3, a4))
            {
                v9.clone(a1.get(a2, a3) + 176);
                a1 + 72.print(v10, *((long long *)&v11));
                core::ptr::drop_in_place<alloc::string::String>(&v9);
            }
            v9 = std::io::stdio::stdout();
            v6.with_capacity(v9.lock());
            v18 = v0.print(&v6);
            if (!v18)
            {
                v19 = v6.flush();
                if (v19)
                {
                    v18 = v19.from();
                    goto LABEL_4a2ba9;
                }
                else
                {
                    std::sys::pal::unix::os::split_paths::bytes_to_path(&v7, a2, a3);
                    v20 = *((long long *)a1);
                    v21 = (long long)a1[8];
                    *((unsigned long *)&a1[16]) = v8;
                    *(a1) = v7;
                    core::ptr::drop_in_place<uu_tail::paths::InputKind>(v20, v21);
                    v9 = 2;
                    (unsigned int)a1.update_metadata(a2, a3, &v9);
                    *((char *)&a0[8]) = 1;
                    *((unsigned long long *)a0) = 0;
                    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v6);
                }
            }
            else
            {
LABEL_4a2ba9:
                *((unsigned long long *)a0) = v18;
                *((unsigned long *)&a0[8]) = v22;
                core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v6);
            }
        }
    }
    else
    {
LABEL_4a2bbc:
        *((char *)&a0[8]) = 0;
        *((unsigned long long *)a0) = 0;
    }
    core::ptr::drop_in_place<uu_tail::chunks::BytesChunkBuffer>(&v0);
    return;
}
