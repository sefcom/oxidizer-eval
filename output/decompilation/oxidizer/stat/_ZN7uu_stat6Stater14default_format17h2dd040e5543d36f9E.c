fn uu_stat::Stater::default_format(a1: i32, a2: i8, a3: i8) -> : struct24 {
    let a0: u64;  // rdi
    let v0: struct64;  // [bp-0x40]

    if a1 {
        if a2 {
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, "%n %i %l %t %s %S %b %f %a %c %d\n");
            return;
        }
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, "  File: \"%n\"\n    ID: %-8i Namelen: %-7l Type: %T\nBlock size: %-10s Fundamental block size: %S\nBlocks: Total: %-10b Free: %-10f Available: %a\nInodes: Total: %-10c Free: %d\n");
        return;
    } else {
        if a2 {
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, "%n %s %b %f %u %g %D %i %h %t %T %X %Y %Z %W %o\n");
            return;
        }
        v0 = struct64 {
            field_0: "  File: %N\n  Size: %-10s\tBlocks: %-10b IO Block: %-6o %F\n"
            field_16: (a3 ? &g_41d873 : &g_41d84b)
            field_24: (a3 ? 61 : 40)
            field_32: "Access: (%04a/%10.10A)  Uid: (%5u/%8U)   Gid: (%5g/%8G)\n"
            field_48: "Access: %x\nModify: %y\nChange: %z\n Birth: %w\n"
        };
        alloc::str::join_generic_copy(a0, &v0);
        return;
    }
}
