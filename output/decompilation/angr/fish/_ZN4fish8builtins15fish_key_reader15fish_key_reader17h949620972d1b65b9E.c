long long fish::builtins::fish_key_reader::fish_key_reader(unsigned long a0, struct_0 *a1, unsigned long long a2, unsigned long a3)
{
    char v0;  // [bp-0xfa]
    char v1;  // [bp-0xf9]
    void* v2;  // [bp-0xf8]
    unsigned long long v3;  // [bp-0xf0]
    uint128_t v4;  // [bp-0xe8]
    void* v5;  // [bp-0xd8]
    unsigned long long v6;  // [bp-0xd0]
    uint128_t v7;  // [bp-0xc8]
    unsigned long long v8;  // [bp-0xb8]
    void* v9;  // [bp-0xb0]
    unsigned long long v10;  // [bp-0xa8]
    unsigned int v11;  // [bp-0x88]
    void* v12;  // [bp-0x80]
    unsigned long long v13;  // [bp-0x78]
    unsigned int v14;  // [bp-0x48]
    char v15;  // [bp-0x44]
    unsigned long long v16[1][3];  // [bp-0x40]
    unsigned long long v18;  // rbx
    unsigned long long v19;  // rax
    unsigned long long v20;  // rcx
    unsigned int v21;  // ebp
    unsigned long long v22;  // r14

    v0 = 0;
    v1 = 0;
    v16.collect(a2, a3 * 16 + a2);
    v18 = a1->field_10;
    v19 = fish::builtins::fish_key_reader::parse_flags(a1->field_8, v18, &v16, &v0, &v1);
    v20 = v19 & 4294967295;
    if (v20 == 2)
    {
        v21 = a1->field_20;
        if (v21 >= 0 && fish::nix::isatty(v21))
        {
            v2 = 0;
            v3 = 8;
            v4 = 0;
            v5 = 0;
            v6 = 4;
            v7 = 0;
            v8 = 8;
            v9 = 0;
            v10 = 0x8000000000000000;
            v11 = 0x3b9aca00;
            v12 = 0;
            v13 = 3;
            v14 = v21;
            v15 = 0;
            fish::builtins::fish_key_reader::setup_and_process_keys(a1->field_8, v18, v0, v1, &v2);
            return 0;
        }
        v22 = 0x100000000;
        v18.appendln("Stdin must be attached to a tty.b", 32);
        v20 = 1;
    }
    else
    {
        v22 = 0x100000000 & v19;
    }
    return (unsigned int)v19 & 0xffffff00 | v22 | v20;
}
