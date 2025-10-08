fn uu_sort::random_shuffle(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32) -> char {
    let v0: u8;  // [bp-0x49]
    let v1: u64;  // [bp-0x48]
    let v2: u8;  // [bp-0x48]
    let v3: u64;  // [bp-0x40]
    let v4: u64;  // [bp-0x38]

    v1 = 14695981039346656037;
    <fnv::FnvHasher as core::hash::Hasher>::write(&v1, a0, a1);
    v0 = 255;
    <fnv::FnvHasher as core::hash::Hasher>::write(&v1, &v0, 1);
    v4 = 16;
    <fnv::FnvHasher as core::hash::Hasher>::write(&v1, &v4, 8);
    <fnv::FnvHasher as core::hash::Hasher>::write(&v1, a4, 16);
    v3 = 14695981039346656037;
    <fnv::FnvHasher as core::hash::Hasher>::write(&v3, a2, a3);
    v2 = 255;
    <fnv::FnvHasher as core::hash::Hasher>::write(&v3, &v2, 1);
    v2 = 16;
    <fnv::FnvHasher as core::hash::Hasher>::write(&v3, &v2, 8);
    <fnv::FnvHasher as core::hash::Hasher>::write(&v3, a4, 16);
    return (v1 > v3) - 0 - (v1 < v3);
}
