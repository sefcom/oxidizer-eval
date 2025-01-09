char uu_cp::Attributes::union::h2578ff077a39174b(char a0[12], char a1[12], char a2[12])
{
    unsigned long v0;  // [bp-0x38]
    char v1;  // [sp-0x34]
    char v2;  // [sp-0x33]
    unsigned long v4;  // rax
    char v5;  // dl

    v0 = v4;
    v2 = core::cmp::max_by::ha65c10ec7dc7bcb0(a1[0], a1[1], a2[0], a2[1]);
    v1 = core::cmp::max_by::ha65c10ec7dc7bcb0(a1[6], a1[7], a2[6], a2[7]);
    a0[0] = v2 & 1;
    a0[1] = v5;
    a0[2] = (char)core::cmp::max_by::ha65c10ec7dc7bcb0(a1[2], a1[3], a2[2], a2[3]) & 1;
    a0[3] = v5;
    a0[4] = (char)core::cmp::max_by::ha65c10ec7dc7bcb0(a1[4], a1[5], a2[4], a2[5]) & 1;
    a0[5] = v5;
    a0[6] = v1 & 1;
    a0[7] = v5;
    a0[8] = (char)core::cmp::max_by::ha65c10ec7dc7bcb0(a1[8], a1[9], a2[8], a2[9]) & 1;
    a0[9] = v5;
    a0[10] = (char)core::cmp::max_by::ha65c10ec7dc7bcb0(a1[10], a1[11], a2[10], a2[11]) & 1;
    a0[11] = v5;
    return (char)a0;
}
