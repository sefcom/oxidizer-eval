long long fish::env::environment::EnvStack::create_child(struct_0 *a0, unsigned long long a1, char a2)
{
    char v0;  // [bp-0x130], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x128]
    char v2;  // [bp-0x120]
    int v3;  // [bp-0x118]
    int v4;  // [bp-0x108]
    int v5;  // [bp-0xf8]
    int v6;  // [bp-0xe8], Other Possible Types: char
    int v7;  // [bp-0xd8]
    int v8;  // [bp-0xc8], Other Possible Types: char
    int v9;  // [bp-0xb8]
    char v10;  // [bp-0xa8]
    int v11;  // [bp-0x90], Other Possible Types: char
    int v12;  // [bp-0x80]
    int v13;  // [bp-0x70]
    char v14;  // [bp-0x60]
    int v15;  // [bp-0x50]
    char v16;  // [bp-0x40]
    int v17;  // [bp-0x30]
    char v18;  // [bp-0x20]

    v0.lock(a1);
    v11.clone(v0);
    memcpy(&v10, &v18, 16);
    v9 = v17;
    memcpy(&v8, &v16, 16);
    v7 = v15;
    memcpy(&v6, &v14, 16);
    v5 = v13;
    v4 = v12;
    v3 = v11;
    core::ptr::drop_in_place<fish::env::environment_impl::EnvMutexGuard<fish::env::environment_impl::EnvStackImpl>>(v1, *((int *)&v2));
    a0->field_70 = *((int128_t *)&v10);
    *((void*)&a0->field_60) = v9;
    *((void*)&a0->field_50) = v8;
    *((void*)&a0->field_40) = v7;
    *((void*)&a0->field_30) = v6;
    *((void*)&a0->field_20) = v5;
    *((void*)&a0->field_10) = v4;
    *((void*)&a0->field_0) = v3;
    a0->field_80 = 1;
    a0->field_81 = a2;
    return a0;
}
