long long uu_stdbuf::set_command_env(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3[2])
{
    char v0;  // [bp-0x4c]
    char v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x20]
    unsigned long long v3;  // [bp-0x18]
    unsigned long long v4;  // [bp-0x10]
    unsigned long long v5;  // [bp-0x8]
    unsigned long long v7;  // rax
    unsigned long long v8;  // r15
    unsigned long long v9;  // r14
    unsigned long long v10;  // r12
    unsigned long long v11;  // rbx

    v7 = a3[0];
    if (!v7)
    {
        return v7;
    }
    else if ((unsigned int)v7 != 1)
    {
        v5 = v8;
        v4 = v9;
        v3 = v10;
        v2 = v11;
        v1.to_vec(core::fmt::num::imp::<impl u64>::_fmt(a3[1], &v0, 20), a2);
        return a0.env(a1, a2, &v1);
    }
    else
    {
        return a0.env(a1, a2);
    }
}
