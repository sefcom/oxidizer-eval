long long uu_hashsum::uu_app_common::haf156add4ae409e5(unsigned long long a0)
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

    clap_builder::builder::command::Command::new::h279cb1764e092cfc(&v1, uucore::util_name::h60d842bf27b05e82(), v9);
    clap_builder::builder::command::Command::version::h1915c97be964726e(&v4, &v1, "0.0.28Compute and check message digests.{} [OPTIONS] [FILE]...binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon", 6);
    clap_builder::builder::command::Command::about::h32eb9af4213b0aa4(&v1, &v4, "Compute and check message digests.{} [OPTIONS] [FILE]...binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't out", 34);
    uucore::format_usage::h76fcb2d15fbabc58(&v0, "{} [OPTIONS] [FILE]...binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows su", 22);
    clap_builder::builder::command::Command::override_usage::h3074fb1ea9187600(&v4, &v1, &v0);
    memcpy(&v1, &v4, 700);
    v2 = 584115552392 | *((long long *)&v5);
    v3 = *((int *)&v6);
    clap_builder::builder::arg::Arg::new::h3b16b83c680bff0d(&v4, "binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-ze", 6);
    clap_builder::builder::arg::Arg::short::hfc41e05dee6976e2(&v0, &v4, 98);
    clap_builder::builder::arg::Arg::long::h5908e9ea86bf7a3b(&v4, &v0, "binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-ze", 6);
    clap_builder::builder::arg::Arg::help::h7220c48f981ef5b5(&v0, &v4, "read in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for", 19);
    clap_builder::builder::arg::Arg::action::he04288933a5d3869(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg::h001132be747f46b6(&v4, &v1, &v7);
    clap_builder::builder::arg::Arg::new::h3b16b83c680bff0d(&v1, "checkread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatt", 5);
    clap_builder::builder::arg::Arg::short::hfc41e05dee6976e2(&v0, &v1, 99);
    clap_builder::builder::arg::Arg::long::h5908e9ea86bf7a3b(&v1, &v0, "checkread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatt", 5);
    clap_builder::builder::arg::Arg::help::h7220c48f981ef5b5(&v0, &v1, "read hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatted ch", 43);
    clap_builder::builder::arg::Arg::action::he04288933a5d3869(&v1, &v0, 2);
    clap_builder::builder::arg::Arg::conflicts_with::hd582e73503419645(&v0, &v1, "tagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or rep", 3);
    clap_builder::builder::command::Command::arg::h001132be747f46b6(&v1, &v4, &v0);
    clap_builder::builder::arg::Arg::new::h3b16b83c680bff0d(&v4, "tagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or rep", 3);
    clap_builder::builder::arg::Arg::long::h5908e9ea86bf7a3b(&v0, &v4, "tagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or rep", 3);
    clap_builder::builder::arg::Arg::help::h7220c48f981ef5b5(&v4, &v0, "create a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report", 27);
    clap_builder::builder::arg::Arg::action::he04288933a5d3869(&v0, &v4, 2);
    clap_builder::builder::arg::Arg::conflicts_with::hd582e73503419645(&v7, &v0, "textSomee", 4);
    clap_builder::builder::command::Command::arg::h001132be747f46b6(&v4, &v1, &v7);
    clap_builder::builder::arg::Arg::new::h3b16b83c680bff0d(&v1, "textSomee", 4);
    clap_builder::builder::arg::Arg::short::hfc41e05dee6976e2(&v0, &v1, 116);
    clap_builder::builder::arg::Arg::long::h5908e9ea86bf7a3b(&v1, &v0, "textSomee", 4);
    clap_builder::builder::arg::Arg::help::h7220c48f981ef5b5(&v0, &v1, "read in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswa", 27);
    clap_builder::builder::arg::Arg::conflicts_with::hd582e73503419645(&v1, &v0, "binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-ze", 6);
    clap_builder::builder::arg::Arg::action::he04288933a5d3869(&v0, &v1, 2);
    clap_builder::builder::command::Command::arg::h001132be747f46b6(&v1, &v4, &v0);
    clap_builder::builder::arg::Arg::new::h3b16b83c680bff0d(&v4, "quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswarn about improperly formatt", 5);
    clap_builder::builder::arg::Arg::short::hfc41e05dee6976e2(&v0, &v4, 113);
    clap_builder::builder::arg::Arg::long::h5908e9ea86bf7a3b(&v4, &v0, "quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswarn about improperly formatt", 5);
    clap_builder::builder::arg::Arg::help::h7220c48f981ef5b5(&v0, &v4, "don't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswarn about improperly formatted ch", 50);
    clap_builder::builder::arg::Arg::action::he04288933a5d3869(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg::h001132be747f46b6(&v4, &v1, &v7);
    clap_builder::builder::arg::Arg::new::h3b16b83c680bff0d(&v1, "statusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswarn about improperly formatted checksum linesend each output line with NUL, not new", 6);
    clap_builder::builder::arg::Arg::short::hfc41e05dee6976e2(&v0, &v1, 115);
    clap_builder::builder::arg::Arg::long::h5908e9ea86bf7a3b(&v1, &v0, "statusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswarn about improperly formatted checksum linesend each output line with NUL, not new", 6);
    clap_builder::builder::arg::Arg::help::h7220c48f981ef5b5(&v0, &v1, "don't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswarn about improperly formatted checksum linesend each output line with NUL, not newlinele", 48);
    clap_builder::builder::arg::Arg::action::he04288933a5d3869(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg::h001132be747f46b6(&v1, &v4, &v7);
    clap_builder::builder::arg::Arg::new::h3b16b83c680bff0d(&v4, "strictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswarn about improperly formatted checksum linesend each output line with NUL, not newlinelengthdigest length in bits; must not exceed the m", 6);
    clap_builder::builder::arg::Arg::long::h5908e9ea86bf7a3b(&v0, &v4, "strictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswarn about improperly formatted checksum linesend each output line with NUL, not newlinelengthdigest length in bits; must not exceed the m", 6);
    clap_builder::builder::arg::Arg::help::h7220c48f981ef5b5(&v4, &v0, "exit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswarn about improperly formatted checksum linesend each output line with NUL, not newlinelengthdigest length in bits; must not exceed the max for", 53);
    clap_builder::builder::arg::Arg::action::he04288933a5d3869(&v0, &v4, 2);
    clap_builder::builder::command::Command::arg::h001132be747f46b6(&v4, &v1, &v0);
    clap_builder::builder::arg::Arg::new::h3b16b83c680bff0d(&v1, "ignore-missingdon't fail or report status for missing fileswarn about improperly formatted checksum linesend each output line with NUL, not newlinelengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8Omit", 14);
    clap_builder::builder::arg::Arg::long::h5908e9ea86bf7a3b(&v0, &v1, "ignore-missingdon't fail or report status for missing fileswarn about improperly formatted checksum linesend each output line with NUL, not newlinelengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8Omit", 14);
    clap_builder::builder::arg::Arg::help::h7220c48f981ef5b5(&v1, &v0, "don't fail or report status for missing fileswarn about improperly formatted checksum linesend each output line with NUL, not newlinelengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8Omits filenames in", 45);
    clap_builder::builder::arg::Arg::action::he04288933a5d3869(&v0, &v1, 2);
    clap_builder::builder::command::Command::arg::h001132be747f46b6(&v1, &v4, &v0);
    clap_builder::builder::arg::Arg::new::h3b16b83c680bff0d(&v4, "warnZeroV", 4);
    clap_builder::builder::arg::Arg::short::hfc41e05dee6976e2(&v0, &v4, 119);
    clap_builder::builder::arg::Arg::long::h5908e9ea86bf7a3b(&v4, &v0, "warnZeroV", 4);
    clap_builder::builder::arg::Arg::help::h7220c48f981ef5b5(&v0, &v4, "warn about improperly formatted checksum linesend each output line with NUL, not newlinelengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8Omits filenames in the output (option not present in GNU/Coreut", 46);
    clap_builder::builder::arg::Arg::action::he04288933a5d3869(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg::h001132be747f46b6(&v4, &v1, &v7);
    clap_builder::builder::arg::Arg::new::h3b16b83c680bff0d(&v1, "zeroAnsib", 4);
    clap_builder::builder::arg::Arg::short::hfc41e05dee6976e2(&v0, &v1, 122);
    clap_builder::builder::arg::Arg::long::h5908e9ea86bf7a3b(&v1, &v0, "zeroAnsib", 4);
    clap_builder::builder::arg::Arg::help::h7220c48f981ef5b5(&v0, &v1, "end each output line with NUL, not newlinelengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8Omits filenames in the output (option not present in GNU/Coreutils)set the size of the output (only for SHAKE", 42);
    clap_builder::builder::arg::Arg::action::he04288933a5d3869(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg::h001132be747f46b6(&v1, &v4, &v7);
    clap_builder::builder::arg::Arg::new::h3b16b83c680bff0d(&v4, "fileEDOMmode{", 4);
    clap_builder::builder::arg::Arg::index::h80fba87efb994c29(&v0, &v4);
    clap_builder::builder::arg::Arg::action::he04288933a5d3869(&v4, &v0, 1);
    clap_builder::builder::arg::Arg::value_name::h91d0b43819df8b7b(&v0, &v4, "fileEDOMmode{");
    clap_builder::builder::arg::Arg::value_hint::h03ccd5ef06a1424d(&v4, &v0, 3);
    v7 = 2;
    clap_builder::builder::arg::Arg::value_parser::hdd3734fe96556585(&v0, &v4, &v7);
    clap_builder::builder::command::Command::arg::h001132be747f46b6(a0, &v1, &v0);
    return a0;
}
