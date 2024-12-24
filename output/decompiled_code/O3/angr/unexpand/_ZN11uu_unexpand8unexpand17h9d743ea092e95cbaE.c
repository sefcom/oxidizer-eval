long long uu_unexpand::unexpand::h9d743ea092e95cba(struct_2 *a0)
{
    unsigned long long v0;  // [sp-0x168]
    unsigned long long v1;  // [sp-0x160]
    struct_1 *v2;  // [sp-0x158]
    void* v3;  // [sp-0x150]
    unsigned long long v4;  // [sp-0x148]
    void* v5;  // [sp-0x140]
    unsigned long v6;  // [sp-0x138], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x130]
    unsigned long v8;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x120]
    unsigned long v10;  // [sp-0x118], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x110]
    unsigned long long v12;  // [sp-0x108]
    unsigned long long v13;  // [sp-0x100]
    int v14;  // [sp-0xf8]
    int v15;  // [sp-0xe8]
    int v16;  // [sp-0xd8]
    unsigned long long v17;  // [sp-0xc8]
    unsigned long long v18[3];  // [bp-0xc0], Other Possible Types: char
    char v20;  // [bp-0xb0]
    char v21;  // [bp-0xa0]
    char v22;  // [bp-0x90]
    char v23;  // [bp-0x88]
    unsigned long v24;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0x58]
    unsigned long long v26;  // [sp-0x50]
    unsigned long long v27;  // [sp-0x48]
    void* v28;  // [sp-0x40]
    unsigned long long v30;  // rbx
    unsigned long long v31;  // rbp
    unsigned long long v33[3];  // rax
    int v36;  // ymm0
    int v37;  // ymm1
    int v38;  // ymm2
    int v39;  // xmm0
    int v40;  // xmm1
    int v41;  // xmm2
    unsigned long long v42;  // rsi
    unsigned long long v43;  // rax
    unsigned long long v44;  // rdx
    unsigned long long v45;  // rdx
    unsigned long long v46;  // rax

    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h0eadda901b14c718(&v23, 0x2000, std::io::stdio::stdout::h077da66234850927());
    v30 = a0->field_20;
    v31 = a0->field_28;
    v3 = 0;
    v4 = 1;
    v5 = 0;
    v6 = a0->field_8;
    v7 = v6 + a0->field_10 * 24;
    v33 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0154df9052922002(&v6);
    if (v33)
    {
        do
        {
            uu_unexpand::open::h019e01aea8dadcf6(v18, v33[1], v33[2]);
            if (!v18[0])
            {
                v1 = *((long long *)&(&v18)[8]);
                v2 = *((long long *)&v20);
                v2->field_60(*((long long *)&(&v18)[8]), v42);
                uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                v8 = uucore::util_name::h412db5e565a079f3();
                v9 = v44;
                v10 = &v8;
                v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h636358ce49098526;
                v12 = &v1;
                v13 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h05985491aa25d685;
                v24 = &g_51ed30;
                v25 = 3;
                v28 = 0;
                v26 = &v10;
                v27 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v24, v42, v44);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h614de5053c3807c0(v1, v2);
            }
            else
            {
                v17 = *((long long *)&v22);
                v39 = *((int128_t *)&v18[0]);
                v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39;
                v40 = *((int128_t *)&v20);
                v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
                v41 = *((int128_t *)&v21);
                v38 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v41;
                v16 = v41;
                v15 = v40;
                v14 = v39;
                while (true)
                {
                    v43 = std::io::read_until::hd8d7d27ea74b8bfc(&v14, 10, &v3);
                    if (v43)
                        v45 = v5;
                    if (!v45)
                        break;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h1211c20f632743d8(v43, v44);
                    v0 = v31;
                    v46 = uu_unexpand::unexpand_line::h8b26496b7d7aea32(&v3, &v23, a0->field_30, a0->field_31, (v31 < 2 ? 0 : *((long long *)(v30 + v31 * 8 - 8))), v30);
                    if (v46)
                    {
                        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h74279e21828f2ea7(&v14);
                        ::0x4b1040::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hfd009501b1298f02(&v3);
                        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::h9e74fd5ac5027686(&v23);
                        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v46);
                    }
                }
                core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h1211c20f632743d8(v43, v44);
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h74279e21828f2ea7(&v14);
            }
        } while ((v33 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0154df9052922002(&v6), v33));
    }
    ::0x4b1040::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hfd009501b1298f02(&v3);
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::h9e74fd5ac5027686(&v23);
    return 0;
}
