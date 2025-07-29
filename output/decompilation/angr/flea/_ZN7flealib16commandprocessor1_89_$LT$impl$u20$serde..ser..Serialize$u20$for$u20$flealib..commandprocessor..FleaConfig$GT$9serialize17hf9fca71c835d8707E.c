long long flealib::commandprocessor::_::<impl serde::ser::Serialize for flealib::commandprocessor::FleaConfig>::serialize(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x208], Other Possible Types: char
    unsigned long long v1;  // [bp-0x1f8]
    char v2;  // [bp-0x1f0], Other Possible Types: unsigned long long
    char v3;  // [bp-0x1e8]
    unsigned long v4;  // [bp-0x1e0]
    unsigned long long v5;  // [bp-0x1d8]
    char v6;  // [bp-0x1d0]
    unsigned long long v7;  // [bp-0x108]
    char v8;  // [bp-0x100]
    unsigned long long v9;  // [bp-0xf0]
    char v10;  // [bp-0xe8]

    v2.serialize_struct(a2, "FleaConfigftp_addressftp_foldersmtp_user_namesmtp_passsmtp_hostemail_address_fromstruct FleaConfigyo0", 10, 9);
    memcpy(&v0, &v3, 16);
    v1 = v5;
    if (v2 == 9223372036854775809)
    {
        a0->field_8[1] = v1;
        *((void*)&a0->field_0) = v0;
        return a0;
    }
    ::libc.so.0::memcpy(&v10, &v6, 200);
    memcpy(&v8, &v0, 16);
    v9 = v1;
    v7 = v2;
    v2.serialize_field(&v7, "ftp_userLControlTooLargecategory", 8, a1);
    if (v2 == 9223372036854775813)
    {
        v2.serialize_field(&v7, "ftp_passseverity", 8, a1 + 24);
        if (v2 == 9223372036854775813)
        {
            v2.serialize_field(&v7, "ftp_addressftp_foldersmtp_user_namesmtp_passsmtp_hostemail_address_fromstruct FleaConfigyo0", 11, a1 + 48);
            if (v2 == 9223372036854775813)
            {
                v2.serialize_field(&v7, "ftp_foldersmtp_user_namesmtp_passsmtp_hostemail_address_fromstruct FleaConfigyo0", 10, a1 + 72);
                if (v2 == 9223372036854775813)
                {
                    v2.serialize_field(&v7, "smtp_user_namesmtp_passsmtp_hostemail_address_fromstruct FleaConfigyo0", 14, a1 + 96);
                    if (v2 == 9223372036854775813)
                    {
                        v2.serialize_field(&v7, "smtp_passsmtp_hostemail_address_fromstruct FleaConfigyo0", 9, a1 + 120);
                        if (v2 == 9223372036854775813)
                        {
                            v2.serialize_field(&v7, "smtp_hostemail_address_fromstruct FleaConfigyo0", 9, a1 + 144);
                            if (v2 == 9223372036854775813)
                            {
                                v2.serialize_field(&v7, "email_address_toTOML parse errormime parse error", 16, a1 + 168);
                                if (v2 == 9223372036854775813)
                                {
                                    v2.serialize_field(&v7, "email_address_fromstruct FleaConfigyo0", 18, a1 + 192);
                                    if (v2 == 9223372036854775813)
                                    {
                                        ::libc.so.0::memcpy(&v2, &v7, 232);
                                        a0.end(&v2);
                                        return a0;
                                    }
                                }
                                *((int128_t *)&a0->field_8[0]) = *((int128_t *)&v3);
                                *((unsigned long long *)&a0->field_0) = v2;
                                core::ptr::drop_in_place<toml::ser::map::SerializeDocumentTable>(&v7);
                                return a0;
                            }
                        }
                    }
                }
            }
        }
    }
    a0->field_8[1] = v4;
    *((int128_t *)&a0->field_0) = *((int128_t *)&v2);
    core::ptr::drop_in_place<toml::ser::map::SerializeDocumentTable>(&v7);
    return a0;
}
