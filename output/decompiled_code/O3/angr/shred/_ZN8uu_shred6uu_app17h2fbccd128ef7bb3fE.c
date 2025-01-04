long long uu_shred::uu_app::h2fbccd128ef7bb3f(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0xa48], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xa40]
    unsigned long long v2;  // [sp-0xa38]
    unsigned long long v3;  // [sp-0xa30]
    unsigned long long v4;  // [sp-0xa28]
    unsigned long long v5;  // [sp-0xa20]
    unsigned int v6;  // [sp-0x800]
    unsigned int v7;  // [sp-0x7fc]
    char v8;  // [bp-0x7f8]
    char v9;  // [bp-0x5b0]
    char v10;  // [bp-0x5ac]
    char v11;  // [bp-0x53c]
    char v12;  // [bp-0x534]
    char v13;  // [bp-0x530]
    unsigned long long v14;  // [sp-0x274]
    unsigned int v15;  // [sp-0x26c]
    void* v16;  // [bp-0x268], Other Possible Types: char
    unsigned long long v17;  // [sp-0x260]
    char v18;  // [sp-0x258]
    unsigned long long v20;  // rdx

    clap_builder::builder::command::Command::new::hee9da9b1ef1ec750(&v8, uucore::util_name::h60d842bf27b05e82(), v20);
    clap_builder::builder::command::Command::version::h7783fc680e59f748(&v13, &v8, "0.0.28", 6);
    clap_builder::builder::command::Command::about::he63b06233f612c12(&v8, &v13, "Overwrite the specified FILE(s) repeatedly, in order to make it harder for even\nvery expensive hardware probing to recover the data.", 132);
    clap_builder::builder::command::Command::after_help::hea35ac7759581864(&v13, &v8, "Delete FILE(s) if --remove (-u) is specified.  The default is not to remove\nthe files because it is common to operate on device files like /dev/hda, and\nthose files usually should not be removed.\n\nCAUTION: Note that shred relies on a very important assumption: that the file\nsystem overwrites data in place.  This is the traditional way to do things, but\nmany modern file system designs do not satisfy this assumption.  The following\nare examples of file systems on which shred is not effective, or is not\nguaranteed to be effective in all file system modes:\n\n * log-structured or journal file systems, such as those supplied with\n   AIX and Solaris (and JFS, ReiserFS, XFS, Ext3, etc.)\n\n * file systems that write redundant data and carry on even if some writes\n   fail, such as RAID-based file systems\n\n * file systems that make snapshots, such as Network Appliance's NFS server\n\n * file systems that cache in temporary locations, such as NFS\n   version 3 clients\n\n * compressed file systems\n\nIn the case of ext3 file syst", 1628);
    uucore::format_usage::h76fcb2d15fbabc58(&v0, "{} [OPTION]... FILE...", 22);
    clap_builder::builder::command::Command::override_usage::he58f6dcef1d3e6e0(&v8, &v13, &v0);
    memcpy(&v13, &v8, 700);
    v14 = 549755814016 | *((long long *)&v11);
    v15 = *((int *)&v12);
    clap_builder::builder::arg::Arg::new::h787394f0bdb79a6c(&v8, "force", 5);
    clap_builder::builder::arg::Arg::long::h54af09972f8a2312(&v0, &v8, "force", 5);
    clap_builder::builder::arg::Arg::short::hb5349c0700ed9fae(&v8, &v0, 102);
    clap_builder::builder::arg::Arg::help::h813ebe724b5bbcee(&v0, &v8, "change permissions to allow writing if necessary", 48);
    clap_builder::builder::arg::Arg::action::hd380c8753f077b56(&v16, &v0, 2);
    clap_builder::builder::command::Command::arg::hfc176cf175abe977(&v8, &v13, &v16);
    clap_builder::builder::arg::Arg::new::h787394f0bdb79a6c(&v13, "iterations", 10);
    clap_builder::builder::arg::Arg::long::h54af09972f8a2312(&v0, &v13, "iterations", 10);
    clap_builder::builder::arg::Arg::short::hb5349c0700ed9fae(&v13, &v0, 110);
    clap_builder::builder::arg::Arg::help::h813ebe724b5bbcee(&v0, &v13, "overwrite N times instead of the default (3)", 44);
    clap_builder::builder::arg::Arg::value_name::h30ff45e9fdc7cb00(&v13, &v0, "NUMBER", 6);
    clap_builder::builder::arg::Arg::default_value::hbdbc1878ca5dfd1c(&v0, &v13, v20);
    clap_builder::builder::command::Command::arg::hfc176cf175abe977(&v13, &v8, &v0);
    clap_builder::builder::arg::Arg::new::h787394f0bdb79a6c(&v8, "size", 4);
    clap_builder::builder::arg::Arg::long::h54af09972f8a2312(&v0, &v8, "size", 4);
    clap_builder::builder::arg::Arg::short::hb5349c0700ed9fae(&v8, &v0, 115);
    clap_builder::builder::arg::Arg::value_name::h30ff45e9fdc7cb00(&v0, &v8, "N", 1);
    clap_builder::builder::arg::Arg::help::h813ebe724b5bbcee(&v16, &v0, "shred this many bytes (suffixes like K, M, G accepted)", 54);
    clap_builder::builder::command::Command::arg::hfc176cf175abe977(&v8, &v13, &v16);
    clap_builder::builder::arg::Arg::new::h787394f0bdb79a6c(&v13, "u", 1);
    clap_builder::builder::arg::Arg::short::hb5349c0700ed9fae(&v0, &v13, 117);
    clap_builder::builder::arg::Arg::help::h813ebe724b5bbcee(&v13, &v0, "deallocate and remove file after overwriting", 44);
    clap_builder::builder::arg::Arg::action::hd380c8753f077b56(&v0, &v13, 2);
    clap_builder::builder::command::Command::arg::hfc176cf175abe977(&v13, &v8, &v0);
    clap_builder::builder::arg::Arg::new::h787394f0bdb79a6c(&v8, "remove", 6);
    clap_builder::builder::arg::Arg::long::h54af09972f8a2312(&v0, &v8, "remove", 6);
    clap_builder::builder::arg::Arg::value_name::h30ff45e9fdc7cb00(&v8, &v0, "HOW", 3);
    v0 = "unlink";
    v1 = 6;
    v2 = "wipe";
    v3 = 4;
    v4 = "wipesync";
    v5 = 8;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h635bd80678b3b13f(&v16, &v0);
    clap_builder::builder::arg::Arg::value_parser::he8424d9550ce276c(&v0, &v8, &v16);
    v16 = 0;
    v17 = 1;
    v18 = 0;
    clap_builder::builder::arg::Arg::num_args::h78f1ca1618105ed6(&v8, &v0, &v16);
    memcpy(&v0, &v8, 584);
    v6 = 128 | *((int *)&v9);
    v7 = *((int *)&v10);
    clap_builder::builder::arg::Arg::default_missing_value::hbaf40cb40238d7f8(&v8, &v0, v20);
    clap_builder::builder::arg::Arg::help::h813ebe724b5bbcee(&v0, &v8, "like -u but give control on HOW to delete;  See below", 53);
    clap_builder::builder::arg::Arg::action::hd380c8753f077b56(&v16, &v0, 0);
    clap_builder::builder::command::Command::arg::hfc176cf175abe977(&v8, &v13, &v16);
    clap_builder::builder::arg::Arg::new::h787394f0bdb79a6c(&v13, "verbose", 7);
    clap_builder::builder::arg::Arg::long::h54af09972f8a2312(&v0, &v13, "verbose", 7);
    clap_builder::builder::arg::Arg::short::hb5349c0700ed9fae(&v13, &v0, 118);
    clap_builder::builder::arg::Arg::help::h813ebe724b5bbcee(&v0, &v13, "show progress", 13);
    clap_builder::builder::arg::Arg::action::hd380c8753f077b56(&v16, &v0, 2);
    clap_builder::builder::command::Command::arg::hfc176cf175abe977(&v13, &v8, &v16);
    clap_builder::builder::arg::Arg::new::h787394f0bdb79a6c(&v8, "exact", 5);
    clap_builder::builder::arg::Arg::long::h54af09972f8a2312(&v0, &v8, "exact", 5);
    clap_builder::builder::arg::Arg::short::hb5349c0700ed9fae(&v8, &v0, 120);
    clap_builder::builder::arg::Arg::help::h813ebe724b5bbcee(&v0, &v8, "do not round file sizes up to the next full block;\nthis is the default for non-regular files", 92);
    clap_builder::builder::arg::Arg::action::hd380c8753f077b56(&v16, &v0, 2);
    clap_builder::builder::command::Command::arg::hfc176cf175abe977(&v8, &v13, &v16);
    clap_builder::builder::arg::Arg::new::h787394f0bdb79a6c(&v13, "zero", 4);
    clap_builder::builder::arg::Arg::long::h54af09972f8a2312(&v0, &v13, "zero", 4);
    clap_builder::builder::arg::Arg::short::hb5349c0700ed9fae(&v13, &v0, 122);
    clap_builder::builder::arg::Arg::help::h813ebe724b5bbcee(&v0, &v13, "add a final overwrite with zeros to hide shredding: invalid file size: \n", 50);
    clap_builder::builder::arg::Arg::action::hd380c8753f077b56(&v16, &v0, 2);
    clap_builder::builder::command::Command::arg::hfc176cf175abe977(&v13, &v8, &v16);
    clap_builder::builder::arg::Arg::new::h787394f0bdb79a6c(&v8, "filei128", 4);
    clap_builder::builder::arg::Arg::action::hd380c8753f077b56(&v0, &v8, 1);
    clap_builder::builder::arg::Arg::value_hint::hfa864e063b6c31fd(&v8, &v0, 3);
    clap_builder::builder::command::Command::arg::hfc176cf175abe977(a0, &v13, &v8);
    return a0;
}
