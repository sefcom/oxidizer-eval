long long fd::print_completions(unsigned short *a0, unsigned int a1)
{
    char v0;  // [bp-0x308], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x300]
    unsigned long long v2;  // [bp-0x2f8]
    unsigned long long v3;  // [bp-0x2f0]
    char v4;  // [bp-0x2e8]
    unsigned long long v5;  // [bp-0x2e0]
    char v6;  // [bp-0x2d8]
    unsigned long long v8;  // r15
    unsigned long long v9;  // r14
    unsigned long long v10;  // r15
    unsigned long long v11;  // rax
    unsigned long long v12;  // rdx

    std::env::args(&v4);
    v0.next(&v4);
    core::ptr::drop_in_place<core::iter::adapters::map::Map<std::env::ArgsOs,<clap_lex::RawArgs as core::convert::From<std::env::ArgsOs>>::from::{{closure}}>>(&v4);
    v8 = "fdignorefailed to spawn thread/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/scoped.rsinternal error: entered unreachable code: Encountered file system entry without a file name. This should only happen for paths like 'foo/bar/..' o";
    v9 = 2;
    v10 = "fdignorefailed to spawn thread/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/scoped.rsinternal error: entered unreachable code: Encountered file system entry without a file name. This should only happen for paths like 'foo/bar/..' o";
    if (!((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63)))
    {
        v11 = v1.file_stem(v2);
        v10 = v8;
        if (v11)
        {
            core::str::converts::from_utf8(&v4, v11, v12);
            v9 = (!v4 ? *((long long *)&v6) : 2);
            if (!v4)
                v10 = v5;
            else
                v10 = "fdignorefailed to spawn thread/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/scoped.rsinternal error: entered unreachable code: Encountered file system entry without a file name. This should only happen for paths like 'foo/bar/..' o";
        }
    }
    v4.command();
    v4.build();
    v3 = std::io::stdio::stdout();
    clap_complete::aot::generator::generate(a1, &v4, v10, v9, &v3);
    *(a0) = 0x200;
    core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v4);
    return core::ptr::drop_in_place<regex::error::Error>(&v0);
}
