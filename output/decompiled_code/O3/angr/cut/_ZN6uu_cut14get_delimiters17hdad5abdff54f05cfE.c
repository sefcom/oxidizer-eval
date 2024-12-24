long long uu_cut::get_delimiters::hdad5abdff54f05cf(unsigned long long a0[5], unsigned long long a1, char a2)
{
    char v0;  // [bp-0x58]
    char v1;  // [bp-0x50]
    char v2;  // [bp-0x48]
    unsigned int v3;  // [sp-0x40]
    char v5;  // r15b
    unsigned long long v6[3];  // rax
    unsigned long long v7;  // r12
    unsigned long long v8;  // rsi
    unsigned long long v9;  // rdx
    unsigned long long v10;  // r15
    unsigned long long v12[3];  // r13
    unsigned long long v13;  // rbp
    unsigned long long v14;  // r15
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rax
    unsigned long long v17[3];  // rax
    unsigned long long v18;  // rax

    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "whitespace-delimited", 20);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h9f92a7489792833c(&v0, a1, "delimiter", 9);
    v6 = clap_builder::parser::error::MatchesError::unwrap::he06f1ded445d4773("delimiter", 9, &v0);
    if (!v6)
    {
        v7 = (!v5 ? "\t" : 0);
        goto LABEL_4b785c;
    }
    else
    {
        if (v5)
        {
            v8 = "invalid input: Only one of --delimiter (-d) or -w option can be specified";
            v9 = 73;
            goto LABEL_4b7764;
        }
        v10 = 1;
        if (a2)
        {
            v7 = "=";
            goto LABEL_4b785c;
        }
        v12 = v6;
        v7 = &g_41dd7e;
        if (!(!(char)::0x4b6080::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(v6[1], v6[2])) || !((v13 = v12[2], v13)))
        {
LABEL_4b785c:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h9f92a7489792833c(&v0, a1, "output-delimiterPermissionDenied", 16);
            v17 = clap_builder::parser::error::MatchesError::unwrap::he06f1ded445d4773("output-delimiterPermissionDenied", 16, &v0);
            v18 = (!v17 ? 0 : uu_cut::get_delimiters::_$u7b$$u7b$closure$u7d$$u7d$::hbec35dfff726b35b(v17[1], v17[2]));
            a0[1] = v7;
            a0[2] = 1;
            a0[3] = v18;
            a0[4] = v15;
            v16 = 0;
        }
        else
        {
            v14 = v12[1];
            std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v0, v14, v13);
            if ((!(!*((long long *)&v0)) || !(::0x4b60d0::_$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::hc7941fd67a47c62a(*((long long *)&v1), *((long long *)&v2) + *((long long *)&v1), v15) > 1)) && !((std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v0, v14, v13), !(v13 == 1) && !(!*((long long *)&v0)))))
            {
                v7 = _$LT$uu_cut..Delimiter$u20$as$u20$core..convert..From$LT$$RF$std..ffi..os_str..OsString$GT$$GT$::from::h1d39ff86ada086ad(v12);
                goto LABEL_4b785c;
            }
            else
            {
                v8 = "the delimiter must be a single character";
                v9 = 40;
LABEL_4b7764:
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h30658d0a889a4843(&v0, v8, v9);
                v3 = 1;
                *((double *)&a0[1]) = alloc::boxed::Box$LT$T$GT$::new::hde45d57a0a790447(&v0);
                a0[2] = &g_529df0;
                v16 = 1;
            }
        }
    }
    a0[0] = v16;
    return a0;
}
