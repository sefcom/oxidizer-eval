long long fish::terminal::osc_133_prompt_start(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    uint128_t v3;  // [bp-0x20]
    unsigned long long v5;  // rax

    v5 = fish::future_feature_flags::test(6);
    if (!(char)v5)
        return v5;
    v0 = &g_14e2a28;
    v1 = 1;
    v2 = 8;
    v3 = 0;
    fish::common::do_write_to_output(a0, &v0);
    return v5 & 4294967295;
}
