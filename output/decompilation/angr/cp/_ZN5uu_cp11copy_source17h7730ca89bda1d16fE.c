long long uu_cp::copy_source(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, char a6, struct_0 *a7, unsigned long long a8, unsigned long long a9, unsigned long long a10)
{
    char v0;  // [bp-0x118]
    unsigned long long v1;  // [bp-0x110]
    unsigned long long v2;  // [bp-0x108]
    unsigned long long v3;  // [bp-0xf8]
    unsigned long long v4;  // [bp-0xf0]
    unsigned long long v5;  // [bp-0xe8]
    char v6;  // [bp-0xe0], Other Possible Types: unsigned long long
    char v7;  // [bp-0xd8]
    char v8;  // [bp-0xd0]
    unsigned long long v9;  // [bp-0xc8]
    int v10;  // [bp-0xc0]
    unsigned long v11;  // [bp-0xb0]
    int v12;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v13;  // [bp-0x98]
    int v14;  // [bp-0x88]
    unsigned long v15;  // [bp-0x78]
    unsigned long long v16;  // [bp-0x70]
    unsigned long long v17;  // [bp-0x70]
    unsigned long long v18;  // [bp-0x68]
    unsigned long long v19;  // [bp-0x60]
    unsigned long long v20;  // [bp-0x58]
    char v21;  // [bp-0x50]
    char v22;  // bl
    unsigned long long v23;  // rax
    int v24;  // xmm0
    int v25;  // xmm1
    int v26;  // xmm1

    if ((char)a2.is_dir(a3))
        return uu_cp::copydir::copy_directory(a0, a1, a2, a3, a4, a5, a7, a8, a9, a10);
    v22 = a7->field_5c;
    uu_cp::construct_dest_path(&v6, a2, a3, a4, a5, a6, a7->field_5a, v22);
    v23 = v6;
    memcpy(&v12, &v7, 16);
    v13 = v9;
    if (v6 == 9223372036854775820)
    {
        memcpy(&v0, &v12, 16);
        v2 = v13;
        uu_cp::copy_file(&v12, a1, a2, a3, v1, v13, a7, a8, a9, a10, 1);
        if ((v22 & 1))
        {
            uu_cp::aligned_ancestors(&v6, a2, a3, v1, v13);
            v21.into_iter(&v6);
            (char)v17.next(&v21);
            if (v16)
            {
                v17 = v16;
                do
                {
                    uucore::features::fs::canonicalize(&v3, v17, v18, 0, 1);
                    if (v3 == 0x8000000000000000)
                    {
                        core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v3);
                    }
                    else
                    {
                        uu_cp::copy_attributes(&v6, v4, v5, v19, v20, &a7->padding_0[72]);
                        if (v6 == 9223372036854775820)
                        {
                            core::ptr::drop_in_place<std::path::PathBuf>(&v3);
                        }
                        else
                        {
                            *((unsigned long *)&a0[48]) = v11;
                            v24 = *((int128_t *)&v6);
                            v25 = *((int128_t *)&v8);
                            a0[32] = v10;
                            a0[16] = v25;
                            *(a0) = v24;
                            core::ptr::drop_in_place<std::path::PathBuf>(&v3);
                            core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&std::path::Path,&std::path::Path)>>(&v21);
                            v12.drop_in_place<core::result::Result<(),uu_cp::Error>>();
                            goto LABEL_4a110e;
                        }
                    }
                    (char)v17.next(&v21);
                    v17 = v16;
                } while (v17);
            }
            core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&std::path::Path,&std::path::Path)>>(&v21);
        }
        *((unsigned long *)&a0[48]) = v15;
        v26 = *((int128_t *)&v13);
        a0[32] = v14;
        a0[16] = v26;
        *(a0) = v12;
LABEL_4a110e:
        v23 = (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>(&v0);
    }
    else
    {
        *((unsigned long *)&a0[48]) = v11;
        a0[32] = v10;
        *((unsigned long long *)&a0[24]) = v13;
        a0[8] = v12;
        *((unsigned long long *)a0) = v6;
    }
    return v23;
}
