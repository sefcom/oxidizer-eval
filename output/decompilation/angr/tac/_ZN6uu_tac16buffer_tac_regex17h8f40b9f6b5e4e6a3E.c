long long uu_tac::buffer_tac_regex(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4)
{
    unsigned long long v1;  // [bp-0x90]
    unsigned long long v2;  // [bp-0x88]
    unsigned long long v3;  // [bp-0x80]
    unsigned long long v4;  // [bp-0x58]
    int v5;  // [bp-0x50]
    unsigned long long v6;  // [bp-0x40]
    char v7;  // [bp-0x38]
    unsigned long long v10;  // 4096
    unsigned long long v11;  // 4096
    unsigned long long v12;  // 4096
    unsigned long long v13;  // r13
    unsigned long long v14;  // r15
    unsigned long long v16;  // rbp
    unsigned long long v18;  // r15
    unsigned long long v19;  // r13
    void* v20;  // rax
    unsigned long long v21;  // rax
    void* v22;  // r13
    unsigned long long v24;  // 4096
    unsigned long long v25;  // 4096
    unsigned long long v26;  // 4096
    unsigned long long v28;  // rbx
    unsigned long v30;  // rdx
    unsigned long long v31;  // r13
    void* v32;  // rax
    void* v33;  // rax

    v4 = std::io::stdio::stdout();
    (char)v1.with_capacity(0x2000, v4.lock());
    if (!a1)
    {
        v22 = 0;
    }
    else if (a4)
    {
        v10 = a1;
        v11 = a1;
        v12 = a1;
        do
        {
            v13 = v12;
            v14 = v11;
            v16 = v10.backward_unchecked();
            v5.find_at(a2, a3, 0.index(v14, a0, a1, &g_714150), v30, v16);
            v18 = v14;
            v19 = v13;
            if ((long long)v5)
            {
                v20 = v16.index(v13, a0, a1, &g_714180);
                if (v30 < v1 - v3)
                {
                    memcpy(v2 + v3, v20, v30);
                    v3 += v30;
                }
                else
                {
                    v21 = (char)v1.write_all_cold(v20, v30);
                    if (v21)
                    {
                        core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&(char)v1);
                        return v21;
                    }
                }
                v18 = v16;
                v19 = v16;
            }
            v10 = v16;
            v11 = v18;
            v12 = v19;
        } while (v10);
    }
    else
    {
        v24 = a1;
        v25 = a1;
        v26 = a1;
        while (true)
        {
            v28 = v26.backward_unchecked();
            v5.find_at(a2, a3, 0.index(v25, a0, a1, &g_714150), v30, v28);
            if (!(long long)v5)
            {
                v22 = v24;
                v26 = v28;
                if (!v26)
                    break;
            }
            else
            {
                v31 = *((long long *)&v7) - v6 + v28;
                v32 = v31.index(v24, a0, a1, &g_714168);
                if (v30 < v1 - v3)
                {
                    memcpy(v2 + v3, v32, v30);
                    v3 += v30;
                }
                else
                {
                    v21 = (char)v1.write_all_cold(v32, v30);
                    if (v21)
                    {
                        core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&(char)v1);
                        return v21;
                    }
                }
                v22 = v31;
                v24 = v31;
                v25 = v28;
                v26 = v28;
                if (!v25)
                    break;
            }
        }
    }
    v33 = 0.index(v22, a0, a1, &g_714138);
    if (v30 < v1 - v3)
    {
        memcpy(v2 + v3, v33, v30);
        v3 += v30;
    }
    else
    {
        v21 = (char)v1.write_all_cold(v33, v30);
        if (v21)
        {
            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&(char)v1);
            return v21;
        }
    }
    v21 = (char)v1.flush();
    if (!v21)
    {
        core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&(char)v1);
        return 0;
    }
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&(char)v1);
    return v21;
}
