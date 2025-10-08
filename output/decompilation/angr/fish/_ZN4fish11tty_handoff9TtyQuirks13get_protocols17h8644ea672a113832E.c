double fish::tty_handoff::TtyQuirks::get_protocols(long long a0, long long a1)
{
    unsigned long long v0;  // [bp-0xc8]
    unsigned long long v1;  // [bp-0xc0]
    unsigned long long v2;  // [bp-0xb8]
    char v3;  // [bp-0xb0]
    char v4;  // [bp-0x98]
    char v5;  // [bp-0x70]
    unsigned long long v6;  // [bp-0x70]
    unsigned long long v7;  // [bp-0x68]
    unsigned long long v8;  // [bp-0x60]
    unsigned long long v9;  // [bp-0x58]
    unsigned long long v10;  // [bp-0x50]
    unsigned long long v11;  // [bp-0x48]
    unsigned long long v12;  // [bp-0x40]
    unsigned long long v13;  // [bp-0x38]
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax
    int v21;  // xmm0
    int v22;  // xmm1
    int v23;  // xmm2

    v4 = (a1 != 2) * 4 | 41;
    v5.chain("+", "+", &v4);
    v1 = fish::tty_handoff::serialize_commands(&v5);
    v2 = v15;
    v4 = (a1 != 2) * 4 | 41;
    v5.chain("+", "+", &v4);
    v16 = fish::tty_handoff::serialize_commands(&v5);
    v0 = v15;
    v4 = (a1 != 2) * 4 | 41;
    v5.chain("+", "+", &v4);
    v17 = fish::tty_handoff::serialize_commands(&v5);
    v4 = (a1 != 2) * 4 | 41;
    v5.chain("+", ",", &v4);
    v6 = v1;
    v7 = v2;
    v8 = v16;
    v9 = v0;
    v10 = v17;
    v11 = v15;
    v12 = fish::tty_handoff::serialize_commands(&v5);
    v13 = v15;
    v3 = (a1 != 2) * 3 + 42;
    v4.chain(",", ",", &v3);
    v1 = fish::tty_handoff::serialize_commands(&v4);
    v2 = v15;
    v3 = (a1 != 2) * 3 + 42;
    v4.chain(",", ",", &v3);
    v18 = fish::tty_handoff::serialize_commands(&v4);
    v0 = v15;
    v3 = (a1 != 2) * 3 + 42;
    v4.chain(",", ",", &v3);
    v19 = fish::tty_handoff::serialize_commands(&v4);
    v3 = (a1 != 2) * 3 + 42;
    v4.chain(",", "Disablingkitty keyboard protocolother extended keyswezterm; no modifyOtherKeysTerminal already transferredTerminal already reclaimed", &v3);
    v20 = fish::tty_handoff::serialize_commands(&v4);
    v21 = *((int128_t *)&v6);
    v22 = *((int128_t *)&v8);
    v23 = *((int128_t *)&v10);
    a0->field_30 = *((int128_t *)&v12);
    *((void*)&a0->field_20) = v23;
    *((void*)&a0->field_10) = v22;
    *((void*)&a0->field_0) = v21;
    a0->field_80 = a1;
    a0->field_40 = v1;
    a0->field_48 = v2;
    a0->field_50 = v18;
    a0->field_58 = v0;
    a0->field_60 = v19;
    a0->field_68 = v15;
    a0->field_70 = v20;
    a0->field_78 = v15;
    return (unsigned long long)v21;
}
