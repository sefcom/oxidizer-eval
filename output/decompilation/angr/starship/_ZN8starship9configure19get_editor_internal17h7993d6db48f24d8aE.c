void starship::configure::get_editor_internal(void* a0, void* a1, struct_0 *a2)
{
    void* v0;  // [bp-0x50]
    int v1;  // [bp-0x48], Other Possible Types: unsigned long, unsigned long long
    void* v2;  // [bp-0x40], Other Possible Types: unsigned long
    int v3;  // [bp-0x38], Other Possible Types: void*
    unsigned long long v4;  // [bp-0x30]
    void* v5;  // [bp-0x28], Other Possible Types: unsigned long
    int v6;  // [bp-0x20], Other Possible Types: char
    char v7;  // [bp-0x10]
    unsigned long long v9;  // rax

    if ((char)(((0 ^ *((long long *)a1)) & (0 ^ -(*((long long *)a1)))) >> 63))
    {
        v3 = 0;
        v4 = 1;
        v5 = 0;
    }
    else
    {
        v5 = (long long)a1[16];
        *((int128_t *)&v3) = *((int128_t *)a1);
        if (v5)
        {
            *((long long *)&a0[16]) = (long long)a1[16];
            *((int128_t *)a0) = *((int128_t *)a1);
            core::ptr::drop_in_place<regex::error::Error>(a2);
            return;
        }
    }
    v9 = a2->field_0;
    if (v9 == 0x8000000000000000)
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
LABEL_b6cee1:
        v6.to_vec("viPWDReceived completed pipestatus of src/context.rs", 2);
        *((long long *)&a0[16]) = *((long long *)&v7);
        *(a0) = v6;
        core::ptr::drop_in_place<alloc::string::String>(&v0);
    }
    else
    {
        *((int128_t *)&v1) = *((int128_t *)&(&a2->field_0)[1]);
        v0 = v9;
        if (!v2)
            goto LABEL_b6cee1;
        *((unsigned long *)&a0[16]) = v2;
        *((void* *)a0) = v0;
        *((unsigned long *)&a0[8]) = v1;
    }
    core::ptr::drop_in_place<alloc::string::String>(&v3);
    return;
}
