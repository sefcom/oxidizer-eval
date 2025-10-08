void fish::complete::completion2string(unsigned long a0, struct_0 *a1, char a2[102])
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    unsigned long v3;  // [bp-0x28]
    unsigned long long v4;  // [bp-0x20]
    unsigned long long v5;  // [bp-0x18]
    unsigned long long v6;  // [bp-0x10]
    unsigned long long v7;  // [bp-0x8]
    unsigned long long v9;  // r15
    unsigned long long v10;  // r14
    unsigned long long v11;  // r12
    unsigned long long v12;  // rbx
    unsigned long v13;  // rdx
    unsigned long long v14;  // rsi
    unsigned long long v15;  // rdx

    v7 = v9;
    v6 = v10;
    v5 = v11;
    v4 = v12;
    v0.to_vec("c", 8);
    if ((a2[96] & 32))
        fish::complete::append_switch_short(&v0);
    if (a2[98] == 1)
    {
        v13 = a2[100];
        v14 = (v13 ? "e" : "n");
        v15 = v13 | 8;
    }
    else if (a2[99])
    {
        v15 = 11;
        v14 = "f";
    }
    else
    {
        if (a2[100] != 1)
            goto LABEL_1391244;
        v15 = 17;
        v14 = "r";
    }
    fish::complete::append_switch_long(&v0, v14, v15);
LABEL_1391244:
    if (a1->field_18)
    {
        fish::complete::append_switch_short_arg(&v0, 112, a1->field_8, a1->field_10);
    }
    else
    {
        v0.push(32);
        fish::common::escape(&v1, a1->field_8, a1->field_10);
        v0.spec_extend(v2, v2 + v3 * 4);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
    }
    goto (long long)(g_9f3c84[a2[101]] + (char *)&g_9f3c84[0]);
}
