long long uu_cksum::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xac0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xab8]
    unsigned long long v2;  // [bp-0xab0]
    unsigned long long v3;  // [bp-0xaa8]
    unsigned int v4;  // [bp-0x848]
    char v5;  // [bp-0x844]
    unsigned long v6;  // [bp-0x804]
    unsigned int v7;  // [bp-0x7fc]
    char v8;  // [bp-0x7f8], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x7f0]
    unsigned long long v10;  // [bp-0x7e8]
    unsigned long long v11;  // [bp-0x7e0]
    unsigned int v12;  // [bp-0x580]
    char v13;  // [bp-0x57c]
    unsigned long long v14;  // [bp-0x53c]
    unsigned int v15;  // [bp-0x534]
    char v16;  // [bp-0x530]
    unsigned int v17;  // [bp-0x2b8]
    unsigned int v18;  // [bp-0x2b4]
    unsigned long long v19;  // [bp-0x2b0]
    unsigned long long v20;  // [bp-0x2a8]
    unsigned long long v21;  // [bp-0x2a0]
    unsigned long long v22;  // [bp-0x298]
    unsigned long long v25;  // rdx

    v8.new(uucore::util_name(), v25);
    v0.version(&v8);
    v8.about(&v0);
    uucore::format_usage(&v16, "{} [OPTIONS] [FILE]...algorithmselect the digest type to use. See DIGEST belowALGORITHMbsdcrccrc32bmd5sha224sha256sha384sha512blake2bblake3sm3create a reversed style checksum, without digest typetagcreate a BSD style checksum, undo --untagged (default)leng", 22);
    v0.override_usage(&v8, &v16);
    memcpy(&v8, &v0, 700);
    v14 = 584115552392 | v6;
    v15 = v7;
    v0.new("filei128 as ", 4);
    memcpy(&v16, &v0, 632);
    v17 = v4 | 4;
    v18 = *((int *)&v5);
    v0.action(&v16, 1);
    v19 = 2;
    v16.value_parser(&v0, &v19);
    v19.value_hint(&v16);
    v0.arg(&v8, &v19);
    v8.new("algorithmselect the digest type to use. See DIGEST belowALGORITHMbsdcrccrc32bmd5sha224sha256sha384sha512blake2bblake3sm3create a reversed style checksum, without digest typetagcreate a BSD style checksum, undo --untagged (default)lengthdigest length in bit", 9);
    v16.long(&v8, "algorithmselect the digest type to use. See DIGEST belowALGORITHMbsdcrccrc32bmd5sha224sha256sha384sha512blake2bblake3sm3create a reversed style checksum, without digest typetagcreate a BSD style checksum, undo --untagged (default)lengthdigest length in bit", 9);
    v8.short(&v16, 97);
    v16.help(&v8, "select the digest type to use. See DIGEST belowALGORITHMbsdcrccrc32bmd5sha224sha256sha384sha512blake2bblake3sm3create a reversed style checksum, without digest typetagcreate a BSD style checksum, undo --untagged (default)lengthdigest length in bits; must n", 47);
    v8.value_name(&v16);
    v16.value_parser(&v8, &g_563a28);
    v8.arg(&v0, &v16);
    v0.new("untagged0", 8);
    v16.long(&v0, "untagged0", 8);
    v0.help(&v16, "create a reversed style checksum, without digest typetagcreate a BSD style checksum, undo --untagged (default)lengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8rawemit a raw binary digest, not hexadeci", 53);
    v16.action(&v0, 2);
    v19.overrides_with(&v16, "tagcreate a BSD style checksum, undo --untagged (default)lengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8rawemit a raw binary digest, not hexadecimalstrictexit non-zero for improperly formatted check", 3);
    v0.arg(&v8, &v19);
    v8.new("tagcreate a BSD style checksum, undo --untagged (default)lengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8rawemit a raw binary digest, not hexadecimalstrictexit non-zero for improperly formatted check", 3);
    v16.long(&v8, "tagcreate a BSD style checksum, undo --untagged (default)lengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8rawemit a raw binary digest, not hexadecimalstrictexit non-zero for improperly formatted check", 3);
    v8.help(&v16, "create a BSD style checksum, undo --untagged (default)lengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8rawemit a raw binary digest, not hexadecimalstrictexit non-zero for improperly formatted checksum", 54);
    v16.action(&v8, 2);
    v19.overrides_with(&v16, "untagged0", 8);
    v8.arg(&v0, &v19);
    v0.new("lengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8rawemit a raw binary digest, not hexadecimalstrictexit non-zero for improperly formatted checksum linescheckread hashsums from the FILEs and check them", 6);
    v16.long(&v0, "lengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8rawemit a raw binary digest, not hexadecimalstrictexit non-zero for improperly formatted checksum linescheckread hashsums from the FILEs and check them", 6);
    v19 = 4;
    v20 = core::num::<impl core::str::traits::FromStr for usize>::from_str.new();
    v21 = &g_5639a0;
    v0.value_parser(&v16, &v19);
    v16.short(&v0, 108);
    v0.help(&v16, "digest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8rawemit a raw binary digest, not hexadecimalstrictexit non-zero for improperly formatted checksum linescheckread hashsums from the FILEs and check thembase64", 99);
    v16.action(&v0, 0);
    v0.arg(&v8, &v16);
    v8.new("rawemit a raw binary digest, not hexadecimalstrictexit non-zero for improperly formatted checksum linescheckread hashsums from the FILEs and check thembase64emit a base64 digest, not hexadecimalbinarywarn about improperly formatted checksum linesstatusquie", 3);
    v16.long(&v8, "rawemit a raw binary digest, not hexadecimalstrictexit non-zero for improperly formatted checksum linescheckread hashsums from the FILEs and check thembase64emit a base64 digest, not hexadecimalbinarywarn about improperly formatted checksum linesstatusquie", 3);
    v8.help(&v16, "emit a raw binary digest, not hexadecimalstrictexit non-zero for improperly formatted checksum linescheckread hashsums from the FILEs and check thembase64emit a base64 digest, not hexadecimalbinarywarn about improperly formatted checksum linesstatusquietdo", 41);
    v16.action(&v8, 2);
    v8.arg(&v0, &v16);
    v0.new("strictexit non-zero for improperly formatted checksum linescheckread hashsums from the FILEs and check thembase64emit a base64 digest, not hexadecimalbinarywarn about improperly formatted checksum linesstatusquietdon't output anything, status code shows su", 6);
    v16.long(&v0, "strictexit non-zero for improperly formatted checksum linescheckread hashsums from the FILEs and check thembase64emit a base64 digest, not hexadecimalbinarywarn about improperly formatted checksum linesstatusquietdon't output anything, status code shows su", 6);
    v0.help(&v16, "exit non-zero for improperly formatted checksum linescheckread hashsums from the FILEs and check thembase64emit a base64 digest, not hexadecimalbinarywarn about improperly formatted checksum linesstatusquietdon't output anything, status code shows successd", 53);
    v16.action(&v0, 2);
    v0.arg(&v8, &v16);
    v8.new("checkread hashsums from the FILEs and check thembase64emit a base64 digest, not hexadecimalbinarywarn about improperly formatted checksum linesstatusquietdon't output anything, status code shows successdon't print OK for each successfully verified fileigno", 5);
    v16.short(&v8, 99);
    v8.long(&v16, "checkread hashsums from the FILEs and check thembase64emit a base64 digest, not hexadecimalbinarywarn about improperly formatted checksum linesstatusquietdon't output anything, status code shows successdon't print OK for each successfully verified fileigno", 5);
    v16.help(&v8, "read hashsums from the FILEs and check thembase64emit a base64 digest, not hexadecimalbinarywarn about improperly formatted checksum linesstatusquietdon't output anything, status code shows successdon't print OK for each successfully verified fileignore-mi", 43);
    v19.action(&v16, 2);
    v8.arg(&v0, &v19);
    v0.new("base64emit a base64 digest, not hexadecimalbinarywarn about improperly formatted checksum linesstatusquietdon't output anything, status code shows successdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missin", 6);
    v16.long(&v0, "base64emit a base64 digest, not hexadecimalbinarywarn about improperly formatted checksum linesstatusquietdon't output anything, status code shows successdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missin", 6);
    v0.help(&v16, "emit a base64 digest, not hexadecimalbinarywarn about improperly formatted checksum linesstatusquietdon't output anything, status code shows successdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missing file", 37);
    v16.action(&v0, 2);
    v19.conflicts_with(&v16);
    v0.arg(&v8, &v19);
    v8.new("textdumb", 4);
    v16.long(&v8, "textdumb", 4);
    v8.short(&v16, 116);
    memcpy(&v16, &v8, 632);
    v17 = v12 | 4;
    v18 = *((int *)&v13);
    v8.overrides_with(&v16, "binarywarn about improperly formatted checksum linesstatusquietdon't output anything, status code shows successdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missing filesend each output line with NUL, not n", 6);
    v16.action(&v8, 2);
    v8.arg(&v0, &v16);
    v0.new("binarywarn about improperly formatted checksum linesstatusquietdon't output anything, status code shows successdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missing filesend each output line with NUL, not n", 6);
    v16.long(&v0, "binarywarn about improperly formatted checksum linesstatusquietdon't output anything, status code shows successdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missing filesend each output line with NUL, not n", 6);
    v0.short(&v16, 98);
    memcpy(&v16, &v0, 632);
    v17 = v4 | 4;
    v18 = *((int *)&v5);
    v0.overrides_with(&v16, "textdumb", 4);
    v16.action(&v0, 2);
    v0.arg(&v8, &v16);
    v8.new("warn", 4);
    v16.short(&v8, 119);
    v8.long(&v16, "warn", 4);
    v16.help(&v8, "warn about improperly formatted checksum linesstatusquietdon't output anything, status code shows successdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missing filesend each output line with NUL, not newline", 46);
    v8.action(&v16, 2);
    v19 = "statusquietdon't output anything, status code shows successdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missing filesend each output line with NUL, not newline,\n and disable file name escapingDIGEST determines the digest algorithm and default output format:\n\n- sysv:    (equivalent to sum -s)\n- bsd:     (equivalent to sum -r)\n- crc:     (equivalent to cksum)\n- crc32b:  (only available through cksum)\n- md5:     (equivalent to md5sum)\n- sha1:    (equivalent to sha1sum)\n- sha224:  (equivalent to sha224sum)\n- sha256:  (equivalent to sha256sum)\n- sha384:  (equivalent to sha384sum)\n- sha512:  (equivalent to sha512sum)\n- blake2b: (equivalent to b2sum)\n- sm3:     (only available through cksum)";
    v20 = 6;
    v21 = "quietdon't output anything, status code shows successdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missing filesend each output line with NUL, not newline,\n and disable file name escapingDIGEST determines the digest algorithm and default output format:\n\n- sysv:    (equivalent to sum -s)\n- bsd:     (equivalent to sum -r)\n- crc:     (equivalent to cksum)\n- crc32b:  (only available through cksum)\n- md5:     (equivalent to md5sum)\n- sha1:    (equivalent to sha1sum)\n- sha224:  (equivalent to sha224sum)\n- sha256:  (equivalent to sha256sum)\n- sha384:  (equivalent to sha384sum)\n- sha512:  (equivalent to sha512sum)\n- blake2b: (equivalent to b2sum)\n- sm3:     (only available through cksum)";
    v22 = 5;
    v16.overrides_with_all(&v8, &v19);
    v8.arg(&v0, &v16);
    v0.new("statusquietdon't output anything, status code shows successdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missing filesend each output line with NUL, not newline,\n and disable file name escapingDIGEST determines the digest algorithm and default output format:\n\n- sysv:    (equivalent to sum -s)\n- bsd:     (equivalent to sum -r)\n- crc:     (equivalent to cksum)\n- crc32b:  (only available through cksum)\n- md5:     (equivalent to md5sum)\n- sha1:    (equivalent to sha1sum)\n- sha224:  (equivalent to sha224sum)\n- sha256:  (equivalent to sha256sum)\n- sha384:  (equivalent to sha384sum)\n- sha512:  (equivalent to sha512sum)\n- blake2b: (equivalent to b2sum)\n- sm3:     (only available through cksum)", 6);
    v16.long(&v0, "statusquietdon't output anything, status code shows successdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missing filesend each output line with NUL, not newline,\n and disable file name escapingDIGEST determines the digest algorithm and default output format:\n\n- sysv:    (equivalent to sum -s)\n- bsd:     (equivalent to sum -r)\n- crc:     (equivalent to cksum)\n- crc32b:  (only available through cksum)\n- md5:     (equivalent to md5sum)\n- sha1:    (equivalent to sha1sum)\n- sha224:  (equivalent to sha224sum)\n- sha256:  (equivalent to sha256sum)\n- sha384:  (equivalent to sha384sum)\n- sha512:  (equivalent to sha512sum)\n- blake2b: (equivalent to b2sum)\n- sm3:     (only available through cksum)", 6);
    v0.help(&v16, "don't output anything, status code shows successdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missing filesend each output line with NUL, not newline,\n and disable file name escapingDIGEST determines the digest algorithm and default output format:\n\n- sysv:    (equivalent to sum -s)\n- bsd:     (equivalent to sum -r)\n- crc:     (equivalent to cksum)\n- crc32b:  (only available through cksum)\n- md5:     (equivalent to md5sum)\n- sha1:    (equivalent to sha1sum)\n- sha224:  (equivalent to sha224sum)\n- sha256:  (equivalent to sha256sum)\n- sha384:  (equivalent to sha384sum)\n- sha512:  (equivalent to sha512sum)\n- blake2b: (equivalent to b2sum)\n- sm3:     (only available through cksum)", 48);
    v16.action(&v0, 2);
    v0 = "warn";
    v1 = 4;
    v2 = "quietdon't output anything, status code shows successdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missing filesend each output line with NUL, not newline,\n and disable file name escapingDIGEST determines the digest algorithm and default output format:\n\n- sysv:    (equivalent to sum -s)\n- bsd:     (equivalent to sum -r)\n- crc:     (equivalent to cksum)\n- crc32b:  (only available through cksum)\n- md5:     (equivalent to md5sum)\n- sha1:    (equivalent to sha1sum)\n- sha224:  (equivalent to sha224sum)\n- sha256:  (equivalent to sha256sum)\n- sha384:  (equivalent to sha384sum)\n- sha512:  (equivalent to sha512sum)\n- blake2b: (equivalent to b2sum)\n- sm3:     (only available through cksum)";
    v3 = 5;
    v19.overrides_with_all(&v16, &v0);
    v0.arg(&v8, &v19);
    v8.new("quietdon't output anything, status code shows successdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missing filesend each output line with NUL, not newline,\n and disable file name escapingDIGEST determines the digest algorithm and default output format:\n\n- sysv:    (equivalent to sum -s)\n- bsd:     (equivalent to sum -r)\n- crc:     (equivalent to cksum)\n- crc32b:  (only available through cksum)\n- md5:     (equivalent to md5sum)\n- sha1:    (equivalent to sha1sum)\n- sha224:  (equivalent to sha224sum)\n- sha256:  (equivalent to sha256sum)\n- sha384:  (equivalent to sha384sum)\n- sha512:  (equivalent to sha512sum)\n- blake2b: (equivalent to b2sum)\n- sm3:     (only available through cksum)", 5);
    v16.long(&v8, "quietdon't output anything, status code shows successdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missing filesend each output line with NUL, not newline,\n and disable file name escapingDIGEST determines the digest algorithm and default output format:\n\n- sysv:    (equivalent to sum -s)\n- bsd:     (equivalent to sum -r)\n- crc:     (equivalent to cksum)\n- crc32b:  (only available through cksum)\n- md5:     (equivalent to md5sum)\n- sha1:    (equivalent to sha1sum)\n- sha224:  (equivalent to sha224sum)\n- sha256:  (equivalent to sha256sum)\n- sha384:  (equivalent to sha384sum)\n- sha512:  (equivalent to sha512sum)\n- blake2b: (equivalent to b2sum)\n- sm3:     (only available through cksum)", 5);
    v8.help(&v16, "don't print OK for each successfully verified fileignore-missingdon't fail or report status for missing filesend each output line with NUL, not newline,\n and disable file name escapingDIGEST determines the digest algorithm and default output format:\n\n- sysv:    (equivalent to sum -s)\n- bsd:     (equivalent to sum -r)\n- crc:     (equivalent to cksum)\n- crc32b:  (only available through cksum)\n- md5:     (equivalent to md5sum)\n- sha1:    (equivalent to sha1sum)\n- sha224:  (equivalent to sha224sum)\n- sha256:  (equivalent to sha256sum)\n- sha384:  (equivalent to sha384sum)\n- sha512:  (equivalent to sha512sum)\n- blake2b: (equivalent to b2sum)\n- sm3:     (only available through cksum)", 50);
    v16.action(&v8, 2);
    v8 = "warn";
    v9 = 4;
    v10 = "statusquietdon't output anything, status code shows successdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missing filesend each output line with NUL, not newline,\n and disable file name escapingDIGEST determines the digest algorithm and default output format:\n\n- sysv:    (equivalent to sum -s)\n- bsd:     (equivalent to sum -r)\n- crc:     (equivalent to cksum)\n- crc32b:  (only available through cksum)\n- md5:     (equivalent to md5sum)\n- sha1:    (equivalent to sha1sum)\n- sha224:  (equivalent to sha224sum)\n- sha256:  (equivalent to sha256sum)\n- sha384:  (equivalent to sha384sum)\n- sha512:  (equivalent to sha512sum)\n- blake2b: (equivalent to b2sum)\n- sm3:     (only available through cksum)";
    v11 = 6;
    v19.overrides_with_all(&v16, &v8);
    v8.arg(&v0, &v19);
    v0.new("ignore-missingdon't fail or report status for missing filesend each output line with NUL, not newline,\n and disable file name escapingDIGEST determines the digest algorithm and default output format:\n\n- sysv:    (equivalent to sum -s)\n- bsd:     (equivalent to sum -r)\n- crc:     (equivalent to cksum)\n- crc32b:  (only available through cksum)\n- md5:     (equivalent to md5sum)\n- sha1:    (equivalent to sha1sum)\n- sha224:  (equivalent to sha224sum)\n- sha256:  (equivalent to sha256sum)\n- sha384:  (equivalent to sha384sum)\n- sha512:  (equivalent to sha512sum)\n- blake2b: (equivalent to b2sum)\n- sm3:     (only available through cksum)", 14);
    v16.long(&v0, "ignore-missingdon't fail or report status for missing filesend each output line with NUL, not newline,\n and disable file name escapingDIGEST determines the digest algorithm and default output format:\n\n- sysv:    (equivalent to sum -s)\n- bsd:     (equivalent to sum -r)\n- crc:     (equivalent to cksum)\n- crc32b:  (only available through cksum)\n- md5:     (equivalent to md5sum)\n- sha1:    (equivalent to sha1sum)\n- sha224:  (equivalent to sha224sum)\n- sha256:  (equivalent to sha256sum)\n- sha384:  (equivalent to sha384sum)\n- sha512:  (equivalent to sha512sum)\n- blake2b: (equivalent to b2sum)\n- sm3:     (only available through cksum)", 14);
    v0.help(&v16, "don't fail or report status for missing filesend each output line with NUL, not newline,\n and disable file name escapingDIGEST determines the digest algorithm and default output format:\n\n- sysv:    (equivalent to sum -s)\n- bsd:     (equivalent to sum -r)\n- crc:     (equivalent to cksum)\n- crc32b:  (only available through cksum)\n- md5:     (equivalent to md5sum)\n- sha1:    (equivalent to sha1sum)\n- sha224:  (equivalent to sha224sum)\n- sha256:  (equivalent to sha256sum)\n- sha384:  (equivalent to sha384sum)\n- sha512:  (equivalent to sha512sum)\n- blake2b: (equivalent to b2sum)\n- sm3:     (only available through cksum)", 45);
    v16.action(&v0, 2);
    v0.arg(&v8, &v16);
    v8.new("zeroAnsi -- ", 4);
    v16.long(&v8, "zeroAnsi -- ", 4);
    v8.short(&v16, 122);
    v16.help(&v8, "end each output line with NUL, not newline,\n and disable file name escapingDIGEST determines the digest algorithm and default output format:\n\n- sysv:    (equivalent to sum -s)\n- bsd:     (equivalent to sum -r)\n- crc:     (equivalent to cksum)\n- crc32b:  (only available through cksum)\n- md5:     (equivalent to md5sum)\n- sha1:    (equivalent to sha1sum)\n- sha224:  (equivalent to sha224sum)\n- sha256:  (equivalent to sha256sum)\n- sha384:  (equivalent to sha384sum)\n- sha512:  (equivalent to sha512sum)\n- blake2b: (equivalent to b2sum)\n- sm3:     (only available through cksum)", 75);
    v19.action(&v16, 2);
    v8.arg(&v0, &v19);
    a0.after_help(&v8);
    return a0;
}
