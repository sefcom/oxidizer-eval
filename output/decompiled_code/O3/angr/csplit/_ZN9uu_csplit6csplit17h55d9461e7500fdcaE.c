long long uu_csplit::csplit::h55d9461e7500fdca(struct_0 *a0, struct_1 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned int a5)
{
    int v0;  // [sp-0x1a8]
    unsigned long long v1;  // [sp-0x198]
    char v2;  // [bp-0x188]
    int v3;  // [bp-0x178], Other Possible Types: char, unsigned long, unsigned long long
    char v4;  // [bp-0x170], Other Possible Types: unsigned long long
    int v5;  // [bp-0x168], Other Possible Types: unsigned long
    char v6;  // [bp-0x160]
    int v7;  // [bp-0x158], Other Possible Types: char
    int v8;  // [sp-0x148]
    int v9;  // [sp-0x138]
    unsigned long long v10;  // [sp-0x128]
    void* v11;  // [sp-0x120]
    unsigned long long v12;  // [sp-0x118]
    int v13;  // [sp-0x110]
    unsigned long v14;  // [sp-0x100], Other Possible Types: unsigned long long
    char v15;  // [sp-0xf8]
    unsigned long long v16;  // [sp-0xf0]
    char v17;  // [sp-0xe8]
    unsigned long v18;  // [sp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v19;  // [sp-0xd8]
    unsigned long long v20;  // [sp-0xd0]
    unsigned long long v21;  // [sp-0xc8]
    struct_1 *v22;  // [sp-0xa8]
    int v23;  // [sp-0xa0]
    char v24;  // [sp-0x90]
    int v25;  // [sp-0x88]
    unsigned long long v26;  // [sp-0x78]
    char v27;  // [bp-0x70]
    char v28;  // [bp-0x68]
    char v29;  // [bp-0x60]
    char v30;  // [bp-0x58]
    char v31;  // [bp-0x50]
    char v32;  // [bp-0x48]
    char v33;  // [bp-0x38]
    char v35;  // dl
    unsigned long long v36;  // rcx
    unsigned long long v37;  // r8
    unsigned long long v38;  // r9
    unsigned long long v39;  // rax
    unsigned long long v40;  // rcx
    unsigned long long v41;  // rdx
    unsigned long long v42;  // rax
    unsigned long long v43;  // rax
    unsigned long long v44;  // rsi
    unsigned long long v45;  // rdx
    unsigned long long v46;  // rax
    int v47;  // xmm0
    unsigned long long v48;  // rdx
    unsigned long long v49;  // rax
    unsigned long long v50;  // rsi
    unsigned long long v51;  // rax
    unsigned long long v52;  // rsi
    unsigned long long v53;  // rax
    unsigned long long v54;  // rax

    v14 = std::io::BufRead::lines::h813f6966249d4231(a4, a5);
    v15 = v35 & 1;
    v11 = 0;
    v12 = 8;
    *((int128_t *)&v13) = 0;
    v16 = 1;
    v17 = 0;
    v22 = a1;
    *((int128_t *)&v23) = 0;
    v21 = 0x8000000000000000;
    v24 = 0;
    uu_csplit::patterns::get_patterns::hce8e97da600d1c95(&v3, a2, a3, v36, v37, v38);
    v39 = v3;
    *((int128_t *)&v0) = *((int128_t *)&v4);
    v1 = *((long long *)&v6);
    if (v39 != 12)
    {
        v40 = *((long long *)&v7);
        *((unsigned long long *)((char *)&a0->field_10 + 8)) = v1;
        *((void*)&a0->field_8) = v0;
        a0->field_0 = v39;
        a0->field_20 = v40;
        goto LABEL_560802;
    }
    v25 = v0;
    v26 = v1;
    uu_csplit::do_csplit::he4230b477013b96d(&v0, &v21, &v25, &v11);
    if ((int)v0 != 12)
    {
        if (!(a1->field_60) && !(!((v53 = uu_csplit::SplitWriter::delete_all_splits::h68fcd42a935145a0(&v21), v53))))
        {
            a0->field_0 = 0;
            a0->field_8 = v53;
            goto LABEL_5607fa;
        }
        else
        {
            a0->field_20 = *((long long *)&v2);
            a0->field_10 = *((int128_t *)&v1);
            *((void*)&a0->field_0) = v0;
            v54 = core::ptr::drop_in_place$LT$uu_csplit..SplitWriter$GT$::h6d5f46d94182811d(&v21);
            goto LABEL_5606ca;
        }
    }
    v17 = 1;
    _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he08c86ce5bf369f2(&v31, &v11, v41);
    if (*((long long *)&v32) != 9223372036854775809)
    {
        v10 = *((long long *)&v33);
        *((int128_t *)&v9) = *((int128_t *)&v32);
        v42 = uu_csplit::SplitWriter::new_writer::hbe18bb7985046fa2(&v21);
        if (v42)
        {
            a0->field_0 = 0;
            a0->field_8 = v42;
            ::0x55d190::core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::h544a0c7c3d2c3449(&v9);
            goto LABEL_5607fa;
        }
        v43 = (long long)v9;
        v44 = (long long)(&v9)[8];
        if (v3 == 0x8000000000000000)
        {
            a0->field_0 = 0;
            a0->field_8 = v4;
            goto LABEL_5607f7;
        }
        v45 = v10;
        v3 = v43;
        v4 = v44;
        v5 = v45;
        v46 = uu_csplit::SplitWriter::writeln::hc9bc120e419fd7b4(&v21, v4, v45);
        if (!v46)
        {
            ::0x55c6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3ec1eb3d3714f056(&v3);
            v47 = *((int128_t *)&v11);
            *((int128_t *)&v8) = *((int128_t *)&v16);
            *((int128_t *)&v7) = *((int128_t *)&v14);
            v5 = v13;
            v3 = v47;
        }
        else
        {
            a0->field_0 = 0;
            a0->field_8 = v46;
            ::0x55c6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3ec1eb3d3714f056(&v3);
LABEL_5607f7:
            goto LABEL_5607fa;
        }
        while (true)
        {
            _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he08c86ce5bf369f2(&v27, &v3, v48);
            v49 = *((long long *)&v28);
            if (v49 == 9223372036854775809)
                break;
            v50 = *((long long *)&v29);
            if (v49 == 0x8000000000000000)
            {
                a0->field_0 = 0;
                a0->field_8 = v19;
                goto LABEL_560930;
            }
            v18 = v49;
            v19 = v50;
            v20 = *((long long *)&v30);
            v51 = uu_csplit::SplitWriter::writeln::hc9bc120e419fd7b4(&v21, v19, v20);
            if (!v51)
            {
                ::0x55c6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3ec1eb3d3714f056(&v18);
            }
            else
            {
                a0->field_0 = 0;
                a0->field_8 = v51;
                ::0x55c6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3ec1eb3d3714f056(&v18);
LABEL_560930:
                core::ptr::drop_in_place$LT$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$$GT$::hbdf9a82a61b71c55(&v3);
LABEL_5607fa:
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h368c354fc901a228(&v0);
LABEL_560802:
                v54 = core::ptr::drop_in_place$LT$uu_csplit..SplitWriter$GT$::h6d5f46d94182811d(&v21);
                goto LABEL_5606ca;
            }
        }
        core::ptr::drop_in_place$LT$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$$GT$::hbdf9a82a61b71c55(&v3);
        uu_csplit::SplitWriter::finish_split::h7ec38afc11d0dcf1(&v21, v52, v41);
    }
LABEL_5606ca:
    core::ptr::drop_in_place$LT$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$$GT$::hbdf9a82a61b71c55(&v11);
    return v54;
}
