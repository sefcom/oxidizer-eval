fn uu_shred::uu_app(a0: &struct712) -> long long {
    let v0: struct48;  // [bp-0xa48], Other Possible Types: u8
    let v1: u32;  // [bp-0x800]
    let v2: u32;  // [bp-0x7fc]
    let v3: struct437;  // [bp-0x7f8]
    let v4: u32;  // [bp-0x5b0]
    let v5: i8;  // [bp-0x5ac]
    let v6: u64;  // [bp-0x53c]
    let v7: u32;  // [bp-0x534]
    let v8: u8;  // [bp-0x530]
    let v9: u64;  // [bp-0x274]
    let v10: u32;  // [bp-0x26c]
    let v11: struct24;  // [bp-0x268], Other Possible Types: u8
    let v14: u64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v14);
    clap_builder::builder::command::Command::version(&v8, &v3, "0.0.28");
    clap_builder::builder::command::Command::about(&v3, &v8, "Overwrite the specified FILE(s) repeatedly, in order to make it harder for even\nvery expensive hardware probing to recover the data.");
    clap_builder::builder::command::Command::after_help(&v8, &v3, "Delete FILE(s) if --remove (-u) is specified.  The default is not to remove\nthe files because it is common to operate on device files like /dev/hda, and\nthose files usually should not be removed.\n\nCAUTION: Note that shred relies on a very important assumption: that the file\nsystem overwrites data in place.  This is the traditional way to do things, but\nmany modern file system designs do not satisfy this assumption.  The following\nare examples of file systems on which shred is not effective, or is not\nguaranteed to be effective in all file system modes:\n\n * log-structured or journal file systems, such as those supplied with\n   AIX and Solaris (and JFS, ReiserFS, XFS, Ext3, etc.)\n\n * file systems that write redundant data and carry on even if some writes\n   fail, such as RAID-based file systems\n\n * file systems that make snapshots, such as Network Appliance's NFS server\n\n * file systems that cache in temporary locations, such as NFS\n   version 3 clients\n\n * compressed file systems\n\nIn the case of ext3 file systems, the above disclaimer applies (and shred is\nthus of limited effectiveness) only in data=journal mode, which journals file\ndata in addition to just metadata.  In both the data=ordered (default) and\ndata=writeback modes, shred works as usual. Ext3 journal modes can be changed\nby adding the data=something option to the mount options for a particular\nfile system in the /etc/fstab file, as documented in the mount man page (man\nmount).\n\nIn addition, file system backups and remote mirrors may contain copies of\nthe file that cannot be removed, and that will allow a shredded file to be\nrecovered later.");
    uucore::format_usage(&v0, "{} [OPTION]... FILE...");
    clap_builder::builder::command::Command::override_usage(&v3, &v8, &v0);
    memcpy(&v8, &v3, 700);
    v9 = 549755814016 | v6;
    v10 = v7;
    clap_builder::builder::arg::Arg::new(&v3, "force");
    clap_builder::builder::arg::Arg::long(&v0, &v3, "force");
    clap_builder::builder::arg::Arg::short(&v3, &v0, 102);
    clap_builder::builder::arg::Arg::help(&v0, &v3, "change permissions to allow writing if necessary");
    clap_builder::builder::arg::Arg::action(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "iterations");
    clap_builder::builder::arg::Arg::long(&v0, &v8, "iterations");
    clap_builder::builder::arg::Arg::short(&v8, &v0, 110);
    clap_builder::builder::arg::Arg::help(&v0, &v8, "overwrite N times instead of the default (3)");
    clap_builder::builder::arg::Arg::value_name(&v8, &v0, "NUMBER");
    clap_builder::builder::arg::Arg::default_value(&v0, &v8);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new(&v3, "size");
    clap_builder::builder::arg::Arg::long(&v0, &v3, "size");
    clap_builder::builder::arg::Arg::short(&v3, &v0, 115);
    clap_builder::builder::arg::Arg::value_name(&v0, &v3, "N");
    clap_builder::builder::arg::Arg::help(&v11, &v0, "shred this many bytes (suffixes like K, M, G accepted)");
    clap_builder::builder::command::Command::arg(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "u");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 117);
    clap_builder::builder::arg::Arg::help(&v8, &v0, "deallocate and remove file after overwriting");
    clap_builder::builder::arg::Arg::action(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new(&v3, "remove");
    clap_builder::builder::arg::Arg::long(&v0, &v3, "remove");
    clap_builder::builder::arg::Arg::value_name(&v3, &v0, "HOW");
    v0 = struct48 {
        field_0: &g_41ef58
        field_8: 6
        field_16: &g_415818
        field_24: 4
        field_32: &g_415c50
        field_40: 8
    };
    v11 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v0);
    clap_builder::builder::arg::Arg::value_parser(&v0, &v3, &v11);
    v11 = struct24 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    v11 = struct17 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    clap_builder::builder::arg::Arg::num_args(&v3, &v0, &v11);
    memcpy(&v0, &v3, 584);
    v1 = 128 | v4;
    v2 = *(&v5 as &i32);
    clap_builder::builder::arg::Arg::default_missing_value(&v3, &v0);
    clap_builder::builder::arg::Arg::help(&v0, &v3, "like -u but give control on HOW to delete;  See below");
    clap_builder::builder::arg::Arg::action(&v11, &v0, 0);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "verbose");
    clap_builder::builder::arg::Arg::long(&v0, &v8, "verbose");
    clap_builder::builder::arg::Arg::short(&v8, &v0, 118);
    clap_builder::builder::arg::Arg::help(&v0, &v8, "show progress");
    clap_builder::builder::arg::Arg::action(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new(&v3, "exact");
    clap_builder::builder::arg::Arg::long(&v0, &v3, "exact");
    clap_builder::builder::arg::Arg::short(&v3, &v0, 120);
    clap_builder::builder::arg::Arg::help(&v0, &v3, "do not round file sizes up to the next full block;\nthis is the default for non-regular files");
    clap_builder::builder::arg::Arg::action(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "zero");
    clap_builder::builder::arg::Arg::long(&v0, &v8, "zero");
    clap_builder::builder::arg::Arg::short(&v8, &v0, 122);
    clap_builder::builder::arg::Arg::help(&v0, &v8, "add a final overwrite with zeros to hide shredding");
    clap_builder::builder::arg::Arg::action(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new(&v3, "file");
    clap_builder::builder::arg::Arg::action(&v0, &v3, 1);
    clap_builder::builder::arg::Arg::value_hint(&v3, &v0, 3);
    clap_builder::builder::command::Command::arg(a0, &v8, &v3);
    return a0;
}
