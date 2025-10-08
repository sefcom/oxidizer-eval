long long fish::history::flush_to_file(struct_0 *a0, unsigned long a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rbx
    unsigned long long v3;  // rax

    if (a0->field_10 < a2 || !a0->field_10)
        return 0;
    v0 = v2;
    v3 = std::io::Write::write_all();
    if (!v3)
    {
        a0->field_10 = 0;
        return 0;
    }
    return v3;
}
