long long fish::env::environment_impl::EnvScopedImpl::try_get_computed(void* a0, struct_1 *a1, unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [bp-0xf0], Other Possible Types: char *, char, unsigned int, unsigned long long
    unsigned long long v1;  // [bp-0xe8]
    void* v2;  // [bp-0xe0], Other Possible Types: unsigned long
    unsigned long long v3;  // [bp-0xd8]
    char v4;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0xc0]
    void* v6;  // [bp-0xb8], Other Possible Types: char *
    char v7;  // [bp-0xb0], Other Possible Types: unsigned long long
    void* v8;  // [bp-0xa8]
    char v9;  // [bp-0x98]
    char v10;  // [bp-0x70]
    unsigned long long v11;  // [bp-0x58]
    unsigned long long v12;  // [bp-0x50]
    void* v13;  // [bp-0x48]
    unsigned long long v14;  // [bp-0x40]
    unsigned long long v15;  // [bp-0x38]
    struct_0 *v17;  // rax
    unsigned long long v18;  // r12
    unsigned long long v19;  // rax
    unsigned long long v20;  // r15
    unsigned long long v21;  // r15
    unsigned long long v22;  // rdx
    unsigned long long v23;  // r14
    unsigned long long v24;  // r15
    unsigned long long v25;  // r15
    unsigned long v26;  // r15
    char *v27;  // r14
    unsigned long long v28;  // rsi
    unsigned long long v29;  // rdx
    unsigned int v30;  // ebp

    v14 = a2;
    v15 = a3;
    v17 = a2.for_name(a3);
    if (v17 && (v17->field_10 & 2))
    {
        v18 = a2 + a3 * 4;
        if (a2.eq_by(v18, "PWDsrc/env/environment.rsCDPATH", "src/env/environment.rsCDPATH"))
        {
            fish::builtins::fish_indent::fish_indent::{{closure}}(&v4, a1->field_8, a1->field_10);
            return a0.new(&v4, 1);
        }
        else if (a2.eq_by(v18, "historyifnotorprintfpwdrandomreturnsetset_colorsourcestatusswitchulimitwhileP", "ifnotorprintfpwdrandomreturnsetset_colorsourcestatusswitchulimitwhileP"))
        {
            v19 = std::thread::local::LocalKey<T>::with();
            v17 = std::sync::once_lock::OnceLock<T>::get();
            if (!v17)
                fish::threads::main_thread_id::init_not_called(); /* do not return */
            if (v19 == v17->field_0)
            {
                fish::reader::commandline_get_state(&v4, 1);
                v20 = *((long long *)&v10);
                if (!*((long long *)&v10))
                    v20 = fish::env::environment_impl::EnvScopedImpl::try_get_computed::{{closure}}(a1);
                v3 = v20;
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v7);
                core::ptr::drop_in_place<core::option::Option<fish::path::BaseDirectory>>(&v9);
                v4.get_history(v20 + 16);
                v0.new_from_name_vec("h", 7, &v4);
                *((unsigned long *)&a0[16]) = v2;
                *((int128_t *)a0) = *((int128_t *)&v0);
                return core::ptr::drop_in_place<alloc::sync::Arc<fish::history::History>>(&v3);
            }
        }
        else if (a2.eq_by(v18, "fish_killringpipestatusstatus_generationumask", "pipestatusstatus_generationumask"))
        {
            fish::kill::kill_entries(&v4);
            return a0.new_from_name_vec("f", 13, &v4);
        }
        else if (a2.eq_by(v18, "pipestatusstatus_generationumask", "status_generationumask"))
        {
            v21 = a1->field_28;
            v11 = v21.with_capacity_in(8, 24, &g_14d6920);
            v12 = v22;
            v13 = 0;
            if (!v21)
                return a0.new_from_name_vec("p", 10, &v11);
            v23 = a1->field_20;
            v24 = v21 * 4;
            do
            {
                v25 = v24;
                v4.to_wstring(v23);
                v11.push(&v4, &g_14d6938);
                v23 += 4;
                v26 = v25 - 4;
                v24 = v26;
            } while (v25 != 4);
            return a0.new_from_name_vec("p", 10, &v11);
        }
        else if (a2.eq_by(v18, "statusswitchulimitwhileP", "switchulimitwhileP"))
        {
            v4.to_wstring(&a1->padding_30);
            return a0.new_from_name("s", 6, &v4);
        }
        else
        {
            if (a2.eq_by(v18, "status_generationumask", "umask"))
            {
                v0 = fish::reader::reader_status_count();
                v27 = &(char)v4;
                (char)v4.to_wstring(&v0);
                v28 = "s";
                v29 = 17;
            }
            else if (a2.eq_by(v18, "fish_kill_signalback_color_eraseMessage too longNo route to hostRoot source treeVisa dolda filerSortera ej filerZeichensatz fettVersion anzeigenUtiliser dselectRenames a remoteCreate a packageShow differencesPanne de courant                l", "back_color_eraseMessage too longNo route to hostRoot source treeVisa dolda filerSortera ej filerZeichensatz fettVersion anzeigenUtiliser dselectRenames a remoteCreate a packageShow differencesPanne de courant                l"))
            {
                v0 = a1->field_34;
                v27 = &(char)v4;
                (char)v4.to_wstring(&v0);
                v28 = "f";
                v29 = 16;
            }
            else if (a2.eq_by(v18, "umask", &g_a16015))
            {
                v30 = fish::nix::umask(18);
                if (v30 != 18)
                    fish::nix::umask(v5);
                v0 = 0;
                v1 = 4;
                v2 = 0;
                v4 = 4;
                v5 = v30;
                fish_printf::printf_impl::sprintf_locale(&(char)v3, &v0, "0%0.3oUnrecognized computed var name ", 6, &v4, 1);
                (char)v3.unwrap(&g_14d6908);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v4);
                memcpy(&v4, &v0, 16);
                v6 = 0;
                return a0.new_from_name("u", 5, &v4);
            }
            else
            {
                v0 = &v14;
                v1 = <&T as core::fmt::Display>::fmt;
                v4 = &g_14d68e0;
                v5 = 1;
                v8 = 0;
                v6 = &v0;
                v7 = 1;
                core::panicking::panic_fmt(&v4, &g_14d68f0); /* do not return */
            }
            return a0.new_from_name(v28, v29, v27);
        }
    }
    *((unsigned long long *)a0) = 0;
    return v17;
}
