long long uu_shred::uu_app::h7dccf86ad4ded41c(unsigned long long a0, unsigned long a1, unsigned long a2)
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

    clap_builder::builder::command::Command::new::h1c1f50a4fc4b811c(&v8, uucore::util_name::h412db5e565a079f3(), v20);
    clap_builder::builder::command::Command::version::h902b78ce46718dd4(&v13, &v8, "0.0.28", 6);
    clap_builder::builder::command::Command::about::h0739336ece53e43a(&v8, &v13, "Overwrite the specified FILE(s) repeatedly, in order to make it harder for even\nvery expensive hardware probing to recover the data.", 132);
    clap_builder::builder::command::Command::after_help::h8fc4b9185023325e(&v13, &v8, "Delete FILE(s) if --remove (-u) is specified.  The default is not to remove\nthe files because it is common to operate on device files like /dev/hda, and\nthose files usually should not be removed.\n\nCAUTION: Note that shred relies on a very important assumption: that the file\nsystem overwrites data in place.  This is the traditional way to do things, but\nmany modern file system designs do not satisfy this assumption.  The following\nare examples of file systems on which shred is not effective, or is not\nguaranteed to be effective in all file system modes:\n\n * log-structured or journal file systems, such as those supplied with\n   AIX and Solaris (and JFS, ReiserFS, XFS, Ext3, etc.)\n\n * file systems that write redundant data and carry on even if some writes\n   fail, such as RAID-based file systems\n\n * file systems that make snapshots, such as Network Appliance's NFS server\n\n * file systems that cache in temporary locations, such as NFS\n   version 3 clients\n\n * compressed file systems\n\nIn the case of ext3 file syst", 1628);
    uucore::format_usage::h00b69bae12d8ac9c(&v0, "{} [OPTION]... FILE...", 22);
    clap_builder::builder::command::Command::override_usage::h005fe299e3cbfe82(&v8, &v13, &v0);
    memcpy(&v13, &v8, 700);
    v14 = 549755814016 | *((long long *)&v11);
    v15 = *((int *)&v12);
    clap_builder::builder::arg::Arg::new::h1e76392b8cfea15f(&v8, "force", 5);
    clap_builder::builder::arg::Arg::long::h188a82407cca4815(&v0, &v8, "force", 5);
    clap_builder::builder::arg::Arg::short::hd93bb5740215c017(&v8, &v0, 102);
    clap_builder::builder::arg::Arg::help::hb2d5c0c2fb6b9f95(&v0, &v8, "change permissions to allow writing if necessary", 48);
    clap_builder::builder::arg::Arg::action::h550aedac93af4aa6(&v16, &v0, 2);
    clap_builder::builder::command::Command::arg::h72ffd9b209db53a4(&v8, &v13, &v16);
    clap_builder::builder::arg::Arg::new::h1e76392b8cfea15f(&v13, "iterations", 10);
    clap_builder::builder::arg::Arg::long::h188a82407cca4815(&v0, &v13, "iterations", 10);
    clap_builder::builder::arg::Arg::short::hd93bb5740215c017(&v13, &v0, 110);
    clap_builder::builder::arg::Arg::help::hb2d5c0c2fb6b9f95(&v0, &v13, "overwrite N times instead of the default (3)", 44);
    clap_builder::builder::arg::Arg::value_name::hb05f1051e146e89b(&v13, &v0, "NUMBER", 6);
    clap_builder::builder::arg::Arg::default_value::hff2ab324937c81a5(&v0, &v13, v20);
    clap_builder::builder::command::Command::arg::h72ffd9b209db53a4(&v13, &v8, &v0);
    clap_builder::builder::arg::Arg::new::h1e76392b8cfea15f(&v8, "sizei128", 4);
    clap_builder::builder::arg::Arg::long::h188a82407cca4815(&v0, &v8, "sizei128", 4);
    clap_builder::builder::arg::Arg::short::hd93bb5740215c017(&v8, &v0, 115);
    clap_builder::builder::arg::Arg::value_name::hb05f1051e146e89b(&v0, &v8, "N", 1);
    clap_builder::builder::arg::Arg::help::hb2d5c0c2fb6b9f95(&v16, &v0, "shred this many bytes (suffixes like K, M, G accepted)", 54);
    clap_builder::builder::command::Command::arg::h72ffd9b209db53a4(&v8, &v13, &v16);
    clap_builder::builder::arg::Arg::new::h1e76392b8cfea15f(&v13, "u", 1);
    clap_builder::builder::arg::Arg::short::hd93bb5740215c017(&v0, &v13, 117);
    clap_builder::builder::arg::Arg::help::hb2d5c0c2fb6b9f95(&v13, &v0, "deallocate and remove file after overwriting", 44);
    clap_builder::builder::arg::Arg::action::h550aedac93af4aa6(&v0, &v13, 2);
    clap_builder::builder::command::Command::arg::h72ffd9b209db53a4(&v13, &v8, &v0);
    clap_builder::builder::arg::Arg::new::h1e76392b8cfea15f(&v8, "remove", 6);
    clap_builder::builder::arg::Arg::long::h188a82407cca4815(&v0, &v8, "remove", 6);
    clap_builder::builder::arg::Arg::value_name::hb05f1051e146e89b(&v8, &v0, "HOW", 3);
    v0 = "unlink";
    v1 = 6;
    v2 = "wipe";
    v3 = 4;
    v4 = "wipesync";
    v5 = 8;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h20d2a99357e44985(&v16, &v0);
    clap_builder::builder::arg::Arg::value_parser::hc6d2d30f386bd944(&v0, &v8, &v16);
    v16 = 0;
    v17 = 1;
    v18 = 0;
    clap_builder::builder::arg::Arg::num_args::h074b7afb63269d64(&v8, &v0, &v16);
    memcpy(&v0, &v8, 584);
    v6 = 128 | *((int *)&v9);
    v7 = *((int *)&v10);
    clap_builder::builder::arg::Arg::default_missing_value::h38920156578320db(&v8, &v0, v20);
    clap_builder::builder::arg::Arg::help::hb2d5c0c2fb6b9f95(&v0, &v8, "like -u but give control on HOW to delete;  See below", 53);
    clap_builder::builder::arg::Arg::action::h550aedac93af4aa6(&v16, &v0, 0);
    clap_builder::builder::command::Command::arg::h72ffd9b209db53a4(&v8, &v13, &v16);
    clap_builder::builder::arg::Arg::new::h1e76392b8cfea15f(&v13, "verbose", 7);
    clap_builder::builder::arg::Arg::long::h188a82407cca4815(&v0, &v13, "verbose", 7);
    clap_builder::builder::arg::Arg::short::hd93bb5740215c017(&v13, &v0, 118);
    clap_builder::builder::arg::Arg::help::hb2d5c0c2fb6b9f95(&v0, &v13, "show progress", 13);
    clap_builder::builder::arg::Arg::action::h550aedac93af4aa6(&v16, &v0, 2);
    clap_builder::builder::command::Command::arg::h72ffd9b209db53a4(&v13, &v8, &v16);
    clap_builder::builder::arg::Arg::new::h1e76392b8cfea15f(&v8, "exact", 5);
    clap_builder::builder::arg::Arg::long::h188a82407cca4815(&v0, &v8, "exact", 5);
    clap_builder::builder::arg::Arg::short::hd93bb5740215c017(&v8, &v0, 120);
    clap_builder::builder::arg::Arg::help::hb2d5c0c2fb6b9f95(&v0, &v8, "do not round file sizes up to the next full block;\nthis is the default for non-regular files", 92);
    clap_builder::builder::arg::Arg::action::h550aedac93af4aa6(&v16, &v0, 2);
    clap_builder::builder::command::Command::arg::h72ffd9b209db53a4(&v8, &v13, &v16);
    clap_builder::builder::arg::Arg::new::h1e76392b8cfea15f(&v13, "zero", 4);
    clap_builder::builder::arg::Arg::long::h188a82407cca4815(&v0, &v13, "zero", 4);
    clap_builder::builder::arg::Arg::short::hd93bb5740215c017(&v13, &v0, 122);
    clap_builder::builder::arg::Arg::help::hb2d5c0c2fb6b9f95(&v0, &v13, "add a final overwrite with zeros to hide shredding: invalid file size: \n", 50);
    clap_builder::builder::arg::Arg::action::h550aedac93af4aa6(&v16, &v0, 2);
    clap_builder::builder::command::Command::arg::h72ffd9b209db53a4(&v13, &v8, &v16);
    clap_builder::builder::arg::Arg::new::h1e76392b8cfea15f(&v8, "file", 4);
    clap_builder::builder::arg::Arg::action::h550aedac93af4aa6(&v0, &v8, 1);
    clap_builder::builder::arg::Arg::value_hint::hb191c372b2cf0584(&v8, &v0, 3);
    clap_builder::builder::command::Command::arg::h72ffd9b209db53a4(a0, &v13, &v8);
    return a0;
}
