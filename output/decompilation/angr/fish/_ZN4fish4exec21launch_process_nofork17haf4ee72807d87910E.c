void fish::exec::launch_process_nofork(unsigned long long a0, unsigned long long a1[12])
{
    unsigned long long v0;  // [bp-0x58]
    unsigned long long v1[2][2];  // [bp-0x50]
    char v2;  // [bp-0x30]
    unsigned long long v3;  // [bp-0x18]
    unsigned long long v4;  // [bp-0x10]
    unsigned long long v5;  // [bp-0x8]
    unsigned long long v7;  // r15
    unsigned long long v8;  // r14
    unsigned long long v9;  // rbx
    unsigned long long v10;  // rax
    char *v11;  // rax
    unsigned long long v12;  // rdx

    v5 = v7;
    v4 = v8;
    v3 = v9;
    if (fish::threads::is_forked_child())
        core::panicking::panic("assertion failed: !is_forked_child()Locals should not be globalsUnknown scopeAttempt to pop last local scopeShould have exactly one element in PWDNode should contain key", 36, &g_14d7ad8); /* do not return */
    v2.collect(a1[10], a1[10] + a1[11] * 24);
    v1.new(&v2);
    v10 = a0.export_array();
    v0 = v10;
    v11 = fish::common::wcs2zstring(a1[7], a1[8]);
    fish::reader::safe_restore_term_mode();
    fish::exec::safe_launch_process(v11, v12, &v1, v10 + 16); /* do not return */
}
