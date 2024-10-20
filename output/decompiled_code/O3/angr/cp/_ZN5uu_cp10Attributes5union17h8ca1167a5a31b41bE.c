long long uu_cp::Attributes::union::h8ca1167a5a31b41b(char a0[12], char a1[12], char a2[12])
{
    char v0;  // [sp-0x6e]
    char v1;  // [sp-0x6d]
    char v2;  // [sp-0x6c]
    char v3;  // [sp-0x6b]
    char v4;  // [sp-0x6a]
    char v5;  // [sp-0x69]
    char v6;  // [sp-0x68]
    char v7;  // [sp-0x67]
    char v8;  // [sp-0x66]
    char v9;  // [sp-0x65]
    char v10;  // [sp-0x64]
    char v11;  // [sp-0x63]
    char v12;  // [sp-0x62]
    char v13;  // [sp-0x61]
    unsigned long v14;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x58]
    unsigned long long v16;  // [sp-0x50]
    unsigned long long v17;  // [sp-0x48]
    unsigned long long v18;  // [sp-0x40]
    unsigned long v19;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v20;  // [sp-0x30]
    unsigned long long v21;  // [sp-0x28]
    unsigned long long v22;  // [sp-0x20]
    unsigned long long v23;  // [sp-0x18]
    unsigned long long v24;  // [sp-0x10]
    unsigned long v26;  // r15
    unsigned long v27;  // r14
    unsigned long v28;  // r13
    unsigned long v29;  // r12
    unsigned long v30;  // rbx
    char v35;  // r9b
    char v39;  // cl
    char v43;  // bl
    char v46;  // r14b
    char v47;  // dil
    char v50;  // r15b
    char v51;  // dil
    char v52;  // bl
    char v54;  // sil
    char v55;  // cl
    char v57;  // dl
    char v60;  // sil
    char v62;  // bpl
    char v64;  // sil
    char v65;  // r10b

    v24 = v26;
    v23 = v27;
    v22 = v28;
    v21 = v29;
    v20 = v30;
    v9 = a1[0];
    v8 = a2[0];
    v6 = a1[6];
    v12 = v9;
    v4 = a2[6];
    v10 = v6;
    v18 = a1[7];
    v35 = a1[4];
    v5 = v35;
    v39 = a1[2];
    v19 = a1[1];
    v13 = a2[1];
    v17 = a1[5];
    v7 = a2[5];
    v16 = a1[3];
    v43 = a1[8];
    v14 = a1[9];
    v46 = v43;
    v2 = v39;
    v47 = a1[10];
    v0 = a2[11];
    v11 = a2[7];
    v3 = a2[3];
    v1 = v47;
    v15 = a1[11];
    if (v46)
        v50 = (-0x100 | v43) & 4294967295 & 4294967295;
    else
        v50 = (-0x100 | a2[8]) & 4294967295 & 4294967295;
    v51 = (v46 ? (char)v14 : a2[9]);
    v52 = (v2 ? (char)((-0x100 | v39) & 4294967295 & 4294967295) : (char)((-0x100 | a2[2]) & 4294967295 & 4294967295));
    if (!v2)
        v54 = v3;
    v55 = (v5 ? (char)((-0x100 | v35) & 4294967295 & 4294967295) : (char)((-0x100 | a2[4]) & 4294967295 & 4294967295));
    if (!v5)
        v57 = v7;
    if (!v10)
        v60 = v11;
    v62 = (v12 ? (char)v19 : v13);
    if (!v1)
        v64 = v0;
    v65 = (v1 ? (char)((-0x100 | v47) & 4294967295 & 4294967295) : (char)((-0x100 | a2[10]) & 4294967295 & 4294967295));
    *((int *)&a0[0]) = (v12 ? (char)((-0x100 | v9) & 4294967295 & 4294967295) : (char)((-0x100 | v8) & 4294967295 & 4294967295));
    a0[1] = v62;
    a0[2] = v52;
    a0[3] = v54;
    a0[4] = v55;
    a0[5] = v57;
    *((int *)&a0[6]) = (v10 ? (char)((-0x100 | v6) & 4294967295 & 4294967295) : (char)((-0x100 | v4) & 4294967295 & 4294967295));
    a0[7] = v60;
    a0[8] = v50;
    a0[9] = v51;
    a0[10] = v65;
    a0[11] = v64;
    return a0;
}
