long long just::compiler::Compiler::expand_tilde(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xa0]
    unsigned long long v2;  // [bp-0x98]
    char v3;  // [bp-0x90]
    char v4;  // [bp-0x80]
    unsigned long long v6;  // rax
    char v7;  // al
    unsigned long long v8;  // rax
    unsigned long long v9;  // rdx
    unsigned long long v11;  // rax

    v6 = "~/!~=~!===".strip_prefix_of(2, a1, a2);
    if (v6)
    {
        dirs::home_dir(&v0);
        v3 = 27;
        if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        {
            v7 = 27;
            v8 = 27;
        }
        else
        {
            core::ptr::drop_in_place<just::error::Error>(&v3);
            v3.join(v1, v2, core::str::<impl str>::trim_start_matches(v6, v9), v9);
            core::ptr::drop_in_place<std::path::PathBuf>(&v0);
LABEL_65c564:
            v11 = *((long long *)&v4);
            *((unsigned long long *)((char *)&a0->field_8 + 8)) = v11;
            *((int128_t *)&(&a0->padding_1)[1]) = *((int128_t *)&v3);
            v7 = 56;
            v8 = v11 & 0xffffffffffffff00 | 56;
        }
    }
    else
    {
        v3.to_vec(a1, a2);
        goto LABEL_65c564;
    }
    a0->field_0 = v7;
    return v8;
}
