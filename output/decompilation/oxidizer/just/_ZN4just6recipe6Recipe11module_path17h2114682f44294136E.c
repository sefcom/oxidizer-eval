fn just::recipe::Recipe::module_path(a0: &u64) -> long long {
    let v2: u64;  // rdx
    let v3: core::option::Option<u32>;  // r15
    let v4: core::option::Option<&str>;  // rax

    v4 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(None, v3, just::recipe::Recipe::namepath(a0), v2) as u64;
    return v4;
}
