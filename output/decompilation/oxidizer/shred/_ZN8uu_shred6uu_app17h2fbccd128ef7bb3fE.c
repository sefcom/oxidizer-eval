fn uu_shred::uu_app(a0: &struct712) -> u64 {
    let v0: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct24, struct48
    let v1: i32;  // [sp-0x800]
    let v2: i32;  // [sp-0x7fc]
    let v3: i5696;  // [sp-0x7f8], Other Possible Types: struct592, struct712, struct437
    let v4: i4736;  // [sp-0x530], Other Possible Types: struct592, struct712
    let v5: i64;  // [sp-0x274]
    let v6: i32;  // [sp-0x26c]
    let v7: i4736;  // [sp-0x268], Other Possible Types: struct592, struct24, struct17
    let v9: i64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    v4 = clap_builder::builder::command::Command::version(&v3, "0.0.28");
    v3 = clap_builder::builder::command::Command::about(&v4, "Overwrite the specified FILE(s) repeatedly, in order to make it harder for even\nvery expensive hardware probing to recover the data.");
    v4 = clap_builder::builder::command::Command::after_help(&v3, "Delete FILE(s) if --remove (-u) is specified.  The default is not to remove\nthe files because it is common to operate on device files like /dev/hda, and\nthose files usually should not be removed.\n\nCAUTION: Note that shred relies on a very important assumption: that the file\nsystem overwrites data in place.  This is the traditional way to do things, but\nmany modern file system designs do not satisfy this assumption.  The following\nare examples of file systems on which shred is not effective, or is not\nguaranteed to be effective in all file system modes:\n\n * log-structured or journal file systems, such as those supplied with\n   AIX and Solaris (and JFS, ReiserFS, XFS, Ext3, etc.)\n\n * file systems that write redundant data and carry on even if some writes\n   fail, such as RAID-based file systems\n\n * file systems that make snapshots, such as Network Appliance's NFS server\n\n * file systems that cache in temporary locations, such as NFS\n   version 3 clients\n\n * compressed file systems\n\nIn the case of ext3 file systems, the above disclaimer applies (and shred is\nthus of limited effectiveness) only in data=journal mode, which journals file\ndata in addition to just metadata.  In both the data=ordered (default) and\ndata=writeback modes, shred works as usual. Ext3 journal modes can be changed\nby adding the data=something option to the mount options for a particular\nfile system in the /etc/fstab file, as documented in the mount man page (man\nmount).\n\nIn addition, file system backups and remote mirrors may contain copies of\nthe file that cannot be removed, and that will allow a shredded file to be\nrecovered later.");
    v0 = uucore::format_usage("{} [OPTION]... FILE...");
    v3 = clap_builder::builder::command::Command::override_usage(&v4, &v0);
    memcpy(&v4, &v3, 700);
    v5 = 549755814016 | *((&v3 as &char + 700) as &i64);
    v6 = *((&v3 as &char + 708) as &i32);
    v3 = clap_builder::builder::arg::Arg::new("force");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "force");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 0x66);
    v0 = clap_builder::builder::arg::Arg::help(&v3, "change permissions to allow writing if necessary");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("iterations");
    v0 = clap_builder::builder::arg::Arg::long(&v4, "iterations");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 0x6e);
    v0 = clap_builder::builder::arg::Arg::help(&v4, "overwrite N times instead of the default (3)");
    v4 = clap_builder::builder::arg::Arg::value_name(&v0, "NUMBER");
    v0 = clap_builder::builder::arg::Arg::default_value(&v4);
    v4 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("size");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "size");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 0x73);
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, "N");
    v7 = clap_builder::builder::arg::Arg::help(&v0, "shred this many bytes (suffixes like K, M, G accepted)");
    v3 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("u");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 0x75);
    v4 = clap_builder::builder::arg::Arg::help(&v0, "deallocate and remove file after overwriting");
    v0 = clap_builder::builder::arg::Arg::action(&v4, 0x2);
    v4 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("remove");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "remove");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "HOW");
    v0 = struct48 {
        field_0: &g_41ef58
        field_8: 6
        field_16: &g_415818
        field_24: 4
        field_32: &g_415c50
        field_40: 8
    };
    v7 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v0);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v3, &v7);
    v7 = struct17 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    v3 = clap_builder::builder::arg::Arg::num_args(&v0, &v7);
    memcpy(&v0, &v3, 584);
    v1 = 128 | *((&v3 as &char + 584) as &i32);
    v2 = *((&v3 as &char + 588) as &i32);
    v3 = clap_builder::builder::arg::Arg::default_missing_value(&v0);
    v0 = clap_builder::builder::arg::Arg::help(&v3, "like -u but give control on HOW to delete;  See below");
    v7 = clap_builder::builder::arg::Arg::action(&v0, None);
    v3 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("verbose");
    v0 = clap_builder::builder::arg::Arg::long(&v4, "verbose");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 0x76);
    v0 = clap_builder::builder::arg::Arg::help(&v4, "show progress");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v4 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("exact");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "exact");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 0x78);
    v0 = clap_builder::builder::arg::Arg::help(&v3, "do not round file sizes up to the next full block;\nthis is the default for non-regular files");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("zero");
    v0 = clap_builder::builder::arg::Arg::long(&v4, "zero");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 0x7a);
    v0 = clap_builder::builder::arg::Arg::help(&v4, "add a final overwrite with zeros to hide shredding");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v4 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("file");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 0x1);
    v3 = clap_builder::builder::arg::Arg::value_hint(&v0, 0x3);
    clap_builder::builder::command::Command::arg(a0, &v4, &v3);
    return a0;
}
