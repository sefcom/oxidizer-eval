long long uu_pr::pr::hf8e617104592f468(unsigned long long a0[3], char *a1, unsigned int a2, unsigned long long a3)
{
    unsigned long long v0;  // [sp-0xd0]
    int v1;  // [sp-0xc8]
    unsigned long long v2;  // [sp-0xb8]
    unsigned long long v3[4];  // [bp-0xa8]
    char v4;  // [bp-0xa0]
    char v5;  // [bp-0x98]
    char v6;  // [bp-0x90]
    unsigned long v7;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x80]
    int v9;  // [sp-0x78]
    void* v10;  // [sp-0x68]
    unsigned long long v11;  // [sp-0x60]
    unsigned long long v12;  // [sp-0x58]
    char v13;  // [bp-0x50]
    char v14;  // [bp-0x48]
    char v15;  // [bp-0x38]
    unsigned long long v17;  // rax
    unsigned long long v18;  // r12
    unsigned long long v19;  // rbx
    unsigned long long v20;  // rax
    unsigned long long v21;  // rcx
    int v22;  // ymm0
    int v23;  // ymm0
    unsigned long long v24;  // r14
    int v26;  // xmm0
    unsigned long long v27;  // r12
    unsigned long long v28;  // rbp
    unsigned long long v29;  // r12
    unsigned long long v30;  // rdi
    unsigned long long v32;  // rdx
    int v33;  // xmm0
    unsigned long long v34;  // r15
    unsigned long long v35;  // rbx
    unsigned long long v36;  // r15
    unsigned long long v37;  // rdi
    unsigned long long v39;  // rbx

    uu_pr::open::h7cbafcee48eaed65(v3, a1, a2);
    v17 = v3[0];
    v18 = *((long long *)&v4);
    v19 = *((long long *)&v5);
    if (v17 != 9223372036854775813)
    {
        v21 = *((long long *)&v6);
        a0[0] = v17;
        a0[1] = v18;
        a0[2] = v19;
        a0[1] = v21;
    }
    else
    {
        v20 = __rust_alloc(0x10000, 1);
        if (!v20)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v7 = v20;
        v8 = 0x10000;
        v23 = v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        *((int128_t *)&v9) = 0;
        v10 = 0;
        v11 = v18;
        v12 = v19;
        v0 = uu_pr::read_stream_and_create_pages::h02b981cb3b7d27fc(a3, &v7);
        v0 = v0;
        while (true)
        {
            v24 = v0;
            _ZN115_$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$4next17hd5f8cb73011cefe8E.llvm.3417062294275484453(&v13, v24);
            if (*((long long *)&v14) == 0x8000000000000000)
                break;
            v26 = *((int128_t *)&v14);
            v23 = v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v26;
            v1 = v26;
            v2 = *((long long *)&v15);
            v27 = (long long)(&v1)[8];
            if (!uu_pr::print_page::h7682620fa0e5dc67(v27, v2, a3, *((long long *)&v13) + 1))
            {
                v28 = v2 + 1;
                while (true)
                {
                    v30 = v29;
                    if (v28 == 1)
                        break;
                    v28 -= 1;
                    _ZN4core3ptr36drop_in_place$LT$uu_pr..FileLine$GT$17h74ef2bf6fddb84c7E.llvm.4738797067168647296(v30);
                }
                if ((long long)v1)
                    __rust_dealloc(v27);
                v0 = v0;
            }
            else
            {
                _$LT$uu_pr..PrError$u20$as$u20$core..convert..From$LT$std..io..error..Error$GT$$GT$::from::h76b7d259a956a9e9(v3, v32);
                v33 = *((int128_t *)&v3[0]);
                a0 = a0;
                *((int128_t *)&a0[2]) = *((int128_t *)&v5);
                *((void*)&a0[0]) = v33;
                v34 = (long long)(&v1)[8];
                v35 = v2 + 1;
                while (true)
                {
                    v37 = v36;
                    if (v35 == 1)
                        break;
                    v35 -= 1;
                    _ZN4core3ptr36drop_in_place$LT$uu_pr..FileLine$GT$17h74ef2bf6fddb84c7E.llvm.4738797067168647296(v37);
                }
                if ((long long)v1)
                    __rust_dealloc(v34);
                v39 = v0;
                _ZN4core3ptr848drop_in_place$LT$core..iter..adapters..take_while..TakeWhile$LT$core..iter..adapters..skip_while..SkipWhile$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..flatten..Flatten$LT$itertools..adaptors..Batching$LT$core..iter..adapters..map..Map$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..flatten..FlatMap$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$C$uu_pr..split_lines_if_form_feed$GT$$GT$$C$uu_pr..read_stream_and_create_pages..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..read_stream_and_create_pages..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$C$uu_pr..read_stream_and_create_pages..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..read_stream_and_create_pages..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$17h7aa5c607909ec8acE.llvm.3417062294275484453(v39);
                __rust_dealloc(v39);
                return a0;
            }
        }
        _ZN4core3ptr848drop_in_place$LT$core..iter..adapters..take_while..TakeWhile$LT$core..iter..adapters..skip_while..SkipWhile$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..flatten..Flatten$LT$itertools..adaptors..Batching$LT$core..iter..adapters..map..Map$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..flatten..FlatMap$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$C$uu_pr..split_lines_if_form_feed$GT$$GT$$C$uu_pr..read_stream_and_create_pages..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..read_stream_and_create_pages..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$C$uu_pr..read_stream_and_create_pages..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..read_stream_and_create_pages..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$17h7aa5c607909ec8acE.llvm.3417062294275484453(v24);
        __rust_dealloc(v24);
        a0 = a0;
        *((int *)&a0[1]) = 0;
        a0[0] = 9223372036854775813;
    }
    return a0;
}
