long long uu_pr::pr::hbd43fbe2870272cf(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    int v0;  // [sp-0xc8]
    unsigned long long v1;  // [sp-0xb8]
    unsigned long long v2[3];  // [bp-0xa8]
    char v3;  // [bp-0xa0]
    char v4;  // [bp-0x98]
    char v5;  // [bp-0x90]
    char v6;  // [bp-0x88]
    char v7;  // [bp-0x80]
    char v8;  // [bp-0x70]
    char v9;  // [bp-0x68]
    unsigned long long v11;  // rax
    unsigned long long v12;  // rdx
    unsigned long long v13;  // rcx
    unsigned long long v14;  // rsi
    unsigned long long v15;  // r14
    int v16;  // ymm0
    int v18;  // xmm0
    unsigned long long v19;  // rdx
    int v20;  // xmm0
    unsigned long long v21[3];  // rax

    uu_pr::open::h5559373dd4d3e76c(v2, a1, a2);
    v11 = v2[0];
    v12 = *((long long *)&v3);
    v13 = *((long long *)&v4);
    if (v11 != 9223372036854775813)
    {
        v14 = *((long long *)&v5);
        a0[0] = v11;
        a0[1] = v12;
        a0[2] = v13;
        a0[1] = v14;
        return a0;
    }
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h9588634982ea7a18(&v9, 0x10000, v12, v13);
    v15 = uu_pr::read_stream_and_create_pages::h5b9e8f59d5e02f30(a3, &v9);
    while (true)
    {
        _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hedbbd688ee71241a(&v6, v15);
        if (*((long long *)&v7) == 0x8000000000000000)
        {
            ::0x5bed00::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$$LP$usize$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$RP$$GT$$GT$::h60650eb384347bfd(v15);
            a0 = a0;
            *((int *)&a0[1]) = 0;
            a0[0] = 9223372036854775813;
            return a0;
        }
        v18 = *((int128_t *)&v7);
        v16 = v16 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v18;
        v0 = v18;
        v1 = *((long long *)&v8);
        if (uu_pr::print_page::h85ff74da9a31c768((long long)(&v0)[8], *((long long *)&v8), a3, *((long long *)&v6) + 1))
        {
            _$LT$uu_pr..PrError$u20$as$u20$core..convert..From$LT$std..io..error..Error$GT$$GT$::from::h4c15e7db5ec1bbab(v2, v19);
            v20 = *((int128_t *)&v2[0]);
            v21 = a0;
            *((int128_t *)&v21[2]) = *((int128_t *)&v4);
            *((void*)&v21[0]) = v20;
            ::0x5bf980::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::hdde62ad28fa8ed5b(&v0);
            ::0x5bed00::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$$LP$usize$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$RP$$GT$$GT$::h60650eb384347bfd(v15);
            return a0;
        }
        ::0x5bf980::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::hdde62ad28fa8ed5b(&v0);
    }
}
