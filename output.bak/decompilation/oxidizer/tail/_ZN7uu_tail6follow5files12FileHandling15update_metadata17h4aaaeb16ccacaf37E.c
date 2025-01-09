fn uu_tail::follow::files::FileHandling::update_metadata(a0: u32, a1: u32, a2: u32, a3: &u64) -> u64 {
    let v0: u128;  // [sp-0x178], Other Possible Types: struct16
    let v1: u8;  // [bp-0xc8]
    let v3: u64;  // r12
    let v4: &u8;  // rcx
    let v5: u64;  // r12
    let v6: &u64;  // rax

    v3 = *(a3);
    if v3 != 2 {
        v4 = a3 + 1;
        goto LABEL_50eb8c;
    } else {
        v0 = std::fs::metadata(a1, a2);
        v3 = v0;
        if v3 != 2 {
            v4 = &v0;
LABEL_50eb8c:
            memcpy(&v1, v4, 168);
        }
    }
    v6 = uu_tail::follow::files::FileHandling::get_mut(a0, a1, a2);
    *(v6) = v5;
    return memcpy(v6 + 1, &v1, 168);
}
