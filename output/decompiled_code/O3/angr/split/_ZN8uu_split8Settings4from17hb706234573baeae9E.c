long long uu_split::Settings::from::hb706234573baeae9(struct_8 *a0, struct_2 *a1, unsigned long long a2)
{
    unsigned long long v2;  // [sp-0x260]
    unsigned long v3;  // [sp-0x258], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x250]
    unsigned long v7;  // [sp-0x238], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x230]
    unsigned long long v9;  // [sp-0x228]
    unsigned long long v10;  // [sp-0x220]
    int v13;  // [bp-0x208], Other Possible Types: unsigned long long
    void* v15;  // [sp-0x1f8]
    int v19;  // [bp-0x1d8]
    int v21;  // [sp-0x1c8], Other Possible Types: unsigned long long
    unsigned long long v23;  // [sp-0x1b8]
    unsigned long long v24;  // [sp-0x1a8]
    unsigned long long v28;  // [sp-0x188]
    unsigned long long v29;  // [sp-0x180]
    struct struct_7 **v30;  // [sp-0x178]
    struct_5 *v31;  // [sp-0x170]
    char v32;  // [bp-0x168], Other Possible Types: unsigned long
    struct struct_7 **v33;  // [bp-0x160], Other Possible Types: char, unsigned long
    int v34;  // [bp-0x158], Other Possible Types: unsigned long long [3]
    unsigned long v35;  // [sp-0x150]
    unsigned long v36;  // [sp-0x148]
    char v38;  // [bp-0x138]
    unsigned long v39;  // [sp-0x130]
    int v56;  // [sp-0x98]
    unsigned long long v57;  // [sp-0x88]
    int v58;  // [sp-0x78]
    unsigned long long v59;  // [sp-0x68]
    int v60;  // [sp-0x58]
    int v61;  // [sp-0x48]
    unsigned long long v63;  // rax
    int v64;  // xmm0
    int v65;  // xmm0
    int v66;  // xmm1
    int v67;  // xmm0
    unsigned long long v68;  // rax
    unsigned long long v69[3];  // r15
    unsigned long long v71;  // rax
    unsigned long long v72;  // r12
    unsigned long long v73;  // rdi
    unsigned long v74;  // r12
    void* v75;  // r12
    unsigned long long v76;  // rdx
    void* v77;  // rbx
    unsigned long long v78;  // rax
    unsigned long long v82;  // r14

    uu_split::strategy::Strategy::from::hf902c08864ae86e8(&v32, a1, a2);
    v63 = v32;
    *((int128_t *)&v13) = *((int128_t *)&v33);
    v15 = v35;
    if (v63 != 4)
    {
        v64 = (int128_t)v13;
        v19 = v64;
        v21 = v15;
        a0->field_20 = v21;
        *((void*)&a0->field_10) = v64;
        a0->field_8 = v63;
        a0[1].field_0 = v36;
        a0->field_0 = 2;
    }
    *((int128_t *)&v56) = (int128_t)v13;
    v57 = v15;
    v58 = v56;
    v59 = v57;
    uu_split::filenames::Suffix::from::h5079bfef6bcc752e(&v32, a1, &v58);
    if (v2 == 0x8000000000000000)
    {
        v65 = *((int128_t *)&v33);
        v66 = *((int128_t *)&v35);
        v19 = v65;
        v21 = v66;
        a0 = a0;
        *((void*)&a0->field_20) = v66;
        *((void*)&a0->field_10) = v65;
        a0->field_8 = 4;
        a0->field_0 = 2;
        return a0;
    }
    v2 = v32;
    v24 = v33;
    *((int128_t *)&v60) = (int128_t)v34;
    *((int128_t *)&v61) = *((int128_t *)&v36);
    v28 = &v32;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h3c1f6c2f4a81cfbc(&v32, a1, "separatorelide-empty-files-io-blksizeinputprefixsrc/uu/split/src/split.rs", 9);
    v3 = "separatorelide-empty-files-io-blksizeinputprefixsrc/uu/split/src/split.rs";
    v4 = 9;
    if (v32)
    {
        v23 = (&v36)[1];
        v67 = *((int128_t *)&v33);
        *((int128_t *)&v21) = (int128_t)(&v34)[8];
        v19 = v67;
        v7 = &v3;
        v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h825bca3973fa52e3;
        v9 = &v19;
        v10 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
        v13 = &anon.fd2000c1cd6eb4266a2a957d594896cc.2.llvm.17375974497823408223;
        v68 = &v7;
    }
    v30 = v33;
    if (!v30)
        v75 = v74 | -0x100 | 10;
    v69 = v34;
    v71 = v36;
    v72 = (&v36)[1];
    v73 = *((long long *)&v38);
    v29 = v39;
    if (!(v71) || !(v71 != v72))
    {
        do
        {
            v69 = v69;
            if ((!(v69) || !(v69 != v35)) && v73 && v73 != v29)
            {
                v77 = 0;
                goto LABEL_499ab7;
            }
        } while ((v69 += 24, v71 = v69[1], v76 = v69[2], v72 = v76 * 32 + v71, !v76));
    }
    else
    {
        v77 = v71 + 32;
    }
LABEL_499ab7:
    v31 = v30(v78);
    v82 = 6;
}
