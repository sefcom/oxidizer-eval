fn starship::bug_report::get_shell_version(a1: i64, a2: i64) -> : struct24 {
    let a0: u64;  // rdi
    let v0: Option<struct48>;  // [bp-0x50]

    v0 = starship::utils::exec_cmd(a1, a2, (<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "powershell") ? "(Get-Host | Select Version | Format-Table -HideTableHeaders | Out-String).trim()" : "--version"));
    core::option::Option<T>::map_or_else(a0, &v0);
    return;
}
