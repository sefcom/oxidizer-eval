long long uu_basenc::uu_app(void* a0)
{
    char v0;  // [bp-0xfb0]
    char v1;  // [bp-0xd30]
    char v2;  // [bp-0xab0]
    char v3;  // [bp-0x7e8]
    char v4;  // [bp-0x520]
    char v5;  // [bp-0x2a0]

    uu_base32::base_common::base_app(&v3, "Encode/decode data and print to standard output\nWith no FILE, or when FILE is -, read standard input.\n\nWhen decoding, the input may contain newlines in addition to the bytes of\nthe formal alphabet. Use --ignore-garbage to attempt to recover\nfrom any other non-alphabet bytes in the encoded stream.", 297, "{} [OPTION]... [FILE]base64same as 'base64' programbase64urlfile- and url-safe base64base32same as 'base32' programbase32hexextended hex alphabet base32base16hex encodingbase2lsbfbit string with least significant bit (lsb) firstbase2msbfbit string with mos", 21);
    v2.new("base64same as 'base64' programbase64urlfile- and url-safe base64base32same as 'base32' programbase32hexextended hex alphabet base32base16hex encodingbase2lsbfbit string with least significant bit (lsb) firstbase2msbfbit string with most significant bit (ms", 6);
    v5.long(&v2, "base64same as 'base64' programbase64urlfile- and url-safe base64base32same as 'base32' programbase32hexextended hex alphabet base32base16hex encodingbase2lsbfbit string with least significant bit (lsb) firstbase2msbfbit string with most significant bit (ms", 6);
    v0.help(&v5, "same as 'base64' programbase64urlfile- and url-safe base64base32same as 'base32' programbase32hexextended hex alphabet base32base16hex encodingbase2lsbfbit string with least significant bit (lsb) firstbase2msbfbit string with most significant bit (msb) fir", 24);
    v4.action(&v0);
    v1.fold(&v4);
    memcpy(&v2, &v3, 712);
    v3.arg(&v2, &v1);
    v2.new("base64urlfile- and url-safe base64base32same as 'base32' programbase32hexextended hex alphabet base32base16hex encodingbase2lsbfbit string with least significant bit (lsb) firstbase2msbfbit string with most significant bit (msb) firstz85ascii85-like encoding;\nwhen encoding, input length must be a multiple of 4;\nwhen decoding, input length must be a multiple of 5", 9);
    v5.long(&v2, "base64urlfile- and url-safe base64base32same as 'base32' programbase32hexextended hex alphabet base32base16hex encodingbase2lsbfbit string with least significant bit (lsb) firstbase2msbfbit string with most significant bit (msb) firstz85ascii85-like encoding;\nwhen encoding, input length must be a multiple of 4;\nwhen decoding, input length must be a multiple of 5", 9);
    v0.help(&v5, "file- and url-safe base64base32same as 'base32' programbase32hexextended hex alphabet base32base16hex encodingbase2lsbfbit string with least significant bit (lsb) firstbase2msbfbit string with most significant bit (msb) firstz85ascii85-like encoding;\nwhen encoding, input length must be a multiple of 4;\nwhen decoding, input length must be a multiple of 5", 25);
    v4.action(&v0);
    v1.fold(&v4);
    memcpy(&v2, &v3, 712);
    v3.arg(&v2, &v1);
    v2.new("base32same as 'base32' programbase32hexextended hex alphabet base32base16hex encodingbase2lsbfbit string with least significant bit (lsb) firstbase2msbfbit string with most significant bit (msb) firstz85ascii85-like encoding;\nwhen encoding, input length must be a multiple of 4;\nwhen decoding, input length must be a multiple of 5", 6);
    v5.long(&v2, "base32same as 'base32' programbase32hexextended hex alphabet base32base16hex encodingbase2lsbfbit string with least significant bit (lsb) firstbase2msbfbit string with most significant bit (msb) firstz85ascii85-like encoding;\nwhen encoding, input length must be a multiple of 4;\nwhen decoding, input length must be a multiple of 5", 6);
    v0.help(&v5, "same as 'base32' programbase32hexextended hex alphabet base32base16hex encodingbase2lsbfbit string with least significant bit (lsb) firstbase2msbfbit string with most significant bit (msb) firstz85ascii85-like encoding;\nwhen encoding, input length must be a multiple of 4;\nwhen decoding, input length must be a multiple of 5", 24);
    v4.action(&v0);
    v1.fold(&v4);
    memcpy(&v2, &v3, 712);
    v3.arg(&v2, &v1);
    v2.new("base32hexextended hex alphabet base32base16hex encodingbase2lsbfbit string with least significant bit (lsb) firstbase2msbfbit string with most significant bit (msb) firstz85ascii85-like encoding;\nwhen encoding, input length must be a multiple of 4;\nwhen decoding, input length must be a multiple of 5", 9);
    v5.long(&v2, "base32hexextended hex alphabet base32base16hex encodingbase2lsbfbit string with least significant bit (lsb) firstbase2msbfbit string with most significant bit (msb) firstz85ascii85-like encoding;\nwhen encoding, input length must be a multiple of 4;\nwhen decoding, input length must be a multiple of 5", 9);
    v0.help(&v5, "extended hex alphabet base32base16hex encodingbase2lsbfbit string with least significant bit (lsb) firstbase2msbfbit string with most significant bit (msb) firstz85ascii85-like encoding;\nwhen encoding, input length must be a multiple of 4;\nwhen decoding, input length must be a multiple of 5", 28);
    v4.action(&v0);
    v1.fold(&v4);
    memcpy(&v2, &v3, 712);
    v3.arg(&v2, &v1);
    v2.new("base16hex encodingbase2lsbfbit string with least significant bit (lsb) firstbase2msbfbit string with most significant bit (msb) firstz85ascii85-like encoding;\nwhen encoding, input length must be a multiple of 4;\nwhen decoding, input length must be a multiple of 5", 6);
    v5.long(&v2, "base16hex encodingbase2lsbfbit string with least significant bit (lsb) firstbase2msbfbit string with most significant bit (msb) firstz85ascii85-like encoding;\nwhen encoding, input length must be a multiple of 4;\nwhen decoding, input length must be a multiple of 5", 6);
    v0.help(&v5, "hex encodingbase2lsbfbit string with least significant bit (lsb) firstbase2msbfbit string with most significant bit (msb) firstz85ascii85-like encoding;\nwhen encoding, input length must be a multiple of 4;\nwhen decoding, input length must be a multiple of 5", 12);
    v4.action(&v0);
    v1.fold(&v4);
    memcpy(&v2, &v3, 712);
    v3.arg(&v2, &v1);
    v2.new("base2lsbfbit string with least significant bit (lsb) firstbase2msbfbit string with most significant bit (msb) firstz85ascii85-like encoding;\nwhen encoding, input length must be a multiple of 4;\nwhen decoding, input length must be a multiple of 5", 9);
    v5.long(&v2, "base2lsbfbit string with least significant bit (lsb) firstbase2msbfbit string with most significant bit (msb) firstz85ascii85-like encoding;\nwhen encoding, input length must be a multiple of 4;\nwhen decoding, input length must be a multiple of 5", 9);
    v0.help(&v5, "bit string with least significant bit (lsb) firstbase2msbfbit string with most significant bit (msb) firstz85ascii85-like encoding;\nwhen encoding, input length must be a multiple of 4;\nwhen decoding, input length must be a multiple of 5", 49);
    v4.action(&v0);
    v1.fold(&v4);
    memcpy(&v2, &v3, 712);
    v3.arg(&v2, &v1);
    v2.new("base2msbfbit string with most significant bit (msb) firstz85ascii85-like encoding;\nwhen encoding, input length must be a multiple of 4;\nwhen decoding, input length must be a multiple of 5", 9);
    v5.long(&v2, "base2msbfbit string with most significant bit (msb) firstz85ascii85-like encoding;\nwhen encoding, input length must be a multiple of 4;\nwhen decoding, input length must be a multiple of 5", 9);
    v0.help(&v5, "bit string with most significant bit (msb) firstz85ascii85-like encoding;\nwhen encoding, input length must be a multiple of 4;\nwhen decoding, input length must be a multiple of 5", 48);
    v4.action(&v0);
    v1.fold(&v4);
    memcpy(&v2, &v3, 712);
    v3.arg(&v2, &v1);
    v2.new("z85ascii85-like encoding;\nwhen encoding, input length must be a multiple of 4;\nwhen decoding, input length must be a multiple of 5", 3);
    v5.long(&v2, "z85ascii85-like encoding;\nwhen encoding, input length must be a multiple of 4;\nwhen decoding, input length must be a multiple of 5", 3);
    v0.help(&v5, "ascii85-like encoding;\nwhen encoding, input length must be a multiple of 4;\nwhen decoding, input length must be a multiple of 5", 127);
    v4.action(&v0);
    v1.fold(&v4);
    memcpy(&v2, &v3, 712);
    v3.arg(&v2, &v1);
    memcpy(a0, &v3, 712);
    return a0;
}
