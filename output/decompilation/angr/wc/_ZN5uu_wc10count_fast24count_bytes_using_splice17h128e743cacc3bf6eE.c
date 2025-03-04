long long uu_wc::count_fast::count_bytes_using_splice::h128e743cacc3bf6e(unsigned long long a0)
{
    unsigned int v0;  // [sp-0xe8]
    unsigned int v1;  // [sp-0xe0]
    unsigned int v2;  // [sp-0xdc]
    char v3;  // [sp-0xd8], Other Possible Types: unsigned int
    char v4;  // [bp-0xd4]
    char v5;  // [bp-0xd0]
    unsigned long long v6;  // [sp-0xc8]
    unsigned int v7;  // [bp-0xc0]
    char v8;  // [sp-0xbf]
    unsigned short v9;  // [sp-0xbc]
    char v10;  // [bp-0x98]
    unsigned int v12;  // ebp
    unsigned long long v13;  // rdi
    unsigned long long v14;  // rax
    void* v15;  // r14
    unsigned long long v16;  // r13

    v6 = 0x1b600000000;
    v7 = 0;
    v9 = 0;
    v8 = 1;
    std::fs::OpenOptions::open::h0b5101c42a630ef2(&v3, &v6, "/dev/nullsrc/uu/wc/src/count_fast.rs", 9);
    if (v3)
    {
        ::0x4b6920::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h1f47a50be6f5ae8e(*((long long *)&v5));
    }
    else
    {
        v12 = *((int *)&v4);
        v1 = v12;
        nix::sys::stat::fstat::h5414de4d70a08ddb(&v6, v1);
        if ((int)v6)
        {
LABEL_4b8363:
        }
        else
        {
            v13 = *((long long *)&v10);
            if (!(((unsigned int)(v13 >> 32) & 0xfffff000 | (unsigned int)v13 >> 8 & 4095) == 1 && !core::cmp::impls::_$LT$impl$u20$core..cmp..PartialEq$u20$for$u20$u32$GT$::ne::h189986e1b215ca81((unsigned int)(v13 >> 12) & 0xffffff00 | (unsigned int)v13) && (v14 = uucore::features::pipes::pipe::h14b45b9735c770a8(), (unsigned int)v14 != -1)))
                goto LABEL_4b8363;
            v2 = v14;
            v3 = v14 >> 32;
            v15 = 0;
            while (true)
            {
                v0 = 0;
                nix::fcntl::splice::h2aa3206a8b712af9(&v6, a0, 0, &v3, 0, 0x20000);
                if ((int)v6)
                    break;
                v16 = *((long long *)&v7);
                if (!v16)
                {
                    ::0x4b6890::core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(v3);
                    ::0x4b6890::core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(v2);
                    ::0x4b6890::core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(v1);
                    return 0;
                }
                v15 += v16;
                if ((int)uucore::features::pipes::splice_exact::hd07514bb204e6b97(&v2, &v1, v16) != 134)
                    break;
            }
            ::0x4b6890::core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(v3);
            ::0x4b6890::core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(v2);
            v12 = v1;
        }
        ::0x4b6890::core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(v12);
    }
    return 1;
}
