long long fish::threads::Debounce::perform_inner(struct_1 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long v1;  // [bp-0x48]
    unsigned long v2;  // [bp-0x40]
    unsigned int v3;  // [bp-0x38]
    unsigned long v5;  // r13
    struct_0 *v6;  // rbx
    char v7;  // dl
    char v8;  // bpl
    unsigned long v9;  // r15
    unsigned long long v10;  // rax
    unsigned int v11;  // edx
    unsigned long long v12;  // rax
    unsigned long v13;  // rax
    unsigned long long v14;  // r15

    v5 = a0->field_0;
    v0.lock(v5 + 16);
    v6 = v0.expect(&g_14e3220);
    v8 = v7 & 1;
    core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn fish::universal_notifier::UniversalNotifier>>>(v6->field_8, v6->field_10);
    v6->field_8 = a1;
    v6->field_10 = a2;
    if (v6->field_18)
    {
        v9 = a0->field_8;
        if ((!a0->field_10 & !v9))
        {
LABEL_14198d6:
            if (v6->field_18)
            {
                core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v6, v8);
                return v6->field_18;
            }
        }
        else
        {
            v10 = std::time::Instant::now();
            v12 = v10.sub(v11, v6->field_28, v6->field_30);
            if (v12 == v9)
            {
                if (v11 > a0->field_10)
                    goto LABEL_141991c;
                goto LABEL_14198d6;
            }
            else
            {
                if (v12 <= v9)
                    goto LABEL_14198d6;
LABEL_141991c:
                v6->field_18 = 0;
            }
        }
    }
    v13 = v6->field_20;
    v6->field_18 = v13;
    if (v13 == -1)
        core::option::unwrap_failed(&g_14e3238); /* do not return */
    v6->field_20 = v13 + 1;
    v6->field_28 = std::time::Instant::now();
    v6->field_30 = v11;
    v14 = v6->field_18;
    if (!v14)
        core::option::expect_failed("Something should be active now.overflow when subtracting durationsoverflow when adding durations\n________________________________________________________src/timer.rs\nExecuted in  \n   usr time  \n   sys time  millismicros  external", 31, &g_14e3250); /* do not return */
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v6, v8);
    if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(v5) + 1, 0, _ccall(20, v14, 0, (unsigned long long)(char)(v13 < -1)))))
    {
        v1 = v5;
        v2 = a0->field_8;
        v3 = a0->field_10;
        v0 = v14;
        fish::threads::iothread_perform(&v0);
        return v14;
    }
    [D] Unsupported jumpkind Ijk_NoDecode at address 21076421()
}
