long long uu_test::eval::hd0178b83e7335180(struct_2 *a0, struct_0 *a1)
{
    int v0;  // [bp-0x118], Other Possible Types: char, unsigned long long, unsigned long
    unsigned long v1;  // [bp-0x110], Other Possible Types: unsigned long long, char
    char v2;  // [bp-0x10f]
    int v3;  // [sp-0x108], Other Possible Types: unsigned long, unsigned long long
    char v4;  // [bp-0x100]
    unsigned long long v5;  // [sp-0xf8]
    int v6;  // [sp-0xe8]
    unsigned long v7;  // [sp-0xd8], Other Possible Types: unsigned long long
    int v8;  // [bp-0xc8], Other Possible Types: char, unsigned long long
    int v9;  // [bp-0xc0]
    int v10;  // [bp-0xb8], Other Possible Types: unsigned long, unsigned long long
    char v11;  // [sp-0xb0]
    unsigned long long v12;  // [sp-0xa8]
    int v13;  // [sp-0x98]
    unsigned long long v14;  // [sp-0x88]
    int v15;  // [sp-0x78]
    int v16;  // [sp-0x68]
    unsigned long long v17;  // [sp-0x58]
    int v18;  // [sp-0x48]
    unsigned long long v19;  // [sp-0x38]
    unsigned long long v21;  // rcx
    unsigned long long v22;  // rdx
    uint128_t *v23;  // rax
    unsigned long long v24;  // rsi
    unsigned long long v25;  // rsi
    unsigned long long v26;  // r15
    unsigned long long v27;  // rsi
    unsigned long long v29;  // rcx
    char v30;  // al
    unsigned long long v31;  // rdx
    unsigned long long v32;  // rdx
    unsigned long long v33;  // rdx
    int v34;  // xmm0
    unsigned long long v35;  // rcx
    unsigned long long v36;  // rcx
    unsigned long long v37;  // rdx
    int v38;  // xmm1
    unsigned long long v39;  // rax
    unsigned long long v40;  // rdx
    unsigned long long v41;  // rsi
    unsigned long long v42;  // rdi
    int v43;  // xmm1
    unsigned long long v44;  // rdx
    unsigned long long v45;  // rsi
    unsigned long long v46;  // rdi
    int v47;  // xmm1
    unsigned long long v48;  // rcx
    unsigned long long v49;  // rcx
    int v50;  // xmm0
    unsigned long long v51;  // rax
    unsigned long long v52;  // r15
    unsigned long long v53;  // r12
    unsigned long long v54;  // rax
    uint128_t *v55;  // rcx
    unsigned long long v56;  // rax
    unsigned long long v57;  // rdx
    int v58;  // xmm1
    unsigned long long v59;  // rax
    unsigned long long v60;  // rbp
    unsigned long long v61;  // rcx
    unsigned long long v62;  // rcx
    unsigned long long v63;  // rdx
    int v64;  // xmm1
    unsigned long long v65;  // rcx
    unsigned long long v66;  // rcx
    unsigned long long v67;  // rdx
    int v68;  // xmm1
    unsigned long long v69;  // rdx
    unsigned int v70;  // ecx
    unsigned long long v71;  // rdx
    unsigned long long v72;  // rdx
    unsigned long long v73;  // rax
    unsigned long long v74;  // rax
    char v75;  // r14b
    unsigned long long v76;  // rcx
    char v77;  // al
    unsigned long long v78;  // rcx
    char v79;  // al
    unsigned int v80;  // ecx
    unsigned long v82;  // rcx
    unsigned int v83;  // edx
    unsigned long long v85;  // rsi
    char v87;  // dl
    char v88;  // cl
    unsigned long long v89;  // rdx
    unsigned long long v90;  // rsi
    unsigned long long v91;  // rcx
    char v92;  // al

    v21 = a1->field_10;
    if (!v21)
        goto LABEL_4ac047;
    v22 = v21 - 1;
    a1->field_10 = v22;
    v23 = a1->field_8;
    v24 = v22 * 5;
    *((int128_t *)&v15) = *((int128_t *)((char *)v23 + 8 * v24));
    v17 = *((long long *)(32 + (char *)v23 + 8 * v24));
    *((int128_t *)&v16) = *((int128_t *)(16 + (char *)v23 + 8 * v24));
    v25 = (long long)v15 - 1;
    switch (v25)
    {
    case 0:
        uu_test::eval::hd0178b83e7335180(&v0, a1);
        v29 = v0;
        v30 = v1;
        if (v29 == 7)
        {
            a0->field_8 = v30 ^ 1;
            a0->field_0 = 7;
            return a0;
        }
        *((long long *)((char *)&a0->field_9 + 8)) = *((long long *)&v4);
        *((int128_t *)&(&a0->field_8)[1]) = *((int128_t *)&v2);
        a0->field_0 = v29;
        a0->field_8 = v30;
        return a0;
    case 1:
        *((int128_t *)&v6) = (int128_t)(&v15)[8];
        v7 = (long long)(&v16)[8];
        v26 = (long long)(&v6)[8];
        if (!(char)::0x4abef0::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::ha08c54788d123b03(v26, v7, "-a"))
        {
            if (!(((char)::0x4abef0::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::ha08c54788d123b03(v26, v7, "-o") & a1->field_10 < 2) == 1))
                goto LABEL_4ac3bd;
            v26 = (long long)(&v6)[8];
LABEL_4ac378:
            v0 = 1;
            v1 = v26;
            v3 = v7;
            v4 = 1;
            ::0x4ab340::_$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0530b763d48a6791(&v8, &v0);
            *((unsigned long *)((char *)&a0->field_9 + 8)) = v10;
            *((int128_t *)&a0->field_8) = *((int128_t *)&v8);
            a0->field_0 = 6;
        }
        else
        {
            if (a1->field_10 <= 1)
                goto LABEL_4ac378;
LABEL_4ac3bd:
            uu_test::eval::hd0178b83e7335180(&v0, a1);
            v59 = v0;
            v60 = v1;
            if (v59 != 7)
            {
                *((long long *)((char *)&a0->field_9 + 8)) = *((long long *)&v4);
                *((int128_t *)&(&a0->field_8)[1]) = *((int128_t *)&v2);
                a0->field_0 = v59;
                a0->field_8 = v60;
            }
            else
            {
                uu_test::eval::hd0178b83e7335180(&v0, a1);
                v74 = v0;
                v75 = v1;
                if (v74 != 7)
                {
                    *((long long *)((char *)&a0->field_9 + 8)) = *((long long *)&v4);
                    *((int128_t *)&(&a0->field_8)[1]) = *((int128_t *)&v2);
                    a0->field_0 = v74;
                    a0->field_8 = v75;
                }
                else
                {
                    v83 = v60;
                    if (v75)
                        v85 = 1;
                    else
                        v85 = v83;
                    v88 = (!(char)::0x4abef0::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::ha08c54788d123b03((long long)(&v6)[8], v7, "-a") ? v85 & 4294967295 : (v75 ? v83 : 0));
                    a0->field_8 = v88;
                    a0->field_0 = 7;
                }
            }
        }
        ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v6);
        return a0;
    case 2:
        v3 = (long long)(&v16)[8];
        *((int128_t *)&v0) = (int128_t)(&v15)[8];
        a0->field_8 = v3;
        a0->field_0 = 7;
        ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v0);
        return a0;
    case 3:
        v27 = (long long)(&v15)[8];
        if (!v27)
        {
            v7 = v17;
            v6 = v16;
            if (!v22)
            {
                v8 = 7;
                goto LABEL_4ac931;
            }
            else
            {
                v31 = v21;
                v32 = v31 - 2;
                a1->field_10 = v32;
                v33 = v32 * 5;
                v34 = *((int128_t *)((char *)v23 + 8 * v33));
                v12 = *((long long *)(32 + (char *)v23 + 8 * v33));
                *((int128_t *)&v10) = *((int128_t *)(16 + (char *)v23 + 8 * v33));
                v8 = v34;
                if (v31 != 2)
                {
                    v48 = v21 - 3;
                    a1->field_10 = v48;
                    v49 = v48 * 5;
                    v50 = *((int128_t *)((char *)v23 + 8 * v49));
                    v5 = *((long long *)(32 + (char *)v23 + 8 * v49));
                    *((int128_t *)&v3) = *((int128_t *)(16 + (char *)v23 + 8 * v49));
                    v0 = v50;
                }
                else
                {
LABEL_4ac931:
                    v0 = 7;
                }
            }
            v69 = v0;
            v70 = v8;
            if (!(char)::0x4abef0::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::ha08c54788d123b03((long long)(&v6)[8], v7, "!=src/uu/test/src/test.rs"))
            {
                if ((unsigned int)v69 != 7 && v70 != 7)
                    ::0x4ada80::_$LT$uu_test..parser..Symbol$u20$as$u20$core..cmp..PartialEq$GT$::eq::h838c2774cc7a2a63(&v0, &v8);
            }
            else
            {
                if ((unsigned int)v69 != 7 && v70 != 7)
                    ::0x4ada80::_$LT$uu_test..parser..Symbol$u20$as$u20$core..cmp..PartialEq$GT$::eq::h838c2774cc7a2a63(&v0, &v8);
            }
            a0->field_8 = v70 == 7 & v69 == 7;
            a0->field_0 = 7;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uu_test..parser..Symbol$GT$$GT$::hbb35a5714e5c51fc(&v0);
            core::ptr::drop_in_place$LT$core..option..Option$LT$uu_test..parser..Symbol$GT$$GT$::hbb35a5714e5c51fc(&v8);
            ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v6);
        }
        else if ((unsigned int)v27 == 1)
        {
            v14 = v17;
            v13 = v16;
            if (!v22)
            {
                v0 = 7;
                uu_test::eval::panic_cold_explicit::ha5be655c7f68869b(); /* do not return */
            }
            v40 = v21 - 2;
            a1->field_10 = v40;
            v41 = v40 * 5;
            v42 = *((long long *)(32 + (char *)v23 + 8 * v41));
            v43 = *((int128_t *)(16 + (char *)v23 + 8 * v41));
            *((int128_t *)&v0) = *((int128_t *)((char *)v23 + 8 * v41));
            v5 = v42;
            v3 = v43;
            if (v0 != 3)
                uu_test::eval::panic_cold_explicit::ha5be655c7f68869b(); /* do not return */
            v7 = (long long)(&v3)[8];
            *((int128_t *)&v6) = (int128_t)(&v0)[8];
            if (!v40)
            {
                v0 = 7;
                uu_test::eval::panic_cold_explicit::h5cb2ec545d1e8498(); /* do not return */
            }
            v61 = v21 - 3;
            a1->field_10 = v61;
            v62 = v61 * 5;
            v63 = *((long long *)(32 + (char *)v23 + 8 * v62));
            v64 = *((int128_t *)(16 + (char *)v23 + 8 * v62));
            *((int128_t *)&v0) = *((int128_t *)((char *)v23 + 8 * v62));
            v5 = v63;
            v3 = v64;
            if (v0 != 3)
                uu_test::eval::panic_cold_explicit::h5cb2ec545d1e8498(); /* do not return */
            v71 = (long long)(&v3)[8];
            v10 = (long long)(&v3)[8];
            *((int128_t *)&v8) = (int128_t)(&v0)[8];
            uu_test::integers::he37c408d0a55d011(&v0, (long long)(&v8)[8], v71, (long long)(&v6)[8], v7, (long long)(&v13)[8], v14);
            v76 = v0;
            v77 = (char)(&v0)[8];
            if (v76 != 7)
            {
                *((long long *)((char *)&a0->field_9 + 8)) = (long long)(&v3)[8];
                *((int128_t *)&(&a0->field_8)[1]) = (int128_t)(&v0)[9];
                a0->field_0 = v76;
                a0->field_8 = v77;
                ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v8);
                ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v6);
                ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v13);
                return a0;
            }
            a0->field_8 = v77;
            a0->field_0 = 7;
            ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v8);
            ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v6);
            ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v13);
        }
        else
        {
            v14 = v17;
            v13 = v16;
            if (!v22)
            {
                v0 = 7;
                uu_test::eval::panic_cold_explicit::h5b16dc8738e204df(); /* do not return */
            }
            v44 = v21 - 2;
            a1->field_10 = v44;
            v45 = v44 * 5;
            v46 = *((long long *)(32 + (char *)v23 + 8 * v45));
            v47 = *((int128_t *)(16 + (char *)v23 + 8 * v45));
            *((int128_t *)&v0) = *((int128_t *)((char *)v23 + 8 * v45));
            v5 = v46;
            v3 = v47;
            if (v0 != 3)
                uu_test::eval::panic_cold_explicit::h5b16dc8738e204df(); /* do not return */
            v7 = (long long)(&v3)[8];
            *((int128_t *)&v6) = (int128_t)(&v0)[8];
            if (!v44)
            {
                v0 = 7;
                uu_test::eval::panic_cold_explicit::h92b4006982236d13(); /* do not return */
            }
            v65 = v21 - 3;
            a1->field_10 = v65;
            v66 = v65 * 5;
            v67 = *((long long *)(32 + (char *)v23 + 8 * v66));
            v68 = *((int128_t *)(16 + (char *)v23 + 8 * v66));
            *((int128_t *)&v0) = *((int128_t *)((char *)v23 + 8 * v66));
            v5 = v67;
            v3 = v68;
            if (v0 != 3)
                uu_test::eval::panic_cold_explicit::h92b4006982236d13(); /* do not return */
            v72 = (long long)(&v3)[8];
            v10 = (long long)(&v3)[8];
            *((int128_t *)&v8) = (int128_t)(&v0)[8];
            uu_test::files::h2d66ad67db33f3bc(&v0, (long long)(&v8)[8], v72, (long long)(&v6)[8], v7, (long long)(&v13)[8], v14);
            v78 = v0;
            v79 = (char)(&v0)[8];
            if (v78 != 7)
            {
                *((long long *)((char *)&a0->field_9 + 8)) = (long long)(&v3)[8];
                *((int128_t *)&(&a0->field_8)[1]) = (int128_t)(&v0)[9];
                a0->field_0 = v78;
                a0->field_8 = v79;
                ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v8);
                ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v6);
                ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v13);
                return a0;
            }
            a0->field_8 = v79;
            a0->field_0 = 7;
            ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v8);
            ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v6);
            ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v13);
            v87 = 0;
LABEL_4aca00:
            v90 = (long long)(&v15)[8];
            if (v90 && (unsigned int)v90 != 1 && !v87)
                return a0;
            ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v16);
            return a0;
        }
        v87 = v89 | -0x100 | 1;
        goto LABEL_4aca00;
    case 4:
        if (!(long long)(&v15)[8])
        {
            v19 = v17;
            v18 = v16;
            if (!v22)
            {
                a0->field_8 = 1;
                a0->field_0 = 7;
                ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v18);
                return a0;
            }
            v35 = v21 - 2;
            a1->field_10 = v35;
            v36 = v35 * 5;
            v37 = *((long long *)(32 + (char *)v23 + 8 * v36));
            v38 = *((int128_t *)(16 + (char *)v23 + 8 * v36));
            *((int128_t *)&v0) = *((int128_t *)((char *)v23 + 8 * v36));
            v5 = v37;
            v3 = v38;
            v39 = v0;
            if (v39 == 3)
            {
                v14 = (long long)(&v3)[8];
                *((int128_t *)&v13) = (int128_t)(&v0)[8];
            }
            else if (v39 == 6)
            {
                std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v8, 1, 0);
                v14 = v10;
                *((int128_t *)&v13) = *((int128_t *)&v8);
                if (((char)~((int)v0) & 3))
                    ::0x4ab4f0::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&v0);
            }
            else if (v39 != 7)
            {
                v8 = 1;
                *((int128_t *)&v9) = (int128_t)(&v18)[8];
                v11 = 1;
                ::0x4ab340::_$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0530b763d48a6791(&v6, &v8);
                *((unsigned long *)((char *)&a0->field_9 + 8)) = v7;
                *((void*)&a0->field_8) = v6;
                a0->field_0 = 3;
                v73 = v0;
                if (v73 == 3)
                {
                    ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v0);
                }
                else if (v73 != 7)
                {
                    ::0x4ab4f0::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&v0);
                }
                ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v18);
                return a0;
            }
            else
            {
                a0->field_8 = 1;
                a0->field_0 = 7;
                ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v18);
                return a0;
            }
            *((int *)&a0->field_8) = ((char)::0x4abef0::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::ha08c54788d123b03((long long)(&v18)[8], v19, "-z") ? (char)((-0x100 | !v14) & 4294967295 & 4294967295) : (char)((-0x100 | v14) & 4294967295 & 4294967295));
            a0->field_0 = 7;
            ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v13);
            ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v18);
            if (!(long long)(&v15)[8])
                return a0;
        }
        else
        {
            v6 = v16;
            v7 = v17;
            std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v0, (long long)(&v6)[8], v17);
            if (v0)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            v51 = a1->field_10;
            if (!v51)
            {
                v0 = 7;
                uu_test::eval::panic_cold_explicit::h361454b4f33cbd30(); /* do not return */
            }
            v52 = v1;
            v53 = v3;
            v54 = v51 - 1;
            a1->field_10 = v54;
            v55 = a1->field_8;
            v56 = v54 * 5;
            v57 = *((long long *)(32 + (char *)v55 + 8 * v56));
            v58 = *((int128_t *)(16 + (char *)v55 + 8 * v56));
            *((int128_t *)&v0) = *((int128_t *)((char *)v55 + 8 * v56));
            v5 = v57;
            v3 = v58;
            if (v0 != 3)
                uu_test::eval::panic_cold_explicit::h361454b4f33cbd30(); /* do not return */
            v10 = (long long)(&v3)[8];
            *((int128_t *)&v8) = (int128_t)(&v0)[8];
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v52, v53, "-b", 2))
            {
                v80 = 0;
                break;
            }
            v80 = v82 | -0x100 | 1;
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v52, v53, "-c", 2))
            {
                uu_test::path::h72a91cd3b6f0d02c((long long)(&v8)[8], v10, v80);
                goto LABEL_4ac871;
            }
            else
            {
                v80 = v82 | -0x100 | 2;
                if (!(((char)::0x4abef0::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::ha08c54788d123b03(v26, v7, "-o") & a1->field_10 < 2) == 1))
                    break;
                v80 = v82 | -0x100 | 5;
                if (!(((char)::0x4abef0::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::ha08c54788d123b03(v26, v7, "-o") & a1->field_10 < 2) == 1))
                    break;
                v80 = v82 | -0x100 | 7;
                if (!(((char)::0x4abef0::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::ha08c54788d123b03(v26, v7, "-o") & a1->field_10 < 2) == 1))
                    break;
                v80 = v82 | -0x100 | 9;
                if (!(((char)::0x4abef0::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::ha08c54788d123b03(v26, v7, "-o") & a1->field_10 < 2) == 1))
                    break;
                v80 = v82 | -0x100 | 4;
                if (!(((char)::0x4abef0::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::ha08c54788d123b03(v26, v7, "-o") & a1->field_10 < 2) == 1))
                    break;
                v80 = v82 | -0x100 | 11;
                if (!(((char)::0x4abef0::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::ha08c54788d123b03(v26, v7, "-o") & a1->field_10 < 2) == 1))
                    break;
                v80 = v82 | -0x100 | 13;
                if (!(((char)::0x4abef0::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::ha08c54788d123b03(v26, v7, "-o") & a1->field_10 < 2) == 1))
                    break;
                if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v52, v53, "-t", 2))
                {
                    uu_test::isatty::h35113a9be9add355(&v0, (long long)(&v8)[8], v10);
                    v91 = v0;
                    v92 = (char)(&v0)[8];
                    if (v91 != 7)
                    {
                        *((long long *)((char *)&a0->field_9 + 8)) = (long long)(&v3)[8];
                        *((int128_t *)&(&a0->field_8)[1]) = (int128_t)(&v0)[9];
                        a0->field_0 = v91;
                        a0->field_8 = v92;
                        ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v8);
                        ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v6);
                        return a0;
                    }
LABEL_4ac871:
                    a0->field_8 = v92;
                    a0->field_0 = 7;
                    ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v8);
                    ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v6);
                    if ((long long)(&v15)[8])
                        return a0;
                }
                else
                {
                    v80 = v82 | -0x100 | 15;
                    if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v52, v53, "-u", 2))
                    {
                        v80 = v82 | -0x100 | 16;
                        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v52, v53, "-w", 2))
                        {
                            v80 = v82 | -0x100 | 17;
                            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v52, v53, "-x", 2))
                                uu_test::eval::panic_cold_explicit::h81c4b099897e5224(); /* do not return */
                        }
                    }
                    break;
                }
            }
        }
        ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v16);
        return a0;
    case 5: case 6:
LABEL_4ac047:
        a0->field_8 = 0;
        a0->field_0 = 7;
        return a0;
    default:
        a0->field_0 = 0;
        return a0;
    }
}
