long long uu_sort::ext_sort::ext_sort(unsigned long long a0, struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x210]
    unsigned long long v1;  // [bp-0x208]
    unsigned long long v2;  // [bp-0x200]
    unsigned long long v3;  // [bp-0x1e8]
    unsigned long long v4;  // [bp-0x1e0]
    unsigned long long v5;  // [bp-0x1d8]
    unsigned long long v6;  // [bp-0x1d0]
    unsigned long long v7;  // [bp-0x1c8]
    unsigned long long v8;  // [bp-0x1c0]
    unsigned long long v9;  // [bp-0x1b8]
    unsigned long long v10;  // [bp-0x1b0]
    char v11;  // [bp-0x1a8], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x1a0]
    unsigned long long v13;  // [bp-0x198]
    unsigned long long v14;  // [bp-0x190]
    char v15;  // [bp-0x188]
    char v16;  // [bp-0xe8]
    void* v17;  // [bp-0xd0], Other Possible Types: char
    unsigned long long v18;  // [bp-0xc0]
    char v19;  // [bp-0xa8]
    unsigned long v21;  // rax

    std::sync::mpmc::sync_channel(&v11, 1, a2, a3);
    v5 = v11;
    v6 = v12;
    v1 = v13;
    v3 = v1;
    v2 = v14;
    v4 = v2;
    std::sync::mpmc::sync_channel(&v11, 1, a2, v1);
    v7 = v11;
    v0 = v12;
    v8 = v0;
    v9 = v13;
    v10 = v14;
    v17.clone(a1);
    v11 = v9;
    v12 = v10;
    v13 = v5;
    v14 = v6;
    memcpy(&v15, &v17, 160);
    v18 = 0x8000000000000000;
    v17 = 0;
    v19 = 0;
    v16.spawn_unchecked(&v17, &v11);
    v17.expect(&v16);
    core::ptr::drop_in_place<std::thread::JoinHandle<()>>(&v17);
    v21 = (a1->field_30 == 0x8000000000000000 ? uu_sort::ext_sort::reader_writer(a0, a1, v1, v2, v7, v0, a2, a3) : uu_sort::ext_sort::reader_writer(a0, a1, v1, v2, v7, v0, a2, a3));
    core::ptr::drop_in_place<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>(&v3);
    return v21;
}
