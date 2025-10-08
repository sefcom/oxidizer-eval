long long uu_hashsum::uu_app_common(unsigned long long a0)
{
    char v0;  // [bp-0xac0]
    char v1;  // [bp-0x840]
    unsigned long long v2;  // [bp-0x584]
    unsigned int v3;  // [bp-0x57c]
    char v4;  // [bp-0x578]
    unsigned long v5;  // [bp-0x2bc]
    unsigned int v6;  // [bp-0x2b4]
    char v7;  // [bp-0x2b0], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x2a8]
    unsigned long long v9;  // [bp-0x2a0]
    unsigned long long v10;  // [bp-0x298]
    unsigned long long v13;  // rdx

    v1.new(uucore::util_name(), v13);
    v4.version(&v1);
    v1.about(&v4);
    uucore::format_usage(&v0, "{} --<digest> [OPTIONS]... [FILE]...binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status", 36);
    v4.override_usage(&v1, &v0);
    memcpy(&v1, &v4, 700);
    v2 = 584115552392 | v5;
    v3 = v6;
    v4.new("binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-ze", 6);
    v0.short(&v4, 98);
    v4.long(&v0, "binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-ze", 6);
    v0.help(&v4, "read in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for", 19);
    v7.action(&v0, 2);
    v4.arg(&v1, &v7);
    v1.new("checkread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatt", 5);
    v0.short(&v1, 99);
    v1.long(&v0, "checkread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatt", 5);
    v0.help(&v1, "read hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatted ch", 43);
    v1.action(&v0, 2);
    v0.conflicts_with(&v1, "tagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or rep", 3);
    v1.arg(&v4, &v0);
    v4.new("tagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or rep", 3);
    v0.long(&v4, "tagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or rep", 3);
    v4.help(&v0, "create a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report", 27);
    v0.action(&v4, 2);
    v7.conflicts_with(&v0, "textSomedumb", 4);
    v4.arg(&v1, &v7);
    v1.new("textSomedumb", 4);
    v0.short(&v1, 116);
    v1.long(&v0, "textSomedumb", 4);
    v0.help(&v1, "read in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswa", 27);
    v1.conflicts_with(&v0, "binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-ze", 6);
    v0.action(&v1, 2);
    v1.arg(&v4, &v0);
    v4.new("quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswarn about improperly formatt", 5);
    v0.short(&v4, 113);
    v4.long(&v0, "quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswarn about improperly formatt", 5);
    v0.help(&v4, "don't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswarn about improperly formatted ch", 50);
    v4.action(&v0, 2);
    v7 = "statusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswarn about improperly formatted checksum linesend each output line with NUL, not new";
    v8 = 6;
    v9 = "warnZero";
    v10 = 4;
    v0.overrides_with_all(&v4, &v7);
    v4.arg(&v1, &v0);
    v1.new("statusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswarn about improperly formatted checksum linesend each output line with NUL, not new", 6);
    v0.short(&v1, 115);
    v1.long(&v0, "statusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswarn about improperly formatted checksum linesend each output line with NUL, not new", 6);
    v0.help(&v1, "don't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswarn about improperly formatted checksum linesend each output line with NUL, not newlinele", 48);
    v1.action(&v0, 2);
    v7 = "quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswarn about improperly formatt";
    v8 = 5;
    v9 = "warnZero";
    v10 = 4;
    v0.overrides_with_all(&v1, &v7);
    v1.arg(&v4, &v0);
    v4.new("strictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswarn about improperly formatted checksum linesend each output line with NUL, not newlinelengthdigest length in bits; must not exceed the m", 6);
    v0.long(&v4, "strictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswarn about improperly formatted checksum linesend each output line with NUL, not newlinelengthdigest length in bits; must not exceed the m", 6);
    v4.help(&v0, "exit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswarn about improperly formatted checksum linesend each output line with NUL, not newlinelengthdigest length in bits; must not exceed the max for", 53);
    v0.action(&v4, 2);
    v4.arg(&v1, &v0);
    v1.new("ignore-missingdon't fail or report status for missing fileswarn about improperly formatted checksum linesend each output line with NUL, not newlinelengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8Omit", 14);
    v0.long(&v1, "ignore-missingdon't fail or report status for missing fileswarn about improperly formatted checksum linesend each output line with NUL, not newlinelengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8Omit", 14);
    v1.help(&v0, "don't fail or report status for missing fileswarn about improperly formatted checksum linesend each output line with NUL, not newlinelengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8Omits filenames in", 45);
    v0.action(&v1, 2);
    v1.arg(&v4, &v0);
    v4.new("warnZero", 4);
    v0.short(&v4, 119);
    v4.long(&v0, "warnZero", 4);
    v0.help(&v4, "warn about improperly formatted checksum linesend each output line with NUL, not newlinelengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8Omits filenames in the output (option not present in GNU/Coreut", 46);
    v4.action(&v0, 2);
    v7 = "quietdon't print OK for each successfully verified filestatusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswarn about improperly formatt";
    v8 = 5;
    v9 = "statusdon't output anything, status code shows successstrictexit non-zero for improperly formatted checksum linesignore-missingdon't fail or report status for missing fileswarn about improperly formatted checksum linesend each output line with NUL, not new";
    v10 = 6;
    v0.overrides_with_all(&v4, &v7);
    v4.arg(&v1, &v0);
    v1.new("zeroAnsi -- ", 4);
    v0.short(&v1, 122);
    v1.long(&v0, "zeroAnsi -- ", 4);
    v0.help(&v1, "end each output line with NUL, not newlinelengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8Omits filenames in the output (option not present in GNU/Coreutils)set the size of the output (only for SHAKE", 42);
    v7.action(&v0, 2);
    v1.arg(&v4, &v7);
    v4.new("fileEDOMi128 as dyn ", 4);
    v0.index(&v4);
    v4.action(&v0, 1);
    v0.value_name(&v4, "fileEDOMi128 as dyn ");
    v4.value_hint(&v0);
    v7 = 2;
    v0.value_parser(&v4, &v7);
    a0.arg(&v1, &v0);
    return a0;
}
