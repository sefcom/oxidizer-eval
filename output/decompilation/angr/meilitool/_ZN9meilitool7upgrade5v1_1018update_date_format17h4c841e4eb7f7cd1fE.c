long long meilitool::upgrade::v1_10::update_date_format(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x68]
    char v1;  // [bp-0x58]
    unsigned long v2;  // [bp-0x50], Other Possible Types: unsigned long long
    char v3;  // [bp-0x48]
    char v4;  // [bp-0x40]
    unsigned long long v6;  // rax

    v0 = a0;
    meilitool::try_opening_poly_database(&v4, a2, a3, "main", 4);
    v1.with_context(&v4, &v0);
    if (*((int *)&v1) == 1)
        return v2;
    v6 = meilitool::upgrade::v1_10::date_round_trip(a3, a0, a1, v2, *((int *)&v3), "created-at");
    if (v6)
        return v6;
    return meilitool::upgrade::v1_10::date_round_trip(a3, v0, a1, v2, *((int *)&v3), "updated-atwhile updating date format for index `");
}
