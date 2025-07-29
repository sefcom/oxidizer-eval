long long uu_more::Pager::draw(unsigned long long a0, unsigned int a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax

    v0 = v2;
    v3 = a0.draw_lines();
    if (v3)
        return v3;
    a0.draw_status_bar(a1);
    v4 = a0 + 192.flush();
    if (!v4)
        return 0;
    return v4.from();
}
