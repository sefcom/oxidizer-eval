long long uu_uniq::filter_args::h2516ee70a44fed1f(unsigned long long a0[3], unsigned long long a1[3], unsigned long long a2[3], unsigned long long a3[3], char *a4, char *a5)
{
    char v0;  // [sp-0xf9]
    char v1[3];  // [sp-0xf8]
    void* v2;  // [sp-0xf0], Other Possible Types: unsigned long, unsigned long long
    char v3;  // [sp-0xe1]
    unsigned long long v4;  // [sp-0xe0]
    unsigned long long v5;  // [sp-0xd8]
    void* v6;  // [sp-0xd0], Other Possible Types: char, unsigned long
    unsigned int *v7;  // [sp-0xc8], Other Possible Types: unsigned long
    void* v8;  // [sp-0xc0], Other Possible Types: unsigned int *, unsigned long long, unsigned long
    int v9;  // [bp-0xb8], Other Possible Types: char
    unsigned long long v10;  // [bp-0xa8]
    char v11[3];  // [bp-0x98], Other Possible Types: char, unsigned long
    char v12[3];  // [sp-0x90], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v13;  // [sp-0x88], Other Possible Types: unsigned long
    unsigned long long v14;  // [sp-0x80]
    unsigned long long v15;  // [sp-0x78]
    void* v16;  // [sp-0x68]
    unsigned long long v17;  // [sp-0x60]
    void* v18;  // [sp-0x58]
    unsigned long long v19;  // [sp-0x50]
    char v20;  // [bp-0x48]
    char v21;  // [bp-0x40]
    char v22;  // [bp-0x38]
    char v24;  // r12b
    char v25;  // bpl
    unsigned int v26;  // eax
    unsigned long v27;  // rdx
    struct_0 *v28;  // rax
    char v29[3];  // rsi
    char v30[3];  // r9
    unsigned long long v31;  // rcx
    unsigned int v32;  // edx
    unsigned int v33;  // r8d
    unsigned int v34;  // edi
    unsigned long long v35;  // r12
    unsigned long long v36;  // rax
    char v37[3];  // rbx
    char v38[4];  // r12
    unsigned long long v39;  // r12
    unsigned long long v40;  // rbp
    unsigned long long v41;  // r8
    unsigned long long v42;  // rsi
    void* v43;  // rax
    unsigned int *v44;  // rbx
    char v45[3];  // rcx
    char v46[3];  // rcx
    unsigned long long v48;  // rbp
    unsigned int v49;  // eax
    unsigned int v50;  // edx
    unsigned int v51;  // ecx
    unsigned long long v52;  // rsi
    unsigned long long v56;  // r13
    unsigned long long v57;  // r13
    unsigned long long v58;  // rsi
    unsigned long long v59;  // rsi
    char v60[3];  // rcx
    char v61[3];  // rcx
    unsigned long long v62;  // rsi
    unsigned long long v63;  // rax
    unsigned long long v65;  // r12
    unsigned long long v66;  // r12
    unsigned long long v67;  // r12
    char v68;  // bpl
    void* v69;  // rdi
    unsigned long v70;  // rdx
    void* v71;  // rsi
    char v72[3];  // rbx
    unsigned long long v73;  // r12

    v19 = a1[1];
    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v11, a1[1], a1[2]);
    if (v11)
    {
        a0[2] = a1[2];
        *((int128_t *)&a0[0]) = *((int128_t *)&a1[0]);
        return a0;
    }
    *(&v1) = v12;
    v4 = v13;
    if (!v4)
    {
LABEL_48972b:
        v39 = v4;
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v11, v1, v39);
        v40 = v11;
        v5 = v12;
        v41 = v13;
        if (v39 >= 2)
        {
            v45 = v1;
            if (*((short *)&v45[0]) == 26157)
            {
                v52 = a2[0];
                if (v52 != 0x8000000000000000 && v52)
                {
                    v41 = v41;
                    __rust_dealloc(a2[1]);
                }
                a2[0] = 0x8000000000000000;
                *(&v46) = v1;
            }
            v60 = v46;
            if (*((short *)&v60[0]) == 29485)
            {
                v62 = a3[0];
                if (v62 != 0x8000000000000000 && v62)
                    __rust_dealloc(a3[1]);
                a3[0] = 0x8000000000000000;
                *(&v61) = v1;
            }
            v65 = v4;
            goto LABEL_48985b;
        }
        *(a5) = 0;
        if (!v39 || v1[0] != 45)
            goto LABEL_489777;
        goto LABEL_48978a;
    }
    v24 = *(a4);
    v25 = *(a5);
    v26 = v1[0];
    if (v26 != 43)
    {
        if (!(v26 == 45))
            goto LABEL_48972b;
        if (v4 == 1)
        {
            if (!(!v24) || !(!v25))
                goto LABEL_48972b;
        }
        else
        {
            if (!(*((short *)&v1[0]) != 11565) || !(!v24) || !(!v25) || !(*((short *)&v1[0]) != 29485) || !(*((short *)&v1[0]) != 26157) || !(*((short *)&v1[0]) != 30509))
                goto LABEL_48972b;
        }
        v16 = 0;
        v17 = 4;
        v18 = 0;
        v3 = 0;
        v0 = 0;
        v35 = v4;
        *(&v11) = v1;
        v12 = &v11[v35];
        v13 = &v0;
        v14 = &v3;
        v15 = &v16;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h2679ad7c92a295aa(&v20, &v11);
        v36 = v18;
        if (!v36)
        {
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v9, v1, v35);
            goto LABEL_489656;
        }
        else
        {
            v40 = 0x8000000000000000;
            if (!v0)
            {
                _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::h23771df5fb93cef3(&v6, v17, v17 + v36 * 4);
                if (v5 == 0x8000000000000000)
                {
                    v41 = v8;
                    *((int128_t *)&v9) = *((int128_t *)&v6);
                }
                else
                {
                    v5 = a2[0];
                    v56 = v8;
                    if (v6 - v56 < v2)
                    {
                        v2 = a2[2];
                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h5041aef76545a57f(&v6, v56, v2);
                        v57 = v8;
                    }
                    v2 = a2[1];
                    memcpy(v7 + v57, v2, v2);
                    v8 = v57 + v2;
                    v41 = v8;
                    *((int128_t *)&v9) = *((int128_t *)&v6);
                    v65 = v4;
                    if (v5)
                    {
                        __rust_dealloc(v2);
                        v4 = v4;
                    }
                }
                a2[2] = v41;
                *((void*)&a2[0]) = v9;
            }
            else
            {
                v42 = a2[0];
                if (v42 != 0x8000000000000000 && v42)
                    __rust_dealloc(a2[1]);
                a2[0] = 0x8000000000000000;
            }
            v63 = *((long long *)&v22);
            if (v63 > 1)
            {
                _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::h23771df5fb93cef3(&v9, *((long long *)&v21), *((long long *)&v21) + v63 * 4);
LABEL_489656:
                v40 = (long long)v9;
                v5 = (long long)(&v9)[8];
            }
        }
        if (*((long long *)&v20))
            __rust_dealloc(*((long long *)&v21));
        if (v16)
            __rust_dealloc(v17);
        v37 = v1;
LABEL_48985b:
        v66 = v65;
        if (*((short *)&v37[0]) != 11565)
            goto LABEL_489925;
        if (v66 < 3)
        {
LABEL_48990b:
            v68 = 0;
            goto LABEL_48990d;
        }
        if (v37[2] <= 191)
            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
        v68 = 0;
        switch (v66)
        {
        case 7:
            v41 = v41;
            v71 = "grou";
            break;
        case 12:
            v41 = v41;
            v71 = "skip-charsuniquezero-terminatedgrou";
            v68 = (!bcmp(v69, v71, v70) ? 0 : 1);
            goto LABEL_48990d;
        case 13:
            v41 = v41;
            v68 = 1;
            if (!bcmp(v69, "skip-fieldsskip-charsuniquezero-terminatedgrou", v70))
            {
                v67 = v4;
                *(&v61) = v1;
                goto LABEL_48990d;
            }
            v72 = v1;
            v73 = v4;
            v41 = v41;
            if (!(!bcmp(&v37[2], "check-charscountignore-caseskip-fieldsskip-charsuniquezero-terminatedgrou", v66 - 2)))
                goto LABEL_48990b;
            goto LABEL_48990d;
        case 14:
            v41 = v41;
            v68 = v41 | -0x100 | !bcmp(v69, "all-repeatedcheck-charscountignore-caseskip-fieldsskip-charsuniquezero-terminatedgrou", v70);
            goto LABEL_48990d;
        default:
LABEL_48990d:
            *(a4) = v68;
            v40 = v40;
LABEL_489925:
            *(a5) = 1;
            if (v37[0] != 45)
            {
LABEL_489777:
                *(a5) = 0;
                *(a4) = 0;
                goto LABEL_48978a;
            }
        }
LABEL_48978a:
        a0[0] = v40;
        a0[1] = v5;
        a0[2] = v41;
        if (!a1[0])
            return a0;
        __rust_dealloc(v19);
    }
    if (!(uucore::mods::posix::posix_version::h6685406c193149f6()) || !(v27 <= 199209) || !(!v24) || !(!v25) || !((v28 = (unsigned long long)v1[0], v29 = (unsigned long long)(char)*((char *)(v28 + &g_41a8fd)), v4 != v29)))
        goto LABEL_48972b;
    v30 = v1;
    v31 = *((char *)(v30 + v29));
    if ((char)v31 < 0)
    {
        v32 = (unsigned int)v31 & 31;
        v33 = *((char *)(v30 + v29 + 1)) & 63;
        if ((v31 & 255) <= 223)
        {
            v31 = v32 * 64 | v33;
        }
        else
        {
            v34 = *((char *)(v30 + v29 + 2)) & 63 | v33 * 64;
            v31 = ((v31 & 255 & 255) < 240 ? *((char *)(v30 + v29 + 3)) & 63 | v34 * 64 | (v32 & 7) * 0x40000 : v34 | v32 * 0x1000);
        }
    }
    if (!((unsigned int)v31 - 48 < 10))
        goto LABEL_48972b;
    v37 = v1;
    v2 = &v37[v4];
    v6 = 0;
    v7 = 4;
    v8 = 0;
    v38 = ((char)v28 < 0 ? (char [3])&v37[1] : ((v28 & 255 & 255) <= 223 ? (char [3])&v37[2049638230412172401 + 2 + -1 * ((v28 & 255 & 255) < 240) + 3] : (char [3])&v37[2]));
    if (v38 == v2)
    {
LABEL_489b4b:
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v11, v37, v4);
    }
    v43 = 0;
    v44 = 0;
    do
    {
        v5 = v43;
        v48 = v38[0];
        if ((char)v48 >= 0)
        {
            v38 = &v38[1];
        }
        else
        {
            v49 = (unsigned int)v48 & 31;
            v50 = v38[1] & 63;
            if ((v48 & 255) <= 223)
            {
                v38 = &v38[2];
                v48 = v49 * 64 | v50;
            }
            else
            {
                v51 = v38[2] & 63 | v50 * 64;
                if ((v48 & 255) < 240)
                {
                    v38 = &v38[3];
                    v48 = v51 | v49 * 0x1000;
                }
                else
                {
                    v38 += 1;
                    v48 = v38[3] & 63 | v51 * 64 | (v49 & 7) * 0x40000;
                }
            }
        }
        if ((unsigned int)(v48 - 48) >= 10)
        {
            v58 = a3[0];
            if (v58 != 0x8000000000000000 && v58)
                __rust_dealloc(a3[1]);
            a3[0] = 0x8000000000000000;
            v37 = v1;
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v11, v37, v4);
        }
        if (v44 == v6)
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hb8644e76875cdcd0(&v6);
        *((unsigned int *)((char *)v7 + 0x4 * v44)) = v48;
        v44 = (char *)v44 + 1;
        v8 = v44;
        v43 = v5 - 4;
    } while (v38 != v2);
    v37 = v1;
    if (v8)
    {
        _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::h23771df5fb93cef3(&v11, v7, v7 - v43);
        v40 = 0x8000000000000000;
        v10 = v13;
        *((int128_t *)&v9) = *((int128_t *)&v11);
        v59 = a3[0];
        if (v59 != 0x8000000000000000 && v59)
            __rust_dealloc(a3[1]);
        a3[2] = v10;
        *((void*)&a3[0]) = v9;
    }
    goto LABEL_489b4b;
}
