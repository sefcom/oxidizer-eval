long long uu_hashsum::uu_app_common::hc4ab8b829551c4d6(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0xa48]
    char v1;  // [bp-0x7f8]
    unsigned long long v2;  // [sp-0x53c]
    unsigned int v3;  // [sp-0x534]
    char v4;  // [bp-0x530]
    char v5;  // [bp-0x274]
    char v6;  // [bp-0x26c]
    char v7;  // [bp-0x268], Other Possible Types: unsigned long long
    unsigned long long v9;  // rdx

    clap_builder::builder::command::Command::new::hb4dd17da0a5deda0(&v1, uucore::util_name::h412db5e565a079f3(), v9);
    clap_builder::builder::command::Command::version::h75114dc1dc86c44b(&v4, &v1, "0.0.28Compute and check message digests.{} [OPTIONS] [FILE]...binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon", 6);
    clap_builder::builder::command::Command::about::h01046bb91963cdac(&v1, &v4, "Compute and check message digests.{} [OPTIONS] [FILE]...binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't out", 34);
    uucore::format_usage::h00b69bae12d8ac9c(&v0, "{} [OPTIONS] [FILE]...binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows su", 22);
    clap_builder::builder::command::Command::override_usage::h6f5b7a03a230e607(&v4, &v1, &v0);
    memcpy(&v1, &v4, 700);
    v2 = 584115552392 | *((long long *)&v5);
    v3 = *((int *)&v6);
    clap_builder::builder::arg::Arg::new::h3163ce3d365dc429(&v4, "binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-ze", 6);
    clap_builder::builder::arg::Arg::short::hd69054e977c6d1cc(&v0, &v4, 98);
    clap_builder::builder::arg::Arg::long::hd77b2712e1966476(&v4, &v0, "binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-ze", 6);
    clap_builder::builder::arg::Arg::help::h9bc591f29c12320a(&v0, &v4, "read in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for", 19);
    clap_builder::builder::arg::Arg::action::h55cf0d5256076143(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg::h7218bb30983cd776(&v4, &v1, &v7);
    clap_builder::builder::arg::Arg::new::h3163ce3d365dc429(&v1, "checkread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatt", 5);
    clap_builder::builder::arg::Arg::short::hd69054e977c6d1cc(&v0, &v1, 99);
    clap_builder::builder::arg::Arg::long::hd77b2712e1966476(&v1, &v0, "checkread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatt", 5);
    clap_builder::builder::arg::Arg::help::h9bc591f29c12320a(&v0, &v1, "read hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatted ch", 43);
    clap_builder::builder::arg::Arg::action::h55cf0d5256076143(&v1, &v0, 2);
    clap_builder::builder::arg::Arg::conflicts_with::h7258005867ec5978(&v0, &v1, "tagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or rep", 3);
    clap_builder::builder::command::Command::arg::h7218bb30983cd776(&v1, &v4, &v0);
    clap_builder::builder::arg::Arg::new::h3163ce3d365dc429(&v4, "tagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or rep", 3);
    clap_builder::builder::arg::Arg::long::hd77b2712e1966476(&v0, &v4, "tagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or rep", 3);
    clap_builder::builder::arg::Arg::help::h9bc591f29c12320a(&v4, &v0, "create a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report", 27);
    clap_builder::builder::arg::Arg::action::h55cf0d5256076143(&v0, &v4, 2);
    clap_builder::builder::arg::Arg::conflicts_with::h7258005867ec5978(&v7, &v0, "textSomee", 4);
    clap_builder::builder::command::Command::arg::h7218bb30983cd776(&v4, &v1, &v7);
    clap_builder::builder::arg::Arg::new::h3163ce3d365dc429(&v1, "textSomee", 4);
    clap_builder::builder::arg::Arg::short::hd69054e977c6d1cc(&v0, &v1, 116);
    clap_builder::builder::arg::Arg::long::hd77b2712e1966476(&v1, &v0, "textSomee", 4);
    clap_builder::builder::arg::Arg::help::h9bc591f29c12320a(&v0, &v1, "read in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswa", 27);
    clap_builder::builder::arg::Arg::conflicts_with::h7258005867ec5978(&v1, &v0, "binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-ze", 6);
    clap_builder::builder::arg::Arg::action::h55cf0d5256076143(&v0, &v1, 2);
    clap_builder::builder::command::Command::arg::h7218bb30983cd776(&v1, &v4, &v0);
    clap_builder::builder::arg::Arg::new::h3163ce3d365dc429(&v4, "quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswarn about improperly formatt", 5);
    clap_builder::builder::arg::Arg::short::hd69054e977c6d1cc(&v0, &v4, 113);
    clap_builder::builder::arg::Arg::long::hd77b2712e1966476(&v4, &v0, "quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswarn about improperly formatt", 5);
    clap_builder::builder::arg::Arg::help::h9bc591f29c12320a(&v0, &v4, "don't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswarn about improperly formatted ch", 50);
    clap_builder::builder::arg::Arg::action::h55cf0d5256076143(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg::h7218bb30983cd776(&v4, &v1, &v7);
    clap_builder::builder::arg::Arg::new::h3163ce3d365dc429(&v1, "statusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswarn about improperly formatted checksum linesend each output line with NUL, not new", 6);
    clap_builder::builder::arg::Arg::short::hd69054e977c6d1cc(&v0, &v1, 115);
    clap_builder::builder::arg::Arg::long::hd77b2712e1966476(&v1, &v0, "statusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswarn about improperly formatted checksum linesend each output line with NUL, not new", 6);
    clap_builder::builder::arg::Arg::help::h9bc591f29c12320a(&v0, &v1, "don't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswarn about improperly formatted checksum linesend each output line with NUL, not newlinele", 48);
    clap_builder::builder::arg::Arg::action::h55cf0d5256076143(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg::h7218bb30983cd776(&v1, &v4, &v7);
    clap_builder::builder::arg::Arg::new::h3163ce3d365dc429(&v4, "strictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswarn about improperly formatted checksum linesend each output line with NUL, not newlinelengthdigest length in bits; must not exceed the m", 6);
    clap_builder::builder::arg::Arg::long::hd77b2712e1966476(&v0, &v4, "strictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswarn about improperly formatted checksum linesend each output line with NUL, not newlinelengthdigest length in bits; must not exceed the m", 6);
    clap_builder::builder::arg::Arg::help::h9bc591f29c12320a(&v4, &v0, "exit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswarn about improperly formatted checksum linesend each output line with NUL, not newlinelengthdigest length in bits; must not exceed the max for", 53);
    clap_builder::builder::arg::Arg::action::h55cf0d5256076143(&v0, &v4, 2);
    clap_builder::builder::command::Command::arg::h7218bb30983cd776(&v4, &v1, &v0);
    clap_builder::builder::arg::Arg::new::h3163ce3d365dc429(&v1, "ignore-missingdon't fail or report status for missing fileswarn about improperly formatted checksum linesend each output line with NUL, not newlinelengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8Omit", 14);
    clap_builder::builder::arg::Arg::long::hd77b2712e1966476(&v0, &v1, "ignore-missingdon't fail or report status for missing fileswarn about improperly formatted checksum linesend each output line with NUL, not newlinelengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8Omit", 14);
    clap_builder::builder::arg::Arg::help::h9bc591f29c12320a(&v1, &v0, "don't fail or report status for missing fileswarn about improperly formatted checksum linesend each output line with NUL, not newlinelengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8Omits filenames in", 45);
    clap_builder::builder::arg::Arg::action::h55cf0d5256076143(&v0, &v1, 2);
    clap_builder::builder::command::Command::arg::h7218bb30983cd776(&v1, &v4, &v0);
    clap_builder::builder::arg::Arg::new::h3163ce3d365dc429(&v4, "warnZeroV", 4);
    clap_builder::builder::arg::Arg::short::hd69054e977c6d1cc(&v0, &v4, 119);
    clap_builder::builder::arg::Arg::long::hd77b2712e1966476(&v4, &v0, "warnZeroV", 4);
    clap_builder::builder::arg::Arg::help::h9bc591f29c12320a(&v0, &v4, "warn about improperly formatted checksum linesend each output line with NUL, not newlinelengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8Omits filenames in the output (option not present in GNU/Coreut", 46);
    clap_builder::builder::arg::Arg::action::h55cf0d5256076143(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg::h7218bb30983cd776(&v4, &v1, &v7);
    clap_builder::builder::arg::Arg::new::h3163ce3d365dc429(&v1, "zeroAnsib", 4);
    clap_builder::builder::arg::Arg::short::hd69054e977c6d1cc(&v0, &v1, 122);
    clap_builder::builder::arg::Arg::long::hd77b2712e1966476(&v1, &v0, "zeroAnsib", 4);
    clap_builder::builder::arg::Arg::help::h9bc591f29c12320a(&v0, &v1, "end each output line with NUL, not newlinelengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8Omits filenames in the output (option not present in GNU/Coreutils)set the size of the output (only for SHAKE", 42);
    clap_builder::builder::arg::Arg::action::h55cf0d5256076143(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg::h7218bb30983cd776(&v1, &v4, &v7);
    clap_builder::builder::arg::Arg::new::h3163ce3d365dc429(&v4, "fileEDOMmode{", 4);
    clap_builder::builder::arg::Arg::index::h4fa90201fc17d044(&v0, &v4);
    clap_builder::builder::arg::Arg::action::h55cf0d5256076143(&v4, &v0, 1);
    clap_builder::builder::arg::Arg::value_name::he176cd8d59323d54(&v0, &v4, "fileEDOMmode{");
    clap_builder::builder::arg::Arg::value_hint::hd1f92cd93d0c7c65(&v4, &v0, 3);
    v7 = 2;
    clap_builder::builder::arg::Arg::value_parser::hf917f75a4a34f1d5(&v0, &v4, &v7);
    clap_builder::builder::command::Command::arg::h7218bb30983cd776(a0, &v1, &v0);
    return a0;
}
