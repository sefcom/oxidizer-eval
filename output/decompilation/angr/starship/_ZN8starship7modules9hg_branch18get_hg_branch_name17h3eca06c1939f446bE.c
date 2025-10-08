void starship::modules::hg_branch::get_hg_branch_name(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x48]
    unsigned long v2;  // [bp-0x40], Other Possible Types: unsigned long long
    char v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    int v6;  // [bp-0x20], Other Possible Types: char
    char v7;  // [bp-0x10]

    v3.join(a1, a2, ".hgtopicbookmarks.currentError in module `hg_state`:\nsrc/modules/hg_state.rs", 3);
    v6.join(v4, v5, "branchremotewe have sanitized path with is_git()/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/gix-0.73.0/src/open/repository.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sys/os_str/bytes.rs/home/34r7hm4n/.cargo/re", 6);
    starship::utils::read_file(&v0, &v6);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        a0->field_10 = v2;
        a0->field_0 = *((int128_t *)&v0);
    }
    else
    {
        v6.to_vec(core::str::<impl str>::trim_matches(v1, v2), a2);
        a0->field_10 = *((long long *)&v7);
        *((void*)&a0->field_0) = v6;
        core::ptr::drop_in_place<alloc::string::String>(&v0);
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&v3);
    return;
}
