void fish::highlight::highlight::highlight_shell(unsigned long long a0, unsigned long long a1, void* a2, unsigned long long a3[4], char a4, unsigned long long a5, unsigned long long a6)
{
    int v0;  // [bp-0xf8], Other Possible Types: char
    unsigned long v1;  // [bp-0xe8]
    char v2;  // [bp-0xe0]
    char v3;  // [bp-0xc8]

    *((long long *)((!a3[0] ? &g_14c7518 : ((unsigned int)a3[0] == 1 ? a3[2] : a3[3])) + 48))(&v2);
    v3.new(a0, a1, a5, a6, a3, &v2, a4);
    v0.highlight(&v3);
    core::ptr::drop_in_place<alloc::vec::Vec<fish::color::Color>>(*((long long *)a2), (long long)a2[8]);
    *((unsigned long *)&a2[16]) = v1;
    *(a2) = v0;
    core::ptr::drop_in_place<fish::highlight::highlight::Highlighter>(&v3);
    return;
}
