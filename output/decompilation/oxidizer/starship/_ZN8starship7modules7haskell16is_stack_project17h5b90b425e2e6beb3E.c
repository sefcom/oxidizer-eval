fn starship::modules::haskell::is_stack_project(a0: i64) -> u64 {
    let v0: struct16;  // [bp-0x8]
    let v2: struct16;  // rax
    let v3: u64;  // rdx

    v0 = v2;
    if !(starship::context::Context::dir_contents(a0) & 1) {
        return starship::context::DirContents::has_file_name(v3, "stack.yaml");
    }
    return 0;
}
