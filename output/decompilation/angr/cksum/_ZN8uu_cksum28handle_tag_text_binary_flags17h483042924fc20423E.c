long long uu_cksum::handle_tag_text_binary_flags(unsigned long a0, uint128_t a1[2])
{
    struct_0 *v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    char v2;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x68]
    unsigned long long v4;  // [bp-0x60]
    int v5;  // [bp-0x58]
    int v6;  // [bp-0x48]
    unsigned long long v7;  // [bp-0x30]
    unsigned long long v8;  // [bp-0x28]
    unsigned long long v9;  // [bp-0x20]
    unsigned long long v10;  // [bp-0x18]
    unsigned long long v11;  // [bp-0x10]
    unsigned long long v13;  // r15
    unsigned long long v14;  // r14
    unsigned long long v15;  // r13
    unsigned long long v16;  // r12
    unsigned long long v17;  // rbx
    char v18;  // r12b
    char v19;  // r13b
    unsigned long long v20;  // r15
    unsigned long long v21;  // rbp
    unsigned long long v22;  // rdx

    v11 = v13;
    v10 = v14;
    v9 = v15;
    v8 = v16;
    v7 = v17;
    *((uint128_t *)&v6) = a1[1];
    *((uint128_t *)&v5) = a1[0];
    v2.next(&v5);
    v18 = 1;
    v1 = v2;
    if (!((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63)))
    {
        do
        {
            v20 = v1;
            v21 = v3.as_ref(v4);
            if ((char)v21.equal(v22, "-b--tag--untagged-: \ncrcbsdcrc32bblake2b  (BLAKE2b (", 2) || (char)v21.equal(v22, "--binary", 8))
            {
                v19 = 1;
            }
            else if ((char)v21.equal(v22, "--tag--untagged-: \ncrcbsdcrc32bblake2b  (BLAKE2b (", 5))
            {
                v18 = 1;
            }
            core::ptr::drop_in_place<std::ffi::os_str::OsString>(v20, v3);
            v2.next(&v5);
            v1 = v2;
        } while (v1 != 0x8000000000000000);
    }
    core::ptr::drop_in_place<std::env::ArgsOs>(&v5);
    v0->field_8 = v18 & 1;
    v0->field_9 = ((v18 & 1) ? 0 : v19);
    v0->field_0 = 0;
    return ((v18 & 1) ? 0 : v19);
}
