fn uu_sort::random_shuffle(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: u8;  // [bp-0x3a]
    let v1: u8;  // [bp-0x39]
    let v2: struct8;  // [bp-0x38], Other Possible Types: u64
    let v3: u64;  // [bp-0x30]
    let v4: u64;  // [bp-0x28]
    let v5: u64;  // [bp-0x20]
    let v6: u64;  // [bp-0x18]
    let v7: u64;  // [bp-0x10]
    let v9: u64;  // r15
    let v10: u64;  // r14
    let v11: u64;  // r13
    let v12: u64;  // r12
    let v13: u64;  // rbx

    v7 = v9;
    v6 = v10;
    v5 = v11;
    v4 = v12;
    v3 = v13;
    v2 = 14695981039346656037;
    v2 = <fnv::FnvHasher as core::hash::Hasher>::write(a0, a1);
    v0 = 255;
    v2 = <fnv::FnvHasher as core::hash::Hasher>::write(&v0, 1);
    core::hash::impls::<impl core::hash::Hash for &T>::hash(a4, &v2);
    v2 = 14695981039346656037;
    v2 = <fnv::FnvHasher as core::hash::Hasher>::write(a2, a3);
    v1 = 255;
    v2 = <fnv::FnvHasher as core::hash::Hasher>::write(&v1, 1);
    core::hash::impls::<impl core::hash::Hash for &T>::hash(a4, &v2);
    return (v2 <= v2 ? v2 != v2 : 255);
}
