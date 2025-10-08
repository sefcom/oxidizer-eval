long long uu_comm::are_files_identical(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x4090]
    char v1;  // [bp-0x4060]
    void* v2;  // [bp-0x4030]
    unsigned int v3;  // [bp-0x402c]
    char v4;  // [bp-0x4028]
    void* v5;  // [bp-0x3030]
    void* v6;  // [bp-0x2030]
    void* v7;  // [bp-0x1030]
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rax
    char v11;  // al

    v7 = 0;
    v6 = 0;
    v5 = 0;
    v2 = 0;
    std::fs::metadata(&(char)v2, a1, a2);
    if ((int)v2 != 2)
    {
        std::fs::metadata(&(char)v2, a3, a4);
        if ((int)v2 != 2)
        {
            (char)v2.open(a1, a2);
            if (!((char)v2 & 1))
            {
                (char)v2.open(a3, a4);
                if ((int)v2 == 1)
                {
                    *((long long *)&a0[8]) = *((long long *)&v4);
                    *((char *)a0) = 1;
                    core::ptr::drop_in_place<std::fs::File>(v3);
                    return a0;
                }
                v0.with_capacity(v3);
                v1.with_capacity(v3);
                memset(&v6, 0, 0x2000);
                memset(&(char)v2, 0, 0x2000);
                while (true)
                {
                    if (((char)v0.read(&v6) & 1))
                    {
                        *((unsigned long long *)&a0[8]) = v9;
                        *((char *)a0) = 1;
                        core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&v1);
                        core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&v0);
                        return a0;
                    }
                    if (((char)v1.read(&(char)v2) & 1))
                    {
                        *((unsigned long long *)&a0[8]) = v9;
                        *((char *)a0) = 1;
                        core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&v1);
                        core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&v0);
                        return a0;
                    }
                    if (v9 != v9)
                        break;
                    if (!v9)
                    {
                        *((char *)&a0[1]) = 1;
                        *((char *)a0) = v11;
                        core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&v1);
                        core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&v0);
                        return a0;
                    }
                    v10 = 0.index(v9, &v6, 0x2000, &g_4e0c78);
                    if (!(char)v10.equal(v9, 0.index(v9, &(char)v2, 0x2000, &g_4e0c90), v9))
                        break;
                }
                *((char *)&a0[1]) = 0;
                *((char *)a0) = v11;
                core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&v1);
                core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&v0);
                return a0;
            }
        }
    }
    *((long long *)&a0[8]) = *((long long *)&v4);
    *((char *)a0) = 1;
    return a0;
}
