void uu_split::platform::unix::FilterWriter::new(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x198], Other Possible Types: unsigned int
    unsigned long v1;  // [bp-0x194]
    char v2;  // [bp-0x190]
    int v3;  // [bp-0x18c]
    unsigned long long v4;  // [bp-0x188]
    unsigned long long v5;  // [bp-0x180]
    char v6;  // [bp-0x178], Other Possible Types: unsigned int
    unsigned int v7;  // [bp-0x174]
    unsigned long v8;  // [bp-0x170]
    int v9;  // [bp-0x168]
    char v10;  // [bp-0x158]
    unsigned long long v11;  // [bp-0x148]
    char v12;  // [bp-0x140]
    char v13;  // [bp-0x108]
    int v15;  // xmm0

    v12.new(a3, a4);
    std::env::var(&v0, "SHELL-c/bin/shShell process returned : \n", 5);
    if (v0 == 1)
    {
        uu_split::platform::unix::FilterWriter::new::{{closure}}(&v10, *((long long *)&v2), v4);
    }
    else
    {
        v11 = v5;
        memcpy(&v10, &v2, 16);
    }
    v13.new(&v10);
    v13.arg("-c/bin/shShell process returned : \n", 2);
    v13.arg(a1, a2);
    v13.stdin(a1, a2);
    v6.spawn(&v13);
    if (v6 == 1)
    {
        *((unsigned long *)&a0->field_4[4]) = v8;
        a0->field_0 = 1;
        core::ptr::drop_in_place<std::process::Command>(&v13);
    }
    else
    {
        v0 = v7;
        v1 = v8;
        v3 = v9;
        core::ptr::drop_in_place<std::process::Command>(&v13);
        v15 = *((int128_t *)&v0);
        *((int128_t *)&a0->field_4[12]) = (int128_t)v3;
        *((void*)&a0->field_4[0]) = v15;
        a0->field_0 = 0;
    }
    core::ptr::drop_in_place<uu_split::platform::unix::WithEnvVarSet>(&v12);
    return;
}
