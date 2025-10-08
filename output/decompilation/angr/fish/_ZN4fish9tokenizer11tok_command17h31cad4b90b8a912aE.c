long long fish::tokenizer::tok_command(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0xa8]
    unsigned int v1[2][2];  // [bp-0x9c]
    char v2;  // [bp-0x8b]
    char v3;  // [bp-0x8a]
    unsigned int v4[7];  // [bp-0x88]
    unsigned long long v5;  // [bp-0x78]
    unsigned long long v6;  // [bp-0x70]
    void* v7;  // [bp-0x68]
    char v8;  // [bp-0x60]
    void* v9;  // [bp-0x58]
    char v10;  // [bp-0x50]
    unsigned int v11;  // [bp-0x4f]
    char v12;  // [bp-0x4b]
    int v13;  // [bp-0x48], Other Possible Types: char
    char v14;  // [bp-0x38]
    unsigned long long v16;  // rax
    unsigned long long v17;  // rdx

    v9 = 0;
    v5 = a1;
    v6 = a2;
    v10 = 1;
    v7 = 0;
    v8 = 1;
    *((unsigned long long *)&v4) = 0;
    v11 = 0;
    v12 = 0;
    v1.next(&v4);
    if (v3 != 2)
    {
        while (v2 == 1)
        {
            v16 = v4.text_of(&v1);
            if (fish::tokenizer::variable_assignment_equals_pos(v16, v17) != 1)
            {
                v13.to_vec(v16, v17);
                *((long long *)&v0[16]) = *((long long *)&v14);
                *(v0) = v13;
                return v0;
            }
            v1.next(&v4);
            if (v3 == 2)
                break;
        }
    }
    *((unsigned long long *)v0) = 0;
    *((unsigned long long *)&v0[8]) = 4;
    *((unsigned long long *)&v0[16]) = 0;
    return a0;
}
