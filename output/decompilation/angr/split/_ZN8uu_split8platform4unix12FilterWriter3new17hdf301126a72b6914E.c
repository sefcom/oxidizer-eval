void uu_split::platform::unix::FilterWriter::new(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned int v0;  // [bp-0x1c4]
    unsigned long long v1;  // [bp-0x1c0]
    int v2;  // [bp-0x1b8]
    char v3;  // [bp-0x1a8]
    unsigned int v4;  // [bp-0x1a4]
    unsigned long v5;  // [bp-0x1a0], Other Possible Types: unsigned long long
    int v6;  // [bp-0x198]
    int v7;  // [bp-0x188]
    char v8;  // [bp-0x188]
    unsigned long long v9;  // [bp-0x178]
    int v10;  // [bp-0x168]
    unsigned long long v11;  // [bp-0x158]
    char v12;  // [bp-0x150]
    int v13;  // [bp-0x148]
    unsigned long long v14;  // [bp-0x138]
    char v15;  // [bp-0x130]
    char v16;  // [bp-0xf8]
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax
    int v20;  // xmm0

    v15.new(a3, a4);
    std::env::var(&v12, "SHELL-c/bin/sh: \nCouldn't wait for child processsplit-error-shell-process-returnedcannot access a Thread Local Storage value during or after destruction/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/sr", 5);
    if ((v12 & 1))
    {
        v11 = v14;
        v10 = v13;
        uu_split::platform::unix::FilterWriter::new::{{closure}}(&v8, &v10);
    }
    else
    {
        v9 = v14;
        v7 = v13;
    }
    v16.new(&v8);
    v18 = v16.arg("-c/bin/sh: \nCouldn't wait for child processsplit-error-shell-process-returnedcannot access a Thread Local Storage value during or after destruction/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/thr", 2);
    v19 = v18.arg(a1, a2).stdin(2, a2);
    v3.spawn(v19);
    if ((v3 & 1))
    {
        *((unsigned long *)((char *)&a0[1].field_0 + 3)) = v5;
        a0->field_0 = 1;
        core::ptr::drop_in_place<std::process::Command>(&v16);
    }
    else
    {
        v0 = v4;
        v1 = v5;
        v2 = v6;
        core::ptr::drop_in_place<std::process::Command>(&v16);
        v20 = *((int128_t *)&v0);
        *((void*)((char *)&a0[3].field_0 + 1)) = v2;
        *((void*)&a0->field_4) = v20;
        a0->field_0 = 0;
    }
    core::ptr::drop_in_place<uu_split::platform::unix::WithEnvVarSet>(&v15);
    return;
}
