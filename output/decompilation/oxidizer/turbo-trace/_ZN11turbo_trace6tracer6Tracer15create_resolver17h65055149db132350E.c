fn turbo_trace::tracer::Tracer::create_resolver(a0: u64, a1: void*, a2: u32) -> long long {
    let v0: struct392;  // [bp-0x4c0]
    let v4: struct392;  // [bp-0x338], Other Possible Types: u8
    let v6: u8;  // [bp-0x1b2]
    let v7: u8;  // [bp-0x1b1]
    let v8: struct391;  // [bp-0x1b0], Other Possible Types: struct392
    let v9: struct392;  // [bp-0x1b0]
    let v11: u8;  // [bp-0x2b]

    v8 = <oxc_resolver::options::ResolveOptions as core::default::Default>::default();
    v11 = 1;
    memcpy(&v4, &v8, 390);
    v6 = 2;
    v7 = (&v11)[2];
    v8 = oxc_resolver::options::ResolveOptions::with_extension(&v4, ".ts");
    v4 = oxc_resolver::options::ResolveOptions::with_extension(&v8, ".tsx");
    v8 = oxc_resolver::options::ResolveOptions::with_extension(&v4, ".jsx");
    v4 = oxc_resolver::options::ResolveOptions::with_extension(&v8, ".d.ts");
    v8 = oxc_resolver::options::ResolveOptions::with_extension(&v4, ".mjs");
    v4 = oxc_resolver::options::ResolveOptions::with_extension(&v8, ".cjs");
    v9 = oxc_resolver::options::ResolveOptions::with_main_field(&v4, "module");
    v4 = oxc_resolver::options::ResolveOptions::with_main_field(&v9, "types");
    v0 = oxc_resolver::options::ResolveOptions::with_condition_names(&v4, "import", 5);
    if a1 {
        v9 as u192 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, a2);
    }
    memcpy(&v9 as u192, &v0, 392);
    return oxc_resolver::ResolverGeneric<C>::new(a0, &v9 as u192);
}
