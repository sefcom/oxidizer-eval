long long uu_whoami::platform::unix::get_username::hecd22d348e0efc05(unsigned long long a0[2], unsigned long a1, unsigned long a2)
{
    int v0;  // [bp-0xa8], Other Possible Types: char
    unsigned long v1;  // [sp-0x98], Other Possible Types: unsigned long long
    char v2;  // [bp-0x90]
    char v3;  // [bp-0x88]
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rax

    _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::h0b6474282aeae5d7(&v2, (unsigned int)uucore::features::process::geteuid::hdc9764945a55bce9(), v5);
    if (*((long long *)&v2) == 0x8000000000000000)
    {
        v6 = *((long long *)&v3);
        a0[1] = v6;
        a0[0] = 0x8000000000000000;
        return v6;
    }
    uucore::features::entries::uid2usr::_$u7b$$u7b$closure$u7d$$u7d$::h39d946a14e614e73(&v0, &v2);
    v0 = v0;
    v1 = v1;
    v6 = core::ops::function::FnOnce::call_once::h3bdbc0715ca1c228(a0, &v0);
    return v6;
}
