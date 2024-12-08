long long uu_fold::uumain::uumain::hf36cc691c8a31d16(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3)
{
    int v0;  // [sp-0x438]
    unsigned long long v1;  // [sp-0x428]
    char v2;  // [bp-0x418]
    char v3;  // [bp-0x410]
    char v4;  // [bp-0x408]
    char v5;  // [bp-0x400]
    char v6;  // [bp-0x3f8]
    char v7;  // [bp-0x3f0]
    char v8;  // [bp-0x3e0]
    char v9;  // [bp-0x3d0]
    unsigned long v10;  // [sp-0x3c0], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x3b8]
    int v12;  // [sp-0x3b0]
    int v13;  // [sp-0x3a0]
    unsigned long long v14;  // [sp-0x390]
    int v15;  // [sp-0x388]
    unsigned long long v16;  // [sp-0x378]
    int v17;  // [sp-0x368]
    unsigned long long v18;  // [sp-0x358]
    int v19;  // [sp-0x348]
    int v20;  // [sp-0x338]
    int v21;  // [sp-0x328]
    int v22;  // [sp-0x318]
    int v23;  // [sp-0x308]
    unsigned long long v24;  // [bp-0x2f8]
    int v25;  // [sp-0x2f0]
    char v26;  // [bp-0x2e8]
    char v27;  // [bp-0x2e0]
    char v28;  // [bp-0x2d0]
    unsigned long long v30;  // rsi
    unsigned long long v31;  // rdx
    unsigned long long v32;  // rcx
    unsigned long long v35;  // rax
    unsigned long long v38;  // r15
    unsigned long long v39;  // rax
    unsigned long long v40;  // r14
    char v41;  // r12b
    unsigned long v42;  // r12
    struct_0 *v43;  // rax
    struct_0 *v44;  // r15

    uucore::Args::collect_lossy::h3b4cfe640b0cf269(&v2, a0, a1);
    uu_fold::handle_obsolete::h762c978b62a3962a(&v24, *((long long *)&v3), *((long long *)&v4));
    v16 = *((long long *)&v26);
    *((int128_t *)&v15) = *((int128_t *)&v24);
    v1 = *((long long *)&v28);
    *((int128_t *)&v0) = *((int128_t *)&v27);
    uu_fold::uu_app::h649bdc446ced94fb(&v24, v30, v31);
    v18 = v16;
    v17 = v15;
    clap_builder::builder::command::Command::try_get_matches_from::hddd1b1aefd1f0da0(&v5, &v24, &v17, v32);
    if (v10 == 0x8000000000000000)
    {
        v35 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v11);
        goto LABEL_4652bf;
    }
    v14 = *((long long *)&v9);
    *((int128_t *)&v13) = *((int128_t *)&v8);
    *((int128_t *)&v12) = *((int128_t *)&v7);
    v10 = *((long long *)&v5);
    v11 = *((long long *)&v6);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6f6b0903ab246919(&v24, &v10);
    v38 = clap_builder::parser::error::MatchesError::unwrap::hb0b214f88334b243("widthillegal width value (): ", 5, &v24);
    if (!v38)
    {
        v39 = (long long)v0;
        *((int128_t *)&v19) = (int128_t)(&v0)[8];
        v40 = 80;
        v41 = 0;
        if (!(v39 == 0x8000000000000000))
            goto LABEL_465242;
LABEL_4652fb:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h1366c6a1292f69a5(&v24, &v10);
        clap_builder::parser::error::MatchesError::unwrap::h0ba844b61293c14c(&v5, "filei128", 4, &v24);
        if (*((long long *)&v5))
        {
            *((int128_t *)&v23) = *((int128_t *)&v9);
            *((int128_t *)&v22) = *((int128_t *)&v8);
            *((int128_t *)&v21) = *((int128_t *)&v7);
            *((int128_t *)&v20) = *((int128_t *)&v5);
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hf56de10c2bbae577(&v24, &v20, v31);
        }
        else
        {
            v43 = ::0x464190::alloc::alloc::Global::alloc_impl::hf61749d460433fff(24);
            if (!v43)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v44 = v43;
            ::0x463ee0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h327e77cb19f9f839(&v24);
            v18 = (long long)(&v25)[8];
            *((int128_t *)&v17) = *((int128_t *)&v24);
            v44->field_10 = v18;
            *((void*)&v44->field_0) = v17;
            alloc::slice::hack::into_vec::ha139a1f2e66ffb0e(&v24, v44, 1);
        }
        v35 = uu_fold::fold::hfd4c2f9fc257174e((&v24)[1], (long long)(&v25)[8], (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v10, "bytes", 5), (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v10, "spaces", 6), v40);
        ::0x463c40::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h727654e30e20b042(&v24);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h57710bcce66b34d1(&v10);
        if (v41)
            ::0x463cc0::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h5fe195c487980f0d(&v0);
    }
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v24, v38);
        v19 = v25;
        v41 = v42 | -0x100 | 1 | -0x100 | 1 | -0x100 | 1 | -0x100 | 1;
LABEL_465242:
        v24 = v39;
        v25 = v19;
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v5, (long long)v25, (long long)(&v25)[8]);
        if (v5)
        {
            v35 = uu_fold::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h82a28e0ed6ecb1d6((long long)v25, (long long)(&v25)[8]);
            ::0x463b50::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h65bcedb4b87d6446(&v24);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h57710bcce66b34d1(&v10);
            if (v38)
            {
LABEL_4652bf:
                ::0x463cc0::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h5fe195c487980f0d(&v0);
            }
        }
        else
        {
            v40 = *((long long *)&v6);
            ::0x463b50::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h65bcedb4b87d6446(&v24);
            goto LABEL_4652fb;
        }
    }
    ::0x463c40::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h727654e30e20b042(&v2);
    return v35;
}
