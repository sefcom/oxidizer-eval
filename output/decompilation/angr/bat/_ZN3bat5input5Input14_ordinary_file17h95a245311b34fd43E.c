long long bat::input::Input::_ordinary_file(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x108]
    unsigned long long v1;  // [bp-0x100]
    unsigned long long v2;  // [bp-0xf8]
    unsigned long v3;  // [bp-0xe8]
    unsigned long long v4[3];  // [bp-0xe0]
    unsigned long v5;  // [bp-0xd0]
    unsigned long long v6[10];  // [bp-0xc8]
    unsigned long long v7;  // [bp-0xc0]
    int v8;  // [bp-0xb8]
    int v9;  // [bp-0xa8]
    int v10;  // [bp-0x98]
    int v11;  // [bp-0x88]
    char v12;  // [bp-0x78]
    unsigned long long v14;  // rax
    unsigned long long v15;  // rcx
    int v16;  // xmm0

    std::sys::pal::unix::os::split_paths::bytes_to_path(&v4, a1, a2);
    std::fs::metadata(&v6, a1, a2);
    if ((int)v6[0] == 2)
    {
        v1 = v7;
        v0 = 1;
        core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v0);
        v14 = 0;
    }
    else
    {
        v15 = *((long long *)&v12);
        v14 = 1;
    }
    v2 = 0x8000000000000000;
    v0 = v14;
    v1 = v15;
    v6.description(&v4);
    a0->field_20 = v3;
    v16 = *((int128_t *)&v0);
    a0->field_10 = *((int128_t *)&v2);
    *((void*)&a0->field_0) = v16;
    *((unsigned long long [3])((char *)&a0->field_78 + 8)) = v4;
    *((unsigned long *)((char *)&a0->field_88 + 8)) = v5;
    *((int128_t *)&(&a0->field_20)[1]) = *((int128_t *)&v6[0]);
    *((void*)((char *)&a0->field_28 + 8)) = v8;
    *((void*)((char *)&a0->field_38 + 8)) = v9;
    *((void*)((char *)&a0->field_48 + 8)) = v10;
    *((void*)((char *)&a0->field_58 + 8)) = v11;
    *((int128_t *)((char *)&a0->field_68 + 8)) = *((int128_t *)&v12);
    return a0;
}
