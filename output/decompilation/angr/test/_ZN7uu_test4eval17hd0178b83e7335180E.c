long long uu_test::eval::hd0178b83e7335180(struct_0 *a0, struct_1 *a1)
{
    unsigned long long v0;  // [sp-0x128]
    int v1;  // [sp-0x118], Other Possible Types: char, unsigned long long, unsigned long
    unsigned long v2;  // [bp-0x110], Other Possible Types: unsigned long long, char
    char v3;  // [bp-0x10f]
    int v4;  // [bp-0x108], Other Possible Types: unsigned long, unsigned long long
    char v5;  // [bp-0x100]
    unsigned long long v6;  // [sp-0xf8]
    int v7;  // [bp-0xe8]
    int v8;  // [sp-0xe8]
    unsigned long v9;  // [sp-0xd8], Other Possible Types: unsigned long long
    int v10;  // [sp-0xc8], Other Possible Types: char, unsigned long long
    int v11;  // [bp-0xc0]
    int v12;  // [sp-0xb8], Other Possible Types: unsigned long, unsigned long long
    char v13;  // [sp-0xb0]
    unsigned long long v14;  // [sp-0xa8]
    int v15;  // [sp-0x98]
    int v16;  // [sp-0x98]
    unsigned long long v17;  // [sp-0x88]
    int v18;  // [sp-0x78]
    int v19;  // [sp-0x68]
    unsigned long long v20;  // [sp-0x58]
    int v21;  // [sp-0x48]
    unsigned long long v22;  // [sp-0x38]
    unsigned long long v24;  // rcx
    unsigned long long v25;  // rdx
    uint128_t *v26;  // rax
    unsigned long long v27;  // rsi
    unsigned long long v28;  // rsi
    unsigned long long v29;  // r14
    unsigned long long v30;  // r15
    unsigned long long v31;  // rsi
    unsigned long long v33;  // rcx
    char v34;  // al
    unsigned long long v35;  // rdx
    unsigned long long v36;  // rdx
    unsigned long long v37;  // rdx
    int v38;  // xmm0
    unsigned long long v39;  // rcx
    unsigned long long v40;  // rcx
    unsigned long long v41;  // rdx
    int v42;  // xmm1
    unsigned long long v43;  // rax
    unsigned long long v44;  // rdx
    unsigned long long v45;  // rsi
    unsigned long long v46;  // rdi
    int v47;  // xmm1
    unsigned long long v48;  // rdx
    unsigned long long v49;  // rsi
    unsigned long long v50;  // rdi
    int v51;  // xmm1
    unsigned long long v52;  // rcx
    unsigned long long v53;  // rcx
    int v54;  // xmm0
    unsigned long long v55;  // rax
    unsigned long long v56;  // r15
    unsigned long long v57;  // r12
    unsigned long long v58;  // rax
    uint128_t *v59;  // rcx
    unsigned long long v60;  // rax
    unsigned long long v61;  // rdx
    int v62;  // xmm1
    unsigned long long v63;  // rax
    unsigned long long v64;  // rbp
    unsigned long long v65;  // rcx
    unsigned long long v66;  // rcx
    unsigned long long v67;  // rdx
    int v68;  // xmm1
    unsigned long long v69;  // rcx
    unsigned long long v70;  // rcx
    unsigned long long v71;  // rdx
    int v72;  // xmm1
    unsigned long long v73;  // rdx
    unsigned int v74;  // ecx
    unsigned long long v75;  // rdx
    unsigned long long v76;  // rdx
    unsigned long long v77;  // rax
    unsigned long long v78;  // rax
    char v79;  // r14b
    unsigned long long v80;  // rcx
    char v81;  // al
    unsigned long long v82;  // rcx
    char v83;  // al
    unsigned int v84;  // ecx
    unsigned long v86;  // rcx
    unsigned int v87;  // edx
    char v88;  // dl
    unsigned long long v89;  // rsi
    char v91;  // dl
    char v92;  // cl
    unsigned long long v93;  // rdx
    unsigned long long v94;  // rsi
    unsigned long long v95;  // rcx
    char v96;  // al

    v24 = a1->field_10;
    if (!v24)
        goto LABEL_4ac047;
    v25 = v24 - 1;
    a1->field_10 = v25;
    v26 = a1->field_8;
    v27 = v25 * 5;
    *((int128_t *)&v18) = *((int128_t *)((char *)v26 + 8 * v27));
    v20 = *((long long *)(32 + (char *)v26 + 8 * v27));
    *((int128_t *)&v19) = *((int128_t *)(16 + (char *)v26 + 8 * v27));
    v28 = (long long)v18 - 1;
    switch (v28)
    {
    case 0:
        uu_test::eval::hd0178b83e7335180(&v1, a1);
        v33 = v1;
        v34 = v2;
        if (v33 == 7)
        {
            a0->field_8 = v34 ^ 1;
            a0->field_0 = 7;
            return a0;
        }
        *((long long *)((char *)&a0->field_9 + 8)) = *((long long *)&v5);
        *((int128_t *)&(&a0->field_8)[1]) = *((int128_t *)&v3);
        a0->field_0 = v33;
        a0->field_8 = v34;
        return a0;
    case 1:
        *((int128_t *)&v8) = (int128_t)(&v18)[8];
        v29 = (long long)(&v19)[8];
        v9 = v29;
        v30 = (long long)(&v8)[8];
        if (!(char)::0x4abef0::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::ha08c54788d123b03(v30, v9, "-a"))
        {
            if (!(((char)::0x4abef0::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::ha08c54788d123b03(v30, v9, "-o") & a1->field_10 < 2) == 1))
                goto LABEL_4ac3bd;
            v30 = (long long)(&v8)[8];
            v29 = v9;
LABEL_4ac378:
            v1 = 1;
            v2 = v30;
            v4 = v29;
            v5 = 1;
            ::0x4ab340::_$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0530b763d48a6791(&v10, &v1);
            *((unsigned long *)((char *)&a0->field_9 + 8)) = v12;
            *((int128_t *)&a0->field_8) = *((int128_t *)&v10);
            a0->field_0 = 6;
        }
        else
        {
            if (a1->field_10 <= 1)
                goto LABEL_4ac378;
LABEL_4ac3bd:
            uu_test::eval::hd0178b83e7335180(&v1, a1);
            v63 = v1;
            v64 = v2;
            if (v63 != 7)
            {
                *((long long *)((char *)&a0->field_9 + 8)) = *((long long *)&v5);
                *((int128_t *)&(&a0->field_8)[1]) = *((int128_t *)&v3);
                a0->field_0 = v63;
                a0->field_8 = v64;
            }
            else
            {
                uu_test::eval::hd0178b83e7335180(&v1, a1);
                v78 = v1;
                v79 = v2;
                if (v78 != 7)
                {
                    *((long long *)((char *)&a0->field_9 + 8)) = *((long long *)&v5);
                    *((int128_t *)&(&a0->field_8)[1]) = *((int128_t *)&v3);
                    a0->field_0 = v78;
                    a0->field_8 = v79;
                }
                else
                {
                    v87 = v64;
                    if (v79)
                        v89 = 1;
                    else
                        v89 = v87;
                    v92 = (!(char)::0x4abef0::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::ha08c54788d123b03((long long)(&v8)[8], v9, "-a") ? v89 & 4294967295 : (v79 ? v87 : 0));
                    a0->field_8 = v92;
                    a0->field_0 = 7;
                }
            }
        }
        ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v8);
        return a0;
    case 2:
        v4 = (long long)(&v19)[8];
        *((int128_t *)&v1) = (int128_t)(&v18)[8];
        a0->field_8 = v4;
        a0->field_0 = 7;
        ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v1);
        return a0;
    case 3:
        v31 = (long long)(&v18)[8];
        if (!v31)
        {
            v9 = v20;
            v7 = v19;
            if (!v25)
            {
                v10 = 7;
                goto LABEL_4ac931;
            }
            else
            {
                v35 = v24;
                v36 = v35 - 2;
                a1->field_10 = v36;
                v37 = v36 * 5;
                v38 = *((int128_t *)((char *)v26 + 8 * v37));
                v14 = *((long long *)(32 + (char *)v26 + 8 * v37));
                *((int128_t *)&v12) = *((int128_t *)(16 + (char *)v26 + 8 * v37));
                v10 = v38;
                if (v35 != 2)
                {
                    v52 = v24 - 3;
                    a1->field_10 = v52;
                    v53 = v52 * 5;
                    v54 = *((int128_t *)((char *)v26 + 8 * v53));
                    v6 = *((long long *)(32 + (char *)v26 + 8 * v53));
                    *((int128_t *)&v4) = *((int128_t *)(16 + (char *)v26 + 8 * v53));
                    v1 = v54;
                }
                else
                {
LABEL_4ac931:
                    v1 = 7;
                }
            }
            v73 = v1;
            v74 = v10;
            if (!(char)::0x4abef0::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::ha08c54788d123b03((long long)(&v7)[8], v9, "!=src/uu/test/src/test.rs"))
            {
                if ((unsigned int)v73 != 7 && v74 != 7)
                    ::0x4ada80::_$LT$uu_test..parser..Symbol$u20$as$u20$core..cmp..PartialEq$GT$::eq::h838c2774cc7a2a63(&v1, &v10);
            }
            else
            {
                if ((unsigned int)v73 != 7 && v74 != 7)
                    ::0x4ada80::_$LT$uu_test..parser..Symbol$u20$as$u20$core..cmp..PartialEq$GT$::eq::h838c2774cc7a2a63(&v1, &v10);
            }
            a0->field_8 = v74 == 7 & v73 == 7;
            a0->field_0 = 7;
            core::ptr::drop_in_place$LT$core..option..Option$LT$uu_test..parser..Symbol$GT$$GT$::hbb35a5714e5c51fc(&v1);
            core::ptr::drop_in_place$LT$core..option..Option$LT$uu_test..parser..Symbol$GT$$GT$::hbb35a5714e5c51fc(&v10);
            ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v8);
        }
        else if ((unsigned int)v31 == 1)
        {
            v17 = v20;
            v16 = v19;
            if (!v25)
            {
                v1 = 7;
                uu_test::eval::panic_cold_explicit::ha5be655c7f68869b(); /* do not return */
            }
            v44 = v24 - 2;
            a1->field_10 = v44;
            v45 = v44 * 5;
            v46 = *((long long *)(32 + (char *)v26 + 8 * v45));
            v47 = *((int128_t *)(16 + (char *)v26 + 8 * v45));
            *((int128_t *)&v1) = *((int128_t *)((char *)v26 + 8 * v45));
            v6 = v46;
            v4 = v47;
            if (v1 != 3)
                uu_test::eval::panic_cold_explicit::ha5be655c7f68869b(); /* do not return */
            v9 = (long long)(&v4)[8];
            *((int128_t *)&v7) = (int128_t)(&v1)[8];
            if (!v44)
            {
                v1 = 7;
                uu_test::eval::panic_cold_explicit::h5cb2ec545d1e8498(); /* do not return */
            }
            v65 = v24 - 3;
            a1->field_10 = v65;
            v66 = v65 * 5;
            v67 = *((long long *)(32 + (char *)v26 + 8 * v66));
            v68 = *((int128_t *)(16 + (char *)v26 + 8 * v66));
            *((int128_t *)&v1) = *((int128_t *)((char *)v26 + 8 * v66));
            v6 = v67;
            v4 = v68;
            if (v1 != 3)
                uu_test::eval::panic_cold_explicit::h5cb2ec545d1e8498(); /* do not return */
            v75 = (long long)(&v4)[8];
            v12 = (long long)(&v4)[8];
            *((int128_t *)&v10) = (int128_t)(&v1)[8];
            v0 = v17;
            uu_test::integers::he37c408d0a55d011(&v1, (long long)(&v10)[8], v75, (long long)(&v7)[8], v9, (long long)(&v16)[8]);
            v80 = v1;
            v81 = (char)(&v1)[8];
            if (v80 != 7)
            {
                *((long long *)((char *)&a0->field_9 + 8)) = (long long)(&v4)[8];
                *((int128_t *)&(&a0->field_8)[1]) = (int128_t)(&v1)[9];
                a0->field_0 = v80;
                a0->field_8 = v81;
                ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v10);
                ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v8);
                ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v16);
                return a0;
            }
            a0->field_8 = v81;
            a0->field_0 = 7;
            ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v10);
            ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v8);
            ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v16);
        }
        else
        {
            v17 = v20;
            v16 = v19;
            if (!v25)
            {
                v1 = 7;
                uu_test::eval::panic_cold_explicit::h5b16dc8738e204df(); /* do not return */
            }
            v48 = v24 - 2;
            a1->field_10 = v48;
            v49 = v48 * 5;
            v50 = *((long long *)(32 + (char *)v26 + 8 * v49));
            v51 = *((int128_t *)(16 + (char *)v26 + 8 * v49));
            *((int128_t *)&v1) = *((int128_t *)((char *)v26 + 8 * v49));
            v6 = v50;
            v4 = v51;
            if (v1 != 3)
                uu_test::eval::panic_cold_explicit::h5b16dc8738e204df(); /* do not return */
            v9 = (long long)(&v4)[8];
            *((int128_t *)&v7) = (int128_t)(&v1)[8];
            if (!v48)
            {
                v1 = 7;
                uu_test::eval::panic_cold_explicit::h92b4006982236d13(); /* do not return */
            }
            v69 = v24 - 3;
            a1->field_10 = v69;
            v70 = v69 * 5;
            v71 = *((long long *)(32 + (char *)v26 + 8 * v70));
            v72 = *((int128_t *)(16 + (char *)v26 + 8 * v70));
            *((int128_t *)&v1) = *((int128_t *)((char *)v26 + 8 * v70));
            v6 = v71;
            v4 = v72;
            if (v1 != 3)
                uu_test::eval::panic_cold_explicit::h92b4006982236d13(); /* do not return */
            v76 = (long long)(&v4)[8];
            v12 = (long long)(&v4)[8];
            *((int128_t *)&v10) = (int128_t)(&v1)[8];
            v0 = v17;
            uu_test::files::h2d66ad67db33f3bc(&v1, (long long)(&v10)[8], v76, (long long)(&v7)[8], v9, (long long)(&v16)[8]);
            v82 = v1;
            v83 = (char)(&v1)[8];
            if (v82 != 7)
            {
                *((long long *)((char *)&a0->field_9 + 8)) = (long long)(&v4)[8];
                *((int128_t *)&(&a0->field_8)[1]) = (int128_t)(&v1)[9];
                a0->field_0 = v82;
                a0->field_8 = v83;
                ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v10);
                ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v8);
                ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v16);
                return a0;
            }
            a0->field_8 = v83;
            a0->field_0 = 7;
            ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v10);
            ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v8);
            ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v16);
            v91 = 0;
LABEL_4aca00:
            v94 = (long long)(&v18)[8];
            if (v94 && (unsigned int)v94 != 1 && !v91)
                return a0;
            ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v19);
            return a0;
        }
        v91 = v93 & 0xffffffffffffff00 | 1;
        goto LABEL_4aca00;
    case 4:
        if (!(long long)(&v18)[8])
        {
            v22 = v20;
            v21 = v19;
            if (!v25)
            {
                a0->field_8 = 1;
                a0->field_0 = 7;
                ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v21);
                return a0;
            }
            v39 = v24 - 2;
            a1->field_10 = v39;
            v40 = v39 * 5;
            v41 = *((long long *)(32 + (char *)v26 + 8 * v40));
            v42 = *((int128_t *)(16 + (char *)v26 + 8 * v40));
            *((int128_t *)&v1) = *((int128_t *)((char *)v26 + 8 * v40));
            v6 = v41;
            v4 = v42;
            v43 = v1;
            if (v43 == 3)
            {
                v17 = (long long)(&v4)[8];
                *((int128_t *)&v15) = (int128_t)(&v1)[8];
            }
            else if (v43 == 6)
            {
                std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v10, 1, 0);
                v17 = v12;
                *((int128_t *)&v15) = *((int128_t *)&v10);
                if (((char)~((int)v1) & 3))
                    ::0x4ab4f0::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&v1);
            }
            else if (v43 != 7)
            {
                v10 = 1;
                *((int128_t *)&v11) = (int128_t)(&v21)[8];
                v13 = 1;
                ::0x4ab340::_$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0530b763d48a6791(&v8, &v10);
                *((unsigned long *)((char *)&a0->field_9 + 8)) = v9;
                *((void*)&a0->field_8) = v7;
                a0->field_0 = 3;
                v77 = v1;
                if (v77 == 3)
                {
                    ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v1);
                }
                else if (v77 != 7)
                {
                    ::0x4ab4f0::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&v1);
                }
                ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v21);
                return a0;
            }
            else
            {
                a0->field_8 = 1;
                a0->field_0 = 7;
                ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v21);
                return a0;
            }
            v88 = v17;
            if ((char)::0x4abef0::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::ha08c54788d123b03((long long)(&v21)[8], v22, "-z"))
                v88 = !v17;
            a0->field_8 = v88;
            a0->field_0 = 7;
            ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v16);
            ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v21);
            if (!(long long)(&v18)[8])
                return a0;
        }
        else
        {
            v8 = v19;
            v9 = v20;
            std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v1, (long long)(&v8)[8], v20);
            if (v1)
                core::option::unwrap_failed::h0e11329e76906eaa(&g_514c20); /* do not return */
            v55 = a1->field_10;
            if (!v55)
            {
                v1 = 7;
                uu_test::eval::panic_cold_explicit::h361454b4f33cbd30(); /* do not return */
            }
            v56 = v2;
            v57 = v4;
            v58 = v55 - 1;
            a1->field_10 = v58;
            v59 = a1->field_8;
            v60 = v58 * 5;
            v61 = *((long long *)(32 + (char *)v59 + 8 * v60));
            v62 = *((int128_t *)(16 + (char *)v59 + 8 * v60));
            *((int128_t *)&v1) = *((int128_t *)((char *)v59 + 8 * v60));
            v6 = v61;
            v4 = v62;
            if (v1 != 3)
                uu_test::eval::panic_cold_explicit::h361454b4f33cbd30(); /* do not return */
            v12 = (long long)(&v4)[8];
            *((int128_t *)&v10) = (int128_t)(&v1)[8];
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v56, v57, "-b", 2))
            {
                v84 = 0;
                break;
            }
            v84 = v86 & 0xffffffffffffff00 | 1;
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v56, v57, "-c", 2))
            {
                uu_test::path::h72a91cd3b6f0d02c((long long)(&v10)[8], v12, v84);
                goto LABEL_4ac871;
            }
            else
            {
                v84 = v86 & 0xffffffffffffff00 | 2;
                if (!(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v56, v57, "-d", 2) && (v84 = (unsigned int)(v86 & 0xffffffffffffff00 | 3), !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v56, v57, "-e", 2))))
                    break;
                v84 = v86 & 0xffffffffffffff00 | 5;
                if (!(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v56, v57, "-f", 2) && (v84 = (unsigned int)(v86 & 0xffffffffffffff00 | 6), !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v56, v57, "-g", 2))))
                    break;
                v84 = v86 & 0xffffffffffffff00 | 7;
                if (!(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v56, v57, "-G", 2) && (v84 = (unsigned int)(v86 & 0xffffffffffffff00 | 8), !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v56, v57, "-h", 2))))
                    break;
                v84 = v86 & 0xffffffffffffff00 | 9;
                if (!(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v56, v57, "-k", 2) && (v84 = (unsigned int)(v86 & 0xffffffffffffff00 | 8), !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v56, v57, "-L", 2))))
                    break;
                v84 = v86 & 0xffffffffffffff00 | 4;
                if (!(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v56, v57, "-N", 2) && (v84 = (unsigned int)(v86 & 0xffffffffffffff00 | 10), !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v56, v57, "-O", 2))))
                    break;
                v84 = v86 & 0xffffffffffffff00 | 11;
                if (!(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v56, v57, "-p", 2) && (v84 = (unsigned int)(v86 & 0xffffffffffffff00 | 12), !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v56, v57, "-r", 2))))
                    break;
                v84 = v86 & 0xffffffffffffff00 | 13;
                if (!(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v56, v57, "-S", 2) && (v84 = (unsigned int)(v86 & 0xffffffffffffff00 | 14), !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v56, v57, "-s", 2))))
                    break;
                if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v56, v57, "-t", 2))
                {
                    uu_test::isatty::h35113a9be9add355(&v1, (long long)(&v10)[8], v12);
                    v95 = v1;
                    v96 = (char)(&v1)[8];
                    if (v95 != 7)
                    {
                        *((long long *)((char *)&a0->field_9 + 8)) = (long long)(&v4)[8];
                        *((int128_t *)&(&a0->field_8)[1]) = (int128_t)(&v1)[9];
                        a0->field_0 = v95;
                        a0->field_8 = v96;
                        ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v10);
                        ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v8);
                        return a0;
                    }
LABEL_4ac871:
                    a0->field_8 = v96;
                    a0->field_0 = 7;
                    ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v10);
                    ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v8);
                    if ((long long)(&v18)[8])
                        return a0;
                }
                else
                {
                    v84 = v86 & 0xffffffffffffff00 | 15;
                    if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v56, v57, "-u", 2))
                    {
                        v84 = v86 & 0xffffffffffffff00 | 16;
                        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v56, v57, "-w", 2))
                        {
                            v84 = v86 & 0xffffffffffffff00 | 17;
                            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v56, v57, "-x", 2))
                                uu_test::eval::panic_cold_explicit::h81c4b099897e5224(); /* do not return */
                        }
                    }
                    break;
                }
            }
        }
        ::0x4ab580::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h6d998f4ce1bf2fbf(&v19);
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
