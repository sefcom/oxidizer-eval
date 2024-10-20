long long uu_split::filter_args::hafae34f1a08dcb9a(unsigned long long a0[3], unsigned long long a1[3], unsigned long long a2[3], char *a3, char *a4)
{
    unsigned long long v0;  // [bp-0xe8]
    char v1;  // [sp-0xd9]
    unsigned long long v2;  // [sp-0xd8]
    unsigned long v3;  // [sp-0xd0]
    void* v4;  // [sp-0xc8]
    void* v5;  // [sp-0xb0]
    unsigned long long v6;  // [sp-0xa8]
    void* v7;  // [sp-0xa0]
    char v8[3];  // [bp-0x98], Other Possible Types: char, unsigned long
    char v9[3];  // [sp-0x90], Other Possible Types: unsigned long long [3], unsigned long long
    unsigned long long v10;  // [sp-0x88], Other Possible Types: unsigned long
    unsigned long long v11;  // [sp-0x80]
    char v12;  // [bp-0x78]
    char v13;  // [bp-0x70]
    char v14;  // [bp-0x68]
    char v15;  // [bp-0x60]
    char v16;  // [bp-0x58]
    char v17;  // [bp-0x50]
    char v18;  // [bp-0x48]
    char v19;  // [bp-0x38]
    unsigned long long v21;  // rbx
    char v22[3];  // rbp
    unsigned long long v23;  // r12
    char v24;  // cl
    char v25;  // al
    unsigned long long v26;  // rax
    unsigned long long v27;  // rsi
    char *v28;  // rax
    unsigned long long v29;  // rsi
    unsigned long long v30;  // rax
    char v31;  // al
    char *v32;  // rax
    char *v33;  // rax
    char v34;  // r8b
    void* v35;  // rdi
    unsigned long v36;  // rdx
    void* v37;  // rsi
    unsigned long v38;  // r8
    unsigned long v39;  // r8
    void* v40;  // rsi
    unsigned long v41;  // r8
    char *v42;  // rax

    v21 = a1[1];
    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v8, v21, a1[2]);
    if (v8)
    {
        a0[2] = a1[2];
        *((int128_t *)&a0[0]) = *((int128_t *)&a1[0]);
        return a0;
    }
    v22 = v9;
    v23 = v10;
    if (v23 && v22[0] == 45)
    {
        v24 = *(a3);
        v25 = *(a4);
        if (v23 != 1)
        {
            if (!(*((short *)&v22[0]) != 11565) || !(!v24) || !(!v25))
                goto LABEL_4943dd;
            switch (Load(addr=vvar_224{reg 56}, size=2, endness=Iend_LE)): 7 cases
LABEL_494296:
            v5 = 0;
            v6 = 4;
            v7 = 0;
            v1 = 0;
            *(&v8) = v22;
            v9 = &v22[v23];
            v10 = &v1;
            v11 = &v5;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hfa47eef94d77516c(&v15, &v8);
            v26 = v7;
            if (!v26)
            {
                std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v12, v22, v23);
                goto LABEL_494476;
            }
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::h007914fc5a8cadc4(&v18, v6, v6 + v26 * 4);
                v2 = 0x8000000000000000;
                switch (v29)
                {
                case 0: case 9223372036854775808:
                    break;
                default:
                    __rust_dealloc(a2[1]);
                }
                a2[2] = *((long long *)&v19);
                *((int128_t *)&a2[0]) = *((int128_t *)&v18);
                v30 = *((long long *)&v17);
                if (v30 >= 2)
                {
                    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::h007914fc5a8cadc4(&v12, *((long long *)&v16), *((long long *)&v16) + v30 * 4);
LABEL_494476:
                    v2 = *((long long *)&v12);
                    a2 = *((long long *)&v13);
                    v27 = *((long long *)&v14);
                }
            }
            if (*((long long *)&v15))
                __rust_dealloc(*((long long *)&v16));
            if (v5)
                __rust_dealloc(v6);
            if (v23 == 1)
            {
                v31 = 0;
                goto LABEL_494671;
            }
LABEL_4944e6:
            v32 = *((short *)&v22[0]);
            if ((unsigned int)v32 != 11565)
            {
                if (!(v23 == 2))
                    goto LABEL_49466f;
                goto LABEL_4944ff;
            }
            if (v23 < 3)
            {
LABEL_494632:
                v34 = 0;
                goto LABEL_49465d;
            }
            if (v22[2] <= 191)
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            v34 = 0;
            switch (v23)
            {
            case 7:
                v4 = v35;
                v3 = v36;
                v34 = v38 | -0x100 | 1;
                if (!bcmp(v35, &anon.80a68c298b3244c7b6f64951acf55080.10.llvm.4507047988568940441, v36))
                    break;
                v40 = &anon.80a68c298b3244c7b6f64951acf55080.12.llvm.4507047988568940441;
                goto LABEL_494617;
            case 8:
                v4 = v35;
                v3 = v36;
                v34 = v38 | -0x100 | 1;
                if (!bcmp(v35, "filter", v36))
                    break;
                v40 = &anon.80a68c298b3244c7b6f64951acf55080.15.llvm.4507047988568940441;
                goto LABEL_494617;
            case 11:
                v34 = v39 | -0x100 | !bcmp(v35, "separatorelide-empty-files-io-blksizeinputprefixsrc/uu/split/src/split.rs", v36);
                v27 = v0;
                goto LABEL_49465d;
            case 12:
                v37 = "line-byt";
                goto LABEL_494647;
            case 15:
                v37 = "suffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefixsrc/uu/split/src/split.rs";
LABEL_494647:
                v34 = (!bcmp(v35, v37, v36) ? 0 : v41 | -0x100 | 1);
                break;
                v27 = v0;
                goto LABEL_49465d;
            case 19:
                v37 = "additional-suffixfilter";
                goto LABEL_494647;
            default:
LABEL_49465d:
                *(a3) = v34;
                if (v23 != 2)
                {
LABEL_49466f:
                    v31 = 0;
                    goto LABEL_494671;
                }
LABEL_4944ff:
                v31 = v33 | -0x100 | 1;
                switch (*((short *)&v22[0]))
                {
                case 17197: case 24877: case 25133: case 27693: case 28205:
                    break;
                default:
                    v42 = *((short *)&v22[0]);
                    v31 = v42 | -0x100 | (unsigned int)v42 == 29741;
                    break;
                }
LABEL_494671:
                v28 = a4;
                *(v28) = v31;
                if (!(v22[0] == 45))
                    goto LABEL_49441f;
LABEL_49442a:
                a0[0] = v2;
                a0[1] = a2;
                a0[2] = v27;
                if (!a1[0])
                    return a0;
                __rust_dealloc(v21);
            }
LABEL_494617:
            v34 = v38 | -0x100 | 1;
            v27 = v0;
            if (!(!bcmp(v4, v40, v3)))
                goto LABEL_494632;
            goto LABEL_49465d;
        }
        else if (!v24 && !v25)
        {
            goto LABEL_494296;
        }
    }
LABEL_4943dd:
    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v8, v22, v23);
    v2 = v8;
    a2 = v9;
    v27 = v10;
    if (!(v23 < 2))
        goto LABEL_4944e6;
    v28 = a4;
    *(v28) = 0;
    if (!v23 || v22[0] != 45)
    {
LABEL_49441f:
        *(v28) = 0;
        *(a3) = 0;
        goto LABEL_49442a;
    }
}
