long long uu_mv::hardlink::HardlinkGroupScanner::scan_files(unsigned long long *a0, struct_2 *a1, unsigned long long a2, unsigned long long a3, char *a4)
{
    char v0;  // [bp-0xb1]
    unsigned long long v1;  // [bp-0xb0]
    struct struct_0 v2[16];  // [bp-0xa8]
    struct struct_0 v3[16];  // [bp-0xa8]
    char v4;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x90]
    char *v6;  // [bp-0x88], Other Possible Types: unsigned long
    unsigned long long v7;  // [bp-0x80]
    void* v8;  // [bp-0x78]
    unsigned long long v9;  // [bp-0x68]
    unsigned long long v10;  // [bp-0x60]
    char *v11;  // [bp-0x58]
    unsigned long long v12;  // [bp-0x50]
    char *v13;  // [bp-0x48], Other Possible Types: unsigned long
    unsigned long long v14;  // [bp-0x40]
    struct_1 *v16;  // r13
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax

    if (!a1->field_48)
    {
        v4.to_vec(a2, a3);
        ::0x4d3960::core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(a1);
        a1->field_10 = v6;
        a1->field_0 = *((int128_t *)&v4);
        v9 = a2;
        v10 = a2 + a3 * 24;
        v16 = v9.next();
        v0 = *(a4);
        if (v16)
        {
            if ((v0 & 1))
            {
                do
                {
                    v17 = a1.scan_single_path(*((long long *)&v16->field_8), *((long long *)&v16[1].padding_0[7]));
                    if (!v17)
                    {
                        ::0x4d3a00::core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(0);
                    }
                    else
                    {
                        v1 = v17;
                        *((int128_t *)&v3[0]) = *((int128_t *)&v16->field_8);
                        v11 = &v2[0].field_0;
                        v12 = <std::path::Display as core::fmt::Display>::fmt;
                        v13 = &v1;
                        v14 = <std::io::error::Error as core::fmt::Display>::fmt;
                        v4 = &g_5d9fc8;
                        v5 = 3;
                        v8 = 0;
                        v6 = &v11;
                        v7 = 2;
                        std::io::stdio::_eprint(&v4);
                        ::0x4d37e0::core::ptr::drop_in_place<std::io::error::Error>(v1);
                    }
                    v16 = v9.next();
                } while (v16);
            }
            else
            {
                do
                {
                    v18 = a1.scan_single_path(*((long long *)&v16->field_8), *((long long *)&v16[1].padding_0[7]));
                    if (!v18)
                        ::0x4d3a00::core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(0);
                    else
                        ::0x4d37e0::core::ptr::drop_in_place<std::io::error::Error>(v18);
                    v16 = v9.next();
                } while (v16);
            }
        }
        a1->field_48 = 1;
        if ((v0 & 1))
        {
            *((long long *)&v2[0]) = a1.stats();
            if (v2)
            {
                v11 = &v2[0].field_0;
                v12 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                v13 = &vvar_198{reg 32};
                v14 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                v4 = &g_5d9ff8;
                v5 = 3;
                v8 = 0;
                v6 = &v11;
                v7 = 2;
                std::io::stdio::_eprint(&v4);
            }
        }
    }
    *(a0) = 9223372036854775812;
    return a0;
}
