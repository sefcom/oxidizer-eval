fn ruff_python_formatter::comments::map::PartIndex::incremented(a0: i32) -> u64 {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // cc_op
    let v3: u64;  // cc_dep1
    let v4: u64;  // cc_dep2
    let v5: u64;  // cc_ndep
    let v6: u64;  // rax

    if _ccall(4, 23, (a0 + 1) as u64, 0, _ccall(v2, v3, v4, v5)) as char {
        v0 = v6;
        core::option::unwrap_failed(); /* do not return */
    }
    return a0 + 1;
}
