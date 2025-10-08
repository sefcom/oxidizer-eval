long long uu_wc::Settings::new(void* a0, unsigned long long a1)
{
    unsigned int v0;  // [bp-0x9c]
    int v1;  // [bp-0x98], Other Possible Types: char
    unsigned long long v2;  // [bp-0x88]
    char v3;  // [bp-0x80]
    char v4;  // [bp-0x7f]
    char v5;  // [bp-0x7e]
    char v6;  // [bp-0x7d]
    char v7;  // [bp-0x7c]
    char v8;  // [bp-0x7b]
    unsigned long long v10;  // [bp-0x70]
    unsigned long long v11;  // [bp-0x60]
    char v12;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned int v13;  // [bp-0x40]
    unsigned short v14;  // [bp-0x3c]
    unsigned long long v16[3];  // rax
    unsigned long long v17;  // rax
    char v18;  // al
    char v19;  // al
    char v20;  // al
    char v21;  // al
    char v22;  // al

    v12.try_get_one(a1);
    v16 = v12.unwrap();
    if (v16)
        (char)v10.from(v16[1], v16[2]);
    else
        v10 = 9223372036854775810;
    v12.try_get_one(a1);
    v17 = v12.unwrap();
    v0 = (!v17 ? 0 : (int)v17.from());
    v18 = a1.get_flag("bytescharsfiles0-fromlinesmax-line-lengthtotalwordsfiles-", 5);
    v19 = a1.get_flag("charsfiles0-fromlinesmax-line-lengthtotalwordsfiles-", 5);
    v20 = a1.get_flag("linesmax-line-lengthtotalwordsfiles-", 5);
    v21 = a1.get_flag("wordsfiles-", 5);
    v22 = a1.get_flag("max-line-lengthtotalwordsfiles-", 15);
    v2 = v11;
    memcpy(&v1, &(char)v10, 16);
    v3 = v18;
    v4 = v19;
    v5 = v20;
    v6 = v21;
    v7 = v22;
    v8 = v0;
    if (!(int)v1.number_enabled())
    {
        *((unsigned long long *)&a0[16]) = v11;
        *((int128_t *)a0) = *((int128_t *)&v10);
        v13 = 16842753;
        v14 = 0;
        v12 = 9223372036854775810;
        *((unsigned int *)&a0[24]) = 16842753;
        *((char *)&a0[28]) = 0;
        *((char *)&a0[29]) = v8;
        core::ptr::drop_in_place<uu_wc::Settings>(&v12);
        return a0;
    }
    *((int128_t *)&a0[16]) = *((int128_t *)&v2);
    *(a0) = v1;
    return a0;
}
