long long uu_sort::chunks::read::hf1cb175542b55863(unsigned long long *a0, unsigned long long a1, struct_0 *a2, unsigned long long a3, unsigned long long a4, unsigned long long a5[3])
{
    char v0;  // [bp-0x188]
    int v1;  // [sp-0x178]
    unsigned long long v2;  // [sp-0x168]
    int v3;  // [sp-0x158]
    unsigned long long v4;  // [sp-0x148]
    int v5;  // [sp-0x138]
    unsigned long long v6;  // [sp-0x128]
    int v7;  // [sp-0x118]
    unsigned long long v8;  // [sp-0x108]
    int v9;  // [sp-0xf8]
    unsigned long long v10;  // [sp-0xe8]
    unsigned long long v11;  // [sp-0xe0]
    char v12;  // [bp-0xd8]
    char v13;  // [bp-0xd0]
    int v14;  // [bp-0xc8], Other Possible Types: char
    char v15;  // [bp-0xc0]
    char v16;  // [bp-0xb8], Other Possible Types: unsigned long long
    int v17;  // [sp-0xb0]
    unsigned long long v18;  // [sp-0xa0]
    int v19;  // [sp-0x98]
    unsigned long long v20;  // [sp-0x88]
    int v21;  // [sp-0x80]
    unsigned long long v22;  // [sp-0x70]
    unsigned long long v23;  // [sp-0x68]
    unsigned long long v24;  // [sp-0x60]
    unsigned long long v25;  // [sp-0x58]
    int v26;  // [sp-0x48]
    unsigned long long v27;  // [sp-0x38]
    unsigned long long v28;  // [bp+0x8]
    char v29;  // [bp+0x18]
    char v30;  // [bp+0x20]
    unsigned long long v31;  // rbp
    unsigned long long v33;  // rdx
    char v34;  // bpl
    unsigned long long v35;  // rsi
    unsigned long long v36;  // rax
    unsigned long long v37;  // rax
    unsigned long long v38;  // rsi

    v4 = a2->field_10;
    *((uint128_t *)&v3) = a2->field_0;
    v6 = *((long long *)((char *)&a2->field_18 + 8));
    *((int128_t *)&v5) = *((int128_t *)&(&a2->field_10)[1]);
    v8 = a2->field_30;
    *((int128_t *)&v7) = *((int128_t *)&a2->field_28);
    v10 = (&a2->field_40)[1];
    *((int128_t *)&v9) = *((int128_t *)((char *)&a2->field_30 + 8));
    v2 = a2->field_58;
    *((uint128_t *)&v1) = a2->field_48;
    v31 = a5[2];
    v2 = v2;
    if (v2 < v31)
    {
        alloc::vec::Vec$LT$T$C$A$GT$::resize::hab7b8ac79419c496(&v1, v31 + 0x2800, 0);
        v2 = v2;
    }
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::copy_from_slice::ha88b52dd38ab56de(::0x56bd20::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::heae99ec539b87fde(v31, (long long)(&v1)[8], v2, &g_601800), v33, a5[1], v31, &g_601818);
    uu_sort::chunks::read_to_buffer::hea5c2b8410259906(&v14, v28, &v1, a3, a4, a5[2], v0);
    if (*((long long *)&v14))
    {
        *((int128_t *)&a0) = *((int128_t *)&v15);
        ::0x56c670::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h61652c911fd4660d(&v1);
        ::0x56c8f0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..GeneralF64ParseResult$GT$$GT$::hbf979be6729ac1b4(&v9);
        ::0x56c930::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..numeric_str_cmp..NumInfo$GT$$GT$::h0e01c14380c81efd(&v7);
        ::0x56c760::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h3bb70aa103109519(&v5);
    }
    else
    {
        v34 = v16;
        v11 = *((long long *)&v15);
        a5[2] = 0;
        v35 = v2;
        if (v11 > v35)
            core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
        v36 = (long long)(&v1)[8];
        ::0x56d180::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h5920bbf24293e183(a5, ::0x56cc00::core::slice::iter::Iter$LT$T$GT$::make_slice::hc76a056f2cb202de(v36 + v11, v35 + v36), v33);
        if (!v11)
        {
            *((char *)&a0[1]) = v34;
            *(a0) = 0;
            ::0x56c670::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h61652c911fd4660d(&v1);
            ::0x56c8f0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..GeneralF64ParseResult$GT$$GT$::hbf979be6729ac1b4(&v9);
            ::0x56c930::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..numeric_str_cmp..NumInfo$GT$$GT$::h0e01c14380c81efd(&v7);
            ::0x56c760::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h3bb70aa103109519(&v5);
        }
        else
        {
            v27 = v2;
            v26 = v1;
            v16 = v6;
            v14 = v5;
            v17 = v3;
            v18 = v4;
            v23 = &v11;
            v19 = v7;
            v20 = v8;
            v21 = v9;
            v22 = v10;
            v24 = &v29;
            v25 = *((long long *)&v30);
            uu_sort::chunks::Chunk::try_new::h0ce6283d9d562d0c(&v12, &v26, &v14);
            v37 = *((long long *)&v12);
            v38 = *((long long *)&v13);
            if (v37)
            {
                *(a0) = v37;
                a0[1] = v38;
                return a0;
            }
            core::result::Result$LT$T$C$E$GT$::unwrap::h4ef953aea0ad6ee4(std::sync::mpmc::Sender$LT$T$GT$::send::hae420f74e3c00907(a1, v38, v33));
            *((char *)&a0[1]) = v34;
            *(a0) = 0;
            return a0;
        }
    }
    ::0x56c7e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..Line$GT$$GT$::hfa2917b46492c312(&v3);
    return a0;
}
