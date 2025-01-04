long long uu_env::EnvAppData::parse_arguments::hd6f5805c37ad784f(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long a4, unsigned long a5)
{
    unsigned long v0;  // [sp-0x360], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x358]
    unsigned long long v2;  // [sp-0x350]
    char v3;  // [bp-0x348]
    char v4;  // [bp-0x338]
    char v5;  // [bp-0x330]
    char v6;  // [bp-0x328]
    char v7;  // [bp-0x320]
    char v8;  // [bp-0x318]
    char v9;  // [bp-0x308]
    int v10;  // [sp-0x2f8]
    unsigned long long v11;  // [sp-0x2e8]
    char v12;  // [bp-0x2e0]
    unsigned long long v15;  // rax
    unsigned long long v17;  // rcx
    unsigned long long v18;  // r8
    unsigned long long v19;  // r9
    unsigned long long v20;  // rax
    unsigned long long v21;  // rdi
    unsigned long long v22;  // rsi
    unsigned long long v23;  // rdx
    unsigned long long v24;  // rcx

    core::iter::traits::iterator::Iterator::collect::hdefd6c439cea8803(&v3, a2, a3);
    uu_env::EnvAppData::process_all_string_arguments::h37f9f42a31d85940(&v5, a1, &v3);
    v15 = *((long long *)&v6);
    if (v0 != 0x8000000000000000)
    {
        v0 = *((long long *)&v5);
        v1 = v15;
        v2 = *((long long *)&v7);
        uu_env::uu_app::hee268625580a1e1b(&v12);
        v11 = v2;
        *((int128_t *)&v10) = *((int128_t *)&v0);
        clap_builder::builder::command::Command::try_get_matches_from::hafb84ba160d1773c(&v5, &v12, &v10, v17, v18, v19);
        v20 = *((long long *)&v5);
        v21 = *((long long *)&v6);
        if (v20 != 0x8000000000000000)
        {
            v24 = *((long long *)&v7);
            a0->field_40 = *((int128_t *)&v9);
            a0->field_30 = *((int128_t *)&v8);
            a0->field_10 = *((long long *)&v4);
            *((int128_t *)&a0->field_0) = *((int128_t *)&v3);
            a0->field_18 = v20;
            a0->field_20 = v21;
            a0->field_28 = v24;
            return v20;
        }
        v15 = uu_env::EnvAppData::parse_arguments::_$u7b$$u7b$closure$u7d$$u7d$::h935bf0b1cbb383a4(v21, v22, v23);
    }
    *((unsigned long long *)&a0->padding_8[0]) = v15;
    a0->field_10 = v2;
    a0->field_0 = 0x8000000000000000;
    v20 = ::0x47a700::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h7647f138f93ed945(&v3);
    return v20;
}
