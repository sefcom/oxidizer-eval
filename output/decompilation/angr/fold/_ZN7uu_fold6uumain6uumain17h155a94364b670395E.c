long long uu_fold::uumain::uumain::h155a94364b670395(unsigned long long a0, unsigned long long a1)
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
    unsigned long v10;  // [sp-0x3c0]
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
    int v24;  // [bp-0x2f8], Other Possible Types: char, unsigned long
    unsigned long v25;  // [sp-0x2f8]
    int v26;  // [sp-0x2f0]
    char v27;  // [bp-0x2e0]
    char v28;  // [bp-0x2d0]
    unsigned long long v33;  // r14
    unsigned long long v35;  // r15
    unsigned long long v36;  // rax
    unsigned long long v37;  // r14
    char v38;  // r12b
    unsigned long v39;  // r12
    struct_0 *v40;  // rax
    struct_0 *v41;  // r15

    uucore::Args::collect_lossy::h1cee8c2280f3bcb1(&v2, a0, a1);
    uu_fold::handle_obsolete::h3fddf2520a33c709(&v24, *((long long *)&v3), *((long long *)&v4));
    v16 = *((long long *)&v24);
    *((int128_t *)&v15) = *((int128_t *)&v24);
    v1 = *((long long *)&v28);
    *((int128_t *)&v0) = *((int128_t *)&v27);
    uu_fold::uu_app::hfa78df7319f7c039(&v24);
    v18 = v16;
    v17 = v15;
    clap_builder::builder::command::Command::try_get_matches_from::hea47991cc25bd6e3(&v5, &v24, &v17);
    if (v10 == 0x8000000000000000)
    {
        v33 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v11);
        goto LABEL_464980;
    }
    v14 = *((long long *)&v9);
    *((int128_t *)&v13) = *((int128_t *)&v8);
    *((int128_t *)&v12) = *((int128_t *)&v7);
    v10 = *((long long *)&v5);
    v11 = *((long long *)&v6);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h472e17604698523c(&v24, &v10, "width", 5);
    v35 = clap_builder::parser::error::MatchesError::unwrap::h4339da512d61fbc5("width", 5, &v24);
    if (!v35)
    {
        v36 = (long long)v0;
        *((int128_t *)&v19) = (int128_t)(&v0)[8];
        v37 = 80;
        v38 = 0;
        if (!(v36 == 0x8000000000000000))
            goto LABEL_464a86;
    }
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v24, v35);
        v36 = v25;
        v19 = v26;
        v38 = (((v39 & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | 1;
LABEL_464a86:
        v24 = v36;
        v24 = v19;
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v5, (long long)v24, (long long)(&v24)[8]);
        if (!v5)
        {
            v37 = *((long long *)&v6);
            goto LABEL_464b1f;
        }
        v33 = uu_fold::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::hef0e7fe7c92ff8ac((long long)v24, (long long)(&v24)[8], (&v5)[1]);
        if (!v33)
        {
            v37 = &g_517fb8;
LABEL_464b1f:
            ::0x4632c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2fe101e1456ac402(&v24);
        }
        else
        {
            ::0x4632c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2fe101e1456ac402(&v24);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc3e6f6c823a6e497(&v10);
            if (!v35)
            {
LABEL_464c63:
                ::0x4633b0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h10b4bf408cda2574(&v2);
                return v33;
            }
LABEL_464980:
            ::0x463430::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hed570d098e0e6bfc(&v0);
        }
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hdf6edee4d4c95a38(&v24, &v10, "filei128", 4);
    clap_builder::parser::error::MatchesError::unwrap::h5400f4bced3243d7(&v5, "filei128", 4, &v24);
    if (*((long long *)&v5))
    {
        *((int128_t *)&v23) = *((int128_t *)&v9);
        *((int128_t *)&v22) = *((int128_t *)&v8);
        *((int128_t *)&v21) = *((int128_t *)&v7);
        *((int128_t *)&v20) = *((int128_t *)&v5);
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h71544f9847d722f8(&v24, &v20);
    }
    else
    {
        v40 = ::0x4639a0::alloc::alloc::Global::alloc_impl::hf61749d460433fff(24);
        if (!v40)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(8, 24); /* do not return */
        v41 = v40;
        ::0x463660::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hca3da16942e22ce7(&v24);
        v18 = (long long)(&v24)[8];
        *((int128_t *)&v17) = *((int128_t *)&v24);
        v41->field_10 = v18;
        *((void*)&v41->field_0) = v17;
        alloc::slice::hack::into_vec::h8f55dd2e2988ff10(&v24, v41);
    }
    v33 = uu_fold::fold::h0e99b4443f72c023((&v24)[1], (long long)(&v24)[8], (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v10, "bytes", 5), (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v10, "spacesillegal width value (): /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/iter/traits/exact_size.rs", 6), v37);
    ::0x4633b0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h10b4bf408cda2574(&v24);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc3e6f6c823a6e497(&v10);
    if (v38)
        ::0x463430::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hed570d098e0e6bfc(&v0);
    goto LABEL_464c63;
}
