int uu_tail::tail_file::h500095c6eda491f1()
{
    char v16;  // [sp-0x2108], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v17;  // [sp-0x2100]
    char v25;  // [bp-0x2048]
    char v26;  // [bp-0x2040]
    void* v29;  // [sp-0x2030]
    void* v31;  // [sp-0x1030]
    unsigned long long v33;  // rcx
    unsigned long long v34;  // r8

    v31 = 0;
    v29 = 0;
    std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v25, v33, v34);
    if (*((int *)&v25) == 2)
    {
        v17 = *((long long *)&v26);
        v16 = 2;
    }
    memcpy(&v16, &v25, 176);
    if (v16 == 2)
        goto LABEL_0x4bdebc;
    else
        goto LABEL_0x4be01f;
}
