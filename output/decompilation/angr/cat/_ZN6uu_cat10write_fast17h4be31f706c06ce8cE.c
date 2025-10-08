int uu_cat::write_fast()
{
    unsigned long long v0;  // [bp-0x10058]
    void* v1;  // [bp-0x10050]
    unsigned long long v2;  // [bp-0x10048]
    unsigned long long v3;  // [bp-0x10040]
    unsigned long long v4;  // [bp-0x10038]
    unsigned long long v5;  // [bp-0x10030]
    char v6;  // [bp-0x10028]
    char v7;  // [bp-0x10027]
    unsigned long v8;  // [bp-0x10020]
    void* v9;  // [bp-0x2030]
    unsigned long long v11;  // rsi
    unsigned long long v12;  // rdx
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long *v15;  // rdi
    unsigned long long v17;  // rdx

    do
    {
        v9 = 0;
    } while (&v9 != &v5);
    v4 = std::io::stdio::stdout();
    v0 = v4.lock();
    uu_cat::splice::write_fast_using_splice(&v5, v11);
    if (v5 != 9223372036854775814)
    {
        v17 = *((long long *)&v7);
        *((unsigned long *)&v1[16]) = v8;
        *((unsigned long long *)&v1[9]) = v17;
        *((unsigned long long *)v1) = v5;
        *((char *)&v1[8]) = v6;
    }
    else if ((v6 & 1))
    {
        memset(&v5, 0, 0x10000);
        while (true)
        {
            v2 = v11.read(&v5, 0x10000);
            v3 = v12;
            if (!((char)v2 & 1) && v12)
            {
                v13 = v0.write_all(0.index(v12, &v5, 0x10000, &g_4eac18), v12);
                if (!v13)
                {
                    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(&v2);
                }
                else
                {
                    *((unsigned long long *)v1) = 0x8000000000000000;
                    *((unsigned long long *)&v1[8]) = v13;
                    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(&v2);
                    break;
                }
            }
            else
            {
                core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(&v2);
                v14 = v0.flush();
                if (v14)
                {
                    *((unsigned long long *)v1) = 0x8000000000000000;
                    *((unsigned long long *)&v1[8]) = v14;
                    break;
                }
                else
                {
                    *(v15) = 9223372036854775814;
                    break;
                }
            }
        }
    }
    else
    {
        *(v15) = 9223372036854775814;
    }
    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v0);
    return;
}
