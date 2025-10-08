void fish::tty_handoff::TtyProtocolsSet::safe_get_commands(struct_0 *a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v4;  // r14
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rax

    v2 = v4;
    v1 = v5;
    v0 = v6;
    goto (long long)(g_9f645c[(int)a0->field_80.safe_get_supported_protocol()] + (char *)&g_9f645c[0]);
}
