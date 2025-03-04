long long uu_base32::base_common::parse_base_cmd_args::h94218dbfb2ea4ba6(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6)
{
    unsigned long v0;  // [sp-0x358]
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
    unsigned long long v11;  // rax
    unsigned long long v12;  // rdi
    unsigned long v13;  // rdx

    uu_base32::base_common::base_app::ha21d2a66676032ef(&v10, a3, a4, a5, a6);
    clap_builder::builder::command::Command::try_get_matches_from::hd471734dc146ea72(&v5, &v10, a1, a2);
    v11 = *((long long *)&v5);
    v12 = *((long long *)&v6);
    if (v0 != 0x8000000000000000)
    {
        v4 = *((long long *)&v9);
        *((int128_t *)&v3) = *((int128_t *)&v8);
        *((int128_t *)&v2) = *((int128_t *)&v7);
        v0 = v11;
        v1 = v12;
        uu_base32::base_common::Config::from::h8f03cd9b16c9529c(a0, &v0);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hcb9c8c91441f9e13(&v0);
        return a0;
    }
    a0[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v1);
    a0[2] = v13;
    a0[0] = 2;
    return a0;
}
