fn uu_sort::get_rand_string(a0: u32) -> u64 {
    let v0: &u64;  // [sp-0x10], Other Possible Types: struct8
    let v2: &&struct_0;  // fs
    let v3: &struct_0;  // rax
    let v4: u64;  // rdx
    let v5: u64;  // cc_op
    let v6: u64;  // cc_dep2
    let v7: u64;  // cc_ndep
    let v9: &u64;  // rdi

    v3 = *(v2);
    v4 = v3[4].field_-20;
    v5 = 8;
    v6 = 1;
    if v4 != 1 && (!(!v4) || !((v4 = std::sys::thread_local::native::lazy::Storage<T,D>::initialize(v3 - 32, 0, v4), v5 = 20, v6 = 0, v4))) {
        core::result::unwrap_failed(); /* do not return */
    }
    *(v0) = *(v0) + 1;
    if amd64g_calculate_condition(4, 24, vvar_95 + 1, 0, amd64g_calculate_rflags_c(v5, v4, v6, v7)) as char {
        [D] Unsupported jumpkind Ijk_NoDecode at address 5034588()
    }
    v0 = struct8 {
        field_0: v8
    };
    rand::rng::Rng::sample(a0, &v0);
    v9 = v0;
    *(v9 as &i32) = vvar_99 - 1;
    if vvar_99 == 1 {
        v9[1] = v9[1] - 1;
        return a0;
    }
    return a0;
}
