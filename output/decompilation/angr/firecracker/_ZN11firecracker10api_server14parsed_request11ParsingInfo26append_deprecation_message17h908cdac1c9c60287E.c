long long firecracker::api_server::parsed_request::ParsingInfo::append_deprecation_message(void* a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x20], Other Possible Types: char
    unsigned long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v4;  // rbx

    if (!((char)(((0 ^ *((long long *)a0)) & (0 ^ -(*((long long *)a0)))) >> 63)))
        return a0.spec_extend(a1, a2 + a1);
    v2 = v4;
    v0.to_vec(a1, a2);
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a0);
    *((unsigned long *)&a0[16]) = v1;
    *(a0) = v0;
    return v1;
}
