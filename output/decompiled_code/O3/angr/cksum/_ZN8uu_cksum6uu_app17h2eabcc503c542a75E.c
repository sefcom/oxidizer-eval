long long uu_cksum::uu_app::h2eabcc503c542a75(unsigned long long a0, unsigned long a1, unsigned long a2)
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

    clap_builder::builder::command::Command::new::h4f5329f0919bde7c(&v3, uucore::util_name::h412db5e565a079f3(), v17);
    clap_builder::builder::command::Command::version::hc3225dbbef5ed805(&v8, &v3, "0.0.28{} [OPTIONS] [FILE]...algorithmselect the digest type to use. See DIGEST belowALGORITHMbsdcrcmd5sha224sha256sha384sha512blake2bblake3sm3create a reversed style checksum, without digest typecreate a BSD style checksum, undo --untagged (default)lengthd", 6);
    clap_builder::builder::command::Command::about::h44a1afd4e7efaa7e(&v3, &v8, "Print CRC and size for each file", 32);
    uucore::format_usage::h00b69bae12d8ac9c(&v0, "{} [OPTIONS] [FILE]...algorithmselect the digest type to use. See DIGEST belowALGORITHMbsdcrcmd5sha224sha256sha384sha512blake2bblake3sm3create a reversed style checksum, without digest typecreate a BSD style checksum, undo --untagged (default)lengthdigest ", 22);
    clap_builder::builder::command::Command::override_usage::h14c24bdb7aa009a5(&v8, &v3, &v0);
    memcpy(&v3, &v8, 700);
    v6 = 584115552392 | *((long long *)&v11);
    v7 = *((int *)&v12);
    clap_builder::builder::arg::Arg::new::hbccce27f60dbcd03(&v8, "filemode{", 4);
    memcpy(&v0, &v8, 584);
    v1 = *((int *)&v9) | 4;
    v2 = *((int *)&v10);
    clap_builder::builder::arg::Arg::action::h3bd711464e110308(&v8, &v0, 1);
    v13 = 2;
    clap_builder::builder::arg::Arg::value_parser::h40637de02bf8549e(&v0, &v8, &v13);
    clap_builder::builder::arg::Arg::value_hint::h0e4e75ce1b9483e3(&v13, &v0, 3);
    clap_builder::builder::command::Command::arg::hc7c87a762ea48fdd(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new::hbccce27f60dbcd03(&v3, "algorithmselect the digest type to use. See DIGEST belowALGORITHMbsdcrcmd5sha224sha256sha384sha512blake2bblake3sm3create a reversed style checksum, without digest typecreate a BSD style checksum, undo --untagged (default)lengthdigest length in bits; must n", 9);
    clap_builder::builder::arg::Arg::long::hf7d9e45106ff7ec2(&v0, &v3, "algorithmselect the digest type to use. See DIGEST belowALGORITHMbsdcrcmd5sha224sha256sha384sha512blake2bblake3sm3create a reversed style checksum, without digest typecreate a BSD style checksum, undo --untagged (default)lengthdigest length in bits; must n", 9);
    clap_builder::builder::arg::Arg::short::h4bfc480a0f04f3a9(&v3, &v0, 97);
    clap_builder::builder::arg::Arg::help::h43a23fae81905625(&v0, &v3, "select the digest type to use. See DIGEST belowALGORITHMbsdcrcmd5sha224sha256sha384sha512blake2bblake3sm3create a reversed style checksum, without digest typecreate a BSD style checksum, undo --untagged (default)lengthdigest length in bits; must not exceed", 47);
    clap_builder::builder::arg::Arg::value_name::h371c6ec92fd9b543(&v3, &v0, v17);
    memcpy(&v13, &g_756430, 240);
    clap_builder::builder::arg::Arg::value_parser::h661d2695969140e0(&v0, &v3, &v13);
    clap_builder::builder::command::Command::arg::hc7c87a762ea48fdd(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::hbccce27f60dbcd03(&v8, "untagged0", 8);
    clap_builder::builder::arg::Arg::long::hf7d9e45106ff7ec2(&v0, &v8, "untagged0", 8);
    clap_builder::builder::arg::Arg::help::h43a23fae81905625(&v8, &v0, "create a reversed style checksum, without digest typecreate a BSD style checksum, undo --untagged (default)lengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8rawemit a raw binary digest, not hexadecimal", 53);
    clap_builder::builder::arg::Arg::action::h3bd711464e110308(&v0, &v8, 2);
    clap_builder::builder::arg::Arg::overrides_with::h1b3d232ed4486e23(&v13, &v0, "tagbinary0.0.28{} [OPTIONS] [FILE]...algorithmselect the digest type to use. See DIGEST belowALGORITHMbsdcrcmd5sha224sha256sha384sha512blake2bblake3sm3create a reversed style checksum, without digest typecreate a BSD style checksum, undo --untagged (defaul", 3);
    clap_builder::builder::command::Command::arg::hc7c87a762ea48fdd(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new::hbccce27f60dbcd03(&v3, "tagbinary0.0.28{} [OPTIONS] [FILE]...algorithmselect the digest type to use. See DIGEST belowALGORITHMbsdcrcmd5sha224sha256sha384sha512blake2bblake3sm3create a reversed style checksum, without digest typecreate a BSD style checksum, undo --untagged (defaul", 3);
    clap_builder::builder::arg::Arg::long::hf7d9e45106ff7ec2(&v0, &v3, "tagbinary0.0.28{} [OPTIONS] [FILE]...algorithmselect the digest type to use. See DIGEST belowALGORITHMbsdcrcmd5sha224sha256sha384sha512blake2bblake3sm3create a reversed style checksum, without digest typecreate a BSD style checksum, undo --untagged (defaul", 3);
    clap_builder::builder::arg::Arg::help::h43a23fae81905625(&v3, &v0, "create a BSD style checksum, undo --untagged (default)lengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8rawemit a raw binary digest, not hexadecimalstrictexit non-zero for improperly formatted checksum", 54);
    clap_builder::builder::arg::Arg::action::h3bd711464e110308(&v0, &v3, 2);
    clap_builder::builder::arg::Arg::overrides_with::h1b3d232ed4486e23(&v13, &v0, "untagged0", 8);
    clap_builder::builder::command::Command::arg::hc7c87a762ea48fdd(&v3, &v8, &v13);
    clap_builder::builder::arg::Arg::new::hbccce27f60dbcd03(&v8, "lengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8rawemit a raw binary digest, not hexadecimalstrictexit non-zero for improperly formatted checksum linescheckread hashsums from the FILEs and check them", 6);
    clap_builder::builder::arg::Arg::long::hf7d9e45106ff7ec2(&v0, &v8, "lengthdigest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8rawemit a raw binary digest, not hexadecimalstrictexit non-zero for improperly formatted checksum linescheckread hashsums from the FILEs and check them", 6);
    v13 = 4;
    v14 = alloc::boxed::Box$LT$T$GT$::new::he1ee59c87bc92ea1(core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5);
    v15 = &g_7563e0;
    clap_builder::builder::arg::Arg::value_parser::h10b0f827091104d8(&v8, &v0, &v13);
    clap_builder::builder::arg::Arg::short::h4bfc480a0f04f3a9(&v0, &v8, 108);
    clap_builder::builder::arg::Arg::help::h43a23fae81905625(&v8, &v0, "digest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8rawemit a raw binary digest, not hexadecimalstrictexit non-zero for improperly formatted checksum linescheckread hashsums from the FILEs and check thembase64", 99);
    clap_builder::builder::arg::Arg::action::h3bd711464e110308(&v0, &v8, 0);
    clap_builder::builder::command::Command::arg::hc7c87a762ea48fdd(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new::hbccce27f60dbcd03(&v3, "rawemit a raw binary digest, not hexadecimalstrictexit non-zero for improperly formatted checksum linescheckread hashsums from the FILEs and check thembase64emit a base64 digest, not hexadecimalwarn about improperly formatted checksum linesstatusdon't outp", 3);
    clap_builder::builder::arg::Arg::long::hf7d9e45106ff7ec2(&v0, &v3, "rawemit a raw binary digest, not hexadecimalstrictexit non-zero for improperly formatted checksum linescheckread hashsums from the FILEs and check thembase64emit a base64 digest, not hexadecimalwarn about improperly formatted checksum linesstatusdon't outp", 3);
    clap_builder::builder::arg::Arg::help::h43a23fae81905625(&v3, &v0, "emit a raw binary digest, not hexadecimalstrictexit non-zero for improperly formatted checksum linescheckread hashsums from the FILEs and check thembase64emit a base64 digest, not hexadecimalwarn about improperly formatted checksum linesstatusdon't output ", 41);
    clap_builder::builder::arg::Arg::action::h3bd711464e110308(&v0, &v3, 2);
    clap_builder::builder::command::Command::arg::hc7c87a762ea48fdd(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::hbccce27f60dbcd03(&v8, "strictexit non-zero for improperly formatted checksum linescheckread hashsums from the FILEs and check thembase64emit a base64 digest, not hexadecimalwarn about improperly formatted checksum linesstatusdon't output anything, status code shows successquietd", 6);
    clap_builder::builder::arg::Arg::long::hf7d9e45106ff7ec2(&v0, &v8, "strictexit non-zero for improperly formatted checksum linescheckread hashsums from the FILEs and check thembase64emit a base64 digest, not hexadecimalwarn about improperly formatted checksum linesstatusdon't output anything, status code shows successquietd", 6);
    clap_builder::builder::arg::Arg::help::h43a23fae81905625(&v8, &v0, "exit non-zero for improperly formatted checksum linescheckread hashsums from the FILEs and check thembase64emit a base64 digest, not hexadecimalwarn about improperly formatted checksum linesstatusdon't output anything, status code shows successquietdon't p", 53);
    clap_builder::builder::arg::Arg::action::h3bd711464e110308(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg::hc7c87a762ea48fdd(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new::hbccce27f60dbcd03(&v3, "checkread hashsums from the FILEs and check thembase64emit a base64 digest, not hexadecimalwarn about improperly formatted checksum linesstatusdon't output anything, status code shows successquietdon't print OK for each successfully verified fileignore-mis", 5);
    clap_builder::builder::arg::Arg::short::h4bfc480a0f04f3a9(&v0, &v3, 99);
    clap_builder::builder::arg::Arg::long::hf7d9e45106ff7ec2(&v3, &v0, "checkread hashsums from the FILEs and check thembase64emit a base64 digest, not hexadecimalwarn about improperly formatted checksum linesstatusdon't output anything, status code shows successquietdon't print OK for each successfully verified fileignore-mis", 5);
    clap_builder::builder::arg::Arg::help::h43a23fae81905625(&v0, &v3, "read hashsums from the FILEs and check thembase64emit a base64 digest, not hexadecimalwarn about improperly formatted checksum linesstatusdon't output anything, status code shows successquietdon't print OK for each successfully verified fileignore-missingd", 43);
    clap_builder::builder::arg::Arg::action::h3bd711464e110308(&v3, &v0, 2);
    clap_builder::builder::arg::Arg::conflicts_with::h0ee0b1c4b7327279(&v0, &v3, "tagbinary0.0.28{} [OPTIONS] [FILE]...algorithmselect the digest type to use. See DIGEST belowALGORITHMbsdcrcmd5sha224sha256sha384sha512blake2bblake3sm3create a reversed style checksum, without digest typecreate a BSD style checksum, undo --untagged (defaul", 3);
    clap_builder::builder::command::Command::arg::hc7c87a762ea48fdd(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::hbccce27f60dbcd03(&v8, "base64emit a base64 digest, not hexadecimalwarn about improperly formatted checksum linesstatusdon't output anything, status code shows successquietdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missing file", 6);
    clap_builder::builder::arg::Arg::long::hf7d9e45106ff7ec2(&v0, &v8, "base64emit a base64 digest, not hexadecimalwarn about improperly formatted checksum linesstatusdon't output anything, status code shows successquietdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missing file", 6);
    clap_builder::builder::arg::Arg::help::h43a23fae81905625(&v8, &v0, "emit a base64 digest, not hexadecimalwarn about improperly formatted checksum linesstatusdon't output anything, status code shows successquietdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missing filesend e", 37);
    clap_builder::builder::arg::Arg::action::h3bd711464e110308(&v0, &v8, 2);
    clap_builder::builder::arg::Arg::conflicts_with::h0ee0b1c4b7327279(&v13, &v0, "rawemit a raw binary digest, not hexadecimalstrictexit non-zero for improperly formatted checksum linescheckread hashsums from the FILEs and check thembase64emit a base64 digest, not hexadecimalwarn about improperly formatted checksum linesstatusdon't outp", 3);
    clap_builder::builder::command::Command::arg::hc7c87a762ea48fdd(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new::hbccce27f60dbcd03(&v3, "textSomee", 4);
    clap_builder::builder::arg::Arg::long::hf7d9e45106ff7ec2(&v0, &v3, "textSomee", 4);
    clap_builder::builder::arg::Arg::short::h4bfc480a0f04f3a9(&v3, &v0, 116);
    memcpy(&v0, &v3, 584);
    v1 = *((int *)&v4) | 4;
    v2 = *((int *)&v5);
    clap_builder::builder::arg::Arg::overrides_with::h1b3d232ed4486e23(&v3, &v0, "binary0.0.28{} [OPTIONS] [FILE]...algorithmselect the digest type to use. See DIGEST belowALGORITHMbsdcrcmd5sha224sha256sha384sha512blake2bblake3sm3create a reversed style checksum, without digest typecreate a BSD style checksum, undo --untagged (default)l", 6);
    clap_builder::builder::arg::Arg::action::h3bd711464e110308(&v0, &v3, 2);
    clap_builder::builder::command::Command::arg::hc7c87a762ea48fdd(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::hbccce27f60dbcd03(&v8, "binary0.0.28{} [OPTIONS] [FILE]...algorithmselect the digest type to use. See DIGEST belowALGORITHMbsdcrcmd5sha224sha256sha384sha512blake2bblake3sm3create a reversed style checksum, without digest typecreate a BSD style checksum, undo --untagged (default)l", 6);
    clap_builder::builder::arg::Arg::long::hf7d9e45106ff7ec2(&v0, &v8, "binary0.0.28{} [OPTIONS] [FILE]...algorithmselect the digest type to use. See DIGEST belowALGORITHMbsdcrcmd5sha224sha256sha384sha512blake2bblake3sm3create a reversed style checksum, without digest typecreate a BSD style checksum, undo --untagged (default)l", 6);
    clap_builder::builder::arg::Arg::short::h4bfc480a0f04f3a9(&v8, &v0, 98);
    memcpy(&v0, &v8, 584);
    v1 = *((int *)&v9) | 4;
    v2 = *((int *)&v10);
    clap_builder::builder::arg::Arg::overrides_with::h1b3d232ed4486e23(&v8, &v0, "textSomee", 4);
    clap_builder::builder::arg::Arg::action::h3bd711464e110308(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg::hc7c87a762ea48fdd(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new::hbccce27f60dbcd03(&v3, "warnZeroV", 4);
    clap_builder::builder::arg::Arg::short::h4bfc480a0f04f3a9(&v0, &v3, 119);
    clap_builder::builder::arg::Arg::long::hf7d9e45106ff7ec2(&v3, &v0, "warnZeroV", 4);
    clap_builder::builder::arg::Arg::help::h43a23fae81905625(&v0, &v3, "warn about improperly formatted checksum linesstatusdon't output anything, status code shows successquietdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missing filesend each output line with NUL, not newline", 46);
    clap_builder::builder::arg::Arg::action::h3bd711464e110308(&v13, &v0, 2);
    clap_builder::builder::command::Command::arg::hc7c87a762ea48fdd(&v3, &v8, &v13);
    clap_builder::builder::arg::Arg::new::hbccce27f60dbcd03(&v8, "statusdon't output anything, status code shows successquietdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missing filesend each output line with NUL, not newline,\n and disable file name escapingDIGEST determ", 6);
    clap_builder::builder::arg::Arg::long::hf7d9e45106ff7ec2(&v0, &v8, "statusdon't output anything, status code shows successquietdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missing filesend each output line with NUL, not newline,\n and disable file name escapingDIGEST determ", 6);
    clap_builder::builder::arg::Arg::help::h43a23fae81905625(&v8, &v0, "don't output anything, status code shows successquietdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missing filesend each output line with NUL, not newline,\n and disable file name escapingDIGEST determines t", 48);
    clap_builder::builder::arg::Arg::action::h3bd711464e110308(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg::hc7c87a762ea48fdd(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new::hbccce27f60dbcd03(&v3, "quietdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missing filesend each output line with NUL, not newline,\n and disable file name escapingDIGEST determines the digest algorithm and default output format:\n\n", 5);
    clap_builder::builder::arg::Arg::long::hf7d9e45106ff7ec2(&v0, &v3, "quietdon't print OK for each successfully verified fileignore-missingdon't fail or report status for missing filesend each output line with NUL, not newline,\n and disable file name escapingDIGEST determines the digest algorithm and default output format:\n\n", 5);
    clap_builder::builder::arg::Arg::help::h43a23fae81905625(&v3, &v0, "don't print OK for each successfully verified fileignore-missingdon't fail or report status for missing filesend each output line with NUL, not newline,\n and disable file name escapingDIGEST determines the digest algorithm and default output format:\n\n- sys", 50);
    clap_builder::builder::arg::Arg::action::h3bd711464e110308(&v0, &v3, 2);
    clap_builder::builder::command::Command::arg::hc7c87a762ea48fdd(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::hbccce27f60dbcd03(&v8, "ignore-missingdon't fail or report status for missing filesend each output line with NUL, not newline,\n and disable file name escapingDIGEST determines the digest algorithm and default output format:\n\n- sysv:    (equivalent to sum -s)\n- bsd:     (equivalen", 14);
    clap_builder::builder::arg::Arg::long::hf7d9e45106ff7ec2(&v0, &v8, "ignore-missingdon't fail or report status for missing filesend each output line with NUL, not newline,\n and disable file name escapingDIGEST determines the digest algorithm and default output format:\n\n- sysv:    (equivalent to sum -s)\n- bsd:     (equivalen", 14);
    clap_builder::builder::arg::Arg::help::h43a23fae81905625(&v8, &v0, "don't fail or report status for missing filesend each output line with NUL, not newline,\n and disable file name escapingDIGEST determines the digest algorithm and default output format:\n\n- sysv:    (equivalent to sum -s)\n- bsd:     (equivalent to sum -r)\n-", 45);
    clap_builder::builder::arg::Arg::action::h3bd711464e110308(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg::hc7c87a762ea48fdd(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new::hbccce27f60dbcd03(&v3, "zeroAnsib", 4);
    clap_builder::builder::arg::Arg::long::hf7d9e45106ff7ec2(&v0, &v3, "zeroAnsib", 4);
    clap_builder::builder::arg::Arg::short::h4bfc480a0f04f3a9(&v3, &v0, 122);
    clap_builder::builder::arg::Arg::help::h43a23fae81905625(&v0, &v3, "end each output line with NUL, not newline,\n and disable file name escapingDIGEST determines the digest algorithm and default output format:\n\n- sysv:    (equivalent to sum -s)\n- bsd:     (equivalent to sum -r)\n- crc:     (equivalent to cksum)\n- md5:     (e", 75);
    clap_builder::builder::arg::Arg::action::h3bd711464e110308(&v13, &v0, 2);
    clap_builder::builder::command::Command::arg::hc7c87a762ea48fdd(&v3, &v8, &v13);
    clap_builder::builder::command::Command::after_help::h03e453fb274d4b16(a0, &v3, "DIGEST determines the digest algorithm and default output format:\n\n- sysv:    (equivalent to sum -s)\n- bsd:     (equivalent to sum -r)\n- crc:     (equivalent to cksum)\n- md5:     (equivalent to md5sum)\n- sha1:    (equivalent to sha1sum)\n- sha224:  (equivalent to sha224sum)\n- sha256:  (equivalent to sha256sum)\n- sha384:  (equivalent to sha384sum)\n- sha512:  (equivalent to sha512sum)\n- blake2b: (equivalent to b2sum)\n- sm3:     (only available through cksum)", 459);
    return a0;
}
