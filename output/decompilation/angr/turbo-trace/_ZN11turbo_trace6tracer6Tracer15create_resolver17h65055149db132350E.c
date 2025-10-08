long long turbo_trace::tracer::Tracer::create_resolver(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x4c0]
    int v1;  // [bp-0x370], Other Possible Types: char
    unsigned long long v2;  // [bp-0x360]
    unsigned long long v3;  // [bp-0x358]
    int v4;  // [bp-0x338], Other Possible Types: char
    unsigned long long v5;  // [bp-0x328]
    char v6;  // [bp-0x1b2]
    char v7;  // [bp-0x1b1]
    char v8;  // [bp-0x1b0]
    char v9;  // [bp-0x1a0]
    char v10;  // [bp-0x2b]
    char v11;  // [bp-0x29]

    v8.default();
    v10 = 1;
    memcpy(&v4, &v8, 390);
    v6 = 2;
    v7 = v11;
    v8.with_extension(&v4, ".ts.d.ts**/*.jsvalid glob**/*.ts**/node_modules/****/.next/**FileNotFoundPathErrorResolvefile_pathfailed to parse file failed to read file: tracing a root file ``, no parent foundfailed to resolve import to `` in `", 3);
    v4.with_extension(&v8, ".tsx\\", 4);
    v8.with_extension(&v4, ".jsxRoot(", 4);
    v4.with_extension(&v8, ".d.ts**/*.jsvalid glob**/*.ts**/node_modules/****/.next/**FileNotFoundPathErrorResolvefile_pathfailed to parse file failed to read file: tracing a root file ``, no parent foundfailed to resolve import to `` in `", 5);
    v8.with_extension(&v4, ".mjs>", 4);
    v4.with_extension(&v8, ".cjs|", 4);
    v8.with_main_field(&v4, "modulenetospath/posixpath/win32perf_hooksprocessquerystringstreamstream/promisesstream/webstring_decodersystimerstimers/promisestlstrace_eventsttyurlutil/typesv8vmworker_threadsFieldSet corrupted (this is a bug)load_tsconfig", 6);
    v4.with_main_field(&v8, "types/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/alloc/src/slice.rs", 5);
    v0.with_condition_names(&v4, &g_a02ab8, 5);
    if (a1)
    {
        v8.to_vec(a1, a2);
        v5 = *((long long *)&v9);
        memcpy(&v4, &v8, 16);
        core::ptr::drop_in_place<core::option::Option<oxc_resolver::options::TsconfigOptions>>(&v1);
        v2 = v5;
        v1 = v4;
        v3 = 9223372036854775809;
    }
    memcpy(&v8, &v0, 392);
    return a0.new(&v8);
}
