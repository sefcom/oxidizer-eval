void zoxide::cmd::init::<impl zoxide::cmd::Run for zoxide::cmd::cmd::Init>::run(struct_0 *a0)
{
    unsigned long v0;  // [bp-0x98]
    unsigned long v1;  // [bp-0x90]
    char v2;  // [bp-0x88]
    char v3;  // [bp-0x87]
    char v4;  // [bp-0x86]
    unsigned long long v5;  // [bp-0x20]
    unsigned long long v6;  // [bp-0x18]
    unsigned long long v7;  // [bp-0x10]
    unsigned long long v9;  // r15
    unsigned long long v10;  // r14
    unsigned long long v11;  // rbx
    char v12;  // al
    char v13;  // al

    v7 = v9;
    v6 = v10;
    v5 = v11;
    v12 = zoxide::config::echo();
    v13 = zoxide::config::resolve_symlinks();
    *((int *)&v0) = (!a0->field_18 ? a0->field_8 : 0);
    v1 = a0->field_10;
    v2 = a0->field_19;
    v3 = v12;
    v4 = v13;
    goto (long long)(g_4192e8[a0->field_1a] + (char *)&g_4192e8[0]);
}
