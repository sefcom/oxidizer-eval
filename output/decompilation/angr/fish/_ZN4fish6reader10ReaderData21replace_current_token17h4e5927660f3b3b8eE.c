long long fish::reader::ReaderData::replace_current_token(void* a0, void* a1)
{
    char v0;  // [bp-0x38], Other Possible Types: unsigned long long
    char v1;  // [bp-0x30]
    unsigned int v3;  // eax
    unsigned long long v4[16];  // rdx

    v3 = a0.active_edit_line();
    fish::parse_util::parse_util_token_extent(&v0, v4[5], v4[6], v4[15]);
    return a0.replace_substring(v3 & 1, v0, *((long long *)&v1), a1);
}
