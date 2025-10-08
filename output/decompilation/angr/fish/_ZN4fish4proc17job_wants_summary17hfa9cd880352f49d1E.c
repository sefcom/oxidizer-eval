long long fish::proc::job_wants_summary(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rbx
    unsigned long long v3;  // rax

    if (a0->field_48)
        return 0;
    v0 = v2;
    if (a0->field_20 == 1 && (char)fish::proc::proc_wants_summary(a0, a0->field_18))
        return 0;
    v3 = a0.is_foreground();
    return v3 & 0xffffffffffffff00 | (char)v3 ^ 1;
}
