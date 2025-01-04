long long uu_df::columns::Column::from_matches::h15f1a0d2790b5397(struct_1 *a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0xf8], Other Possible Types: unsigned long long
    void* v1;  // [sp-0xe8]
    unsigned long long v2;  // [sp-0xe0]
    void* v3;  // [sp-0xd8]
    void* v4;  // [sp-0xd0]
    unsigned long long v5;  // [sp-0xc8]
    void* v6;  // [sp-0xc0]
    char v7;  // [bp-0xb8]
    char v8;  // [bp-0xa8]
    char v9;  // [bp-0x98]
    char v10;  // [bp-0x88]
    int v11;  // [bp-0x78], Other Possible Types: char
    int v12;  // [sp-0x68]
    int v13;  // [sp-0x58]
    int v14;  // [sp-0x48]
    char v16;  // r15b
    char v17;  // bpl
    char v18;  // al
    struct_0 *v19;  // rax
    unsigned long long v20;  // rdi
    unsigned long long v22;  // rsi
    unsigned long long v23;  // rdx
    unsigned long long v24[3];  // rax
    unsigned long long v25;  // rdx
    unsigned int v26;  // ebp

    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "print-type", 10);
    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "inodes", 6);
    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h1b5412f9501eb404(a1, "output", 6);
    if (v18 != 3)
    {
        if (!v16)
        {
            if (v17)
            {
                if (v18 == 2)
                    core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
            }
            else
            {
                if (v18 == 2)
                {
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hb3fde72e0199aad2(&v11, a1, "output", 6);
                    clap_builder::parser::error::MatchesError::unwrap::h25aaf5005aa7e09d(&v7, "output", 6, &v11);
                    if (!*((long long *)&v7))
                        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                    *((int128_t *)&v14) = *((int128_t *)&v10);
                    *((int128_t *)&v13) = *((int128_t *)&v9);
                    *((int128_t *)&v12) = *((int128_t *)&v8);
                    *((int128_t *)&v11) = *((int128_t *)&v7);
                    v1 = 0;
                    v2 = 8;
                    v3 = 0;
                    v4 = 0;
                    v5 = 1;
                    v6 = 0;
                    while (true)
                    {
                        v24 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he44065405483c9e6(&v11, v22, v23);
                        if (!v24)
                        {
                            *((void* *)((char *)&a0->field_8 + 8)) = v6;
                            *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v4);
                            a0->field_0 = 0;
                            break;
                        }
                        else
                        {
                            v0 = core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h1af83cdb9d95be3c(v24[1], v24[2]);
                            if (!(char)_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::hf8f0d3232cc90c0d(&v0, v2, v3))
                            {
                                alloc::vec::Vec$LT$T$C$A$GT$::push::h328effd5a350cac1(&v1, v0, v25);
                                v26 = uu_df::columns::Column::parse::h6fa6943eaec20ad4(v0, v25);
                                core::result::Result$LT$T$C$E$GT$::unwrap::h805b01653c809cdb(v26);
                                alloc::vec::Vec$LT$T$C$A$GT$::push::hf4b24cdd85525803(&v4, v26, v25);
                            }
                            else
                            {
                                ::0x4d3ee0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(&v7, v0, v25);
                                *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v8);
                                *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v7);
                                a0->field_0 = 1;
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_df..columns..Column$GT$$GT$::h28eca68a33c1715f(&v4);
                                break;
                            }
                        }
                    }
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h8d7158ab7f6c77b2(&v1);
                    return a0;
                }
LABEL_4d4fc6:
                v19 = ::0x4d4040::alloc::alloc::Global::alloc_impl::hf61749d460433fff(6);
                if (v19)
                {
                    v19->field_0 = 0x3020100;
                    v19->field_4 = 1284;
                    v20 = &(&a0->field_0)[1];
                    alloc::slice::hack::into_vec::h72287ac5f2b51bf0(v20, v19, 6);
                    a0->field_0 = 0;
                    return a0;
                }
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            }
LABEL_4d4e26:
            v19 = ::0x4d4040::alloc::alloc::Global::alloc_impl::hf61749d460433fff(6);
            if (v19)
            {
                v19->field_0 = 0x8070600;
                v19->field_4 = 1289;
                alloc::slice::hack::into_vec::h72287ac5f2b51bf0(v20, v19, 6);
                a0->field_0 = 0;
                return a0;
            }
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        }
        else if (!v17)
        {
            if (v18 == 2)
                core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
LABEL_4d4e52:
            v19 = ::0x4d4040::alloc::alloc::Global::alloc_impl::hf61749d460433fff(7);
            if (v19)
            {
                v19->field_0 = 0x2010b00;
                v19->field_4 = 1027;
                v19->field_6 = 5;
                v20 = &(&a0->field_0)[1];
                alloc::slice::hack::into_vec::h72287ac5f2b51bf0(v20, v19, 7);
                a0->field_0 = 0;
                return a0;
            }
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        }
        else if (v18 == 2)
        {
            core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
        }
    }
    else
    {
        if (!v16)
        {
            if (!v17)
                goto LABEL_4d4fc6;
            goto LABEL_4d4e26;
        }
        else if (!v17)
        {
            goto LABEL_4d4e52;
        }
    }
    v19 = ::0x4d4040::alloc::alloc::Global::alloc_impl::hf61749d460433fff(7);
    if (v19)
    {
        v19->field_0 = 0x7060b00;
        v19->field_4 = 2312;
        v19->field_6 = 5;
        alloc::slice::hack::into_vec::h72287ac5f2b51bf0(v20, v19, 7);
        a0->field_0 = 0;
        return a0;
    }
    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
}
