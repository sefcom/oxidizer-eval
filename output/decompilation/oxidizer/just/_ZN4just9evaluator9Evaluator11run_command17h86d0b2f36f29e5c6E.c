fn just::evaluator::Evaluator::run_command(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> : struct24 {
    let a0: u64;  // rdi
    let v0: i64;  // [bp-0x208]
    let v1: u64;  // [bp-0x200]
    let v2: struct17;  // [bp-0x1f0], Other Possible Types: struct224, struct16, struct8
    let v3: struct24;  // [bp-0x110]
    let v5: void*;  // r12

    v5 = *((a1 + 16) as &i64);
    v1 = v5 + 168;
    v0 = *(a1 as &i64);
    v2 = just::settings::Settings::shell_command(v5 + 168, *(a1 as &i64));
    v2 = std::process::Command::arg(a2, a3);
    v2 = std::process::Command::args(a4, a5);
    v3 = just::execution_context::ExecutionContext::working_directory(v5, *((a1 + 24) as &i64));
    v2 = std::process::Command::current_dir(&v3);
    <std::process::Command as just::command_ext::CommandExt>::export(&v2, v1, *((a1 + 8) as &i64), a1 + 40, v5 + 568);
    v2 = std::process::Command::stdin(None);
    v2 = std::process::Command::stderr(!*((v0 + 423) as &i8));
    v2 = std::process::Command::stdout(0x2);
    memcpy(&v3, &v2, 224);
    <std::process::Command as just::command_ext::CommandExt>::output_guard_stdout(a0, &v3);
    return;
}
