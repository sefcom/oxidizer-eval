long long forc_publish::tarball::create_tarball_from_current_dir(void* a0, unsigned long long a1[2])
{
    unsigned long long v0;  // [bp-0x140]
    unsigned long long v1;  // [bp-0x138]
    char v2;  // [bp-0x130]
    unsigned int v3;  // [bp-0x12f]
    unsigned int v4;  // [bp-0x12c]
    unsigned long long v5;  // [bp-0x128], Other Possible Types: char
    unsigned int v6;  // [bp-0x124]
    unsigned long long v7;  // [bp-0x120]
    char v8;  // [bp-0x118]
    unsigned int v9;  // [bp-0x114]
    void* v10;  // [bp-0x110]
    int v11;  // [bp-0x108]
    void* v12;  // [bp-0x100]
    int v13;  // [bp-0xf8]
    unsigned int v14;  // [bp-0xf0]
    char v15;  // [bp-0xec]
    int v16;  // [bp-0xe8]
    char v17;  // [bp-0xd8]
    char v18;  // [bp-0xc8]
    unsigned int v19;  // [bp-0xb8]
    char v20;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v21;  // [bp-0xa0]
    unsigned long v22;  // [bp-0x98]
    int v23;  // [bp-0x90], Other Possible Types: char
    int v24;  // [bp-0x80]
    int v25;  // [bp-0x70]
    int v26;  // [bp-0x60]
    int v27;  // [bp-0x50]
    char v28;  // [bp-0x40]
    char v29;  // [bp-0x30]
    unsigned long long v31;  // r14
    char v32;  // al
    unsigned long long v33;  // rsi
    char v34;  // al
    unsigned long long v35;  // rax
    int v36;  // xmm0
    int v37;  // xmm0

    std::env::current_dir(&v5);
    v31 = *((long long *)&v5);
    if ((char)(((0 ^ v31) & (0 ^ -(v31))) >> 63))
    {
        *((char *)a0) = 0;
        *((unsigned long long *)&a0[8]) = v7;
        return a0;
    }
    forc_publish::validate::validate_dir(&v5, v7, *((long long *)&v8));
    if (v5 == 14)
    {
        tempfile::dir::tempdir(&v5);
        v32 = v8;
        v33 = *((long long *)&v5);
        if (v32 == 2)
        {
            *((char *)a0) = 0;
            *((unsigned long long *)&a0[8]) = v0;
        }
        else
        {
            v3 = *((int *)&(&v8)[1]);
            v4 = v9;
            v0 = v33;
            v1 = v7;
            v2 = v32;
            forc_publish::tarball::copy_project_excluding_out(&v5, v0, v7);
            v34 = v5;
            if (v5 != 14)
            {
LABEL_a64ca0:
                *((long long *)&a0[32]) = (long long)v11;
                v36 = *((int128_t *)&v5);
                *((int128_t *)&a0[17]) = *((int128_t *)&v8);
                a0[1] = v36;
                *((char *)a0) = v34;
                goto LABEL_a64dbc;
            }
            forc_publish::tarball::process_readme(&v5, v0, v1);
            v34 = v5;
            if (v34 != 14)
                goto LABEL_a64ca0;
            v20.join(a1[0], a1[1], "sway-project.tgzcontent-encodingInvalidAuthoritypool is disabled", 16);
            v5.create(&v20);
            if (*((int *)&v5) == 1)
            {
                *((char *)a0) = 0;
                *((unsigned long long *)&a0[8]) = v7;
                goto LABEL_a64da7;
            }
            else
            {
                v5 = 0x8000000000000000;
                v10 = 0;
                v12 = 0;
                v15 = 0;
                v14 = 0;
                v23.write(&v5, v6);
                memcpy(&v18, &v29, 16);
                memcpy(&v17, &v28, 16);
                v16 = v27;
                v13 = v26;
                v11 = v25;
                *((void*)&v8) = v24;
                *((void*)&v5) = v23;
                v19 = 0x10100;
                v35 = v5.append_dir_all(&v0);
                if (!v35)
                {
                    v35 = v5.finish();
                    if (v35)
                        goto LABEL_a64d95;
                    *((unsigned long *)&a0[24]) = v22;
                    *((int128_t *)&a0[8]) = *((int128_t *)&v20);
                    *((char *)a0) = 14;
                    core::ptr::drop_in_place<tar::builder::Builder<flate2::gz::write::GzEncoder<std::fs::File>>>(&v5);
                    core::ptr::drop_in_place<tempfile::dir::TempDir>(&v0);
                }
                else
                {
LABEL_a64d95:
                    *((char *)a0) = 0;
                    *((unsigned long long *)&a0[8]) = v35;
                    core::ptr::drop_in_place<tar::builder::Builder<flate2::gz::write::GzEncoder<std::fs::File>>>(&v5);
LABEL_a64da7:
                    core::ptr::drop_in_place<std::path::PathBuf>(v20, v21);
LABEL_a64dbc:
                    core::ptr::drop_in_place<tempfile::dir::TempDir>(&v0);
                }
            }
        }
    }
    else
    {
        *((long long *)&a0[32]) = (long long)v11;
        v37 = *((int128_t *)&v5);
        *((int128_t *)&a0[16]) = *((int128_t *)&v8);
        *(a0) = v37;
    }
    core::ptr::drop_in_place<std::path::PathBuf>(v31, v7);
    return a0;
}
