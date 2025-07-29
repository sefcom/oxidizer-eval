long long uu_cp::copy_source(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, char a6, struct_1 *a7, unsigned long long a8, unsigned long long a9, unsigned long long a10)
{
    struct_0 *v0;  // [bp-0x148]
    int v1;  // [bp-0x140]
    unsigned long long v2;  // [bp-0x130]
    int v3;  // [bp-0x128]
    unsigned long long v4;  // [bp-0x120]
    unsigned long long v5;  // [bp-0x118]
    int v6;  // [bp-0x108]
    unsigned long long v7;  // [bp-0x100]
    unsigned long long v8;  // [bp-0xf8]
    char v9;  // [bp-0xe0], Other Possible Types: unsigned long long
    char v10;  // [sp-0xd8]
    char v11;  // [bp-0xd0]
    unsigned long long v12;  // [bp-0xc8]
    int v13;  // [bp-0xc0]
    unsigned long v14;  // [bp-0xb0]
    int v15;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v16;  // [bp-0x98]
    int v17;  // [bp-0x88]
    unsigned long v18;  // [bp-0x78]
    char v19;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v20;  // [bp-0x68]
    unsigned long long v21;  // [bp-0x60]
    unsigned long long v22;  // [bp-0x58]
    char v23;  // [bp-0x50]
    char v24;  // r13b
    unsigned long long v25;  // rax
    unsigned long long v26;  // rsi
    int v27;  // xmm0
    int v28;  // xmm1
    int v29;  // xmm1

    if ((char)a2.is_dir(a3) && (a7->field_59 || !(char)a2.is_symlink(a3)))
        return uu_cp::copydir::copy_directory(a0, a1, a2, a3, a4, a5, a7, a8, a9, a10, 1);
    v24 = a7->field_5c;
    uu_cp::construct_dest_path(&v9, a2, a3, a4, a5, a6, a7->field_5a, v24);
    v25 = v9;
    memcpy(&v15, &v10, 16);
    v16 = v12;
    if (v9 == 9223372036854775820)
    {
        v3 = v15;
        v5 = v16;
        uu_cp::copy_file(&v15, a1, a2, a3, v4, v16, a7, a8, a9, a10, 1);
        if ((v24 & 1))
        {
            uu_cp::aligned_ancestors(&v9, a2, a3, v4, v5);
            v23.into_iter(&v9);
            v19.next(&v23);
            v26 = v19;
            if (v19)
            {
                do
                {
                    uucore::features::fs::canonicalize(&v1, v26, v20, 0, 1);
                    if ((long long)v1 == 0x8000000000000000)
                    {
                        ::0x4d4650::core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v1);
                    }
                    else
                    {
                        v8 = v2;
                        v6 = v1;
                        uu_cp::copy_attributes(&v9, v7, v2, v21, v22, &a7->padding_0[72]);
                        if (v9 == 9223372036854775820)
                        {
                            ::0x4d38d0::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v6);
                            if ((long long)v1 == 0x8000000000000000)
                                ::0x4d4650::core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v1);
                        }
                        else
                        {
                            *((unsigned long *)&v0->field_20) = v14;
                            v27 = *((int128_t *)&v9);
                            v28 = *((int128_t *)&v11);
                            *((void*)&v0->field_10) = v13;
                            *((void*)&v0->field_8[8]) = v28;
                            *((void*)&v0->field_0) = v27;
                            ::0x4d38d0::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v6);
                            if ((long long)v1 == 0x8000000000000000)
                                ::0x4d4650::core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v1);
                            ::0x4d3570::core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&std::path::Path,&std::path::Path)>>(&v23);
                            v15.drop_in_place<core::result::Result<(),uu_cp::CpError>>();
                            goto LABEL_4dd060;
                        }
                    }
                    v19.next(&v23);
                    v26 = v19;
                } while (v19);
            }
            ::0x4d3570::core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&std::path::Path,&std::path::Path)>>(&v23);
        }
        *((unsigned long *)&v0->field_20) = v18;
        v29 = *((int128_t *)&v16);
        *((void*)&v0->field_10) = v17;
        *((void*)&v0->field_8[8]) = v29;
        *((void*)&v0->field_0) = v15;
LABEL_4dd060:
        v25 = (unsigned long long)::0x4d38d0::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v3);
    }
    else
    {
        *((unsigned long *)&v0->field_20) = v14;
        *((void*)&v0->field_10) = v13;
        *((unsigned long long *)&v0->field_8[16]) = v16;
        *((void*)&v0->field_8[0]) = v15;
        *((unsigned long long *)&v0->field_0) = v9;
    }
    return v25;
}
