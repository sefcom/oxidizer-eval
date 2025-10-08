long long uu_chroot::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab0]
    unsigned int v1;  // [bp-0x838]
    unsigned int v2;  // [bp-0x834]
    unsigned int v3;  // [bp-0x7f4]
    unsigned long v4;  // [bp-0x7f0]
    char v5;  // [bp-0x7e8]
    unsigned int v6;  // [bp-0x570]
    unsigned int v7;  // [bp-0x56c]
    char v8;  // [bp-0x568]
    unsigned int v9;  // [bp-0x2ac]
    unsigned long long v10;  // [bp-0x2a8]
    char v11;  // [bp-0x2a0]
    unsigned long long v14;  // rdx

    v8.new(uucore::util_name(), v14);
    v0.version(&v8);
    v8.about(&v0);
    uucore::format_usage(&v5, "{} [OPTION]... NEWROOT [COMMAND [ARG]...]: \nsrc/uu/chroot/src/chroot.rs", 41);
    v0.override_usage(&v8, &v5);
    memcpy(&v8, &v0, 700);
    v9 = 160 | v3;
    v10 = 128 | v4;
    v0.new("newrootgroupsskip-chdir(uutils coreutils) 0.0.30Comma-separated list of groups to switch toColon-separated user and group to switch to.USER:GROUPUse this option to not change the working directory to / after changing the root directory to newroot, i.e., in", 7);
    v5.value_hint(&v0, 4);
    memcpy(&v0, &v5, 632);
    v1 = v6 | 5;
    v2 = v7;
    v5.index(&v0, 1);
    v0.arg(&v8, &v5);
    v8.new("groupsskip-chdir(uutils coreutils) 0.0.30Comma-separated list of groups to switch toColon-separated user and group to switch to.USER:GROUPUse this option to not change the working directory to / after changing the root directory to newroot, i.e., inside th", 6);
    v5.long(&v8, "groupsskip-chdir(uutils coreutils) 0.0.30Comma-separated list of groups to switch toColon-separated user and group to switch to.USER:GROUPUse this option to not change the working directory to / after changing the root directory to newroot, i.e., inside th", 6);
    v8.overrides_with(&v5);
    v5.help(&v8, "Comma-separated list of groups to switch toColon-separated user and group to switch to.USER:GROUPUse this option to not change the working directory to / after changing the root directory to newroot, i.e., inside the chroot.command/CannotEnterCommandFailed", 43);
    v11.value_name(&v5, "GROUP1,GROUP2...", 16);
    v8.arg(&v0, &v11);
    v0.new("userspec\n       ", 8);
    v5.long(&v0, "userspec\n       ", 8);
    v0.help(&v5, "Colon-separated user and group to switch to.USER:GROUPUse this option to not change the working directory to / after changing the root directory to newroot, i.e., inside the chroot.command/CannotEnterCommandFailedCommandNotFoundGroupsParsingFailedInvalidGr", 44);
    v5.value_name(&v0, "USER:GROUPUse this option to not change the working directory to / after changing the root directory to newroot, i.e., inside the chroot.command/CannotEnterCommandFailedCommandNotFoundGroupsParsingFailedInvalidGroupMissingNewRootNoSuchUserNoSuchGroupNoSuch", 10);
    v0.arg(&v8, &v5);
    v8.new("skip-chdir(uutils coreutils) 0.0.30Comma-separated list of groups to switch toColon-separated user and group to switch to.USER:GROUPUse this option to not change the working directory to / after changing the root directory to newroot, i.e., inside the chro", 10);
    v5.long(&v8, "skip-chdir(uutils coreutils) 0.0.30Comma-separated list of groups to switch toColon-separated user and group to switch to.USER:GROUPUse this option to not change the working directory to / after changing the root directory to newroot, i.e., inside the chro", 10);
    v8.help(&v5, "Use this option to not change the working directory to / after changing the root directory to newroot, i.e., inside the chroot.command/CannotEnterCommandFailedCommandNotFoundGroupsParsingFailedInvalidGroupMissingNewRootNoSuchUserNoSuchGroupNoSuchDirectoryS", 127);
    v5.action(&v8, 2);
    v8.arg(&v0, &v5);
    v0.new("command/CannotEnterCommandFailedCommandNotFoundGroupsParsingFailedInvalidGroupMissingNewRootNoSuchUserNoSuchGroupNoSuchDirectorySetGidFailedSetGroupsFailedSetUserFailedcannot chroot to failed to run command invalid group: invalid group list: Missing operand: NEWROOT\nTry ' --help' for more information.no group specified for unknown uid: ", 7);
    v5.action(&v0, 1);
    v0.value_hint(&v5, 6);
    memcpy(&v5, &v0, 632);
    v6 = v1 | 4;
    v7 = v2;
    v0.index(&v5, 2);
    a0.arg(&v8, &v0);
    return a0;
}
