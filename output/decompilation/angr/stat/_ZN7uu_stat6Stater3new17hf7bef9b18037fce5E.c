long long uu_stat::Stater::new(void* a0, unsigned long long a1)
{
    char v0;  // [bp-0x149]
    int v1;  // [bp-0x148]
    unsigned long long v2;  // [bp-0x140]
    unsigned long long v3;  // [bp-0x138]
    unsigned long long v4;  // [bp-0x130]
    unsigned long long v5;  // [bp-0x128]
    unsigned long long v6;  // [bp-0x120]
    unsigned long long v7;  // [bp-0x118]
    struct_0 *v8;  // [bp-0x110]
    int v9;  // [bp-0x108], Other Possible Types: char, unsigned long long
    char v10;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x100]
    unsigned long long v12;  // [bp-0xf8]
    unsigned long long v13;  // [bp-0xf8]
    unsigned int v14;  // [bp-0xf0]
    unsigned long long v15;  // [bp-0xc0]
    int v17;  // [bp-0xb8], Other Possible Types: unsigned long long
    void* v18;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v19;  // [bp-0xa8]
    int v20;  // [bp-0xa8]
    unsigned long long v21;  // [bp-0x98]
    char v22;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v23;  // [bp-0x80]
    unsigned long long v24;  // [bp-0x78]
    char v25;  // [bp-0x70]
    struct_1 *v27;  // rax
    unsigned long long v28;  // rbp
    unsigned long v29;  // rax
    unsigned long v30;  // rcx
    unsigned int v31;  // r15d
    char v32;  // r13b
    unsigned long long v33;  // rbp
    char v34;  // al

    v9.try_get_many(a1);
    v25.unwrap(&v9);
    if (!*((long long *)&v25))
    {
LABEL_475fb3:
        v15 = 0;
        v17 = 8;
        v18 = 0;
LABEL_475fd7:
        (char)v1.to_vec("missing operand\nTry 'stat --help' for more information.Invalid format stringfilesprintfformattersefile-systemdereferencecannot read table of mounted file systems/dev/stdinunsupported for this operating system-,UNKNOWNusing '-' to denote standard input does", 55);
        v12 = v3;
        *((int128_t *)&v9) = (int128_t)v1;
        v14 = 1;
        *((double *)&a0[8]) = v9.new();
        *((unsigned long long **)&a0[16]) = &g_519a38;
        goto LABEL_476022;
    }
    v9.collect(&v25);
    *((int128_t *)&v1) = *((int128_t *)&v10);
    if (v9 == 0x8000000000000000)
        goto LABEL_475fb3;
    *((int128_t *)&v17) = (int128_t)v1;
    v15 = v9;
    if (!v18)
        goto LABEL_475fd7;
    if ((char)a1.contains_id("printfformattersefile-systemdereferencecannot read table of mounted file systems/dev/stdinunsupported for this operating system-,UNKNOWNusing '-' to denote standard input does not work in file system mode\ncannot read file system information for cannot stat", 6))
    {
        v9.try_get_one(a1, "printfformattersefile-systemdereferencecannot read table of mounted file systems/dev/stdinunsupported for this operating system-,UNKNOWNusing '-' to denote standard input does not work in file system mode\ncannot read file system information for cannot stat");
        v27 = "printfformattersefile-systemdereferencecannot read table of mounted file systems/dev/stdinunsupported for this operating system-,UNKNOWNusing '-' to denote standard input does not work in file system mode\ncannot read file system information for cannot stat".unwrap(&v9);
        if (!v27)
            core::option::expect_failed("Invalid format stringfilesprintfformattersefile-systemdereferencecannot read table of mounted file systems/dev/stdinunsupported for this operating system-,UNKNOWNusing '-' to denote standard input does not work in file system mode\ncannot read file system i", 21, &g_519f80); /* do not return */
        v28 = v27->field_8;
        v8 = v27->field_10;
    }
    else
    {
        v9.try_get_one(a1, "formattersefile-systemdereferencecannot read table of mounted file systems/dev/stdinunsupported for this operating system-,UNKNOWNusing '-' to denote standard input does not work in file system mode\ncannot read file system information for cannot stat ");
        v29 = "formattersefile-systemdereferencecannot read table of mounted file systems/dev/stdinunsupported for this operating system-,UNKNOWNusing '-' to denote standard input does not work in file system mode\ncannot read file system information for cannot stat ".unwrap(&v9);
        if (v29)
        {
            v30 = *((long long *)(v29 + 8));
            v29 = *((long long *)(v29 + 16));
        }
        else
        {
            v30 = 0;
        }
        if (!v30)
            v29 = 0;
        v8 = v29;
        v28 = (v30 ? v30 : 1);
    }
    v31 = a1.contains_id("printfformattersefile-systemdereferencecannot read table of mounted file systems/dev/stdinunsupported for this operating system-,UNKNOWNusing '-' to denote standard input does not work in file system mode\ncannot read file system information for cannot stat", 6);
    v32 = a1.get_flag("tersefile-systemdereferencecannot read table of mounted file systems/dev/stdinunsupported for this operating system-,UNKNOWNusing '-' to denote standard input does not work in file system mode\ncannot read file system information for cannot stat ", 5);
    v0 = a1.get_flag("file-systemdereferencecannot read table of mounted file systems/dev/stdinunsupported for this operating system-,UNKNOWNusing '-' to denote standard input does not work in file system mode\ncannot read file system information for cannot stat ", 11);
    if (v8)
    {
        v9.generate_tokens(v28, v8, v31);
        v33 = v12;
        v5 = v9;
        if (v9 == 0x8000000000000000)
        {
            *((unsigned long long *)&a0[8]) = v10;
            *((unsigned long long *)&a0[16]) = v12;
LABEL_476022:
            *((long long *)a0) = 0x8000000000000000;
        }
        else
        {
            v4 = v10;
            goto LABEL_47620c;
        }
    }
    else
    {
        v9.default_format(v0, v32, 0);
        (char)v1.generate_tokens(v10, v12, v31);
        v33 = v3;
        v5 = (long long)v1;
        if ((long long)v1 == 0x8000000000000000)
        {
            *((unsigned long long *)&a0[8]) = v2;
            *((unsigned long long *)&a0[16]) = v3;
            *((long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<alloc::string::String>(&v9);
        }
        else
        {
            v4 = v2;
            core::ptr::drop_in_place<alloc::string::String>(&v9);
LABEL_47620c:
            v9.default_format(v0, v32, 1);
            (char)v1.generate_tokens(v10, v12, v31);
            v7 = (long long)v1;
            if ((long long)v1 == 0x8000000000000000)
            {
                *((unsigned long long *)&a0[8]) = v2;
                *((unsigned long long *)&a0[16]) = v3;
                *((long long *)a0) = 0x8000000000000000;
                core::ptr::drop_in_place<alloc::string::String>(&v9);
            }
            else
            {
                v6 = v2;
                core::ptr::drop_in_place<alloc::string::String>(&v9);
                if (v0)
                {
                    v19 = 0x8000000000000000;
                    v34 = a1.get_flag("dereferencecannot read table of mounted file systems/dev/stdinunsupported for this operating system-,UNKNOWNusing '-' to denote standard input does not work in file system mode\ncannot read file system information for cannot stat ", 11);
                    *((unsigned long long *)&a0[16]) = v18;
                    *((int128_t *)a0) = *((int128_t *)&v15);
                    a0[72] = v20;
                    *((unsigned long long *)&a0[88]) = v21;
                    *((unsigned long long *)&a0[24]) = v5;
                    *((unsigned long long *)&a0[32]) = v4;
                    *((unsigned long long *)&a0[40]) = v33;
                    *((unsigned long long *)&a0[48]) = v7;
                    *((unsigned long long *)&a0[56]) = v6;
                    *((unsigned long long *)&a0[64]) = v3;
                    *((char *)&a0[96]) = v34;
                    *((char *)&a0[97]) = v0;
                    *((char *)&a0[98]) = v8;
                    return a0;
                }
                uucore::features::fsext::read_fs_list(&v22);
                if (v22 != 0x8000000000000000)
                {
                    v9 = v22;
                    v11 = v23;
                    v13 = v24;
                    (char)v1.collect(v11, v13 * 152 + v11);
                    core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::fsext::MountInfo>>(&v9);
                    alloc::slice::stable_sort(v2, v3);
                    core::slice::<impl [T]>::reverse(v2, v3);
                    v21 = v3;
                    memcpy(&v19, &v1, 16);
                    v34 = a1.get_flag("dereferencecannot read table of mounted file systems/dev/stdinunsupported for this operating system-,UNKNOWNusing '-' to denote standard input does not work in file system mode\ncannot read file system information for cannot stat ", 11);
                    *((unsigned long long *)&a0[16]) = v18;
                    *((int128_t *)a0) = *((int128_t *)&v15);
                    a0[72] = v20;
                    *((unsigned long long *)&a0[88]) = v21;
                    *((unsigned long long *)&a0[24]) = v5;
                    *((unsigned long long *)&a0[32]) = v4;
                    *((unsigned long long *)&a0[40]) = v33;
                    *((unsigned long long *)&a0[48]) = v7;
                    *((unsigned long long *)&a0[56]) = v6;
                    *((unsigned long long *)&a0[64]) = v3;
                    *((char *)&a0[96]) = v34;
                    *((char *)&a0[97]) = v0;
                    *((char *)&a0[98]) = v8;
                    return a0;
                }
                *((long long *)&a0[8]) = uu_stat::Stater::new::{{closure}}(v11, v13);
                *((unsigned long long **)&a0[16]) = &g_519a38;
                *((long long *)a0) = 0x8000000000000000;
                v7.drop_in_place<alloc::vec::Vec<uu_stat::Token>>(v6);
            }
            v5.drop_in_place<alloc::vec::Vec<uu_stat::Token>>(v4);
        }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v15);
    return a0;
}
