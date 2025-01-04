long long uu_csplit::uumain::uumain::h6eadb50264c4f8c1(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    unsigned int v0;  // [bp-0x4a0], Other Possible Types: unsigned long
    char v1;  // [bp-0x498]
    char v2;  // [bp-0x490]
    char v3;  // [bp-0x488]
    unsigned long v4;  // [sp-0x480], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x478]
    int v6;  // [sp-0x470]
    int v7;  // [sp-0x460]
    unsigned long long v8;  // [sp-0x450]
    char v9;  // [bp-0x448]
    char v10;  // [bp-0x440]
    char v11;  // [bp-0x438]
    char v12;  // [bp-0x428]
    char v13;  // [bp-0x418]
    int v14;  // [sp-0x398]
    int v15;  // [sp-0x388]
    int v16;  // [sp-0x378]
    int v17;  // [sp-0x368]
    char v18;  // [bp-0x350]
    int v19;  // [bp-0x2e8], Other Possible Types: char, unsigned long long
    int v20;  // [bp-0x2e0]
    int v21;  // [bp-0x2d8]
    int v22;  // [sp-0x2d0], Other Possible Types: unsigned long long
    unsigned long long v23;  // [sp-0x2c8]
    unsigned long long v25;  // r8
    unsigned long v26;  // r9
    unsigned long long v29;  // rax
    unsigned long long v30[3];  // rbx
    unsigned long long v31;  // rdx
    int v34;  // xmm0
    unsigned long long v37;  // rax
    int v38;  // xmm0

    uu_csplit::uu_app::h86eb726b6073e125(&v19, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::hcae3b529826e6a0d(&v9, &v19, a0, a1, v25, v26);
    if (v4 == 0x8000000000000000)
    {
        v29 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v5);
        return v29;
    }
    v8 = *((long long *)&v13);
    *((int128_t *)&v7) = *((int128_t *)&v12);
    *((int128_t *)&v6) = *((int128_t *)&v11);
    v4 = *((long long *)&v9);
    v5 = *((long long *)&v10);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc5a9f76a4b949bc1(&v19, &v4, "filemode{", 4);
    v30 = clap_builder::parser::error::MatchesError::unwrap::hafaa8c6d7408a0e9("filemode{", 4, &v19);
    if (!v30)
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h22bc54f1ce978fdd(&v19, &v4, "pattern-", 7);
    clap_builder::parser::error::MatchesError::unwrap::hb8cfc70c55ca00cf(&v9, "pattern-", 7, &v19);
    if (*((long long *)&v9))
    {
        *((int128_t *)&v17) = *((int128_t *)&v13);
        *((int128_t *)&v16) = *((int128_t *)&v12);
        *((int128_t *)&v15) = *((int128_t *)&v11);
        *((int128_t *)&v14) = *((int128_t *)&v9);
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::ha175ecf279fa0b9b(&v1, &v14, v31);
        uu_csplit::CsplitOptions::new::h18a4d0e2255fb53b(&v18, &v4);
        if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3b2659a33d278162(v30[1], v30[2], "-", 1))
        {
            v0 = std::io::stdio::stdin::h7215cc131abb55d8();
            uu_csplit::csplit::habea2b7448100cb7(&v9, &v18, *((long long *)&v2), *((long long *)&v3), std::io::stdio::Stdin::lock::h161a36d857331d7f(&v0), (unsigned int)v31 & 1);
            if (*((int *)&v9) == 12)
                goto LABEL_56150f;
            v23 = *((long long *)&v12);
            v34 = *((int128_t *)&v9);
            *((int128_t *)&v21) = *((int128_t *)&v11);
            v19 = v34;
            v29 = alloc::boxed::Box$LT$T$GT$::new::h6b837569a0db69e2(&v19);
        }
        else
        {
            std::fs::File::open::hffa7441d5a04c38c(&v19, v30, v31);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hdd6233119bcf60a2(&v9, &v19, v30);
            v29 = *((long long *)&v9);
            if (v29)
                goto LABEL_5616eb;
            v0 = *((int *)&v10);
            std::fs::File::metadata::he899a18112e6f19e(&v19, &v0);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hde00539526dd8324(&v9, &v19, v30);
            if (*((int *)&v9) == 2)
            {
                v29 = *((long long *)&v10);
                goto LABEL_5616e2;
            }
            else if ((0xf000 & *((int *)&(&v13)[8])) == 0x8000)
            {
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hc0bfa7f749c36949(&v19, 0x2000, v0);
                uu_csplit::csplit::hbd1c068a297fe5d8(&v9, &v18, *((long long *)&v2), *((long long *)&v3), &v19, v26);
                v37 = *((long long *)&v9);
                if (v19 == 12)
                {
LABEL_56150f:
                    core::ptr::drop_in_place$LT$uu_csplit..CsplitOptions$GT$::h17e4cab8b6953a0e(&v18);
                    ::0x55ce90::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h1581f7c1aae30641(&v1);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h21e213836082c314(&v4);
                    return 0;
                }
                v38 = *((int128_t *)&v10);
                *((int128_t *)&v22) = *((int128_t *)&(&v11)[8]);
                v20 = v38;
                v19 = v37;
                v29 = alloc::boxed::Box$LT$T$GT$::new::h6b837569a0db69e2(&v19);
            }
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v9, v30);
                v22 = *((long long *)&v11);
                *((int128_t *)&v20) = *((int128_t *)&v9);
                v19 = 11;
                v29 = alloc::boxed::Box$LT$T$GT$::new::h6b837569a0db69e2(&v19);
LABEL_5616e2:
                ::0x55c830::core::ptr::drop_in_place$LT$std..fs..File$GT$::h14d311f58d6bf7d5(v0);
LABEL_5616eb:
                core::ptr::drop_in_place$LT$uu_csplit..CsplitOptions$GT$::h17e4cab8b6953a0e(&v18);
                ::0x55ce90::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h1581f7c1aae30641(&v1);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h21e213836082c314(&v4);
                return v29;
            }
        }
        goto LABEL_5616eb;
    }
}
