long long uu_tac::buffer_tac_regex(unsigned long long a0, void* a1, unsigned long long a2, unsigned long long a3, char a4)
{
    unsigned long long v1;  // [bp-0x90]
    unsigned long long v2;  // [bp-0x88]
    unsigned long long v3;  // [bp-0x80]
    unsigned long long v4;  // [bp-0x58]
    int v5;  // [bp-0x50]
    unsigned long long v6;  // [bp-0x40]
    char v7;  // [bp-0x38]
    void* v10;  // r13
    void* v11;  // 4096
    void* v12;  // 4096
    void* v13;  // rbx
    void* v14;  // r13
    void* v15;  // rbp
    void* v17;  // rbp
    void* v18;  // rbx
    void* v19;  // rax
    unsigned long long v20;  // rax
    void* v22;  // rbp
    void* v24;  // 4096
    void* v25;  // 4096
    void* v26;  // rbx
    void* v27;  // r13
    void* v28;  // r15
    unsigned long v30;  // rdx
    void* v31;  // rbx
    void* v32;  // rbp
    void* v33;  // rax
    void* v36;  // rax

    v4 = std::io::stdio::stdout();
    (char)v1.with_capacity(v4.lock());
    if (a1)
    {
        v10 = a1 - 1;
        if (a4)
        {
            v11 = a1;
            v12 = a1;
            do
            {
                v13 = v12;
                v14 = v10;
                v15 = v11;
                v5.find_at(a2, a3, 0.index(v13, a0, a1, &g_633ab0), v30, v14);
                v17 = v15;
                v18 = v13;
                if ((long long)v5)
                {
                    v19 = v14.index(v15, a0, a1, &g_633ae0);
                    if (v30 < v1 - v3)
                    {
                        memcpy(v2 + v3, v19, v30);
                        v3 += v30;
                        v17 = v14;
                        v18 = v14;
                    }
                    else
                    {
                        v20 = (char)v1.write_all_cold(v19, v30);
                        v17 = v14;
                        v18 = v14;
                        if (v20)
                        {
                            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&(char)v1);
                            return v20;
                        }
                    }
                }
                v11 = v17;
                v10 = v14 - 1;
                v12 = v18;
            } while ((char)__CFADD__(v14, -1));
        }
        else
        {
            v24 = a1;
            v25 = a1;
            do
            {
                v26 = v25;
                v27 = v10;
                v28 = v24;
                v5.find_at(a2, a3, 0.index(v26, a0, a1, &g_633ab0), v30, v27);
                if (!(long long)v5)
                {
                    v22 = v28;
                    v31 = v26;
                }
                else
                {
                    v32 = *((long long *)&v7) - v6 + v27;
                    v33 = v32.index(v28, a0, a1, &g_633ac8);
                    if (v30 < v1 - v3)
                    {
                        memcpy(v2 + v3, v33, v30);
                        v3 += v30;
                        v22 = v32;
                        v31 = v27;
                    }
                    else
                    {
                        v20 = (char)v1.write_all_cold(v33, v30);
                        v22 = v32;
                        v31 = v27;
                        if (v20)
                        {
                            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&(char)v1);
                            return v20;
                        }
                    }
                }
                v24 = v22;
                v10 = v27 - 1;
                v25 = v31;
            } while ((char)__CFADD__(v27, -1));
        }
    }
    else
    {
        v22 = 0;
    }
    v36 = 0.index(v22, a0, a1, &g_633a98);
    if (v30 < v1 - v3)
    {
        memcpy(v2 + v3, v36, v30);
        v3 += v30;
    }
    else
    {
        v20 = (char)v1.write_all_cold(v36, v30);
        if (v20)
        {
            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&(char)v1);
            return v20;
        }
    }
    v20 = (char)v1.flush();
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&(char)v1);
    return v20;
}
