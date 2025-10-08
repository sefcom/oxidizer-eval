fn just::signal_handler::SignalHandler::interrupt(a0: i64, a1: u32) -> long long {
    let v0: u32;  // [bp-0xbc]
    let v1: alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>;  // [bp-0xa8]
    let v3: struct81;  // rax
    let v4: struct16;  // rcx
    let v6: core::option::Option<(&std::ffi::os_str::OsString, &core::option::Option<std::ffi::os_str::OsString>)>;  // rax

    v3 = *((a0 + 16) as &i64);
    if !v3 {
        std::process::exit(just::signal::Signal::code(a1)); /* do not return */
    }
    if !*((a0 + 24) as &i32) {
        *((a0 + 24) as &u32) = a1;
        if a1 <= 3 {
            return v3;
        }
    } else if a1 <= 3 {
        return v3;
    }
    v4 = *(a0 as &i64);
    v1 = alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>> {
        range: alloc::collections::btree::navigate::LazyLeafRange<alloc::collections::btree::node::marker::Immut, std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>> {
            front: (v4) as u8 as u64
            back: v4
        }
        length: <UNKNOWN>
    };
    v6 = <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v1) as u64;
    if !v6 {
        return v6;
    } else if *((a0 + 28) as &i8) > 1 {
        do {
            v0 = *(v6 as &i32);
            eprintln!("just: sending SIGTERM to child process {}", &v0);
            nix::sys::signal::kill(v0);
            v6 = <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v1) as u64;
        } while (v6);
        return v6;
    } else {
        do {
            nix::sys::signal::kill(*(v6 as &i32));
            v6 = <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v1) as u64;
        } while (v6);
        return v6;
    }
}
