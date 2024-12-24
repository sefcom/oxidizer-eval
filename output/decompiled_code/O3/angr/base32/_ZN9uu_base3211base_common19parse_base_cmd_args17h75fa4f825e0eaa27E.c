long long uu_base32::base_common::parse_base_cmd_args::h75fa4f825e0eaa27(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long v0;  // [sp-0x358], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x350]
    int v2;  // [sp-0x348]
    int v3;  // [sp-0x338]
    unsigned long long v4;  // [sp-0x328]
    char v5;  // [bp-0x320]
    char v6;  // [bp-0x318]
    char v7;  // [bp-0x310]
    char v8;  // [bp-0x300]
    char v9;  // [bp-0x2f0]
    char v10;  // [bp-0x2e8]
    unsigned long long v11;  // [bp+0x8]
    unsigned long long v12;  // rax
    unsigned long long v13;  // rdi
    unsigned long v14;  // rdx

    uu_base32::base_common::base_app::h9b917df7b5838c03(&v10, a3, a4, a5, v11);
    clap_builder::builder::command::Command::try_get_matches_from::h0db03beae069eb92(&v5, &v10, a1, a2);
    v12 = *((long long *)&v5);
    v13 = *((long long *)&v6);
    if (v0 != 0x8000000000000000)
    {
        v4 = *((long long *)&v9);
        *((int128_t *)&v3) = *((int128_t *)&v8);
        *((int128_t *)&v2) = *((int128_t *)&v7);
        v0 = v12;
        v1 = v13;
        uu_base32::base_common::Config::from::h1cce24ddb373e3aa(a0, &v0);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h2f0a16c202467b3a(&v0);
        return a0;
    }
    a0[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v1);
    a0[2] = v14;
    a0[0] = 2;
    return a0;
}
