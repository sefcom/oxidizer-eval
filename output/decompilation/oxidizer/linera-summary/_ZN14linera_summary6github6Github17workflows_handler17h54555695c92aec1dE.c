fn linera_summary::github::Github::workflows_handler(a0: u64, a1: u32) -> long long {
    let v0: alloc::string::String;  // [bp-0x48]
    let v1: alloc::string::String;  // [bp-0x30]

    v0 = <alloc::string::String as core::clone::Clone>::clone(a1 + 144);
    v1 = <alloc::string::String as core::clone::Clone>::clone(a1 + 168);
    octocrab::Octocrab::workflows(a0, a1, &v0, &v1);
    return a0;
}
