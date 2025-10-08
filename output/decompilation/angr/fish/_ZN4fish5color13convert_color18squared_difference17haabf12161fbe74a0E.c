long long fish::color::convert_color::squared_difference(char a0, char a1)
{
    unsigned long v1;  // rax
    unsigned long v2;  // rcx
    unsigned long v3;  // rdi

    v1 = a0;
    v2 = a1;
    v3 = ((v1 & 255) < (v2 & 255) ? (v2 & 255) - v1 & 4294967295 : (v1 & 255) - v2 & 4294967295);
    return ::0x12809c0::core::num::<impl u32>::pow(((v1 & 255) < (v2 & 255) ? (v2 & 255) - v1 & 4294967295 : (v1 & 255) - v2 & 4294967295));
}
