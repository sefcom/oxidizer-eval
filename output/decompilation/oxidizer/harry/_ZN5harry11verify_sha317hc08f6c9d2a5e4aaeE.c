fn harry::verify_sha3(a0: u64, a1: u64) -> long long {
    let v0: alloc::string::String;  // [bp-0x2c0]
    let v1: u32;  // [bp-0x2b0]
    let v2: struct16;  // [bp-0x2a8]
    let v3: struct64;  // [bp-0x298]
    let v4: struct40;  // [bp-0x258], Other Possible Types: u8
    let v5: struct208;  // [bp-0x138]

    v5 = <digest::core_api::wrapper::CoreWrapper<T> as core::default::Default>::default();
    <D as digest::digest::Digest>::update(&v5, a0, a1);
    memcpy(&v4, &v5, 288);
    v3 = digest::FixedOutput::finalize_fixed(&v4);
    v2 = struct16 {
        field_0: &v3
        field_8: generic_array::hex::<impl core::fmt::LowerHex for generic_array::GenericArray<u8,T>>::fmt
    };
    v4 = core::fmt::Arguments::new_v1("", 1, &v2, 0x1);
    v0 = alloc::fmt::format(&v4);
    return <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v0.vec.buf.cap, v1, "83ed150dbcc9700521ccc2f7d67243c3d4000c8228281488dccd6c6753f48515dcb24714d5a294df27eeda834e9242e1ce4014fc38df3e0439b999fe3efa0765");
}
