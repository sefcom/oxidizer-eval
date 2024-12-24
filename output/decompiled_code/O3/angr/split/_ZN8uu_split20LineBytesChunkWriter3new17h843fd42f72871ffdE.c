long long uu_split::LineBytesChunkWriter::new::h843fd42f72871ffd(struct_1 *a0, unsigned long a1, struct_0 *a2)
{
    unsigned long v0;  // [sp-0x110], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x108]
    unsigned long long v2;  // [sp-0x100]
    int v3;  // [bp-0xf8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v4;  // [sp-0xf0], Other Possible Types: unsigned long long
    unsigned long v5;  // [sp-0xe8], Other Possible Types: unsigned long long
    char v6;  // [bp-0xe0], Other Possible Types: unsigned int, unsigned long, unsigned long long
    void* v7;  // [sp-0xd8]
    char v8;  // [bp-0xd0]
    char v9;  // [bp-0xc0]
    char v10;  // [bp-0xa8], Other Possible Types: unsigned long, unsigned long long
    unsigned long v11;  // [sp-0xa0], Other Possible Types: unsigned long long
    char v12;  // [bp-0x98]
    void* v13;  // [bp-0x90], Other Possible Types: char
    unsigned long long v14;  // [sp-0x88]
    unsigned long v15;  // [sp-0x80], Other Possible Types: unsigned long long
    char v16;  // [sp-0x78]
    unsigned long v17;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x68]
    unsigned long v19;  // [sp-0x60], Other Possible Types: unsigned long long
    int v20;  // [sp-0x58]
    int v21;  // [sp-0x48]
    int v22;  // [sp-0x38]
    unsigned long long v24;  // rax
    unsigned long long v25;  // rdx
    unsigned long long v26;  // rcx
    unsigned long long v27;  // rdx
    unsigned long long v28;  // rcx
    unsigned long long v29;  // rsi
    unsigned long long v30;  // rax
    unsigned long long v31;  // rdi
    int v32;  // xmm0
    int v33;  // xmm0
    int v34;  // xmm1
    int v35;  // xmm2
    unsigned long v36;  // rdx

    uu_split::filenames::FilenameIterator::new::hc7501f7a6487ce84(&v3, a2->field_30, a2->field_38, &a2->padding_40);
    v24 = v4;
    if (v17 == 9223372036854775809)
    {
        a0->field_8 = v18;
        a0->field_10 = v19;
        a0->field_0 = 0x8000000000000000;
        return v24;
    }
    *((int128_t *)&v22) = *((int128_t *)&v9);
    *((int128_t *)&v21) = *((int128_t *)&v8);
    *((int128_t *)&v20) = *((int128_t *)&v6);
    v17 = v3;
    v18 = v24;
    v19 = v5;
    _$LT$uu_split..filenames..FilenameIterator$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hef66150436b58c6f(&v10, &v17);
    if (v0 == 0x8000000000000000)
    {
        ::0x4c9670::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h43241f6f21666b6e(&v13, "output file suffixes exhaustedcreating file \n: cannot read from input : ", 30);
        v5 = v15;
        *((int128_t *)&v3) = *((int128_t *)&v13);
        v6 = 1;
        *((double *)&a0->field_8) = ::0x4c9860::alloc::boxed::Box$LT$T$GT$::new::h78653b703bb104b0(&v3);
        a0->field_10 = &g_548938;
        a0->field_0 = 0x8000000000000000;
    }
    else
    {
        v25 = v11;
        v26 = *((long long *)&v12);
        v0 = v10;
        v1 = v25;
        v2 = v26;
        if (a2->field_a0)
        {
            v13 = 0;
            v14 = v25;
            v15 = v26;
            v16 = 1;
            v10 = &v13;
            v11 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v3 = &g_5489a8;
            v4 = 2;
            v7 = 0;
            v5 = &v10;
            v6 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&v3, v29, v25);
            v27 = v1;
            v28 = v2;
        }
        uu_split::Settings::instantiate_current_writer::hcd90ff4435d3b4e2(&v3, a2, v27, v28, 1);
        v30 = v3;
        v31 = v4;
        if (v30 != 0x8000000000000000)
        {
            v32 = *((int128_t *)&v5);
            a0->field_20 = *((int128_t *)&(&v6)[1]);
            *((void*)&a0->field_10) = v32;
            a0->field_70 = (long long)(&v22)[8];
            v33 = *((int128_t *)&v17);
            v34 = *((int128_t *)&v19);
            v35 = (int128_t)(&v20)[8];
            a0->field_60 = (int128_t)(&v21)[8];
            *((void*)&a0->field_50) = v35;
            *((void*)&a0->field_40) = v34;
            *((void*)&a0->field_30) = v33;
            a0->field_0 = v30;
            a0->field_8 = v31;
            a0->field_78 = a2;
            a0->field_80 = a1;
            a0->field_88 = 0;
            a0->field_90 = a1;
            v24 = ::0x4c8870::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he0b95d4c82cb9de9(&v0);
            return v24;
        }
        a0->field_8 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v31);
        a0->field_10 = v36;
        a0->field_0 = 0x8000000000000000;
        ::0x4c8870::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he0b95d4c82cb9de9(&v0);
    }
    v24 = ::0x4c8d40::core::ptr::drop_in_place$LT$uu_split..filenames..FilenameIterator$GT$::h29f2bdf6598efd2b(&v17);
    return v24;
}
