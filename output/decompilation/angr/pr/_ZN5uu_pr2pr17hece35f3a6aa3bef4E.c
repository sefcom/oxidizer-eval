long long uu_pr::pr::hece35f3a6aa3bef4(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0[3];  // [sp-0xd0]
    int v1;  // [sp-0xc8]
    unsigned long long v2;  // [sp-0xb8]
    unsigned long long v3[3];  // [bp-0xa8]
    char v4;  // [bp-0xa0]
    char v5;  // [bp-0x98]
    char v6;  // [bp-0x90]
    char v7;  // [bp-0x88]
    char v8;  // [bp-0x80]
    char v9;  // [bp-0x70]
    char v10;  // [bp-0x68]
    unsigned long long v12[3];  // rbx
    unsigned long long v13;  // rax
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rcx
    unsigned long long v16;  // rsi
    unsigned long long v17;  // r14
    int v18;  // ymm0
    int v20;  // xmm0
    unsigned long long v21;  // rdx
    int v22;  // xmm0
    unsigned long long v23[3];  // rax

    v12 = a0;
    uu_pr::open::h24aeb0fb8cb9559f(v3, a1, a2);
    v13 = v3[0];
    v14 = *((long long *)&v4);
    v15 = *((long long *)&v5);
    if (v13 != 9223372036854775813)
    {
        v16 = *((long long *)&v6);
        a0[0] = v13;
        a0[1] = v14;
        a0[2] = v15;
        a0[1] = v16;
        return v12;
    }
    v0[0] = a0;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h4057256a729ecd8e(&v10, 0x10000, v14, v15);
    v17 = uu_pr::read_stream_and_create_pages::h80b16bcd0c28d18c(a3, &v10, 0);
    while (true)
    {
        _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd6d483c89323907f(&v7, v17);
        if (*((long long *)&v8) == 0x8000000000000000)
        {
            ::0x5bf880::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$$LP$usize$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$RP$$GT$$GT$::h7107bd53cebb0db5(v17);
            v12 = v0;
            *((unsigned int *)&v12[1]) = 0;
            v12[0] = 9223372036854775813;
            return v12;
        }
        v20 = *((int128_t *)&v8);
        v18 = v18 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v20;
        v1 = v20;
        v2 = *((long long *)&v9);
        if (uu_pr::print_page::h6e73dbc2020375d5((long long)(&v1)[8], *((long long *)&v9), a3, *((long long *)&v7) + 1))
        {
            _$LT$uu_pr..PrError$u20$as$u20$core..convert..From$LT$std..io..error..Error$GT$$GT$::from::hd5738b82e658b7c8(v3, v21);
            v22 = *((int128_t *)&v3[0]);
            v23 = v0;
            *((int128_t *)&v23[2]) = *((int128_t *)&v5);
            *((void*)&v23[0]) = v22;
            ::0x5c0500::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::h05f5eb491a1c9ca3(&v1);
            ::0x5bf880::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$$LP$usize$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$RP$$GT$$GT$::h7107bd53cebb0db5(v17);
            v12 = v0;
            return v12;
        }
        ::0x5c0500::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::h05f5eb491a1c9ca3(&v1);
    }
}
