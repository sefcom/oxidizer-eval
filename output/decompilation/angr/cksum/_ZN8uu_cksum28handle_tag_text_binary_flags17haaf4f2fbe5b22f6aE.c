long long uu_cksum::handle_tag_text_binary_flags(unsigned long a0, uint128_t a1[2])
{
    struct_0 *v0;  // [bp-0x90]
    int v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x78]
    int v4;  // [bp-0x70]
    unsigned long long v5;  // [bp-0x60]
    int v6;  // [bp-0x58]
    int v7;  // [bp-0x48]
    unsigned long long v8;  // [bp-0x30]
    unsigned long long v9;  // [bp-0x28]
    unsigned long long v10;  // [bp-0x20]
    unsigned long long v11;  // [bp-0x18]
    unsigned long long v12;  // [bp-0x10]
    unsigned long long v14;  // r15
    unsigned long long v15;  // r14
    unsigned long long v16;  // r13
    unsigned long long v17;  // r12
    unsigned long long v18;  // rbx
    char v19;  // r12b
    char v20;  // r14b
    unsigned long long v21;  // rbx
    unsigned long long v22;  // rdx

    v12 = v14;
    v11 = v15;
    v10 = v16;
    v9 = v17;
    v8 = v18;
    *((uint128_t *)&v7) = a1[1];
    *((uint128_t *)&v6) = a1[0];
    v19 = 1;
    while (true)
    {
        v4.next(&v6);
        if ((char)(((0 ^ (long long)v4) & (0 ^ -((long long)v4))) >> 63))
            break;
        v1 = v4;
        v3 = v5;
        v21 = v2.as_ref(v5);
        if ((char)v21.equal(v22, "-b--tag--untagged-: \ncrcbsdcrc32bblake2b  (BLAKE2b (", 2) || (char)v21.equal(v22, "--binary", 8))
        {
            v20 = 1;
        }
        else if ((char)v21.equal(v22, "--tag--untagged-: \ncrcbsdcrc32bblake2b  (BLAKE2b (", 5))
        {
            v19 = 1;
        }
        ::0x4c8fa0::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&(char)v1);
    }
    core::ptr::drop_in_place<std::env::ArgsOs>(&v6);
    v0->field_8 = v19 & 1;
    *((int *)&v0->field_9) = (!(v19 & 1) ? 0 : v20 & 1);
    v0->field_0 = 0;
    return v0;
}
