char uu_cp::Attributes::union(char a0[12], char a1[12], char a2[12])
{
    unsigned long v0;  // [bp-0x38]
    char v1;  // [bp-0x34]
    char v2;  // [bp-0x33]
    unsigned long v4;  // rax
    char v5;  // al
    char v6;  // al
    char v7;  // al
    char v8;  // al
    char v9;  // dl

    v0 = v4;
    v2 = core::cmp::max_by(a1[0], a1[1], a2[0], a2[1]);
    v1 = core::cmp::max_by(a1[6], a1[7], a2[6], a2[7]);
    v5 = core::cmp::max_by(a1[4], a1[5], a2[4], a2[5]);
    v6 = core::cmp::max_by(a1[2], a1[3], a2[2], a2[3]);
    v7 = core::cmp::max_by(a1[8], a1[9], a2[8], a2[9]);
    v8 = core::cmp::max_by(a1[10], a1[11], a2[10], a2[11]);
    a0[0] = v2 & 1;
    a0[1] = v9;
    a0[2] = v6 & 1;
    a0[3] = v9;
    a0[4] = v5 & 1;
    a0[5] = v9;
    a0[6] = v1 & 1;
    a0[7] = v9;
    a0[8] = v7 & 1;
    a0[9] = v9;
    a0[10] = v8 & 1;
    a0[11] = v9;
    return (char)a0;
}
