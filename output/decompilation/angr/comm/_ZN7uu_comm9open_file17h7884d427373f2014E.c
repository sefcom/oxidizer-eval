long long uu_comm::open_file(struct_0 *a0, unsigned long long a1, unsigned long long a2, char a3)
{
    char v0;  // [bp-0xd0], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0xcc]
    char v2;  // [bp-0xc8]
    char v3;  // [bp-0x98]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax

    if ((char)a1.equal(a2, "-(uutils coreutils) 0.0.30Compare two sorted files line by line.\n\nWhen FILE1 or FILE2 (not both) is -, read standard input.\n\nWith no options, produce three-column output. Column one contains\nlines unique to FILE1, column two contains lines unique to FILE2,", 1))
    {
        v5 = std::io::stdio::stdin();
        a0->field_0 = 0;
        a0->field_8 = v5;
        a0->field_30 = a3;
        return a0;
    }
    std::fs::metadata(&v0, a1, a2);
    if (v0 != 2)
    {
        if ((0xf000 & *((int *)&v3)) == 0x4000)
        {
            v0.to_vec("Is a directory-(uutils coreutils) 0.0.30Compare two sorted files line by line.\n\nWhen FILE1 or FILE2 (not both) is -, read standard input.\n\nWith no options, produce three-column output. Column one contains\nlines unique to FILE1, column two contains lines un", 14);
            v6 = 40._new(v0.new(), &g_4e0de8);
            a0->field_0 = v6;
            a0->field_30 = 11;
            return a0;
        }
        v0.open(a1, a2);
        if (v0 != 1)
        {
            a0.with_capacity(v1);
            a0->field_30 = a3;
            return a0;
        }
    }
    a0->field_0 = *((long long *)&v2);
    a0->field_30 = 11;
    return a0;
}
