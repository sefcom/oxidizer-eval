long long uu_ls::parse_time_style::h637c81bfc8530b0a(struct_1 *a0, unsigned long long a1)
{
    char v0;  // [bp-0xf0]
    int v1;  // [sp-0xe9]
    char v2;  // [bp-0xe0]
    unsigned long long v3;  // [sp-0xd9]
    int v4;  // [sp-0xc8]
    unsigned long long v5;  // [sp-0xb8]
    int v6;  // [sp-0xa8]
    unsigned long long v7;  // [sp-0x98]
    int v8;  // [bp-0x88], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v9;  // [sp-0x80]
    unsigned long long v10;  // [sp-0x78]
    int v11;  // [sp-0x68]
    unsigned long long v12;  // [sp-0x58]
    int v13;  // [sp-0x48]
    unsigned long long v14;  // [sp-0x38]
    struct_0 *v16;  // rax
    struct_0 *v17;  // r15
    unsigned long long v18[3];  // r15
    unsigned long long v22;  // rdx
    unsigned long long v23;  // r12
    unsigned long long v24;  // r14
    unsigned long long v25;  // rax
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax

    v16 = ::0x51d470::alloc::alloc::Global::alloc_impl::hf61749d460433fff();
    if (!v16)
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(8, 120); /* do not return */
    v17 = v16;
    ::0x51d030::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(&v0, "full-isoBorrowedENOTSOCKclassify", 8);
    v12 = *((long long *)&v2);
    *((int128_t *)&v11) = *((int128_t *)&v0);
    ::0x51d030::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(&v0, "long-isoDateTime", 8);
    v14 = *((long long *)&v2);
    *((int128_t *)&v13) = *((int128_t *)&v0);
    ::0x51d030::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(&v0, "isolocale+FORMAT (e.g., +%H:%M) for a 'date'-style formatsrc/uu/ls/src/ls.rs", 3);
    v10 = *((long long *)&v2);
    *((int128_t *)&v8) = *((int128_t *)&v0);
    ::0x51d030::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(&v0, "locale+FORMAT (e.g., +%H:%M) for a 'date'-style formatsrc/uu/ls/src/ls.rs", 6);
    v7 = *((long long *)&v2);
    *((int128_t *)&v6) = *((int128_t *)&v0);
    ::0x51d030::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(&v0, "+FORMAT (e.g., +%H:%M) for a 'date'-style formatsrc/uu/ls/src/ls.rs", 48);
    v5 = *((long long *)&v2);
    *((int128_t *)&v4) = *((int128_t *)&v0);
    v17->field_10 = v12;
    *((void*)&v17->field_0) = v11;
    *((unsigned long long *)((char *)&v17->field_18 + 8)) = v14;
    *((void*)&(&v17->field_10)[1]) = v13;
    *((unsigned long long *)&v17->field_30) = v10;
    *((int128_t *)&v17->field_28) = (int128_t)v8;
    *((void*)((char *)&v17->field_30 + 8)) = v6;
    (&v17->field_40)[1] = v7;
    *((void*)&v17->field_48) = v4;
    v17->field_58 = v5;
    alloc::slice::hack::into_vec::h6d59ee658acb7704(&v6, v17, 5);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7f0bb7fe0c729ea9(&v0, a1, "time-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink ", 10);
    v18 = clap_builder::parser::error::MatchesError::unwrap::hac05afd0923194a9("time-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink ", 10, &v0);
    if (v18)
    {
        if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "full-timeignorecontextgroup-directories-firstdiredhyperlink ", 9))
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::indices_of::h365fe016942495a0(&v0, a1, "full-timeignorecontextgroup-directories-firstdiredhyperlink ", 9);
            if (!*((long long *)&v0))
                core::option::unwrap_failed::h0e11329e76906eaa(&g_6121f0); /* do not return */
            v5 = *((long long *)&v2);
            *((int128_t *)&v4) = *((int128_t *)&v0);
            clap_builder::parser::matches::arg_matches::ArgMatches::indices_of::h365fe016942495a0(&v0, a1, "time-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink ", 10);
            if (!*((long long *)&v0))
                core::option::unwrap_failed::h0e11329e76906eaa(&g_612208); /* do not return */
            v5 = *((long long *)&v2);
            *((int128_t *)&v4) = *((int128_t *)&v0);
            if (core::iter::traits::iterator::Iterator::fold::hedf7a65ebd7287e8(&v4) && (!(core::iter::traits::iterator::Iterator::fold::hedf7a65ebd7287e8(&v4)) || !(v22 <= v22)))
                goto LABEL_51ea78;
        }
        v23 = v18[1];
        v24 = v18[2];
        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v23, v24, "full-isoBorrowedENOTSOCKclassify", 8))
        {
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v23, v24, "long-isoDateTime", 8))
            {
                v25 = 9223372036854775809;
            }
            else
            {
                if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v23, v24, "isolocale+FORMAT (e.g., +%H:%M) for a 'date'-style formatsrc/uu/ls/src/ls.rs", 3))
                {
                    v25 = 9223372036854775810;
                }
                else
                {
                    if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(v23, v24, "locale+FORMAT (e.g., +%H:%M) for a 'date'-style formatsrc/uu/ls/src/ls.rs", 6))
                    {
                        v8 = v23;
                        v9 = v23 + v24;
                        switch (((int)::0x51b730::core::str::validations::next_code_point::haf8c055704158b90(&v8) ? (unsigned int)v22 : 0x110000))
                        {
                        case 43:
                            v27 = ::0x51b7e0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(1, v23, v24);
                            if (v27)
                            {
                                ::0x51d030::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(&v0, v27, v22);
                                *((long long *)((char *)&a0->field_1 + 8)) = *((long long *)&v2);
                                *((int128_t *)&(&a0->field_0)[8]) = *((int128_t *)&v0);
                                a0->field_0 = 7;
                                v28 = ::0x51afa0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hbaa87f9dbd448729(&v6);
                                return v28;
                            }
                            core::str::slice_error_fail::h5dbb61534404fe7e(v23, v24, 1, v24, &g_612238); /* do not return */
                        case 1114112:
                            core::option::unwrap_failed::h0e11329e76906eaa(&g_612220); /* do not return */
                        default:
                            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v4, v18);
                            a0->field_18 = v7;
                            *((void*)&a0->field_8) = v6;
                            v1 = v4;
                            v3 = v5;
                            a0->field_0 = 6;
                            v28 = (long long)(&v1)[8];
                            *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v0);
                            *((unsigned long long *)&a0->field_1) = v28;
                            *((unsigned long long *)((char *)&a0->field_1 + 8)) = v3;
                            return v28;
                        }
                    }
LABEL_51eaca:
                    v25 = 9223372036854775811;
                }
            }
            *((unsigned long long *)&(&a0->field_0)[8]) = v25;
            a0->field_0 = 7;
            ::0x51afa0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hbaa87f9dbd448729(&v6);
            return v28;
        }
    }
    else if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "full-timeignorecontextgroup-directories-firstdiredhyperlink ", 9))
    {
        goto LABEL_51eaca;
    }
LABEL_51ea78:
    *((long long *)&(&a0->field_0)[8]) = 0x8000000000000000;
    a0->field_0 = 7;
    ::0x51afa0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hbaa87f9dbd448729(&v6);
    return v28;
}
