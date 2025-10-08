long long uu_cat::cat_path(void* a0, unsigned long long a1, unsigned long long a2, char a3[5], unsigned long long a4, unsigned long long a5[2])
{
    unsigned int v0;  // [bp-0xd4]
    unsigned long long v1;  // [bp-0xd0]
    char v2;  // [bp-0xc8], Other Possible Types: unsigned long long, unsigned int
    char v3;  // [bp-0xc4]
    char v4;  // [bp-0xc0]
    char v5;  // [bp-0xbf]
    char v6;  // [bp-0xb8]
    unsigned long long v8;  // rax
    char v9;  // cl
    unsigned long v10;  // rax
    char *v11;  // rdi
    unsigned long long v12;  // rsi
    unsigned long long v13;  // rdx
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // rbp
    char v19;  // al
    unsigned long long v20;  // rax
    unsigned long long v21;  // rdx

    uu_cat::get_input_type(&(char)v2, a1, a2);
    v8 = *((long long *)&v2);
    v9 = v4;
    if (v8 != 9223372036854775814)
    {
        v21 = *((long long *)&v5);
        *((long long *)&a0[16]) = *((long long *)&v6);
        *((unsigned long long *)&a0[9]) = v21;
        *((unsigned long long *)a0) = v8;
        *((char *)&a0[8]) = v9;
        return v8;
    }
    v10 = v9;
    if (!(unsigned int)v10)
    {
        *((unsigned long long *)a0) = 9223372036854775811;
        return v10;
    }
    else if ((unsigned int)v10 != 2)
    {
        v11 = &(char)v2;
        v12 = a1;
        v13 = a2;
        if ((unsigned int)v10 == 7)
        {
            v11.connect(a1, a2);
            if ((v2 & 1))
            {
                v15 = *((long long *)&v4);
                *((unsigned long long *)a0) = 0x8000000000000000;
                *((unsigned long long *)&a0[8]) = v15;
                return v15;
            }
            v0 = *((int *)&(&v2)[4]);
            v14 = v0.shutdown(1);
            if (v14)
            {
                *((unsigned long long *)a0) = 0x8000000000000000;
                *((unsigned long long *)&a0[8]) = v14;
                return core::ptr::drop_in_place<std::fs::File>(v0);
            }
            v2 = v0;
            v3 = 0;
            uu_cat::cat_handle(a0, &v2, a3, a4);
        }
        else
        {
            v11.open(a1, a2);
            if ((v2 & 1))
            {
                v15 = *((long long *)&v4);
                *((unsigned long long *)a0) = 0x8000000000000000;
                *((unsigned long long *)&a0[8]) = v15;
                return v15;
            }
            if (a5 && a5.file_size())
            {
                (char)v2.from_file(v2);
                if (v2 == 1)
                {
                    core::ptr::drop_in_place<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>>(&(char)v2);
                }
                else if (*((long long *)&v4) == a5[0] && *((long long *)&v6) == a5[1])
                {
                    *((unsigned long long *)a0) = 9223372036854775812;
                    return core::ptr::drop_in_place<std::fs::File>(v2);
                }
            }
            v2 = *((int *)&(&v2)[4]);
            v3 = 0;
            uu_cat::cat_handle(a0, &v2, a3, a4);
        }
        return core::ptr::drop_in_place<uu_cat::InputHandle<std::fs::File>>(v2);
    }
    else
    {
        v16 = std::io::stdio::stdin();
        v17 = (char)v2.from_file();
        v18 = *((long long *)&v4);
        if ((v2 & 1))
        {
            *((unsigned long long *)a0) = 0x8000000000000000;
            *((unsigned long long *)&a0[8]) = v18;
            return v17;
        }
        v1 = *((long long *)&v6);
        std::io::stdio::stdin();
        v19 = std::sys::io::is_terminal::isatty::is_terminal();
        v2 = v16;
        v4 = v19;
        if (!a5 || a5[0] != v18 || v1 != a5[1])
            return uu_cat::cat_handle(a0, &(char)v2, a3, a4);
        v20 = uu_cat::is_appending();
        if ((char)v20)
        {
            *((unsigned long long *)a0) = 9223372036854775812;
            return v20;
        }
        return uu_cat::cat_handle(a0, &(char)v2, a3, a4);
    }
}
