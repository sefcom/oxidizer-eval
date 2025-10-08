long long starship::modules::hg_state::is_merge_state(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x5c]
    int v1;  // [bp-0x58], Other Possible Types: char
    unsigned int v2;  // [bp-0x54]
    unsigned long long v3;  // [bp-0x50]
    char v4;  // [bp-0x48], Other Possible Types: uint128_t
    void* v5;  // [bp-0x38]
    unsigned long long v6;  // [bp-0x30]
    unsigned long long v7;  // [bp-0x28]
    char v8;  // [bp-0x20]
    unsigned long long v10;  // rax
    unsigned long v11;  // rdx

    (char)v1.join(a1, a2, ".hgtopicbookmarks.currentError in module `hg_state`:\nsrc/modules/hg_state.rs", 3);
    v8.join(v3, *((long long *)&v4), "dirstateEXTERNALExternal column command=!/:@[`{~", 8);
    core::ptr::drop_in_place<std::path::PathBuf>(&(char)v1);
    (char)v1.open(&v8);
    if (*((int *)&v1) == 1)
    {
        a0->field_8 = v3;
        a0->field_0 = 1;
        return v3;
    }
    v0 = v2;
    v4 = 0;
    *((uint128_t *)&v1) = 0;
    v5 = 0;
    v10 = std::io::default_read_exact(&v0, &(char)v1, 40);
    if (v10)
    {
        a0->field_8 = v10;
        a0->field_0 = 1;
    }
    else
    {
        v6 = 20.index(40, &(char)v1, 40, &g_11f4f88);
        v7 = v11 + v6;
        a0->field_1 = v6.any();
        a0->field_0 = 0;
    }
    return core::ptr::drop_in_place<std::fs::File>(v0);
}
