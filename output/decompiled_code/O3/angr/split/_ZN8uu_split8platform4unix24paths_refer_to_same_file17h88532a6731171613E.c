long long uu_split::platform::unix::paths_refer_to_same_file::h88532a6731171613(char *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [sp-0x1e0]
    char v1;  // [bp-0x1d8], Other Possible Types: unsigned long long
    char v2;  // [bp-0x1d0]
    char v3;  // [bp-0x148]
    char v4;  // [bp-0x144]
    char v5;  // [bp-0x140]
    unsigned long long v6;  // [sp-0xb0]
    char v7;  // [sp-0xa8], Other Possible Types: unsigned long, unsigned long long
    char v8;  // [bp-0xa0]
    unsigned long long v10;  // rax
    void* v11;  // rsi
    unsigned long long v12;  // rax

    if (!(a1 == 1) || !(*(a0) == 45))
    {
        nix::sys::stat::stat::h29c4f371c8f528e9(&v3, a0, a1);
        if (*((int *)&v3))
        {
            v10 = *((int *)&v4);
            goto LABEL_4a4eae;
        }
        else
        {
            v11 = &v5;
        }
LABEL_4a4ed1:
        memcpy(&v1, v11, 144);
        v12 = 0;
    }
    else
    {
        std::io::stdio::stdin::h7215cc131abb55d8();
        if (fstat(0, &v3) != -1)
        {
            v11 = &v3;
            goto LABEL_4a4ed1;
        }
        else
        {
            v10 = nix::errno::consts::from_i32::hb3bc9b2c0830196d(*(__errno_location()));
LABEL_4a4eae:
            v1 = v10 * 0x100000000 | 2;
            v12 = 1;
        }
    }
    v0 = v12;
    nix::sys::stat::stat::h29c4f371c8f528e9(&v3, a2, a3);
    if (!*((int *)&v3))
    {
        memcpy(&v7, &v5, 144);
        return v1 ^ v7 | -0x100 | (!(*((long long *)&v2) ^ *((long long *)&v8)) && !(v1 ^ v7));
    }
    v7 = *((int *)&v4) * 0x100000000 | 2;
    v6 = 1;
    _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h1ef73b143d2c56eaE.llvm.3928628070634382108(&v7);
    return 0;
}
