long long uu_echo::execute(unsigned long long a0, unsigned long long a1, unsigned int a2, char a3)
{
    char v0;  // [bp-0xb4]
    unsigned int v1;  // [bp-0xb3]
    unsigned short v2;  // [bp-0xaf]
    char v3;  // [bp-0xad]
    unsigned int v4;  // [bp-0xac]
    unsigned long long v5;  // [bp-0xa8]
    unsigned long long v7;  // [bp-0xa8]
    unsigned long long v8;  // [bp-0xa0]
    unsigned long long v9;  // [bp-0x98]
    unsigned long long v10;  // [bp-0x90]
    unsigned long long v11;  // [bp-0x88]
    char v12;  // [bp-0x80]
    int v13;  // [bp-0x7f]
    unsigned long long v14;  // [bp-0x78]
    char v15;  // [bp-0x70]
    void* v16;  // [bp-0x50]
    unsigned long long v17;  // [bp-0x48]
    unsigned long long v18;  // [bp-0x40]
    char v19;  // [bp-0x38]
    unsigned long long v21;  // rbx
    unsigned long long v22;  // rbx
    unsigned long long v24;  // rax
    void* v25;  // rax
    unsigned long long v26;  // rbx
    unsigned long long v27;  // rax
    unsigned long long v29;  // rax
    unsigned long long v32;  // r14
    unsigned long long v33;  // rbx

    v4 = a2;
    v15.into_iter(a1);
    v16 = 0;
    (char)v5.next(&v15);
    v21 = v8;
    if (!((char)(((0 ^ v21) & (0 ^ -(v21))) >> 63)))
    {
        if (a3)
        {
            v22 = v21;
            do
            {
                v33 = v22;
                v32 = v9;
                v11 = v10;
                if (!v7)
                    continue;
                if (!a0.write_all(" ", 1))
                    goto LABEL_4283cb;
                else
                    goto LABEL_0x428517;
LABEL_4283cb:
                v17 = v32;
                v18 = v11;
                v19 = 3;
                while (true)
                {
                    v24 = uucore::features::format::parse_escape_only::{{closure}}(&v17);
                    if ((char)v24 == 4)
                        break;
                    v0 = v24;
                    v3 = v24 >> 56;
                    v2 = v24 >> 40;
                    v1 = v24 >> 8;
                    v12.write(&v0, a0);
                    if (v12)
                    {
                        v25 = v14.from();
                        goto LABEL_428520;
                    }
                    else if ((char)v13)
                    {
                        v25 = 0;
                        goto LABEL_428523;
                    }
                }
                core::ptr::drop_in_place<std::ffi::os_str::OsString>(v33, v32);
                (char)v5.next(&v15);
                v22 = v8;
            } while (v22 != 0x8000000000000000);
            goto LABEL_428523;
        }
        else
        {
            v26 = v21;
            do
            {
                v33 = v26;
                v32 = v9;
                if (!v5)
                    continue;
                if (!a0.write_all(" ", 1))
                    goto LABEL_4284b9;
                else
                    goto LABEL_0x428517;
LABEL_4284b9:
                v27 = a0.write_all(v32, v10);
                if (v27)
                {
                    v25 = v27.from();
                    goto LABEL_428520;
                }
                core::ptr::drop_in_place<std::ffi::os_str::OsString>(v33, v32);
                (char)v5.next(&v15);
                v26 = v8;
            } while (v26 != 0x8000000000000000);
LABEL_428520:
LABEL_428523:
            core::ptr::drop_in_place<std::ffi::os_str::OsString>(v33, v32);
            core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>>(&v15);
            return v25;
        }
    }
    core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>>(&v15);
    if ((char)v4)
    {
        v29 = a0.write_all("\n ", 1);
        if (v29)
            return v29.from();
    }
    return 0;
}
