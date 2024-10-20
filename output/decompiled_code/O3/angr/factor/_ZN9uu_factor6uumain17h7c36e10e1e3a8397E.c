long long uu_factor::uumain::h7c36e10e1e3a8397(unsigned long long a0, unsigned long long a1)
{
    struct_2 *v6;  // [sp-0x420]
    char v7;  // [sp-0x418]
    unsigned int v8;  // [sp-0x40c]
    char v9;  // [bp-0x408], Other Possible Types: unsigned long
    unsigned long v10;  // [sp-0x400]
    char v11;  // [bp-0x3f8]
    char v12;  // [bp-0x3e8]
    char v13;  // [bp-0x3d8]
    unsigned long long v20[3];  // [bp-0x398]
    unsigned long v22;  // [sp-0x370], Other Possible Types: unsigned long long
    unsigned long long v23;  // [sp-0x368]
    int v24;  // [sp-0x360]
    int v25;  // [sp-0x350]
    unsigned long long v26;  // [sp-0x340]
    unsigned long long v27;  // [sp-0x338]
    unsigned long v30;  // [sp-0x320], Other Possible Types: unsigned long long
    unsigned long v31;  // [sp-0x318], Other Possible Types: unsigned long long
    int v34;  // [bp-0x2f8], Other Possible Types: char
    int v36;  // [bp-0x2e8]
    int v38;  // [bp-0x2d8]
    int v40;  // [bp-0x2c8]
    unsigned long long v45;  // r14
    struct_1 *v46;  // rbp
    unsigned long long v47;  // rsi
    struct_1 *v48;  // rdx
    unsigned long long v49;  // r14
    unsigned long long v50;  // r15
    int v51;  // xmm0
    int v52;  // xmm1
    int v53;  // xmm2
    unsigned long long v54[3];  // rax
    struct_1 *v57;  // rdx

    uu_factor::uu_app::h352fdc06b01de0a7(&v34);
    clap_builder::builder::command::Command::try_get_matches_from::hbc233115bde85148(&v9, &v34, a0, a1);
    v27 = 0x8000000000000000;
    if (v22 == 0x8000000000000000)
        v45 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v23);
    v26 = *((long long *)&v13);
    *((int128_t *)&v25) = *((int128_t *)&v12);
    *((int128_t *)&v24) = *((int128_t *)&v11);
    v22 = v9;
    v23 = v10;
    v46 = (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v22, _ZN9uu_factor7options9EXPONENTS17h290017ce7ecf20b6E, g_539900);
    v30 = std::io::stdio::stdout::h077da66234850927();
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hc77b3448ea03b868(v20, 0x1000, std::io::stdio::Stderr::lock::h890f7962a170fc90(&v30, v47, v48));
    v49 = _ZN9uu_factor7options6NUMBER17h2174a2e50e1eb8b7E;
    v50 = g_539910;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hd1e2f13a7d86e7a3(&v34, &v22, v49, v50);
    clap_builder::parser::error::MatchesError::unwrap::hd75a10e4266675cd(&v9, v49, v50, &v34);
    if (!v9)
    {
        v31 = std::io::stdio::stdin::h7215cc131abb55d8();
        v6 = std::io::stdio::Stdin::lock::h161a36d857331d7f(&v31);
        v57 = v48 | -0x100 | (char)v48 & 1;
        v7 = (char)v48 & 1;
        v8 = (unsigned int)v46;
    }
    else
    {
        v51 = *((int128_t *)&v9);
        v52 = *((int128_t *)&v11);
        v53 = *((int128_t *)&v12);
        *((int128_t *)&v40) = *((int128_t *)&v13);
        v38 = v53;
        v36 = v52;
        v34 = v51;
        do
        {
            v54 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4212842932185150(&v34);
        } while (!uu_factor::print_factors_str::hebdfcb8641730e1f(v54[1], v54[2], v20, v46 & 4294967295 & 4294967295));
    }
}
