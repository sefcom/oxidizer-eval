long long uu_comm::open_file::h736695cf41c0e354(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    char v0;  // [bp-0x30]
    char v1;  // [bp-0x2c]
    char v2;  // [bp-0x28]
    unsigned long long v4;  // rbp

    v4 = a3;
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h86c3d7c20c3c4ccd(a1, a2, "-", 1))
    {
        a0->field_0 = 0;
        a0->field_8 = std::io::stdio::stdin::h7215cc131abb55d8();
    }
    else
    {
        std::fs::File::open::he7b09fcb45a23fb7(&v0, a1, a2);
        if (*((int *)&v0))
        {
            a0->field_0 = *((long long *)&v2);
            v4 = v4 | -0x100 | 11;
        }
        else
        {
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hc483dcd168494e64(a0, 0x2000, *((int *)&v1));
        }
    }
    a0->field_30 = v4;
    return a0;
}
