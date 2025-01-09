long long uu_wc::count_fast::count_bytes_using_splice::h6c4ad4a8ee75a3f4(unsigned long long a0)
{
    unsigned int v0;  // [sp-0xe0]
    unsigned int v1;  // [sp-0xdc]
    char v2;  // [bp-0xd8], Other Possible Types: unsigned int
    char v3;  // [bp-0xd4]
    unsigned long long v4;  // [sp-0xc8]
    unsigned int v5;  // [bp-0xc0]
    char v6;  // [sp-0xbf]
    unsigned short v7;  // [sp-0xbc]
    char v8;  // [bp-0x98]
    unsigned long long v10;  // rdi
    unsigned long long v11;  // rax
    void* v12;  // r14
    unsigned long long v13;  // r13

    v4 = 0x1b600000000;
    v5 = 0;
    v7 = 0;
    v6 = 1;
    std::fs::OpenOptions::open::h0b5101c42a630ef2(&v2, &v4, "/dev/nullsrc/uu/wc/src/count_fast.rs", 9);
    if (v2)
    {
        ::0x4b6920::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h1f47a50be6f5ae8e();
    }
    else
    {
        v0 = *((int *)&v3);
        nix::sys::stat::fstat::h5414de4d70a08ddb(&v4, v0);
        if ((int)v4)
        {
LABEL_4b8543:
        }
        else
        {
            v10 = *((long long *)&v8);
            if (!(((unsigned int)(v10 >> 32) & -0x1000 | (unsigned int)v10 >> 8 & 4095) == 1) || !(!core::cmp::impls::_$LT$impl$u20$core..cmp..PartialEq$u20$for$u20$u32$GT$::ne::h189986e1b215ca81((unsigned int)(v10 >> 12) & -0x100 | (unsigned int)v10)) || !((v11 = uucore::features::pipes::pipe::h14b45b9735c770a8(), (unsigned int)v11 != -1)))
                goto LABEL_4b8543;
            v1 = v11;
            v2 = v11 >> 32;
            v12 = 0;
            while (true)
            {
                nix::fcntl::splice::h04f44a335952f6be(&v4, a0, 0, &v2, 0, 0x20000, 0);
                if ((int)v4)
                    break;
                v13 = *((long long *)&v5);
                if (!v13)
                {
                    ::0x4b6890::core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1();
                    ::0x4b6890::core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1();
                    ::0x4b6890::core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1();
                    return 0;
                }
                v12 += v13;
                if ((int)uucore::features::pipes::splice_exact::hd07514bb204e6b97(&v1, &v0, v13) != 134)
                    break;
            }
            ::0x4b6890::core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1();
            ::0x4b6890::core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1();
        }
        ::0x4b6890::core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1();
    }
    return 1;
}
