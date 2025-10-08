long long uu_tr::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab0]
    char v1;  // [bp-0x830]
    unsigned int v2;  // [bp-0x574]
    unsigned long long v3;  // [bp-0x570]
    char v4;  // [bp-0x568]
    unsigned int v5;  // [bp-0x2ac]
    unsigned long v6;  // [bp-0x2a8]
    char v7;  // [bp-0x2a0], Other Possible Types: unsigned long long
    unsigned long long v10;  // rdx

    v1.new(uucore::util_name(), v10);
    v4.version(&v1);
    v1.about(&v4);
    uucore::format_usage(&v0, "{} [OPTION]... SET1 [SET2]complementuse the complement of SET1deletedelete characters in SET1, do not translatesqueeze-repeatsreplace each sequence of a repeated character that is listed in the last specified SET, with a single occurrence of that character", 26);
    v4.override_usage(&v1, &v0);
    memcpy(&v1, &v4, 700);
    v2 = 160 | v5;
    v3 = 128 | v6;
    v4.new("complementuse the complement of SET1deletedelete characters in SET1, do not translatesqueeze-repeatsreplace each sequence of a repeated character that is listed in the last specified SET, with a single occurrence of that charactertruncate-set1first truncate SET1 to length of SET2", 10);
    v0.visible_short_alias(&v4);
    v4.short(&v0, 99);
    v0.long(&v4, "complementuse the complement of SET1deletedelete characters in SET1, do not translatesqueeze-repeatsreplace each sequence of a repeated character that is listed in the last specified SET, with a single occurrence of that charactertruncate-set1first truncate SET1 to length of SET2", 10);
    v4.help(&v0, "use the complement of SET1deletedelete characters in SET1, do not translatesqueeze-repeatsreplace each sequence of a repeated character that is listed in the last specified SET, with a single occurrence of that charactertruncate-set1first truncate SET1 to length of SET2", 26);
    v0.action(&v4);
    v7.overrides_with(&v0, "complementuse the complement of SET1deletedelete characters in SET1, do not translatesqueeze-repeatsreplace each sequence of a repeated character that is listed in the last specified SET, with a single occurrence of that charactertruncate-set1first truncate SET1 to length of SET2", 10);
    v4.arg(&v1, &v7);
    v1.new("deletedelete characters in SET1, do not translatesqueeze-repeatsreplace each sequence of a repeated character that is listed in the last specified SET, with a single occurrence of that charactertruncate-set1first truncate SET1 to length of SET2", 6);
    v0.short(&v1, 100);
    v1.long(&v0, "deletedelete characters in SET1, do not translatesqueeze-repeatsreplace each sequence of a repeated character that is listed in the last specified SET, with a single occurrence of that charactertruncate-set1first truncate SET1 to length of SET2", 6);
    v0.help(&v1, "delete characters in SET1, do not translatesqueeze-repeatsreplace each sequence of a repeated character that is listed in the last specified SET, with a single occurrence of that charactertruncate-set1first truncate SET1 to length of SET2", 43);
    v1.action(&v0);
    v0.overrides_with(&v1, "deletedelete characters in SET1, do not translatesqueeze-repeatsreplace each sequence of a repeated character that is listed in the last specified SET, with a single occurrence of that charactertruncate-set1first truncate SET1 to length of SET2", 6);
    v1.arg(&v4, &v0);
    v4.new("squeeze-repeatsreplace each sequence of a repeated character that is listed in the last specified SET, with a single occurrence of that charactertruncate-set1first truncate SET1 to length of SET2", 15);
    v0.long(&v4, "squeeze-repeatsreplace each sequence of a repeated character that is listed in the last specified SET, with a single occurrence of that charactertruncate-set1first truncate SET1 to length of SET2", 15);
    v4.short(&v0, 115);
    v0.help(&v4, "replace each sequence of a repeated character that is listed in the last specified SET, with a single occurrence of that charactertruncate-set1first truncate SET1 to length of SET2", 130);
    v4.action(&v0);
    v0.overrides_with(&v4, "squeeze-repeatsreplace each sequence of a repeated character that is listed in the last specified SET, with a single occurrence of that charactertruncate-set1first truncate SET1 to length of SET2", 15);
    v4.arg(&v1, &v0);
    v1.new("truncate-set1first truncate SET1 to length of SET2", 13);
    v0.long(&v1, "truncate-set1first truncate SET1 to length of SET2", 13);
    v1.short(&v0, 116);
    v0.help(&v1, "first truncate SET1 to length of SET2", 37);
    v1.action(&v0);
    v0.overrides_with(&v1, "truncate-set1first truncate SET1 to length of SET2", 13);
    v1.arg(&v4, &v0);
    v4.new("setsBOLDBlue", 4);
    v0.num_args(&v4);
    v7 = 2;
    v4.value_parser(&v0, &v7);
    a0.arg(&v1, &v4);
    return a0;
}
