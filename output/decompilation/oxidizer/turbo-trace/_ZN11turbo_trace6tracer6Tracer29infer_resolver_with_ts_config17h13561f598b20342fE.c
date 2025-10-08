fn turbo_trace::tracer::Tracer::infer_resolver_with_ts_config(a0: u64, a1: u64, a2: u64, a3: i64) -> long long {
    let v1: struct24;  // [bp-0x4e0]
    let v2: struct391;  // [bp-0x4c8]
    let v6: struct24;  // [bp-0x340]
    let v7: u64;  // [bp-0x340]
    let v8: void*;  // [bp-0x1b0]
    let v10: u64;  // r13
    let v11: u64;  // r15
    let v12: u64;  // rdx
    let v13: struct24;  // [bp-0x4f8]
    let v14: struct24;  // [bp-0x1b8], Other Possible Types: struct392

    v6 = struct24 {
        field_0: a1
        field_8: a2
        field_16: 1
    };
    v10 = <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v6);
    v6 = struct24 {
        field_0: a1
        field_8: a2
        field_16: 1
    };
    v11 = <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v6);
    if !v10 && !v11 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v2 = <oxc_resolver::options::ResolveOptions as core::clone::Clone>::clone(a3);
    if v10 {
        v14 = turbopath::absolute_system_path::AbsoluteSystemPath::join_component(v10, v12, "tsconfig.json");
        v6 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v8, v14.field_16);
    }
    if v11 {
        memcpy(&v7, &v2, 392);
        v13 = turbopath::absolute_system_path::AbsoluteSystemPath::join_component(v11, v12, "node_modules");
        v1 = <T as alloc::string::SpecToString>::spec_to_string(&v13);
        v14 = oxc_resolver::options::ResolveOptions::with_module(&v7, &v1);
        memcpy(&v2, &v14, 392);
    }
    memcpy(&v7, &v2, 392);
    return oxc_resolver::ResolverGeneric<C>::clone_with_options(a0, *((a3 + 392) as &i64), &v7);
}
