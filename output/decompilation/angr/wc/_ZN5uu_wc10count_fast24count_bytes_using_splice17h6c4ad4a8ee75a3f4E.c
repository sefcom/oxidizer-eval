long long uu_wc::count_fast::count_bytes_using_splice::h6c4ad4a8ee75a3f4(unsigned long long a0)
{
    unsigned int v0;  // [sp-0xe0]
    unsigned int v1;  // [sp-0xdc]
    char v2;  // [sp-0xd8], Other Possible Types: unsigned int
    char v3;  // [bp-0xd4]
    char v4;  // [bp-0xd0]
    unsigned long long v5;  // [sp-0xc8]
    unsigned int v6;  // [bp-0xc0]
    char v7;  // [sp-0xbf]
    unsigned short v8;  // [sp-0xbc]
    char v9;  // [bp-0x98]
    unsigned int v11;  // ebp
    unsigned long long v12;  // rdi
    unsigned long long v13;  // rax
    void* v14;  // r14
    unsigned long long v15;  // r13

    v5 = 0x1b600000000;
    v6 = 0;
    v8 = 0;
    v7 = 1;
    std::fs::OpenOptions::open::h0b5101c42a630ef2(&v2, &v5, "/dev/nullsrc/uu/wc/src/count_fast.rs", 9);
    if (v2)
    {
        ::0x4b6920::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h1f47a50be6f5ae8e(*((long long *)&v4));
    }
    else
    {
        v11 = *((int *)&v3);
        v0 = v11;
        nix::sys::stat::fstat::h5414de4d70a08ddb(&v5, v0);
        if ((int)v5)
        {
LABEL_4b8543:
        }
        else
        {
            v12 = *((long long *)&v9);
            if (!(((unsigned int)(v12 >> 32) & 0xfffff000 | (unsigned int)v12 >> 8 & 4095) == 1 && !core::cmp::impls::_$LT$impl$u20$core..cmp..PartialEq$u20$for$u20$u32$GT$::ne::h189986e1b215ca81((unsigned int)(v12 >> 12) & 0xffffff00 | (unsigned int)v12) && (v13 = uucore::features::pipes::pipe::h14b45b9735c770a8(), (unsigned int)v13 != -1)))
                goto LABEL_4b8543;
            v1 = v13;
            v2 = v13 >> 32;
            v14 = 0;
            while (true)
            {
                nix::fcntl::splice::h04f44a335952f6be(&v5, a0, 0, &v2, 0, 0x20000, 0);
                if ((int)v5)
                    break;
                v15 = *((long long *)&v6);
                if (!v15)
                {
                    ::0x4b6890::core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(v2);
                    ::0x4b6890::core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(v1);
                    ::0x4b6890::core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(v0);
                    return 0;
                }
                v14 += v15;
                if ((int)uucore::features::pipes::splice_exact::hd07514bb204e6b97(&v1, &v0, v15) != 134)
                    break;
            }
            ::0x4b6890::core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(v2);
            ::0x4b6890::core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(v1);
            v11 = v0;
        }
        ::0x4b6890::core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(v11);
    }
    return 1;
}
