long long uu_split::ByteChunkWriter::new::hf26f4f49e0f52e08(struct_1 *a0, unsigned long a1)
{
    unsigned long v0;  // [sp-0x110]
    unsigned long long v1;  // [sp-0x108]
    unsigned long long v2;  // [sp-0x100]
    unsigned long long v3[2];  // [bp-0xf8], Other Possible Types: unsigned long
    unsigned long v4;  // [sp-0xf0], Other Possible Types: unsigned long long
    struct struct_0 **v5;  // [sp-0xe8], Other Possible Types: unsigned long, unsigned long long
    void* v6;  // [bp-0xe0], Other Possible Types: char, unsigned long, unsigned long long
    unsigned int v7;  // [bp-0xe0]
    char v8;  // [bp-0xd0]
    char v9;  // [bp-0xc0]
    char *v10;  // [bp-0xa8], Other Possible Types: unsigned long
    unsigned long v11;  // [sp-0xa0], Other Possible Types: unsigned long long
    char v12;  // [bp-0x98]
    void* v13;  // [bp-0x90], Other Possible Types: char
    unsigned long long v14;  // [sp-0x88]
    unsigned long v15;  // [sp-0x80], Other Possible Types: unsigned long long
    char v16;  // [sp-0x78]
    unsigned long v17;  // [sp-0x70]
    unsigned long long v18;  // [sp-0x68]
    unsigned long v19;  // [sp-0x60]
    int v20;  // [sp-0x58]
    int v21;  // [sp-0x48]
    int v22;  // [sp-0x38]
    struct_2 *v24;  // rdx
    unsigned long long v25;  // rax
    unsigned long long v26;  // rdx
    unsigned long long v27;  // rcx
    unsigned long long v28;  // rax
    unsigned long long v29;  // rdi
    int v30;  // xmm0
    int v31;  // xmm0
    int v32;  // xmm1
    int v33;  // xmm2

    uu_split::filenames::FilenameIterator::new::hd5c894c6ceac3496(v3, v24->field_30, v24->field_38, &v24->padding_40);
    v25 = v4;
    if (v17 == 9223372036854775809)
    {
        a0->field_8 = v18;
        a0->field_10 = v19;
        a0->field_0 = 0x8000000000000000;
        return v25;
    }
    *((int128_t *)&v22) = *((int128_t *)&v9);
    *((int128_t *)&v21) = *((int128_t *)&v8);
    *((int128_t *)&v20) = *((int128_t *)&v6);
    v17 = v3;
    v18 = v25;
    v19 = v5;
    _$LT$uu_split..filenames..FilenameIterator$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5ad8a6a4076a29c8(&v10, &v17);
    if (v0 == 0x8000000000000000)
    {
        ::0x4c95a0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha461c13160c52a35(&v13, "output file suffixes exhaustedcreating file \n: cannot read from input : ", 30);
        v5 = v15;
        *((int128_t *)v3) = *((int128_t *)&v13);
        v7 = 1;
        *((double *)&a0->field_8) = ::0x4c97b0::alloc::boxed::Box$LT$T$GT$::new::hb3c54f980883cdc1(v3);
        a0->field_10 = &g_548438;
        a0->field_0 = 0x8000000000000000;
    }
    else
    {
        v26 = v11;
        v27 = *((long long *)&v12);
        v0 = v10;
        v1 = v26;
        v2 = v27;
        if (v24->field_a0)
        {
            v13 = 0;
            v14 = v26;
            v15 = v27;
            v16 = 1;
            v10 = &v13;
            v11 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            *((char **)v3) = &g_5483e0;
            v4 = 2;
            v6 = 0;
            v5 = &v10;
            v6 = 1;
            std::io::stdio::_print::he918bceb0c89db46(v3);
            v26 = v1;
            v27 = v2;
        }
        uu_split::Settings::instantiate_current_writer::h325c265ed321d02d(v3, v24, v26, v27, 1);
        v28 = v3;
        v29 = v4;
        if (v28 != 0x8000000000000000)
        {
            v30 = *((int128_t *)&v5);
            a0->field_20 = *((int128_t *)&(&v6)[1]);
            *((void*)&a0->field_10) = v30;
            a0->field_70 = (long long)(&v22)[8];
            v31 = *((int128_t *)&v17);
            v32 = *((int128_t *)&v19);
            v33 = (int128_t)(&v20)[8];
            a0->field_60 = (int128_t)(&v21)[8];
            *((void*)&a0->field_50) = v33;
            *((void*)&a0->field_40) = v32;
            *((void*)&a0->field_30) = v31;
            a0->field_0 = v28;
            a0->field_8 = v29;
            a0->field_78 = v24;
            a0->field_80 = a1;
            a0->field_88 = 0;
            a0->field_90 = a1;
            v25 = ::0x4c87a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha786b13c7b7ee26d(&v0);
            return v25;
        }
        a0->field_8 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v29);
        a0->field_10 = v24;
        a0->field_0 = 0x8000000000000000;
        ::0x4c87a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha786b13c7b7ee26d(&v0);
    }
    v25 = ::0x4c8c70::core::ptr::drop_in_place$LT$uu_split..filenames..FilenameIterator$GT$::h4a1cc4a00f07c721(&v17);
    return v25;
}
