long long ruff_python_formatter::comments::placement::handle_parameters_separator_comment(void* a0, void* a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    int v0;  // [bp-0x88]
    unsigned int v1;  // [bp-0x78]
    char v2;  // [bp-0x68]
    char v3;  // [bp-0x64]
    unsigned int v4;  // [bp-0x58]
    int v5;  // [bp-0x48], Other Possible Types: char
    unsigned int v6;  // [bp-0x38]
    char v7;  // [bp-0x34]
    char v8;  // [bp-0x24]
    char *v10;  // rdi
    char *v11;  // rsi
    unsigned int v12;  // ebp
    char v13;  // r15b
    unsigned long long v14;  // rax
    int v15;  // xmm0
    int v16;  // xmm1
    int v17;  // xmm2
    unsigned long v18;  // rax

    ruff_python_formatter::other::parameters::find_parameter_separators(&v5, a3, a4, a2, a4, a5);
    v1 = v6;
    v0 = v5;
    v4 = *((int *)&v8);
    v10 = &(char)v0;
    if (!(char)v0)
        v10 = 0;
    memcpy(&v2, &v7, 16);
    v11 = &v3;
    if (!v2)
        v11 = 0;
    v12 = (int)a1[64];
    v13 = (char)a1[72];
    v14 = ruff_python_formatter::other::parameters::assign_argument_separator_comment_placement(v10, v11, v12, v13);
    if ((char)v14 != 4)
    {
        v18 = (int)a1[68];
        *((int128_t *)&a0[8]) = *((int128_t *)a1);
        *((unsigned int *)&a0[24]) = v12;
        *((unsigned int *)&a0[28]) = v18;
        *((char *)&a0[32]) = 0;
        *((char *)&a0[33]) = v13;
        *((unsigned long long *)a0) = 96;
        return v18;
    }
    *((int128_t *)&a0[64]) = (int128_t)a1[64];
    v15 = *((int128_t *)a1);
    v16 = (int128_t)a1[16];
    v17 = (int128_t)a1[32];
    *((int128_t *)&a0[48]) = (int128_t)a1[48];
    a0[32] = v17;
    a0[16] = v16;
    *(a0) = v15;
    return v14;
}
