fn starship::bug_report::get_github_issue_body(a0: i64, a1: &struct177) -> u64 {
    let v35: struct16;  // [bp-0x60]
    let v40: std::io::stdio::Stdout;  // r15
    let v41: u64;  // r12
    let v42: u64;  // r13

    v40 = a1[40] as i64;
    v41 = a1[48] as i64;
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v40, v41, "powershell") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v40, v41, "pwsh") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v40, v41, "fish") {
        v42 = ((<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v40, v41, "cmd") & 255) ? &g_533660 : &g_527344);
    }
    v35 = struct16 {
        field_0: "#### Current Behavior\n<!-- A clear and concise description of the behavior. -->\n\n#### Expected Behavior\n<!-- A clear and concise description of what you expected to happen. -->\n\n#### Additional context/Screenshots\n<!-- Add any other context about the problem here. If applicable, add screenshots to help explain. -->\n\n#### Possible Solution\n<!--- Only if you have suggestions on a fix for the bug -->\n\n#### Environment\n- Starship version: "
        field_8: 17
    };
    return core::option::Option<T>::map_or_else(a0, 0, <alloc::string::String as core::fmt::Display>::fmt, &v35);
}
