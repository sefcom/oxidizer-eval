long long uu_du::read_files_from(void* a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x148], Other Possible Types: char, unsigned long long
    unsigned long long v1;  // [bp-0x148]
    unsigned long long v2;  // [bp-0x140]
    char *v3;  // [bp-0x138]
    unsigned long long v4;  // [bp-0x130]
    void* v5;  // [bp-0x128]
    void* v6;  // [bp-0x110]
    char v7;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned int v8;  // [bp-0x104]
    unsigned long v9;  // [bp-0x100], Other Possible Types: unsigned long long
    char v10;  // [bp-0xf8]
    void* v11;  // [bp-0xf0]
    char *v12;  // [bp-0xe8], Other Possible Types: char, unsigned long long
    unsigned long long v13;  // [bp-0xe0]
    char *v14;  // [bp-0xd8]
    unsigned long long v15;  // [bp-0xd0]
    char *v16;  // [bp-0xc8], Other Possible Types: unsigned long
    int v17;  // [bp-0xc8]
    unsigned long long v18;  // [bp-0xc0]
    char *v19;  // [bp-0xb8]
    unsigned long long v20;  // [bp-0xb0]
    void* v21;  // [bp-0xa0]
    unsigned long long v22;  // [bp-0x98]
    void* v23;  // [bp-0x90]
    char *v24;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v25;  // [bp-0x80]
    unsigned long v26;  // [bp-0x78]
    unsigned long long v27;  // [bp-0x70]
    unsigned long v28;  // [bp-0x68]
    char v29;  // [bp-0x60]
    char v30;  // [bp-0x48]
    unsigned long long v33;  // rax
    unsigned long long v34;  // rcx
    unsigned long long v35;  // rdx

    v20 = a1;
    if ((char)a1.equal(a2, "-iso%Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %zatimectime(uutils coreutils) 0.0.30Estimate file space usageDisplay values are in units of the first available SIZE from --block-size,\nand the DU_BLOCK_SIZE, BLOCK_SIZE and BLOCKSIZE environment variables.\nOtherwise", 1))
    {
        v6 = a0;
        v0.with_capacity(std::io::stdio::stdin());
        v33 = v0.new();
        v34 = &g_546058;
        goto LABEL_498321;
    }
    v12.to_vec(a1, a2);
    if ((char)v13.is_dir(v14))
    {
        v24 = &v20;
        v25 = <&T as core::fmt::Display>::fmt;
        v0 = &g_545ec8;
        v2 = 2;
        v5 = 0;
        v3 = &v24;
        v4 = 1;
        v29.map_or_else(&v0);
        *((long long *)&a0[8]) = 40._new(v29.new(), &g_546000);
        goto LABEL_49869f;
    }
    else
    {
        v7.open(v20, a2);
        if (*((int *)&v7) != 1)
        {
            (char)v0.with_capacity(v8);
            v33 = (char)v0.new();
            v6 = a0;
            core::ptr::drop_in_place<std::path::PathBuf>(&v12);
            v34 = &g_545f58;
LABEL_498321:
            v21 = 0;
            v22 = 8;
            v23 = 0;
            v7 = v33;
            v9 = v34;
            v10 = 0;
            v11 = 0;
            while (true)
            {
                v24.next(&(char)v7);
                if (v25 == 9223372036854775809)
                {
                    core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<std::io::Split<alloc::boxed::Box<dyn std::io::BufRead>>>>(v7, v9);
                    *((void* *)&v6[16]) = v23;
                    *((int128_t *)v6) = *((int128_t *)&v21);
                    return v6;
                }
                else if (v25 != 0x8000000000000000)
                {
                    if (v27)
                    {
                        v0.from_utf8_lossy(v26, v27);
                        v12.spec_to_string(v2, v3);
                        v19 = v14;
                        *((int128_t *)&v17) = *((int128_t *)&v12);
                        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v0);
                        if ((unsigned long long)v17.slice_contains(8, v23))
                        {
                            core::ptr::drop_in_place<std::path::PathBuf>(&(unsigned long long)v17);
                        }
                        else
                        {
                            v3 = v19;
                            *((int128_t *)&v0) = *((int128_t *)&(unsigned long long)v17);
                            v21.push(&v0);
                        }
                    }
                    else
                    {
                        v28 = v24 + 1;
                        v12 = uucore::util_name();
                        v13 = v35;
                        v16 = &v12;
                        v18 = <&T as core::fmt::Display>::fmt;
                        v1 = &g_545f08;
                        v2 = 2;
                        v5 = 0;
                        v3 = &v16;
                        v4 = 1;
                        std::io::stdio::_eprint(&v1);
                        v12 = &v20;
                        v13 = <&T as core::fmt::Display>::fmt;
                        v14 = &v28;
                        v15 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                        v1 = &g_545f28;
                        v2 = 3;
                        v5 = 0;
                        v3 = &v12;
                        v4 = 2;
                        std::io::stdio::_eprint(&v1);
                        uucore::mods::error::set_exit_code(1);
                    }
                    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v25, v26);
                }
                else
                {
                    *((unsigned long *)&v6[8]) = v26;
                    *((unsigned long long *)v6) = 0x8000000000000000;
                    core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<std::io::Split<alloc::boxed::Box<dyn std::io::BufRead>>>>(v7, v9);
                    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v21);
                    return v6;
                }
            }
        }
        if ((char)v9.kind())
        {
            *((unsigned long *)&a0[8]) = v9;
LABEL_49869f:
            *((unsigned long long *)a0) = 0x8000000000000000;
        }
        else
        {
            v16 = v9;
            v24 = &v20;
            v25 = <&T as core::fmt::Display>::fmt;
            v0 = &g_545ee8;
            v2 = 2;
            v5 = 0;
            v3 = &v24;
            v4 = 1;
            v30.map_or_else(&v0);
            *((long long *)&a0[8]) = 40._new(v30.new(), &g_546000);
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<std::io::error::Error>(&v16);
        }
        core::ptr::drop_in_place<std::path::PathBuf>(&v12);
        return a0;
    }
}
