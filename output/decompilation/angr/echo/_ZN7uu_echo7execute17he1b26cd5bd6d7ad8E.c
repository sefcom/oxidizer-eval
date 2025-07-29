long long uu_echo::execute(unsigned long long a0, unsigned long long a1, unsigned int a2, char a3)
{
    char v0;  // [bp-0xd4]
    unsigned int v1;  // [bp-0xd3]
    unsigned short v2;  // [bp-0xcf]
    char v3;  // [bp-0xcd]
    unsigned int v4;  // [bp-0xcc]
    int v5;  // [bp-0xc8]
    unsigned long long v6;  // [bp-0xc0]
    unsigned long long v7;  // [bp-0xb8]
    unsigned long long v8;  // [bp-0xa8]
    unsigned long long v10;  // [bp-0xa8]
    int v11;  // [bp-0xa0]
    char v12;  // [bp-0xa0]
    int v13;  // [bp-0xa0]
    unsigned long long v14;  // [bp-0x90]
    unsigned long long v15;  // [bp-0x88]
    char v16;  // [bp-0x80]
    int v17;  // [bp-0x7f]
    unsigned long long v18;  // [bp-0x78]
    char v19;  // [bp-0x70]
    void* v20;  // [bp-0x50]
    unsigned long long v21;  // [bp-0x48]
    unsigned long long v22;  // [bp-0x40]
    char v23;  // [bp-0x38]
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax
    void* v28;  // r14
    unsigned long long v29;  // rax
    unsigned long long v30;  // rax

    v4 = a2;
    v19.into_iter(a1);
    v20 = 0;
    (char)v8.next(&v19);
    if (!((char)(((0 ^ *((long long *)&v12)) & (0 ^ -(*((long long *)&v12)))) >> 63)))
    {
        if (a3)
        {
            do
            {
                v5 = v13;
                v7 = v14;
                v15 = v6;
                if (!v10)
                    continue;
                if (!a0.write_all(" ", 1))
                    goto LABEL_47db12;
                else
                    goto LABEL_0x47dc61;
LABEL_47db12:
                v21 = v15;
                v22 = v7;
                v23 = 3;
                while (true)
                {
                    v26 = uucore::features::format::parse_escape_only::{{closure}}(&v21);
                    if ((char)v26 == 4)
                        break;
                    v0 = v26;
                    v3 = v26 >> 56;
                    v2 = v26 >> 40;
                    v1 = v26 >> 8;
                    v16.write(&v0, a0);
                    if (v16)
                    {
                        v27 = v18.from();
                        goto LABEL_47dc6a;
                    }
                    else if ((char)v17)
                    {
                        v28 = 0;
                        goto LABEL_47dc70;
                    }
                }
                core::ptr::drop_in_place<uucore::NonUtf8OsStrError>(&(char)v5);
                (char)v8.next(&v19);
            } while ((long long)v13 != 0x8000000000000000);
            goto LABEL_47dc70;
        }
        else
        {
            do
            {
                v5 = v11;
                v7 = v14;
                if (!v8)
                    continue;
                if (!a0.write_all(" ", 1))
                    goto LABEL_47dc06;
                else
                    goto LABEL_0x47dc61;
LABEL_47dc06:
                v29 = a0.write_all(v6, v7);
                if (v29)
                {
                    v27 = v29.from();
                    goto LABEL_47dc6a;
                }
                core::ptr::drop_in_place<uucore::NonUtf8OsStrError>(&(char)v5);
                (char)v8.next(&v19);
            } while ((long long)v13 != 0x8000000000000000);
LABEL_47dc6a:
            v28 = v27;
LABEL_47dc70:
            core::ptr::drop_in_place<uucore::NonUtf8OsStrError>(&(char)v5);
            core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>>(&v19);
            return v28;
        }
    }
    core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>>(&v19);
    if ((char)v4)
    {
        v30 = a0.write_all("\n ", 1);
        if (v30)
            return v30.from();
    }
    return 0;
}
