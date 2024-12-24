long long uu_od::odfunc::h27720481ec7a3fd2(unsigned long long a0[3], struct_0 *a1, struct_1 *a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [sp-0xe1]
    unsigned long long v1;  // [sp-0xe0]
    unsigned long v2;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0xd0]
    unsigned long long v4;  // [sp-0xc8]
    int v5;  // [bp-0xc0], Other Possible Types: unsigned long long
    void* v6;  // [sp-0xb8]
    int v7;  // [bp-0xa8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v8;  // [sp-0xa0]
    int v9;  // [sp-0x98]
    void* v10;  // [sp-0x80]
    unsigned long long v11;  // [sp-0x78]
    void* v12;  // [sp-0x70]
    unsigned long long v13;  // [sp-0x68]
    unsigned long v14;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x58]
    char v16;  // [bp-0x50]
    char v17;  // [bp-0x40]
    char v18;  // [bp-0x38]
    unsigned long long v20;  // r14
    void* v21;  // rbp
    struct_1 *v22;  // 4096
    int v23;  // ymm0
    int v24;  // ymm1
    int v25;  // xmm0
    int v26;  // ymm0
    int v27;  // xmm1
    unsigned long long v28;  // r13
    unsigned long long v30;  // r14
    unsigned long long v31;  // rdx
    unsigned long long v32;  // rsi
    unsigned long long v34;  // rbx

    v10 = 0;
    v11 = 1;
    v12 = 0;
    v20 = a2->field_18;
    v13 = a2->field_28;
    v0 = a2->field_30;
    v21 = 0;
    while (true)
    {
        uu_od::inputdecoder::InputDecoder$LT$I$GT$::peek_read::hf387881177d29262(&v16, a1, v22, a3, a4, a5);
        if (v18 == 3)
        {
            v1 = *((long long *)&v16);
            v7 = uucore::util_name::h412db5e565a079f3();
            v8 = v31;
            v14 = &v7;
            v15 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc48567d02862d1e2;
            v2 = &g_53e1d8;
            v3 = 2;
            v6 = 0;
            v4 = &v14;
            v5 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v2, v32, v31);
            v7 = &v1;
            v8 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
            v2 = &g_53e1f8;
            v3 = 2;
            v6 = 0;
            v4 = &v7;
            v5 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v2, v32, v31);
            uu_od::inputoffset::InputOffset::print_final_offset::h0648744edb89afb8(a0, v32, v31);
            v34 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h42be6d6e2087a7b3(1);
            ::0x4757b0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h1d8aa423cd8e0385(v1);
            break;
        }
        v25 = *((int128_t *)&v16);
        v23 = v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v25;
        v27 = *((int128_t *)&v17);
        v24 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v27;
        v7 = v25;
        v9 = v27;
        v28 = v8;
        if (!v28)
        {
            uu_od::inputoffset::InputOffset::print_final_offset::h0648744edb89afb8(a0, v32, v31);
            v34 = (!(char)_$LT$uu_od..peekreader..PeekReader$LT$R$GT$$u20$as$u20$uu_od..multifilereader..HasError$GT$::has_error::h28ff7926c2f31733(a1->field_18) ? 0 : uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h42be6d6e2087a7b3(1));
            break;
        }
        if (v28 != v20)
        {
            uu_od::inputdecoder::MemoryDecoder::zero_out_buffer::ha2ad928676396b0a(&v7, v28, v30);
            goto LABEL_475cd0;
        }
        else
        {
            if (!(!(v0) && !(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hc9c064241ac3436d(uu_od::inputdecoder::MemoryDecoder::get_buffer::h3bf5d7dc5c3f64ba(&v7, 0), v31, v11, v12))))
            {
                uu_od::inputdecoder::MemoryDecoder::clone_buffer::h4c8423f550a03085(&v7, &v10);
LABEL_475cd0:
                uu_od::inputoffset::InputOffset::format_byte_offset::hc2d747596603b346(&v2, a0);
                uu_od::print_bytes::hb2d5cb18e52fc7d8(v3, v4, &v7, a2);
                ::0x4757a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h594610883ca49f8f(&v2);
                v21 = 0;
            }
            else if (!((char)v21 & 1))
            {
                v2 = &g_53e1c8;
                v3 = 1;
                v4 = 8;
                v26 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                *((int128_t *)&v5) = 0;
                std::io::stdio::_print::he918bceb0c89db46(&v2, v32, v31);
                v21 = v21 | -0x100 | 1;
            }
            a0[2] = a0[2] + v28;
            if (a0[0])
            {
                a0[0] = 1;
                a0[1] = a0[1] + v28;
            }
        }
    }
    ::0x4757d0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hcafb339466f01853(&v10);
    return v34;
}
