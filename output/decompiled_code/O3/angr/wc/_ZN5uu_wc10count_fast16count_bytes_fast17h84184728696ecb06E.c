long long uu_wc::count_fast::count_bytes_fast::h84184728696ecb06(unsigned long long a0, unsigned long a1, unsigned long long a2)
{
    char v0;  // [bp-0x4028]
    char v1;  // [bp-0x4007]
    void* v2;  // [sp-0x3028]
    void* v3;  // [sp-0x2028]
    void* v4;  // [sp-0x1028]
    void* v6;  // rbx
    unsigned long long v7;  // rdx
    unsigned long long v8;  // rbx

    v4 = 0;
    v3 = 0;
    v2 = 0;
    v6 = 0;
    nix::sys::stat::fstat::h5414de4d70a08ddb(&v0, 0, a2);
    if (*((int *)&v0))
    {
LABEL_4b862e:
        memset(&v0, 0, 0x4000);
        do
        {
            v8 = v6;
            while (_$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..Read$GT$::read::he60828ebe1a3e725(a0, &v0, 0x4000))
            {
                if ((char)::0x4b60f0::std::io::error::Error::kind::hb2ff5fa058639b3d(v7) != 35)
                    return v8;
                ::0x4b7290::core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hd9e364499d096c21(v7);
            }
            v6 = v8 + v7;
        } while (v7);
    }
    else
    {
        if (!(v1 & 16))
        {
            v6 = 0;
            goto LABEL_4b862e;
        }
        v6 = v7;
        if (!(!uu_wc::count_fast::count_bytes_using_splice::h6c4ad4a8ee75a3f4(a0)))
            goto LABEL_4b862e;
    }
    return v8;
}
