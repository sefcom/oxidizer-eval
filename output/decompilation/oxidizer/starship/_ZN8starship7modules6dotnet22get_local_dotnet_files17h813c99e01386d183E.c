fn starship::modules::dotnet::get_local_dotnet_files(a1: i64) -> : struct16 {
    let a0: u64;  // rdi
    let v0: struct48;  // [bp-0x68]
    let v1: struct8;  // [bp-0x38]
    let v2: struct40;  // [bp-0x28]
    let v3: i8;  // [bp-0x18]
    let v5: u64;  // rdx
    let v6: u64;  // rdx

    if !(starship::context::Context::dir_contents(a1) & 1) {
        v1 = starship::context::DirContents::files(v6);
        v0 = struct48 {
            field_0: v1
            field_16: v2
            field_32: *(&v3 as &i64)
            field_40: a1
        };
        core::iter::traits::iterator::Iterator::collect(a0, &v0);
        return;
    }
    return struct16 {
        field_0: 0x8000000000000000
        field_8: v5
    };
}
