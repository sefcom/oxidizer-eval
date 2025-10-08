long long fish::terminal::osc_133_command_finished(unsigned long long a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x4c]
    char *v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    char *v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    void* v7;  // [bp-0x18]
    unsigned long long v9;  // rax

    v0 = a1;
    v9 = fish::future_feature_flags::test(6);
    if (!(char)v9)
        return v9;
    v1 = &v0;
    v2 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
    v3 = &g_14e2a58;
    v4 = 2;
    v7 = 0;
    v5 = &v1;
    v6 = 1;
    fish::common::do_write_to_output(a0, &v3);
    return v9 & 4294967295;
}
