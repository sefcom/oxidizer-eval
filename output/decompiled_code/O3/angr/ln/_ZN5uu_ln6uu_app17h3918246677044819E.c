long long uu_ln::uu_app::h3918246677044819(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0xa48]
    char v1;  // [bp-0x800]
    char v2;  // [bp-0x7fc]
    unsigned long long v3;  // [sp-0x78c]
    unsigned int v4;  // [sp-0x784]
    char v5;  // [bp-0x780]
    unsigned int v6;  // [sp-0x538]
    unsigned int v7;  // [sp-0x534]
    char v8;  // [bp-0x530]
    char v9;  // [bp-0x274]
    char v10;  // [bp-0x26c]
    char v11;  // [bp-0x268]
    unsigned long long v13;  // rdx

    clap_builder::builder::command::Command::new::h6a2bd0d851b5584f(&v0, uucore::util_name::h412db5e565a079f3(), v13);
    clap_builder::builder::command::Command::version::hfd1d116be081d479(&v8, &v0, "0.0.28", 6);
    clap_builder::builder::command::Command::about::he28c9ac2ea591326(&v0, &v8, "Make links between files.", 25);
    uucore::format_usage::h00b69bae12d8ac9c(&v5, "{} [OPTION]... [-T] TARGET LINK_NAME\n{} [OPTION]... TARGET\n{} [OPTION]... TARGET... DIRECTORY\n{} [OPTION]... -t DIRECTORY TARGET...", 131);
    clap_builder::builder::command::Command::override_usage::he35711aaa2f2c1b1(&v8, &v0, &v5);
    memcpy(&v0, &v8, 700);
    v3 = 549755814016 | *((long long *)&v9);
    v4 = *((int *)&v10);
    uucore::features::backup_control::arguments::backup::h94d489eabddd6e27(&v5);
    clap_builder::builder::command::Command::arg::hf080b7da7913a874(&v8, &v0, &v5);
    uucore::features::backup_control::arguments::backup_no_args::hb69ce73ec840fc19(&v5);
    clap_builder::builder::command::Command::arg::hf080b7da7913a874(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new::h4b45ee38c117319f(&v8, "force", 5);
    clap_builder::builder::arg::Arg::short::h5bf5fb28da40d578(&v5, &v8, 102);
    clap_builder::builder::arg::Arg::long::hbdb9ea5e7d0dfc16(&v8, &v5, "force", 5);
    clap_builder::builder::arg::Arg::help::h199b69978dd2141d(&v5, &v8, "remove existing destination files", 33);
    clap_builder::builder::arg::Arg::action::hda5f538ab9e5b9ec(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::hf080b7da7913a874(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new::h4b45ee38c117319f(&v0, "interactive", 11);
    clap_builder::builder::arg::Arg::short::h5bf5fb28da40d578(&v5, &v0, 105);
    clap_builder::builder::arg::Arg::long::hbdb9ea5e7d0dfc16(&v0, &v5, "interactive", 11);
    clap_builder::builder::arg::Arg::help::h199b69978dd2141d(&v5, &v0, "prompt whether to remove existing destination files", 51);
    clap_builder::builder::arg::Arg::action::hda5f538ab9e5b9ec(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::hf080b7da7913a874(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::new::h4b45ee38c117319f(&v8, "no-dereference", 14);
    clap_builder::builder::arg::Arg::short::h5bf5fb28da40d578(&v5, &v8, 110);
    clap_builder::builder::arg::Arg::long::hbdb9ea5e7d0dfc16(&v8, &v5, "no-dereference", 14);
    clap_builder::builder::arg::Arg::help::h199b69978dd2141d(&v5, &v8, "treat LINK_NAME as a normal file if it is a symbolic link to a directory", 72);
    clap_builder::builder::arg::Arg::action::hda5f538ab9e5b9ec(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::hf080b7da7913a874(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new::h4b45ee38c117319f(&v0, "logical", 7);
    clap_builder::builder::arg::Arg::short::h5bf5fb28da40d578(&v5, &v0, 76);
    clap_builder::builder::arg::Arg::long::hbdb9ea5e7d0dfc16(&v0, &v5, "logical", 7);
    clap_builder::builder::arg::Arg::help::h199b69978dd2141d(&v5, &v0, "follow TARGETs that are symbolic links", 38);
    clap_builder::builder::arg::Arg::overrides_with::h3d3e2bb9d1e88afa(&v0, &v5, "physical", 8);
    clap_builder::builder::arg::Arg::action::hda5f538ab9e5b9ec(&v5, &v0, 2);
    clap_builder::builder::command::Command::arg::hf080b7da7913a874(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new::h4b45ee38c117319f(&v8, "physical", 8);
    clap_builder::builder::arg::Arg::short::h5bf5fb28da40d578(&v5, &v8, 80);
    clap_builder::builder::arg::Arg::long::hbdb9ea5e7d0dfc16(&v8, &v5, "physical", 8);
    clap_builder::builder::arg::Arg::help::h199b69978dd2141d(&v5, &v8, "make hard links directly to symbolic links", 42);
    clap_builder::builder::arg::Arg::action::hda5f538ab9e5b9ec(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::hf080b7da7913a874(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new::h4b45ee38c117319f(&v0, "symbolic", 8);
    clap_builder::builder::arg::Arg::short::h5bf5fb28da40d578(&v5, &v0, 115);
    clap_builder::builder::arg::Arg::long::hbdb9ea5e7d0dfc16(&v0, &v5, "symbolic", 8);
    clap_builder::builder::arg::Arg::help::h199b69978dd2141d(&v5, &v0, "make symbolic links instead of hard links", 41);
    clap_builder::builder::arg::Arg::overrides_with::h3d3e2bb9d1e88afa(&v0, &v5, "symbolic", 8);
    clap_builder::builder::arg::Arg::action::hda5f538ab9e5b9ec(&v5, &v0, 2);
    clap_builder::builder::command::Command::arg::hf080b7da7913a874(&v0, &v8, &v5);
    uucore::features::backup_control::arguments::suffix::h2f72f755bdb4d605(&v5);
    clap_builder::builder::command::Command::arg::hf080b7da7913a874(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new::h4b45ee38c117319f(&v0, "target-directory", 16);
    clap_builder::builder::arg::Arg::short::h5bf5fb28da40d578(&v5, &v0, 116);
    clap_builder::builder::arg::Arg::long::hbdb9ea5e7d0dfc16(&v0, &v5, "target-directory", 16);
    clap_builder::builder::arg::Arg::help::h199b69978dd2141d(&v5, &v0, "specify the DIRECTORY in which to create the links", 50);
    clap_builder::builder::arg::Arg::value_name::hac24c58e6fa5e0bb(&v0, &v5, v13);
    clap_builder::builder::arg::Arg::value_hint::h48c35f38ad40de97(&v5, &v0, 4);
    clap_builder::builder::arg::Arg::conflicts_with::h1d78d05df52173b3(&v11, &v5, "no-target-directory", 19);
    clap_builder::builder::command::Command::arg::hf080b7da7913a874(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::new::h4b45ee38c117319f(&v8, "no-target-directory", 19);
    clap_builder::builder::arg::Arg::short::h5bf5fb28da40d578(&v5, &v8, 84);
    clap_builder::builder::arg::Arg::long::hbdb9ea5e7d0dfc16(&v8, &v5, "no-target-directory", 19);
    clap_builder::builder::arg::Arg::help::h199b69978dd2141d(&v5, &v8, "treat LINK_NAME as a normal file always", 39);
    clap_builder::builder::arg::Arg::action::hda5f538ab9e5b9ec(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::hf080b7da7913a874(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new::h4b45ee38c117319f(&v0, "relative\n       ", 8);
    clap_builder::builder::arg::Arg::short::h5bf5fb28da40d578(&v5, &v0, 114);
    clap_builder::builder::arg::Arg::long::hbdb9ea5e7d0dfc16(&v0, &v5, "relative\n       ", 8);
    clap_builder::builder::arg::Arg::help::h199b69978dd2141d(&v5, &v0, "create symbolic links relative to link location", 47);
    clap_builder::builder::arg::Arg::requires::h61564fd575e374da(&v0, &v5, "symbolic", 8);
    clap_builder::builder::arg::Arg::action::hda5f538ab9e5b9ec(&v5, &v0, 2);
    clap_builder::builder::command::Command::arg::hf080b7da7913a874(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new::h4b45ee38c117319f(&v8, "verbose", 7);
    clap_builder::builder::arg::Arg::short::h5bf5fb28da40d578(&v5, &v8, 118);
    clap_builder::builder::arg::Arg::long::hbdb9ea5e7d0dfc16(&v8, &v5, "verbose", 7);
    clap_builder::builder::arg::Arg::help::h199b69978dd2141d(&v5, &v8, "print name of each linked file", 30);
    clap_builder::builder::arg::Arg::action::hda5f538ab9e5b9ec(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg::hf080b7da7913a874(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new::h4b45ee38c117319f(&v0, "files", 5);
    clap_builder::builder::arg::Arg::action::hda5f538ab9e5b9ec(&v5, &v0, 1);
    clap_builder::builder::arg::Arg::value_hint::h48c35f38ad40de97(&v0, &v5, 2);
    memcpy(&v5, &v0, 584);
    v6 = *((int *)&v1) | 1;
    v7 = *((int *)&v2);
    clap_builder::builder::arg::Arg::num_args::hcaa6eb045c4e0656(&v0, &v5);
    clap_builder::builder::command::Command::arg::hf080b7da7913a874(a0, &v8, &v0);
    return a0;
}
