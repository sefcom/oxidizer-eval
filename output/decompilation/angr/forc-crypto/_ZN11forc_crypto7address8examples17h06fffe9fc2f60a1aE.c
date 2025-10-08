long long forc_crypto::address::examples()
{
    char v0;  // [bp-0x78]
    char v1;  // [bp-0x70]
    unsigned long long v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    char *v4;  // [bp-0x48]
    uint128_t v5;  // [bp-0x40]
    char v6;  // [bp-0x28]
    unsigned long long v8;  // rax

    v2 = &g_a2f248;
    v3 = 1;
    v4 = &v0;
    v5 = 0;
    v1.map_or_else("    # Convert an address to another format\n    forc crypto address fuel12e0xwx34nfp7jrzvn9mp5qkac3yvp7h8fx37ghl7klf82vv2wkys6wd523\n\nThe following required argument was not provided: addressADDRESSThe address to convert. It can be either a valid address in ", 132, &v2);
    alloc::str::join_generic_copy(&v6, &v1, 1);
    v8 = v6.into_boxed_slice();
    core::ptr::drop_in_place<forc_crypto::address::Args>(&v1);
    return v8;
}
