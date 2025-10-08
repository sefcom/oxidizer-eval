fn uu_tsort::Graph::find_and_break_cycle(a0: i64) -> int {
    let v0: u64;  // [bp-0xf0]
    let v2: u64;  // [bp-0xe0]
    let v3: u64;  // [bp-0xd8]
    let v4: struct24;  // [bp-0xd0]
    let v5: alloc::string::String;  // [bp-0xd0]
    let v6: u64;  // [bp-0xc0]
    let v7: struct32;  // [bp-0x80]
    let v8: i64;  // [bp-0x58]
    let v9: struct24;  // [bp-0x48]
    let v10: i64;  // [bp-0x40]
    let v12: u64;  // rdx
    let v13: i64;  // r13
    let v14: i64;  // r13
    let v15: i64;  // r13
    let v17: i64;  // r15
    let v18: u64;  // rbx
    let v19: u64;  // r12
    let v20: u64;  // rsi

    v9 = uu_tsort::Graph::detect_cycle(a0);
    v5 = <alloc::string::String as core::clone::Clone>::clone(a0);
    v7 = struct32 {
        field_0: 2
        field_8: *(&v5.vec.buf.inner.cap as &i128)
        field_24: v6
    };
    uucore::mods::error::set_exit_code(1);
    v2 = uucore::util_name();
    v3 = v12;
    eprintln!("{}: {}", &v2, &v7);
    v13 = v10;
    v0 = v9.field_16;
    v8 = v13;
    do {
        v15 = v14;
        vvar_290{stack -208} = struct24 OrderedDict([(0, 𝜙@64b [((4589246, None), vvar_272{stack -208}), ((4589010, None), vvar_247{stack -208})]), (16, 𝜙@64b [((4589246, None), vvar_275{stack -192}), ((4589010, None), vvar_250{stack -192})])])
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v4, *(v15 as &i64), *((v15 + 8) as &i64));
        v7 = struct32 {
            field_0: 3
            field_8: v4.field_0
            field_24: v6
        };
        uucore::mods::error::set_exit_code(1);
        v2 = uucore::util_name();
        v3 = v12;
        eprintln!("{}: {}", &v2, &v7);
        v14 = v15 + 16;
    } while (v13 != v0 * 16 + v13);
    v17 = v8;
    v18 = *((v17 + 16) as &i64);
    v19 = *((v17 + 24) as &i64);
    uu_tsort::Graph::remove_edge(a0, *(v17 as &i64), *((v17 + 8) as &i64), v18, v19);
    if !(uu_tsort::Graph::indegree(a0, v18, v19) & 1) {
        core::option::unwrap_failed(); /* do not return */
    }
    if v12 {
        return;
    }
    alloc::collections::vec_deque::VecDeque<T,A>::push_back(v20, v18, v19, "src/uu/tsort/src/tsort.rs");
    return;
}
