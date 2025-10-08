long long uu_more::Pager::draw(unsigned long long a0[15], unsigned long long a1, unsigned int a2)
{
    unsigned long long v1;  // rax
    unsigned long v2;  // cc_ndep
    unsigned long v3;  // rsi
    unsigned long long v5;  // rax

    v1 = a0.draw_lines(a1);
    if (v1)
        return v1;
    v3 = ((char)_ccall(3, 4, a0[10], a0[11], v2) ? a0[10] + a0[11] : 18446744073709551615);
    a0.draw_prompt(a1, a0[14].min(((char)_ccall(3, 4, a0[10], a0[11], v2) ? a0[10] + a0[11] : 18446744073709551615)), a2);
    v5 = a1.flush();
    if (!v5)
        return 0;
    return v5.from();
}
