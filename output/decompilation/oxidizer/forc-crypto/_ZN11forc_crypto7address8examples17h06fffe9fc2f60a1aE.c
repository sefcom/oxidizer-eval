fn forc_crypto::address::examples() -> u64 {
    let v0: u8;  // [bp-0x78]
    let v1: struct24;  // [bp-0x70]
    let v2: u64;  // [bp-0x58]
    let v3: u64;  // [bp-0x50]
    let v4: i64;  // [bp-0x48]
    let v5: u128;  // [bp-0x40]
    let v6: Result<struct24, struct24>;  // [bp-0x28]

    v2 = "    # Convert an address to another format\n    forc crypto address fuel12e0xwx34nfp7jrzvn9mp5qkac3yvp7h8fx37ghl7klf82vv2wkys6wd523\n\n";
    v3 = 1;
    v4 = &v0;
    v5 = 0;
    v1 = core::option::Option<T>::map_or_else("    # Convert an address to another format\n    forc crypto address fuel12e0xwx34nfp7jrzvn9mp5qkac3yvp7h8fx37ghl7klf82vv2wkys6wd523\n\n", &v2);
    v6 = alloc::str::join_generic_copy(&v1, 1);
    return alloc::vec::Vec<T,A>::into_boxed_slice(&v6);
}
