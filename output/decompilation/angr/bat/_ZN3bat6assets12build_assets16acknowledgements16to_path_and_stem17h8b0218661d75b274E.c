void bat::assets::build_assets::acknowledgements::to_path_and_stem(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3[3])
{
    int v0;  // [bp-0xa8], Other Possible Types: char
    char v1;  // [bp-0xa0]
    unsigned long long v2;  // [bp-0x98]
    int v3;  // [bp-0x90]
    unsigned long v4;  // [bp-0x88]
    unsigned long long v5;  // [bp-0x80]
    int v6;  // [bp-0x78], Other Possible Types: unsigned long
    unsigned long long v7;  // [bp-0x78]
    unsigned long v8;  // [bp-0x70]
    unsigned long long v9;  // [bp-0x68]
    int v10;  // [bp-0x60], Other Possible Types: char
    unsigned long long v11;  // [bp-0x50]
    unsigned long long v12;  // [bp-0x48]
    int v13;  // [bp-0x40]
    unsigned long long v15;  // r13
    unsigned long long v16;  // rbp
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax

    v15 = a3[1];
    v16 = a3[2];
    std::sys::pal::unix::os::split_paths::bytes_to_path(&v10, v15, v16);
    v17 = v15.file_stem(v16);
    if (v17)
    {
        bat::assets::build_assets::acknowledgements::to_path_and_stem::{{closure}}(&v0, v17, a2);
        v18 = *((long long *)&v0);
        *((int128_t *)&v13) = *((int128_t *)&v1);
        v12 = v18;
        v19 = v15.strip_prefix(v16, a1, a2);
        if (v19)
        {
            bat::assets::build_assets::acknowledgements::to_path_and_stem::{{closure}}(&v0, v19, a2);
            v9 = v2;
            *((int128_t *)&v6) = *((int128_t *)&v0);
            if (v6 == 0x8000000000000000)
                goto LABEL_832f1d;
            *((unsigned long *)&a0[56]) = v8;
            *((unsigned long long *)&a0[64]) = v9;
            v0 = v10;
            v2 = v11;
            *((int128_t *)&v3) = *((int128_t *)&v12);
            v5 = (long long)(&v13)[8];
            *((unsigned long *)&a0[32]) = v4;
            *((unsigned long long *)&a0[40]) = v5;
            *((unsigned long long *)&a0[16]) = v2;
            *((long long *)&a0[24]) = (long long)v3;
            *(a0) = v10;
            *((unsigned long *)&a0[48]) = v6;
        }
        else
        {
            v7 = 0x8000000000000000;
LABEL_832f1d:
            core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::path::StripPrefixError>>(&(char)v7);
            *((long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<alloc::string::String>(&v12);
LABEL_832f34:
            core::ptr::drop_in_place<std::path::PathBuf>(&v10);
        }
    }
    else
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        goto LABEL_832f34;
    }
    core::ptr::drop_in_place<walkdir::dent::DirEntry>(a3);
    return;
}
