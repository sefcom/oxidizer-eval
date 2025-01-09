long long uu_wc::count_fast::count_bytes_using_splice::h128e743cacc3bf6e(unsigned long long a0)
{
    unsigned int v0;  // [sp-0xe8]
    unsigned int v1;  // [sp-0xe0]
    unsigned int v2;  // [sp-0xdc]
    char v3;  // [bp-0xd8], Other Possible Types: unsigned int
    char v4;  // [bp-0xd4]
    unsigned long long v5;  // [sp-0xc8]
    unsigned int v6;  // [bp-0xc0]
    char v7;  // [sp-0xbf]
    unsigned short v8;  // [sp-0xbc]
    char v9;  // [bp-0x98]
    unsigned long long v11;  // rdi
    unsigned long long v12;  // rax
    void* v13;  // r14
    unsigned long long v14;  // r13

    v5 = 0x1b600000000;
    v6 = 0;
    v8 = 0;
    v7 = 1;
    std::fs::OpenOptions::open::h0b5101c42a630ef2(&v3, &v5, "/dev/nullsrc/uu/wc/src/count_fast.rs", 9);
    if (v3)
    {
        ::0x4b6920::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h1f47a50be6f5ae8e();
    }
    else
    {
        v1 = *((int *)&v4);
        nix::sys::stat::fstat::h5414de4d70a08ddb(&v5, v1);
        if ((int)v5)
        {
LABEL_4b8363:
        }
        else
        {
            v11 = *((long long *)&v9);
            if (!(((unsigned int)(v11 >> 32) & 0xfffff000 | (unsigned int)v11 >> 8 & 4095) == 1) || !(!core::cmp::impls::_$LT$impl$u20$core..cmp..PartialEq$u20$for$u20$u32$GT$::ne::h189986e1b215ca81((unsigned int)(v11 >> 12) & 0xffffff00 | (unsigned int)v11)) || !((v12 = uucore::features::pipes::pipe::h14b45b9735c770a8(), (unsigned int)v12 != -1)))
                goto LABEL_4b8363;
            v2 = v12;
            v3 = v12 >> 32;
            v13 = 0;
            while (true)
            {
                v0 = 0;
                nix::fcntl::splice::h2aa3206a8b712af9(&v5, a0, 0, &v3, 0, 0x20000);
                if ((int)v5)
                    break;
                v14 = *((long long *)&v6);
                if (!v14)
                {
                    ::0x4b6890::core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1();
                    ::0x4b6890::core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1();
                    ::0x4b6890::core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1();
                    return 0;
                }
                v13 += v14;
                if ((int)uucore::features::pipes::splice_exact::hd07514bb204e6b97(&v2, &v1, v14) != 134)
                    break;
            }
            ::0x4b6890::core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1();
            ::0x4b6890::core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1();
        }
        ::0x4b6890::core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1();
    }
    return 1;
}
