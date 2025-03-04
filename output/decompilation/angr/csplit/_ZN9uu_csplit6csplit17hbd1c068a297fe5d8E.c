long long uu_csplit::csplit::hbd1c068a297fe5d8(struct_1 *a0, struct_0 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    int v0;  // [sp-0x1e8]
    unsigned long long v1;  // [sp-0x1d8]
    char v2;  // [bp-0x1c8]
    int v3;  // [sp-0x1b8]
    unsigned long long v4;  // [sp-0x1a8]
    unsigned long v5;  // [sp-0x1a0]
    unsigned long long v6;  // [sp-0x198]
    unsigned long long v7;  // [sp-0x190]
    int v8;  // [bp-0x188], Other Possible Types: char, unsigned long
    char v9;  // [bp-0x180], Other Possible Types: unsigned long long
    int v10;  // [bp-0x178], Other Possible Types: unsigned long
    char v11;  // [bp-0x170]
    int v12;  // [bp-0x168], Other Possible Types: char
    int v13;  // [sp-0x158]
    int v14;  // [sp-0x148]
    int v15;  // [sp-0x138]
    unsigned long long v16;  // [sp-0x128]
    struct_0 *v17;  // [sp-0x108]
    int v18;  // [sp-0x100]
    char v19;  // [sp-0xf0]
    void* v20;  // [sp-0xe8]
    unsigned long long v21;  // [sp-0xe0]
    void* v22;  // [sp-0xd8]
    char v23;  // [bp-0xd0]
    char v24;  // [bp-0xc8]
    char v25;  // [bp-0xb8]
    char v26;  // [bp-0xa8]
    void* v27;  // [sp-0xa0]
    unsigned long long v28;  // [sp-0x98]
    char v29;  // [sp-0x90]
    int v30;  // [sp-0x88]
    unsigned long long v31;  // [sp-0x78]
    char v32;  // [bp-0x70]
    char v33;  // [bp-0x68]
    char v34;  // [bp-0x60]
    char v35;  // [bp-0x58]
    char v36;  // [bp-0x50]
    char v37;  // [bp-0x48]
    char v38;  // [bp-0x38]
    unsigned long long v40;  // rax
    unsigned long long v41;  // rcx
    unsigned long long v42;  // rax
    unsigned long long v43;  // rax
    unsigned long long v44;  // rsi
    unsigned long long v45;  // rdx
    unsigned long long v46;  // rax
    int v47;  // xmm0
    unsigned long long v48;  // rax
    unsigned long long v49;  // rsi
    unsigned long long v50;  // rax
    unsigned long long v51;  // rax
    unsigned long long v52;  // rax

    std::io::BufRead::lines::hb5077b34f6593e01(&v23, a4);
    v27 = 0;
    v20 = 0;
    v21 = 8;
    v22 = 0;
    v28 = 1;
    v29 = 0;
    v17 = a1;
    *((uint128_t *)&v18) = 0;
    v16 = 0x8000000000000000;
    v19 = 0;
    uu_csplit::patterns::get_patterns::h1caf3c5952747e62(&v8, a2, a3);
    v40 = v8;
    *((int128_t *)&v0) = *((int128_t *)&v9);
    v1 = *((long long *)&v11);
    if (v40 != 12)
    {
        v41 = *((long long *)&v12);
        *((unsigned long long *)((char *)&a0->field_10 + 8)) = v1;
        *((void*)&a0->field_8) = v0;
        a0->field_0 = v40;
        a0->field_20 = v41;
        goto LABEL_560ef2;
    }
    v30 = v0;
    v31 = v1;
    uu_csplit::do_csplit::hcf79d66f02e2a63d(&v0, &v16, &v30, &v20);
    if ((int)v0 != 12)
    {
        if (!(a1->field_60) && !(!((v51 = uu_csplit::SplitWriter::delete_all_splits::h651b08e5afba42d7(&v16), v51))))
        {
            a0->field_0 = 0;
            a0->field_8 = v51;
            goto LABEL_560eea;
        }
        else
        {
            a0->field_20 = *((long long *)&v2);
            a0->field_10 = *((int128_t *)&v1);
            *((void*)&a0->field_0) = v0;
            v52 = core::ptr::drop_in_place$LT$uu_csplit..SplitWriter$GT$::hbd6d8c3456abefcf(&v16);
            goto LABEL_560dbd;
        }
    }
    v29 = 1;
    _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8dbaf25fcfb0cb29(&v36, &v20);
    if (*((long long *)&v37) != 9223372036854775809)
    {
        v4 = *((long long *)&v38);
        *((int128_t *)&v3) = *((int128_t *)&v37);
        v42 = uu_csplit::SplitWriter::new_writer::hf8bcfdadfd914b2e(&v16);
        if (v42)
        {
            a0->field_0 = 0;
            a0->field_8 = v42;
            ::0x55d430::core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::hee3cf79169426f18(&v3);
            goto LABEL_560eea;
        }
        v43 = (long long)v3;
        v44 = (long long)(&v3)[8];
        if (v8 == 0x8000000000000000)
        {
            a0->field_0 = 0;
            a0->field_8 = v9;
            goto LABEL_560ee7;
        }
        v45 = v4;
        v8 = v43;
        v9 = v44;
        v10 = v45;
        v46 = uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(&v16, v9, v45);
        if (!v46)
        {
            ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v8);
            *((int128_t *)&v15) = *((int128_t *)&v28);
            *((int128_t *)&v14) = *((int128_t *)&v26);
            v47 = *((int128_t *)&v20);
            *((int128_t *)&v13) = *((int128_t *)&v25);
            *((int128_t *)&v12) = *((int128_t *)&v24);
            *((int128_t *)&v10) = *((int128_t *)&v22);
            v8 = v47;
        }
        else
        {
            a0->field_0 = 0;
            a0->field_8 = v46;
            ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v8);
LABEL_560ee7:
            goto LABEL_560eea;
        }
        while (true)
        {
            _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8dbaf25fcfb0cb29(&v32, &v8);
            v48 = *((long long *)&v33);
            if (v48 == 9223372036854775809)
                break;
            v49 = *((long long *)&v34);
            if (v48 == 0x8000000000000000)
            {
                a0->field_0 = 0;
                a0->field_8 = v6;
                goto LABEL_561037;
            }
            v5 = v48;
            v6 = v49;
            v7 = *((long long *)&v35);
            v50 = uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(&v16, v6, v7);
            if (!v50)
            {
                ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v5);
            }
            else
            {
                a0->field_0 = 0;
                a0->field_8 = v50;
                ::0x55c940::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&v5);
LABEL_561037:
                core::ptr::drop_in_place$LT$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$$GT$$GT$::h5f6cb91f3f018d07(&v8);
LABEL_560eea:
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h99db2ffc8dffbdb1(&v0);
LABEL_560ef2:
                v52 = core::ptr::drop_in_place$LT$uu_csplit..SplitWriter$GT$::hbd6d8c3456abefcf(&v16);
                goto LABEL_560dbd;
            }
        }
        core::ptr::drop_in_place$LT$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$$GT$$GT$::h5f6cb91f3f018d07(&v8);
        uu_csplit::SplitWriter::finish_split::h2b71f2c0808d1b8b(&v16);
    }
LABEL_560dbd:
    core::ptr::drop_in_place$LT$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$$GT$$GT$::h5f6cb91f3f018d07(&v20);
    return v52;
}
