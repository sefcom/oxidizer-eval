long long uu_wc::count_fast::count_bytes_using_splice::haae817a9d4f604f7(unsigned long long a0)
{
    unsigned int v0;  // [sp-0xe0]
    unsigned int v1;  // [sp-0xdc]
    char v2;  // [bp-0xd8], Other Possible Types: unsigned int
    char v3;  // [bp-0xd4]
    char v4;  // [bp-0xd0]
    unsigned long long v5;  // [sp-0xc8]
    unsigned int v6;  // [bp-0xc0]
    char v7;  // [sp-0xbf]
    unsigned short v8;  // [sp-0xbc]
    char v9;  // [bp-0x98]
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rdi
    unsigned long long v13;  // rdi
    unsigned long long v14;  // rsi
    unsigned long long v15;  // rax
    void* v16;  // r14
    unsigned long long v17;  // r13

    v5 = 0x1b600000000;
    v6 = 0;
    v8 = 0;
    v7 = 1;
    std::fs::OpenOptions::open::h407b73f606eaf95b(&v2, &v5, "/dev/nullsrc/uu/wc/src/count_fast.rs", 9);
    if (v2)
    {
        ::0x4b6d10::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb571e0291e58d78f(*((long long *)&v4));
    }
    else
    {
        v0 = *((int *)&v3);
        nix::sys::stat::fstat::h261da0a4c5066a36(&v5, v0, v11);
        if ((int)v5)
        {
LABEL_4b8933:
        }
        else
        {
            v12 = *((long long *)&v9);
            if (!(((unsigned int)(v12 >> 32) & -0x1000 | (unsigned int)v12 >> 8 & 4095) == 1) || !(!core::cmp::impls::_$LT$impl$u20$core..cmp..PartialEq$u20$for$u20$u32$GT$::ne::h189986e1b215ca81((unsigned int)(v12 >> 12) & -0x100 | (unsigned int)v12)) || !((v15 = uucore::features::pipes::pipe::h945b5abbeef9d337(v13, v14, v11), (unsigned int)v15 != -1)))
                goto LABEL_4b8933;
            v1 = v15;
            v2 = v15 >> 32;
            v16 = 0;
            while (true)
            {
                nix::fcntl::splice::h6a80000c81336c94(&v5, a0, 0, &v2, 0, 0x20000, 0);
                if ((int)v5)
                    break;
                v17 = *((long long *)&v6);
                if (!v17)
                {
                    ::0x4b6c80::core::ptr::drop_in_place$LT$std..fs..File$GT$::hfc6dd247cb1fd101(v2);
                    ::0x4b6c80::core::ptr::drop_in_place$LT$std..fs..File$GT$::hfc6dd247cb1fd101(v1);
                    ::0x4b6c80::core::ptr::drop_in_place$LT$std..fs..File$GT$::hfc6dd247cb1fd101(v0);
                    return 0;
                }
                v16 += v17;
                if ((int)uucore::features::pipes::splice_exact::h7353f1eba4e78dab(&v1, &v0, v17) != 134)
                    break;
            }
            ::0x4b6c80::core::ptr::drop_in_place$LT$std..fs..File$GT$::hfc6dd247cb1fd101(v2);
            ::0x4b6c80::core::ptr::drop_in_place$LT$std..fs..File$GT$::hfc6dd247cb1fd101(v1);
        }
        ::0x4b6c80::core::ptr::drop_in_place$LT$std..fs..File$GT$::hfc6dd247cb1fd101(v0);
    }
    return 1;
}
