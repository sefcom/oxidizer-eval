long long uu_shuf::uu_app(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0xac8]
    char v1;  // [bp-0xab0]
    char v2;  // [bp-0x830]
    unsigned long long v3;  // [bp-0x574]
    unsigned int v4;  // [bp-0x56c]
    char v5;  // [bp-0x568]
    unsigned long v6;  // [bp-0x2ac]
    unsigned int v7;  // [bp-0x2a4]
    char v8;  // [bp-0x2a0], Other Possible Types: unsigned long long
    unsigned long long v11;  // rdx

    v2.new(uucore::util_name(), v11);
    v5.about(&v2);
    v2.version(&v5);
    uucore::format_usage(&v1, "{} [OPTION]... [FILE]\n{} -e [OPTION]... [ARG]...\n{} -i LO-HI [OPTION]...Shuffle the input by outputting a random permutation of input lines.\nEach output permutation is equally likely.\nWith no FILE, or when FILE is -, read standard input.input-rangehead-cou", 72);
    v5.override_usage(&v2, &v1);
    memcpy(&v2, &v5, 700);
    v3 = 549755814016 | v6;
    v4 = v7;
    v5.new("echoi128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGESTRPIPENotFoundTimedOutENETDOWN\n       ", 4);
    v1.short(&v5, 101);
    v5.long(&v1, "echoi128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGESTRPIPENotFoundTimedOutENETDOWN\n       ", 4);
    v1.help(&v5, "treat each ARG as an input lineLO-HItreat each number LO through HI as an input lineCOUNToutput at most COUNT lineswrite result to FILE instead of standard outputget random bytes from FILEoutput lines can be repeatedline delimiter is NUL, not newline-read ", 31);
    v5.action(&v1, 2);
    v1.overrides_with(&v5, "echoi128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGESTRPIPENotFoundTimedOutENETDOWN\n       ", 4);
    v8.conflicts_with(&v1, "input-rangehead-countoutputrandom-sourcerepeatzero-terminatedfile-or-args(uutils coreutils) 0.0.30treat each ARG as an input lineLO-HItreat each number LO through HI as an input lineCOUNToutput at most COUNT lineswrite result to FILE instead of standard ou", 11);
    v5.arg(&v2, &v8);
    v2.new("input-rangehead-countoutputrandom-sourcerepeatzero-terminatedfile-or-args(uutils coreutils) 0.0.30treat each ARG as an input lineLO-HItreat each number LO through HI as an input lineCOUNToutput at most COUNT lineswrite result to FILE instead of standard ou", 11);
    v1.short(&v2, 105);
    v2.long(&v1, "input-rangehead-countoutputrandom-sourcerepeatzero-terminatedfile-or-args(uutils coreutils) 0.0.30treat each ARG as an input lineLO-HItreat each number LO through HI as an input lineCOUNToutput at most COUNT lineswrite result to FILE instead of standard ou", 11);
    v1.value_name(&v2, "LO-HItreat each number LO through HI as an input lineCOUNToutput at most COUNT lineswrite result to FILE instead of standard outputget random bytes from FILEoutput lines can be repeatedline delimiter is NUL, not newline-read errorsrc/uu/shuf/src/shuf.rs", 5);
    v2.help(&v1, "treat each number LO through HI as an input lineCOUNToutput at most COUNT lineswrite result to FILE instead of standard outputget random bytes from FILEoutput lines can be repeatedline delimiter is NUL, not newline-read errorsrc/uu/shuf/src/shuf.rs", 48);
    v1.value_parser(&v2);
    v8.conflicts_with(&v1, "file-or-args(uutils coreutils) 0.0.30treat each ARG as an input lineLO-HItreat each number LO through HI as an input lineCOUNToutput at most COUNT lineswrite result to FILE instead of standard outputget random bytes from FILEoutput lines can be repeatedlin", 12);
    v2.arg(&v5, &v8);
    v5.new("head-countoutputrandom-sourcerepeatzero-terminatedfile-or-args(uutils coreutils) 0.0.30treat each ARG as an input lineLO-HItreat each number LO through HI as an input lineCOUNToutput at most COUNT lineswrite result to FILE instead of standard outputget ran", 10);
    v1.short(&v5, 110);
    v5.long(&v1, "head-countoutputrandom-sourcerepeatzero-terminatedfile-or-args(uutils coreutils) 0.0.30treat each ARG as an input lineLO-HItreat each number LO through HI as an input lineCOUNToutput at most COUNT lineswrite result to FILE instead of standard outputget ran", 10);
    v1.value_name(&v5, "COUNToutput at most COUNT lineswrite result to FILE instead of standard outputget random bytes from FILEoutput lines can be repeatedline delimiter is NUL, not newline-read errorsrc/uu/shuf/src/shuf.rs", 5);
    v5.action(&v1, 1);
    v1.help(&v5, "output at most COUNT lineswrite result to FILE instead of standard outputget random bytes from FILEoutput lines can be repeatedline delimiter is NUL, not newline-read errorsrc/uu/shuf/src/shuf.rs", 26);
    v8.value_parser(&v1);
    v5.arg(&v2, &v8);
    v2.new("outputrandom-sourcerepeatzero-terminatedfile-or-args(uutils coreutils) 0.0.30treat each ARG as an input lineLO-HItreat each number LO through HI as an input lineCOUNToutput at most COUNT lineswrite result to FILE instead of standard outputget random bytes ", 6);
    v1.short(&v2, 111);
    v2.long(&v1, "outputrandom-sourcerepeatzero-terminatedfile-or-args(uutils coreutils) 0.0.30treat each ARG as an input lineLO-HItreat each number LO through HI as an input lineCOUNToutput at most COUNT lineswrite result to FILE instead of standard outputget random bytes ", 6);
    v1.value_name(&v2, "FILEchar", 4);
    v2.help(&v1, "write result to FILE instead of standard outputget random bytes from FILEoutput lines can be repeatedline delimiter is NUL, not newline-read errorsrc/uu/shuf/src/shuf.rs", 47);
    v0 = 3;
    v1.value_parser(&v2, &v0);
    v8.value_hint(&v1);
    v2.arg(&v5, &v8);
    v5.new("random-sourcerepeatzero-terminatedfile-or-args(uutils coreutils) 0.0.30treat each ARG as an input lineLO-HItreat each number LO through HI as an input lineCOUNToutput at most COUNT lineswrite result to FILE instead of standard outputget random bytes from F", 13);
    v1.long(&v5, "random-sourcerepeatzero-terminatedfile-or-args(uutils coreutils) 0.0.30treat each ARG as an input lineLO-HItreat each number LO through HI as an input lineCOUNToutput at most COUNT lineswrite result to FILE instead of standard outputget random bytes from F", 13);
    v5.value_name(&v1, "FILEchar", 4);
    v1.help(&v5, "get random bytes from FILEoutput lines can be repeatedline delimiter is NUL, not newline-read errorsrc/uu/shuf/src/shuf.rs", 26);
    v5.value_parser(&v1, &v0);
    v1.value_hint(&v5);
    v5.arg(&v2, &v1);
    v2.new("repeatzero-terminatedfile-or-args(uutils coreutils) 0.0.30treat each ARG as an input lineLO-HItreat each number LO through HI as an input lineCOUNToutput at most COUNT lineswrite result to FILE instead of standard outputget random bytes from FILEoutput lin", 6);
    v1.short(&v2, 114);
    v2.long(&v1, "repeatzero-terminatedfile-or-args(uutils coreutils) 0.0.30treat each ARG as an input lineLO-HItreat each number LO through HI as an input lineCOUNToutput at most COUNT lineswrite result to FILE instead of standard outputget random bytes from FILEoutput lin", 6);
    v1.help(&v2, "output lines can be repeatedline delimiter is NUL, not newline-read errorsrc/uu/shuf/src/shuf.rs", 28);
    v2.action(&v1, 2);
    v1.overrides_with(&v2, "repeatzero-terminatedfile-or-args(uutils coreutils) 0.0.30treat each ARG as an input lineLO-HItreat each number LO through HI as an input lineCOUNToutput at most COUNT lineswrite result to FILE instead of standard outputget random bytes from FILEoutput lin", 6);
    v2.arg(&v5, &v1);
    v5.new("zero-terminatedfile-or-args(uutils coreutils) 0.0.30treat each ARG as an input lineLO-HItreat each number LO through HI as an input lineCOUNToutput at most COUNT lineswrite result to FILE instead of standard outputget random bytes from FILEoutput lines can", 15);
    v1.short(&v5, 122);
    v5.long(&v1, "zero-terminatedfile-or-args(uutils coreutils) 0.0.30treat each ARG as an input lineLO-HItreat each number LO through HI as an input lineCOUNToutput at most COUNT lineswrite result to FILE instead of standard outputget random bytes from FILEoutput lines can", 15);
    v1.help(&v5, "line delimiter is NUL, not newline-read errorsrc/uu/shuf/src/shuf.rs", 34);
    v5.action(&v1, 2);
    v1.overrides_with(&v5, "zero-terminatedfile-or-args(uutils coreutils) 0.0.30treat each ARG as an input lineLO-HItreat each number LO through HI as an input lineCOUNToutput at most COUNT lineswrite result to FILE instead of standard outputget random bytes from FILEoutput lines can", 15);
    v5.arg(&v2, &v1);
    v2.new("file-or-args(uutils coreutils) 0.0.30treat each ARG as an input lineLO-HItreat each number LO through HI as an input lineCOUNToutput at most COUNT lineswrite result to FILE instead of standard outputget random bytes from FILEoutput lines can be repeatedlin", 12);
    v1.action(&v2, 1);
    v8 = 2;
    v2.value_parser(&v1, &v8);
    v1.value_hint(&v2);
    a0.arg(&v5, &v1);
    return a0;
}
