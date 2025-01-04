long long uu_od::odfunc::hf4c116c67e2cd288(unsigned long long a0[3], struct_3 *a1, struct_2 *a2, unsigned long a3, unsigned long a4, unsigned long long a5)
{
    char v0;  // [sp-0xe1]
    unsigned long long v1;  // [sp-0xe0]
    unsigned long v2;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0xd0]
    struct struct_0 **v4;  // [sp-0xc8], Other Possible Types: struct struct_1 **, unsigned long long
    char *v5;  // [bp-0xc0], Other Possible Types: unsigned long long
    void* v6;  // [sp-0xb8]
    char *v7;  // [bp-0xa8]
    unsigned long long v8;  // [sp-0xa0]
    char *v9;  // [sp-0x98]
    void* v10;  // [sp-0x80]
    unsigned long long v11;  // [sp-0x78]
    void* v12;  // [sp-0x70]
    unsigned long long v13;  // [sp-0x68]
    struct struct_0 **v14;  // [sp-0x60]
    unsigned long long v15;  // [sp-0x58]
    char v16;  // [bp-0x50]
    char v17;  // [bp-0x40]
    char v18;  // [bp-0x38]
    unsigned long long v20;  // r14
    unsigned long long v21;  // rbp
    struct_2 *v22;  // 4096
    int v23;  // ymm0
    int v24;  // ymm1
    char *v25;  // xmm0
    int v26;  // ymm0
    char *v27;  // xmm1
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
        uu_od::inputdecoder::InputDecoder$LT$I$GT$::peek_read::h15c7373ba30f8765(&v16, a1, v22, a3, a4, a5);
        if (v18 == 3)
        {
            v1 = *((long long *)&v16);
            v7 = uucore::util_name::h60d842bf27b05e82();
            v8 = v31;
            v14 = &v7;
            v15 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc9a28556c00b70f9;
            v2 = &g_53e9b8;
            v3 = 2;
            v6 = 0;
            v4 = &v14;
            v5 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v2, v32, v31);
            v7 = &v1;
            v8 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
            v2 = &g_53e9d8;
            v3 = 2;
            v6 = 0;
            v4 = &v7;
            v5 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v2, v32, v31);
            uu_od::inputoffset::InputOffset::print_final_offset::hf1e2d1b178ccd553(a0, v32, v31);
            v34 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(1);
            ::0x476970::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf83c5d0e0950196b(v1);
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
            uu_od::inputoffset::InputOffset::print_final_offset::hf1e2d1b178ccd553(a0, v32, v31);
            v34 = (!(char)_$LT$uu_od..peekreader..PeekReader$LT$R$GT$$u20$as$u20$uu_od..multifilereader..HasError$GT$::has_error::hf0d7270850866a7b(a1->field_18) ? 0 : uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(1));
            break;
        }
        if (v28 != v20)
        {
            uu_od::inputdecoder::MemoryDecoder::zero_out_buffer::h21e27e94246f42e6(&v7, v28, v30);
            goto LABEL_476e90;
        }
        else
        {
            if (!(!(v0) && !(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hc28cfc02f538ddca(uu_od::inputdecoder::MemoryDecoder::get_buffer::he5dd43e20733f426(&v7, 0), v31, v11, v12))))
            {
                uu_od::inputdecoder::MemoryDecoder::clone_buffer::hf45ff84df60b2968(&v7, &v10);
LABEL_476e90:
                uu_od::inputoffset::InputOffset::format_byte_offset::hff6b546ad3ee8d97(&v2, a0);
                uu_od::print_bytes::h4e490ef4abfc23ed(v3, v4, &v7, a2);
                ::0x476960::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3ef5beaad2805a62(&v2);
                v21 = 0;
            }
            else if (!((char)v21 & 1))
            {
                v2 = &g_53e9a8;
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
    ::0x476990::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h4081a2c3531f8222(&v10);
    return v34;
}
