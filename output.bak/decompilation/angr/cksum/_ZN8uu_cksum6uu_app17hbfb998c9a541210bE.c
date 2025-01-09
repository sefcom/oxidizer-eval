long long uu_cksum::uu_app::hbfb998c9a541210b(unsigned long long a0)
{
    char v0;  // [bp-0xa48]
    unsigned int v1;  // [sp-0x800]
    unsigned int v2;  // [sp-0x7fc]
    char v3;  // [bp-0x7f8]
    char v4;  // [bp-0x5b0]
    char v5;  // [bp-0x5ac]
    unsigned long long v6;  // [sp-0x53c]
    unsigned int v7;  // [sp-0x534]
    char v8;  // [bp-0x530]
    char v9;  // [bp-0x2e8]
    char v10;  // [bp-0x2e4]
    char v11;  // [bp-0x274]
    char v12;  // [bp-0x26c]
    unsigned long long v13;  // [sp-0x268]
    unsigned long long v14;  // [sp-0x260]
    unsigned long long v15;  // [sp-0x258]
    unsigned long long v17;  // rdx

    clap_builder::builder::command::Command::new::hc4791226d997769f(&v3, uucore::util_name::h60d842bf27b05e82(), v17);
    clap_builder::builder::command::Command::version::h6af4f4fec42e0bfc(&v8, &v3, "0.0.28{} [OPTIONS] [FILE]...algorithmselect the digest type to use. See DIGEST belowALGORITHMbsdcrcmd5sha224sha256sha384sha512blake2bblake3sm3create a reversed style checksum, without digest typecreate a BSD style checksum, undo --untagged (default)lengthd", 6);
    clap_builder::builder::command::Command::about::h465eee02d36c0f6b(&v3, &v8, "Print CRC and size for each file", 32);
    uucore::format_usage::h76fcb2d15fbabc58(&v0, "{} [OPTIONS] [FILE]...algorithmselect the digest type to use. See DIGEST belowALGORITHMbsdcrcmd5sha224sha256sha384sha512blake2bblake3sm3create a reversed style checksum, without digest typecreate a BSD style checksum, undo --untagged (default)lengthdigest ", 22);
    clap_builder::builder::command::Command::override_usage::h7dcdf9dabc732f96(&v8, &v3, &v0);
    memcpy(&v3, &v8, 700);
    v6 = 584115552392 | *((long long *)&v11);
    v7 = *((int *)&v12);
    clap_builder::builder::arg::Arg::new::hbda368a754bfeeca(&v8, "filemode{", 4);
    memcpy(&v0, &v8, 584);
    v1 = *((int *)&v9) | 4;
    v2 = *((int *)&v10);
    clap_builder::builder::arg::Arg::action::h32c9b645fd3f4279(&v8, &v0, 1);
    v13 = 2;
    clap_builder::builder::arg::Arg::value_parser::h2cb6f9793451f7a9(&v0, &v8, &v13);
    clap_builder::builder::arg::Arg::value_hint::h307fea4c41f31510(&v13, &v0, 3);
    clap_builder::builder::command::Command::arg::h5efeed937d3b5e7d(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new::hbda368a754bfeeca(&v3, "algorithmselect the digest type to use. See DIGEST belowALGORITHMbsdcrcmd5sha224sha256sha384sha512blake2bblake3sm3create a reversed style checksum, without digest typecreate a BSD style checksum, undo --untagged (default)lengthdigest length in bits; must n", 9);
    clap_builder::builder::arg::Arg::long::hafaa49ca8618007e(&v0, &v3, "algorithmselect the digest type to use. See DIGEST belowALGORITHMbsdcrcmd5sha224sha256sha384sha512blake2bblake3sm3create a reversed style checksum, without digest typecreate a BSD style checksum, undo --untagged (default)lengthdigest length in bits; must n", 9);
    clap_builder::builder::arg::Arg::short::h76f2a3ae4a7efd56(&v3, &v0, 97);
    clap_builder::builder::arg::Arg::help::h44dbe5bb7ba0ac97(&v0, &v3, "select the digest type to use. See DIGEST belowALGORITHMbsdcrcmd5sha224sha256sha384sha512blake2bblake3sm3create a reversed style checksum, without digest typecreate a BSD style checksum, undo --untagged (default)lengthdigest length in bits; must not exceed", 47);
    clap_builder::builder::arg::Arg::value_name::hb6cf57d750a55842(&v3, &v0);
    memcpy(&v13, &g_755678, 240);
    clap_builder::builder::arg::Arg::value_parser::h461944c7bd2494a6(&v0, &v3, &v13);
    clap_builder::builder::command::Command::arg::h5efeed937d3b5e7d(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::hbda368a754bfeeca(&v8, "untagged0", 8);
    clap_builder::builder::arg::Arg::long::hafaa49ca8618007e(&v0, &v8, "untagged0", 8);
    clap_builder::builder::arg::Arg::help::h44dbe5bb7ba0ac97(&v8, &v0, "create a reversed style checksum, without digest typecreate a BSD style checksum, undo --untagged (default)lengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8rawemit a raw binary digest, not hexadecimal", 53);
    clap_builder::builder::arg::Arg::action::h32c9b645fd3f4279(&v0, &v8, 2);
    clap_builder::builder::arg::Arg::overrides_with::hed4a0bb1cdf80f12(&v13, &v0, "tagbinary0.0.28{} [OPTIONS] [FILE]...algorithmselect the digest type to use. See DIGEST belowALGORITHMbsdcrcmd5sha224sha256sha384sha512blake2bblake3sm3create a reversed style checksum, without digest typecreate a BSD style checksum, undo --untagged (defaul", 3);
    clap_builder::builder::command::Command::arg::h5efeed937d3b5e7d(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new::hbda368a754bfeeca(&v3, "tagbinary0.0.28{} [OPTIONS] [FILE]...algorithmselect the digest type to use. See DIGEST belowALGORITHMbsdcrcmd5sha224sha256sha384sha512blake2bblake3sm3create a reversed style checksum, without digest typecreate a BSD style checksum, undo --untagged (defaul", 3);
    clap_builder::builder::arg::Arg::long::hafaa49ca8618007e(&v0, &v3, "tagbinary0.0.28{} [OPTIONS] [FILE]...algorithmselect the digest type to use. See DIGEST belowALGORITHMbsdcrcmd5sha224sha256sha384sha512blake2bblake3sm3create a reversed style checksum, without digest typecreate a BSD style checksum, undo --untagged (defaul", 3);
    clap_builder::builder::arg::Arg::help::h44dbe5bb7ba0ac97(&v3, &v0, "create a BSD style checksum, undo --untagged (default)lengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8rawemit a raw binary digest, not hexadecimalstrictexit non-zero for improperly formatted checksum", 54);
    clap_builder::builder::arg::Arg::action::h32c9b645fd3f4279(&v0, &v3, 2);
    clap_builder::builder::arg::Arg::overrides_with::hed4a0bb1cdf80f12(&v13, &v0, "untagged0", 8);
    clap_builder::builder::command::Command::arg::h5efeed937d3b5e7d(&v3, &v8, &v13);
    clap_builder::builder::arg::Arg::new::hbda368a754bfeeca(&v8, "lengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8rawemit a raw binary digest, not hexadecimalstrictexit non-zero for improperly formatted checksum linescheckread hashsums from the FILEs and check them", 6);
    clap_builder::builder::arg::Arg::long::hafaa49ca8618007e(&v0, &v8, "lengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8rawemit a raw binary digest, not hexadecimalstrictexit non-zero for improperly formatted checksum linescheckread hashsums from the FILEs and check them", 6);
    v13 = 4;
    v14 = ::0x5e2280::alloc::boxed::Box$LT$T$GT$::new::h1b8fa5609220b983();
    v15 = &g_755768;
    clap_builder::builder::arg::Arg::value_parser::h0c2b0b6f80eb2588(&v8, &v0, &v13);
    clap_builder::builder::arg::Arg::short::h76f2a3ae4a7efd56(&v0, &v8, 108);
    clap_builder::builder::arg::Arg::help::h44dbe5bb7ba0ac97(&v8, &v0, "digest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8rawemit a raw binary digest, not hexadecimalstrictexit non-zero for improperly formatted checksum linescheckread hashsums from the FILEs and check thembase64", 99);
    clap_builder::builder::arg::Arg::action::h32c9b645fd3f4279(&v0, &v8, 0);
    clap_builder::builder::command::Command::arg::h5efeed937d3b5e7d(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new::hbda368a754bfeeca(&v3, "rawemit a raw binary digest, not hexadecimalstrictexit non-zero for improperly formatted checksum linescheckread hashsums from the FILEs and check thembase64emit a base64 digest, not hexadecimalwarn about improperly formatted checksum linesstatusdon't outp", 3);
    clap_builder::builder::arg::Arg::long::hafaa49ca8618007e(&v0, &v3, "rawemit a raw binary digest, not hexadecimalstrictexit non-zero for improperly formatted checksum linescheckread hashsums from the FILEs and check thembase64emit a base64 digest, not hexadecimalwarn about improperly formatted checksum linesstatusdon't outp", 3);
    clap_builder::builder::arg::Arg::help::h44dbe5bb7ba0ac97(&v3, &v0, "emit a raw binary digest, not hexadecimalstrictexit non-zero for improperly formatted checksum linescheckread hashsums from the FILEs and check thembase64emit a base64 digest, not hexadecimalwarn about improperly formatted checksum linesstatusdon't output ", 41);
    clap_builder::builder::arg::Arg::action::h32c9b645fd3f4279(&v0, &v3, 2);
    clap_builder::builder::command::Command::arg::h5efeed937d3b5e7d(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::hbda368a754bfeeca(&v8, "strictexit non-zero for improperly formatted checksum linescheckread hashsums from the FILEs and check thembase64emit a base64 digest, not hexadecimalwarn about improperly formatted checksum linesstatusdon't output anything, status code shows successquietd", 6);
    clap_builder::builder::arg::Arg::long::hafaa49ca8618007e(&v0, &v8, "strictexit non-zero for improperly formatted checksum linescheckread hashsums from the FILEs and check thembase64emit a base64 digest, not hexadecimalwarn about improperly formatted checksum linesstatusdon't output anything, status code shows successquietd", 6);
    clap_builder::builder::arg::Arg::help::h44dbe5bb7ba0ac97(&v8, &v0, "exit non-zero for improperly formatted checksum linescheckread hashsums from the FILEs and check thembase64emit a base64 digest, not hexadecimalwarn about improperly formatted checksum linesstatusdon't output anything, status code shows successquietdon't p", 53);
    clap_builder::builder::arg::Arg::action::h32c9b645fd3f4279(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg::h5efeed937d3b5e7d(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new::hbda368a754bfeeca(&v3, "checkread hashsums from the FILEs and check thembase64emit a base64 digest, not hexadecimalwarn about improperly formatted checksum linesstatusdon't output anything, status code shows successquietdon't print OK for each successfully verified fileignore-mis", 5);
    clap_builder::builder::arg::Arg::short::h76f2a3ae4a7efd56(&v0, &v3, 99);
    clap_builder::builder::arg::Arg::long::hafaa49ca8618007e(&v3, &v0, "checkread hashsums from the FILEs and check thembase64emit a base64 digest, not hexadecimalwarn about improperly formatted checksum linesstatusdon't output anything, status code shows successquietdon't print OK for each successfully verified fileignore-mis", 5);
    clap_builder::builder::arg::Arg::help::h44dbe5bb7ba0ac97(&v0, &v3, "read hashsums from the FILEs and check thembase64emit a base64 digest, not hexadecimalwarn about improperly formatted checksum linesstatusdon't output anything, status code shows successquietdon't print OK for each successfully verified fileignore-missingd", 43);
    clap_builder::builder::arg::Arg::action::h32c9b645fd3f4279(&v3, &v0, 2);
    clap_builder::builder::arg::Arg::conflicts_with::h674f2147962b758e(&v0, &v3, "tagbinary0.0.28{} [OPTIONS] [FILE]...algorithmselect the digest type to use. See DIGEST belowALGORITHMbsdcrcmd5sha224sha256sha384sha512blake2bblake3sm3create a reversed style checksum, without digest typecreate a BSD style checksum, undo --untagged (defaul", 3);
    clap_builder::builder::command::Command::arg::h5efeed937d3b5e7d(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::hbda368a754bfeeca(&v8, "base64emit a base64 digest, not hexadecimalwarn about improperly formatted checksum linesstatusdon't output anything, status code shows successquietdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missing file", 6);
    clap_builder::builder::arg::Arg::long::hafaa49ca8618007e(&v0, &v8, "base64emit a base64 digest, not hexadecimalwarn about improperly formatted checksum linesstatusdon't output anything, status code shows successquietdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missing file", 6);
    clap_builder::builder::arg::Arg::help::h44dbe5bb7ba0ac97(&v8, &v0, "emit a base64 digest, not hexadecimalwarn about improperly formatted checksum linesstatusdon't output anything, status code shows successquietdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missing filesend e", 37);
    clap_builder::builder::arg::Arg::action::h32c9b645fd3f4279(&v0, &v8, 2);
    clap_builder::builder::arg::Arg::conflicts_with::h674f2147962b758e(&v13, &v0, "rawemit a raw binary digest, not hexadecimalstrictexit non-zero for improperly formatted checksum linescheckread hashsums from the FILEs and check thembase64emit a base64 digest, not hexadecimalwarn about improperly formatted checksum linesstatusdon't outp", 3);
    clap_builder::builder::command::Command::arg::h5efeed937d3b5e7d(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new::hbda368a754bfeeca(&v3, "textSomee", 4);
    clap_builder::builder::arg::Arg::long::hafaa49ca8618007e(&v0, &v3, "textSomee", 4);
    clap_builder::builder::arg::Arg::short::h76f2a3ae4a7efd56(&v3, &v0, 116);
    memcpy(&v0, &v3, 584);
    v1 = *((int *)&v4) | 4;
    v2 = *((int *)&v5);
    clap_builder::builder::arg::Arg::overrides_with::hed4a0bb1cdf80f12(&v3, &v0, "binary0.0.28{} [OPTIONS] [FILE]...algorithmselect the digest type to use. See DIGEST belowALGORITHMbsdcrcmd5sha224sha256sha384sha512blake2bblake3sm3create a reversed style checksum, without digest typecreate a BSD style checksum, undo --untagged (default)l", 6);
    clap_builder::builder::arg::Arg::action::h32c9b645fd3f4279(&v0, &v3, 2);
    clap_builder::builder::command::Command::arg::h5efeed937d3b5e7d(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::hbda368a754bfeeca(&v8, "binary0.0.28{} [OPTIONS] [FILE]...algorithmselect the digest type to use. See DIGEST belowALGORITHMbsdcrcmd5sha224sha256sha384sha512blake2bblake3sm3create a reversed style checksum, without digest typecreate a BSD style checksum, undo --untagged (default)l", 6);
    clap_builder::builder::arg::Arg::long::hafaa49ca8618007e(&v0, &v8, "binary0.0.28{} [OPTIONS] [FILE]...algorithmselect the digest type to use. See DIGEST belowALGORITHMbsdcrcmd5sha224sha256sha384sha512blake2bblake3sm3create a reversed style checksum, without digest typecreate a BSD style checksum, undo --untagged (default)l", 6);
    clap_builder::builder::arg::Arg::short::h76f2a3ae4a7efd56(&v8, &v0, 98);
    memcpy(&v0, &v8, 584);
    v1 = *((int *)&v9) | 4;
    v2 = *((int *)&v10);
    clap_builder::builder::arg::Arg::overrides_with::hed4a0bb1cdf80f12(&v8, &v0, "textSomee", 4);
    clap_builder::builder::arg::Arg::action::h32c9b645fd3f4279(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg::h5efeed937d3b5e7d(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new::hbda368a754bfeeca(&v3, "warnZeroV", 4);
    clap_builder::builder::arg::Arg::short::h76f2a3ae4a7efd56(&v0, &v3, 119);
    clap_builder::builder::arg::Arg::long::hafaa49ca8618007e(&v3, &v0, "warnZeroV", 4);
    clap_builder::builder::arg::Arg::help::h44dbe5bb7ba0ac97(&v0, &v3, "warn about improperly formatted checksum linesstatusdon't output anything, status code shows successquietdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missing filesend each output line with NUL, not newline", 46);
    clap_builder::builder::arg::Arg::action::h32c9b645fd3f4279(&v13, &v0, 2);
    clap_builder::builder::command::Command::arg::h5efeed937d3b5e7d(&v3, &v8, &v13);
    clap_builder::builder::arg::Arg::new::hbda368a754bfeeca(&v8, "statusdon't output anything, status code shows successquietdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missing filesend each output line with NUL, not newline,\n and disable file name escapingDIGEST determ", 6);
    clap_builder::builder::arg::Arg::long::hafaa49ca8618007e(&v0, &v8, "statusdon't output anything, status code shows successquietdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missing filesend each output line with NUL, not newline,\n and disable file name escapingDIGEST determ", 6);
    clap_builder::builder::arg::Arg::help::h44dbe5bb7ba0ac97(&v8, &v0, "don't output anything, status code shows successquietdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missing filesend each output line with NUL, not newline,\n and disable file name escapingDIGEST determines t", 48);
    clap_builder::builder::arg::Arg::action::h32c9b645fd3f4279(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg::h5efeed937d3b5e7d(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new::hbda368a754bfeeca(&v3, "quietdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missing filesend each output line with NUL, not newline,\n and disable file name escapingDIGEST determines the digest algorithm and default output format:\n\n", 5);
    clap_builder::builder::arg::Arg::long::hafaa49ca8618007e(&v0, &v3, "quietdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missing filesend each output line with NUL, not newline,\n and disable file name escapingDIGEST determines the digest algorithm and default output format:\n\n", 5);
    clap_builder::builder::arg::Arg::help::h44dbe5bb7ba0ac97(&v3, &v0, "don't print OK for each successfully verified fileignore-missingdon't fail or report status for missing filesend each output line with NUL, not newline,\n and disable file name escapingDIGEST determines the digest algorithm and default output format:\n\n- sys", 50);
    clap_builder::builder::arg::Arg::action::h32c9b645fd3f4279(&v0, &v3, 2);
    clap_builder::builder::command::Command::arg::h5efeed937d3b5e7d(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::hbda368a754bfeeca(&v8, "ignore-missingdon't fail or report status for missing filesend each output line with NUL, not newline,\n and disable file name escapingDIGEST determines the digest algorithm and default output format:\n\n- sysv:    (equivalent to sum -s)\n- bsd:     (equivalen", 14);
    clap_builder::builder::arg::Arg::long::hafaa49ca8618007e(&v0, &v8, "ignore-missingdon't fail or report status for missing filesend each output line with NUL, not newline,\n and disable file name escapingDIGEST determines the digest algorithm and default output format:\n\n- sysv:    (equivalent to sum -s)\n- bsd:     (equivalen", 14);
    clap_builder::builder::arg::Arg::help::h44dbe5bb7ba0ac97(&v8, &v0, "don't fail or report status for missing filesend each output line with NUL, not newline,\n and disable file name escapingDIGEST determines the digest algorithm and default output format:\n\n- sysv:    (equivalent to sum -s)\n- bsd:     (equivalent to sum -r)\n-", 45);
    clap_builder::builder::arg::Arg::action::h32c9b645fd3f4279(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg::h5efeed937d3b5e7d(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new::hbda368a754bfeeca(&v3, "zeroAnsib", 4);
    clap_builder::builder::arg::Arg::long::hafaa49ca8618007e(&v0, &v3, "zeroAnsib", 4);
    clap_builder::builder::arg::Arg::short::h76f2a3ae4a7efd56(&v3, &v0, 122);
    clap_builder::builder::arg::Arg::help::h44dbe5bb7ba0ac97(&v0, &v3, "end each output line with NUL, not newline,\n and disable file name escapingDIGEST determines the digest algorithm and default output format:\n\n- sysv:    (equivalent to sum -s)\n- bsd:     (equivalent to sum -r)\n- crc:     (equivalent to cksum)\n- md5:     (e", 75);
    clap_builder::builder::arg::Arg::action::h32c9b645fd3f4279(&v13, &v0, 2);
    clap_builder::builder::command::Command::arg::h5efeed937d3b5e7d(&v3, &v8, &v13);
    clap_builder::builder::command::Command::after_help::h1bf004b88ccc38aa(a0, &v3, "DIGEST determines the digest algorithm and default output format:\n\n- sysv:    (equivalent to sum -s)\n- bsd:     (equivalent to sum -r)\n- crc:     (equivalent to cksum)\n- md5:     (equivalent to md5sum)\n- sha1:    (equivalent to sha1sum)\n- sha224:  (equivalent to sha224sum)\n- sha256:  (equivalent to sha256sum)\n- sha384:  (equivalent to sha384sum)\n- sha512:  (equivalent to sha512sum)\n- blake2b: (equivalent to b2sum)\n- sm3:     (only available through cksum)/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/builder/ext.rs", 459);
    return a0;
}
