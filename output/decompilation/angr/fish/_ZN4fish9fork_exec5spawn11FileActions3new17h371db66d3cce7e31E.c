double fish::fork_exec::spawn::FileActions::new(long long a0)
{
    int v0;  // [bp-0x58], Other Possible Types: char
    int v1;  // [bp-0x48]
    int v2;  // [bp-0x38]
    int v3;  // [bp-0x28]
    char v4;  // [bp-0x18]
    unsigned int v6;  // eax
    unsigned long v7;  // xmm0lq

    v6 = posix_spawn_file_actions_init(&v0);
    if (!v6)
    {
        *((int128_t *)((char *)&a0->field_38 + 8)) = *((int128_t *)&v4);
        *((void*)((char *)&a0->field_28 + 8)) = v3;
        *((void*)((char *)&a0->field_18 + 8)) = v2;
        *((void*)((char *)&a0->field_8 + 8)) = v1;
        *((void*)&(&a0->field_4)[1]) = v0;
        a0->field_0 = 0;
        return (unsigned long long)v0;
    }
    a0->field_4 = v6;
    a0->field_0 = 1;
    return v7;
}
