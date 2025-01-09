long long uu_unexpand::unexpand::h7da24873393494e4(struct_3 *a0)
{
    unsigned long long v0;  // [sp-0x168]
    unsigned long long v1;  // [sp-0x160]
    struct_2 *v2;  // [sp-0x158]
    void* v3;  // [sp-0x150]
    unsigned long long v4;  // [sp-0x148]
    void* v5;  // [sp-0x140]
    unsigned long v6;  // [sp-0x138], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x130]
    unsigned long v8;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x120]
    char *v10;  // [sp-0x118]
    unsigned long long v11;  // [sp-0x110]
    char *v12;  // [sp-0x108]
    unsigned long long v13;  // [sp-0x100]
    int v14;  // [sp-0xf8]
    int v15;  // [sp-0xe8]
    int v16;  // [sp-0xd8]
    unsigned long long v17;  // [sp-0xc8]
    unsigned long long v18[3];  // [bp-0xc0]
    char v19;  // [bp-0xb8]
    char v20;  // [bp-0xb0]
    char v21;  // [bp-0xa0]
    char v22;  // [bp-0x90]
    unsigned long long v23[3];  // [bp-0x88]
    unsigned long v24;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0x58]
    struct struct_0 **v26;  // [sp-0x50]
    unsigned long long v27;  // [sp-0x48]
    void* v28;  // [sp-0x40]
    unsigned long long *v30;  // rbx
    unsigned long long v31;  // rbp
    unsigned long long v33[3];  // rax
    int v36;  // ymm0
    int v37;  // ymm1
    int v38;  // ymm2
    int v39;  // xmm0
    int v40;  // xmm1
    int v41;  // xmm2
    unsigned long long v42;  // rax
    unsigned long long v43;  // rdx
    unsigned long long v44;  // rdx
    unsigned long long v45;  // rax
    unsigned long long v46;  // rsi

    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hb9eeab36379c6f5d(v23, 0x2000, std::io::stdio::stdout::h077da66234850927());
    v30 = a0->field_20;
    v31 = a0->field_28;
    v3 = 0;
    v4 = 1;
    v5 = 0;
    v6 = a0->field_8;
    v7 = v6 + a0->field_10 * 24;
    v33 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcb914319815ce2a7(&v6);
    if (v33)
    {
        do
        {
            uu_unexpand::open::h29e09d4acbe1a140(v18, v33[1], v33[2]);
            if (!v18[0])
            {
                v1 = *((long long *)&v19);
                v2 = *((long long *)&v20);
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(v2->field_60(*((long long *)&v19), v46));
                v8 = uucore::util_name::h60d842bf27b05e82();
                v9 = v43;
                v10 = &v8;
                v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf6a1d2ab1cd5850e;
                v12 = &v1;
                v13 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hb9e3d6c183a72ce2;
                v24 = &g_51d1d0;
                v25 = 3;
                v28 = 0;
                v26 = &v10;
                v27 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v24);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h0082e63b91b22250(v1, v2);
            }
            else
            {
                v17 = *((long long *)&v22);
                v39 = *((int128_t *)&v18[0]);
                v36 = v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39;
                v40 = *((int128_t *)&v20);
                v37 = v37 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
                v41 = *((int128_t *)&v21);
                v38 = v38 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v41;
                v16 = v41;
                v15 = v40;
                v14 = v39;
                while (true)
                {
                    v42 = std::io::read_until::h30a9c258ae3f26fb(&v14, 10, &v3);
                    v44 = v43;
                    if (v42)
                        v44 = v5;
                    if (!v44)
                        break;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hd39866fef2216732(v42, v43);
                    v0 = v31;
                    v45 = uu_unexpand::unexpand_line::hfe287a3731b6a7af(&v3, v23, a0->field_30, a0->field_31, (v31 <= 1 ? 0 : v30[1 + v31]), v30);
                    if (v45)
                    {
                        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::haf1e40619ceb4b94(&v14);
                        ::0x4b0110::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1bd5a48277eb07cc(&v3);
                        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::h91f26dab932e0aaf(v23);
                        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v45);
                    }
                }
                core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hd39866fef2216732(v42, v43);
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::haf1e40619ceb4b94(&v14);
            }
        } while ((v33 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcb914319815ce2a7(&v6), v33));
    }
    ::0x4b0110::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1bd5a48277eb07cc(&v3);
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::h91f26dab932e0aaf(v23);
    return 0;
}
