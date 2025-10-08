long long fish::function::FunctionProperties::annotated_definition(unsigned long a0, struct_2 *a1, unsigned long long a2)
{
    char v0;  // [bp-0x119]
    char v1;  // [bp-0x118]
    int v2;  // [bp-0x110], Other Possible Types: char
    int v3;  // [bp-0x110]
    char v4;  // [bp-0x108]
    int v5;  // [bp-0x108]
    unsigned long long v6;  // [bp-0xe8]
    struct_1 *v7;  // [bp-0xe0], Other Possible Types: struct_2 *
    void* v8;  // [bp-0xd8]
    unsigned long long v9;  // [bp-0xd0]
    void* v10;  // [bp-0xc8]
    unsigned int v11;  // [bp-0xb4]
    unsigned long long v12;  // [bp-0xb0]
    unsigned long long v13;  // [bp-0x98]
    struct_0 *v14;  // [bp-0x90]
    unsigned long long v15;  // [bp-0x88]
    struct_3 *v16;  // [bp-0x80]
    char v17;  // [bp-0x78]
    char v18;  // [bp-0x58]
    unsigned long long v20;  // rcx
    char v21;  // dl
    unsigned long long v22[6];  // rax
    void* v23;  // r13
    unsigned long long v24;  // rdx
    struct_0 *v25;  // rax
    unsigned long long v26;  // rax
    void* v27;  // r15
    struct_2 *v28;  // rcx
    struct_1 *v29;  // rbx
    struct_1 *v30;  // rax
    void* v31;  // rbx

    v6 = v20;
    v8 = 0;
    v9 = 4;
    v10 = 0;
    v7 = a1;
    v15 = a1->padding_18.localize();
    v13 = fish::function::get_function_body_source(v7);
    fish::event::get_function_handlers(&v18, a2, v6);
    v8.extend("function  --wraps= --description  --no-scope-shadowingUnexpected event handler type --on-job-exit caller --on-variable %ls --on-process-exit %d --on-job-exit %d --on-event %ls --argument-names %ls\n    set -l %lssrc/future.rssrc/future_feature_flags.rs", " --wraps= --description  --no-scope-shadowingUnexpected event handler type --on-job-exit caller --on-variable %ls --on-process-exit %d --on-job-exit %d --on-event %ls --argument-names %ls\n    set -l %lssrc/future.rssrc/future_feature_flags.rs");
    v11 = a2.char_at(v6, 0);
    if (v11 != 45)
    {
        fish::common::escape(&v1, a2, v6);
        v8.spec_extend(*((long long *)&v2), *((long long *)&v2) + *((long long *)&v4) * 4);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
    }
    v0 = v21 & 1;
    v12 = fish::complete::complete_wrap_map();
    v22 = v12 + 8.get_inner(a2, v6);
    if (v22 && v22[5])
    {
        v23 = 0;
        do
        {
            v8.extend(" --wraps= --description  --no-scope-shadowingUnexpected event handler type --on-job-exit caller --on-variable %ls --on-process-exit %d --on-job-exit %d --on-event %ls --argument-names %ls\n    set -l %lssrc/future.rssrc/future_feature_flags.rs", " --description  --no-scope-shadowingUnexpected event handler type --on-job-exit caller --on-variable %ls --on-process-exit %d --on-job-exit %d --on-event %ls --argument-names %ls\n    set -l %lssrc/future.rssrc/future_feature_flags.rs");
            fish::common::escape(&v1, *((long long *)(8 + v22[4] + (char *)v23)), *((long long *)(16 + v22[4] + (char *)v23)));
            v8.spec_extend(*((long long *)&v2), *((long long *)&v2) + (long long)v5 * 4);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
            v23 += 24;
        } while (v22[5] * 24 != v23);
    }
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v12, v0);
    if (v24)
    {
        v8.extend(" --description  --no-scope-shadowingUnexpected event handler type --on-job-exit caller --on-variable %ls --on-process-exit %d --on-job-exit %d --on-event %ls --argument-names %ls\n    set -l %lssrc/future.rssrc/future_feature_flags.rs", " --no-scope-shadowingUnexpected event handler type --on-job-exit caller --on-variable %ls --on-process-exit %d --on-job-exit %d --on-event %ls --argument-names %ls\n    set -l %lssrc/future.rssrc/future_feature_flags.rs");
        fish::common::escape(&v1, v15, v24);
        v8.spec_extend(*((long long *)&v2), *((long long *)&v2) + (long long)v5 * 4);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
    }
    if (!v7->field_64)
        v8.extend(" --no-scope-shadowingUnexpected event handler type --on-job-exit caller --on-variable %ls --on-process-exit %d --on-job-exit %d --on-event %ls --argument-names %ls\n    set -l %lssrc/future.rssrc/future_feature_flags.rs", "Unexpected event handler type --on-job-exit caller --on-variable %ls --on-process-exit %d --on-job-exit %d --on-event %ls --argument-names %ls\n    set -l %lssrc/future.rssrc/future_feature_flags.rs");
    v17.into_iter(&v18);
    v25 = v17.next();
    if (v25)
    {
        v14 = v25;
        goto (long long)(g_9f3efc[v25->field_28] + (char *)&g_9f3efc[0]);
    }
    else
    {
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::sync::Arc<fish::event::EventHandler>>>(&v17);
        if (v7->field_10)
        {
            v26 = v7->field_10 * 8;
            v27 = 0;
            do
            {
                v1 = 1;
                *((int128_t *)&v2) = *((int128_t *)(8 + v7->field_8 + (char *)v27));
                fish_printf::printf_impl::sprintf_locale(&v17, &v8, " --argument-names %ls\n    set -l %lssrc/future.rssrc/future_feature_flags.rs", 21, &v1, 1);
                v17.unwrap(&g_14d9000);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v1);
                v27 += 24;
            } while (v26 * 3 != v27);
        }
        if (v11 == 45)
        {
            v8.extend(" -- or.1setf~", "or.1setf~");
            fish::common::escape(&v1, a2, v6);
            v8.spec_extend((long long)v2, (long long)v2 + (long long)v5 * 4);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
        }
        v28 = v7;
        if (v28->field_48)
        {
            v29 = v28->field_40;
            v6 = &(&v29->padding_0)[6 * v28->field_48];
            v30 = &v29->field_28;
            while (true)
            {
                v7 = v30;
                v1 = 1;
                *((int128_t *)&v3) = *((int128_t *)&(&v29->padding_0)[1]);
                fish_printf::printf_impl::sprintf_locale(&v17, &v8, "\n    set -l %lssrc/future.rssrc/future_feature_flags.rs", 15, &v1, 1);
                v17.unwrap(&g_14d8fe8);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v1);
                if (v29->field_20)
                {
                    v31 = 0;
                    do
                    {
                        v8.push(32);
                        fish::common::escape(&v1, *((long long *)(8 + v29->padding_18 + (char *)v31)), *((long long *)(16 + v29->padding_18 + (char *)v31)));
                        v8.spec_extend((long long)v3, (long long)v3 + (long long)(&v3)[8] * 4);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
                        v31 += 24;
                    } while (v29->field_20 * 24 != v31);
                }
                v29 = v7;
                v30 = &v29->field_28;
                if (v29 == v6)
                {
                    v30 = v29;
                    if (v29 == v6)
                        break;
                }
                else if (v29 == v6)
                {
                    break;
                }
            }
        }
        v8.push(10);
        v8.spec_extend(v13, v13 + v24 * 4);
        if (!v13.ends_with(v24))
            v8.push(10);
        v8.extend("end\nfull", "full");
        v16->field_10 = 0;
        v16->field_0 = *((int128_t *)&v8);
        return v16;
    }
}
