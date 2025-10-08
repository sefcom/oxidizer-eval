char fish::builtins::shared::cmd_needs_help(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x78]
    unsigned long long v2;  // [bp-0x70]
    unsigned long long v3;  // [bp-0x68]
    unsigned long long v4;  // [bp-0x60]
    unsigned long long v5;  // [bp-0x58]
    unsigned long long v6;  // [bp-0x50]
    unsigned long long v7;  // [bp-0x48]
    unsigned long long v8;  // [bp-0x40]
    unsigned long long v9;  // [bp-0x38]
    unsigned long long v10;  // [bp-0x30]
    unsigned long long v11;  // [bp-0x28]
    unsigned long long v12;  // [bp-0x20]
    unsigned long long v13;  // [bp-0x18]
    unsigned long long v14;  // [bp-0x10]
    unsigned long long v15;  // [bp-0x8]

    v0 = a0;
    v1 = a1;
    v2 = "f";
    v3 = 3;
    v4 = "w";
    v5 = 5;
    v6 = "f";
    v7 = 8;
    v8 = "i";
    v9 = 2;
    v10 = "e";
    v11 = 3;
    v12 = "s";
    v13 = 6;
    v14 = "c";
    v15 = 4;
    return v0.slice_contains(&v2, 7);
}
