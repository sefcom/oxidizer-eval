long long uu_mktemp::Options::from::hb6474ecf1c24caa5(struct_0 *a0, unsigned long long a1)
{
    int v0;  // [bp-0xf8], Other Possible Types: char, unsigned long long, unsigned long
    int v1;  // [bp-0xf0]
    unsigned long long v2;  // [sp-0xe8]
    char v3;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long v4;  // [sp-0xb8], Other Possible Types: unsigned long long
    int v5;  // [sp-0xa8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long long v6;  // [sp-0xa0]
    unsigned long v7;  // [sp-0x98], Other Possible Types: unsigned long long
    int v8;  // [sp-0x88], Other Possible Types: unsigned long, unsigned long long
    int v9;  // [bp-0x80]
    unsigned long v10;  // [sp-0x78], Other Possible Types: unsigned long long
    int v11;  // [sp-0x68]
    unsigned long long v12;  // [sp-0x58]
    char v13;  // [bp-0x48], Other Possible Types: unsigned long long
    char v14;  // [bp-0x40]
    unsigned long long v16;  // r13
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax
    unsigned long long v19;  // rcx
    unsigned long long v21;  // r13
    unsigned long long v25;  // rax

    v16 = 0x8000000000000000;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h74242425f71c46f5(&v0, a1, "tmpdir", 6);
    v17 = core::option::Option$LT$T$GT$::or_else::h0adf0d78e1cee83c(clap_builder::parser::error::MatchesError::unwrap::h4471d07e03057163("tmpdir", 6, &v0), a1);
    if (!v17)
        v13 = 0x8000000000000000;
    else
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h365189d532bd25e3(&v13, v17);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hd7b7a8ebb3f5660d(&v0, a1, "templateDeadlock", 8);
    v18 = clap_builder::parser::error::MatchesError::unwrap::ha82de49fc58d9d84("templateDeadlock", 8, &v0);
    if (v18)
    {
        std::env::var::h36d632a850f6a37e(&v0, "TMPDIR", 6);
        if (v0)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h9fc29f7ed5286cbf(&v0);
            goto LABEL_4be210;
        }
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h9fc29f7ed5286cbf(&v0);
        if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "tcould not persist file with --suffix, template  must end in Xtoo few X's in template invalid template, , contains directory separatorinvalid suffix ; with --tmpdir, it may not be absolutetoo many templatesfailed to create  via template : No such file or directory", 1))
        {
            std::env::var_os::h78574a554cb131a2(&v0, "TMPDIR", 6);
            if (v0 == 0x8000000000000000)
                goto LABEL_4be276;
LABEL_4be269:
            *((int128_t *)&v11) = (int128_t)v1;
LABEL_4be276:
            v16 = v21 | -0x100 | 1;
        }
        else
        {
LABEL_4be210:
            v19 = v13;
            if (v19 != 0x8000000000000000)
            {
                *((int128_t *)&v11) = *((int128_t *)&v14);
                v16 = 0;
                goto LABEL_4be28e;
            }
            if (!((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "tcould not persist file with --suffix, template  must end in Xtoo few X's in template invalid template, , contains directory separatorinvalid suffix ; with --tmpdir, it may not be absolutetoo many templatesfailed to create  via template : No such file or directory", 1)) && !((v19 = 0x8000000000000000, v16 = -255, (char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::hfa828e742123c8eb(a1, "tmpdir", 6))))
                goto LABEL_4be28e;
            std::env::temp_dir::h5c298e5697888810(&v0);
            goto LABEL_4be269;
        }
LABEL_4be28e:
        v8 = v19;
        v9 = v11;
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v5, v18);
        v4 = v10;
        *((int128_t *)&v3) = *((int128_t *)&v8);
        *((int128_t *)&v0) = *((int128_t *)&v5);
        v2 = v7;
    }
    else
    {
        if (v0 != 0x8000000000000000)
        {
            *((int128_t *)&v1) = *((int128_t *)&v14);
            v0 = v13;
        }
        else
        {
            core::ops::function::FnOnce::call_once::h51249da76cc21c6f(&v0);
        }
        v7 = v2;
        v5 = v0;
        v6 = (long long)v1;
        ::0x4bd680::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha829c9a0da0479c0(&v3, "tmp.XXXXXXXXXX", 14);
        v2 = v4;
        *((int128_t *)&v0) = *((int128_t *)&v3);
        *((int128_t *)&v3) = *((int128_t *)&v5);
        v4 = v7;
        v16 = 0;
    }
    v12 = v4;
    *((int128_t *)&v11) = *((int128_t *)&v3);
    v10 = v2;
    *((int128_t *)&v8) = (int128_t)v0;
    v7 = v12;
    v5 = v11;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hd7b7a8ebb3f5660d(&v0, a1, "suffix", 6);
    v25 = clap_builder::parser::error::MatchesError::unwrap::ha82de49fc58d9d84("suffix", 6, &v0);
    if (!v25)
    {
        v3 = 0x8000000000000000;
    }
    else
    {
        core::ops::function::FnOnce::call_once::hacf750e1cf08abe9(&v0, v25);
        v4 = v2;
        *((int128_t *)&v3) = (int128_t)v0;
    }
    a0->field_10 = v10;
    a0->field_0 = (int128_t)v8;
    *((char *)&a0->field_30 + 8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "directory", 9);
    *((char *)&a0->field_30 + 9) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "dry-run", 7);
    *((char *)&a0->field_30 + 10) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "quiet", 5);
    *((int128_t *)&(&a0->field_10)[1]) = (int128_t)v5;
    *((unsigned long long *)((char *)&a0->field_18 + 8)) = v7;
    *((int128_t *)&a0->field_28) = *((int128_t *)&v3);
    *((unsigned long long *)&a0->field_30) = v4;
    *((char *)&a0->field_30 + 11) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "tcould not persist file with --suffix, template  must end in Xtoo few X's in template invalid template, , contains directory separatorinvalid suffix ; with --tmpdir, it may not be absolutetoo many templatesfailed to create  via template : No such file or directory", 1);
    if ((char)v16)
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h8ea3241ac42aff28(&v13);
        return a0;
    }
    return a0;
}
