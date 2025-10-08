long long fish::terminal::scroll_content_up(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x48]
    char *v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    unsigned long long v3;  // [bp-0x30]
    unsigned long long v4;  // [bp-0x28]
    char *v5;  // [bp-0x20]
    unsigned long long v6;  // [bp-0x18]
    void* v7;  // [bp-0x10]

    v0 = a1;
    v1 = &v0;
    v2 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v3 = &g_14e2a78;
    v4 = 2;
    v7 = 0;
    v5 = &v1;
    v6 = 1;
    return fish::common::do_write_to_output(a0, &v3);
}
