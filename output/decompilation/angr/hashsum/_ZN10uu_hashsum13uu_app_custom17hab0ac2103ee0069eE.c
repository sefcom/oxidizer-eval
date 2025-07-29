long long uu_hashsum::uu_app_custom(unsigned long a0)
{
    char *v0;  // [bp-0xf40], Other Possible Types: unsigned long long
    char *v1;  // [bp-0xf38], Other Possible Types: unsigned long long
    int v2;  // [bp-0xf30], Other Possible Types: char
    unsigned long long v3;  // [bp-0xf20]
    void* v4;  // [bp-0xf18]
    unsigned long long v5;  // [bp-0xf10]
    unsigned long long v6;  // [bp-0xf08]
    int v7;  // [bp-0xf00], Other Possible Types: char
    unsigned long long v8;  // [bp-0xef0]
    unsigned long long v9;  // [bp-0xee8]
    unsigned long long v10;  // [bp-0xee0]
    int v11;  // [bp-0xed8], Other Possible Types: char
    unsigned long long v12;  // [bp-0xec8]
    unsigned long long v13;  // [bp-0xec0]
    unsigned long long v14;  // [bp-0xeb8]
    int v15;  // [bp-0xeb0], Other Possible Types: char
    unsigned long long v16;  // [bp-0xea0]
    unsigned long long v17;  // [bp-0xe98]
    unsigned long long v18;  // [bp-0xe90]
    char v19;  // [bp-0xe88]
    unsigned long long v20;  // [bp-0xe78]
    unsigned long long v21;  // [bp-0xe70]
    unsigned long long v22;  // [bp-0xe68]
    int v23;  // [bp-0xe60], Other Possible Types: char
    unsigned long long v24;  // [bp-0xe50]
    unsigned long long v25;  // [bp-0xe48]
    unsigned long long v26;  // [bp-0xe40]
    char v27;  // [bp-0xe38]
    unsigned long long v28;  // [bp-0xe28]
    unsigned long long v29;  // [bp-0xe20]
    unsigned long long v30;  // [bp-0xe18]
    int v31;  // [bp-0xe10], Other Possible Types: char
    unsigned long long v32;  // [bp-0xe00]
    unsigned long long v33;  // [bp-0xdf8]
    unsigned long long v34;  // [bp-0xdf0]
    char v35;  // [bp-0xde8]
    unsigned long long v36;  // [bp-0xdd8]
    unsigned long long v37;  // [bp-0xdd0]
    unsigned long long v38;  // [bp-0xdc8]
    int v39;  // [bp-0xdc0], Other Possible Types: char
    unsigned long long v40;  // [bp-0xdb0]
    unsigned long long v41;  // [bp-0xda8]
    unsigned long long v42;  // [bp-0xda0]
    char v43;  // [bp-0xd98]
    unsigned long long v44;  // [bp-0xd88]
    char v45;  // [bp-0xd80]
    unsigned long long v46;  // [bp-0xd70]
    int v47;  // [bp-0xd68], Other Possible Types: char
    int v48;  // [bp-0xd58], Other Possible Types: char
    unsigned long long v49;  // [bp-0xd48]
    char v50;  // [bp-0xd40]
    int v51;  // [bp-0xd30]
    unsigned long long v52;  // [bp-0xd20]
    char v53;  // [bp-0xd18]
    int v54;  // [bp-0xd08]
    unsigned long long v55;  // [bp-0xcf8]
    char v56;  // [bp-0xcf0]
    char v57;  // [bp-0xce0]
    unsigned long long v58;  // [bp-0xcd0]
    char v59;  // [bp-0xcc8]
    int v60;  // [bp-0xcb8]
    unsigned long long v61;  // [bp-0xca8]
    char v62;  // [bp-0xca0]
    char v63;  // [bp-0xc90]
    unsigned long long v64;  // [bp-0xc80]
    char v65;  // [bp-0xc78]
    int v66;  // [bp-0xc68]
    unsigned long long v67;  // [bp-0xc58]
    char v68;  // [bp-0xc50]
    char v69;  // [bp-0xc40]
    unsigned long long v70;  // [bp-0xc30]
    char v71;  // [bp-0xc28]
    int v72;  // [bp-0xc18]
    unsigned long long v73;  // [bp-0xc08]
    char v74;  // [bp-0xc00]
    char v75;  // [bp-0xbf0]
    unsigned long long v76;  // [bp-0xbe0]
    char v77;  // [bp-0xbd8]
    int v78;  // [bp-0xbc8]
    unsigned long long v79;  // [bp-0xbb8]
    char v80;  // [bp-0xbb0]
    char v81;  // [bp-0xba0]
    unsigned long long v82;  // [bp-0xb90]
    char v83;  // [bp-0xb88]
    int v84;  // [bp-0xb78]
    unsigned long long v85;  // [bp-0xb68]
    char v86;  // [bp-0xb60]
    char v87;  // [bp-0xb50]
    unsigned long long v88;  // [bp-0xb40]
    unsigned long long v89;  // [bp-0xb38]
    unsigned long long v90;  // [bp-0xb30]
    char v91;  // [bp-0xb28]
    unsigned long long v92;  // [bp-0xb18]
    struct struct_0 v93[8];  // [bp-0xb10]
    char v94;  // [bp-0xb08], Other Possible Types: unsigned long long
    unsigned long long v95;  // [bp-0xb00]
    int v96;  // [bp-0xaf8], Other Possible Types: char
    unsigned long long v97;  // [bp-0xae8]
    unsigned long long v98;  // [bp-0x840]
    unsigned long long v99;  // [bp-0x838]
    char v100;  // [bp-0x830]
    unsigned long long v101;  // [bp-0x820]
    char v102;  // [bp-0x5c0], Other Possible Types: unsigned long long
    unsigned long long v103;  // [bp-0x5b8]
    int v104;  // [bp-0x5b0], Other Possible Types: char
    unsigned long long v105;  // [bp-0x5a0]
    char v106;  // [bp-0x2f8]
    unsigned long long v108[2];  // rax

    uu_hashsum::uu_app_common(&v94);
    uu_hashsum::uu_app_opt_bits(&v102, &v94);
    uu_hashsum::uu_app_b3sum_opts(&v106, &v102);
    uucore::mods::locale::get_message(&v94, "hashsum-help-md5", 16);
    v5 = "md5md5sumsha1sumsha224sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum(uutils coreutils) 0.1.0hashsum-abouthashsum-usagebinaryhashsum-help-binary-othercheckhashsum-help-checktaghashsum-help-text-otherquiethashsum-help-quietstatushashsum-hel";
    v6 = 3;
    memcpy(&v7, &v94, 16);
    v8 = *((long long *)&v96);
    uucore::mods::locale::get_message(&v94, "hashsum-help-sha1hashsum-help-sha224hashsum-help-sha256hashsum-help-sha384hashsum-help-sha512hashsum-help-sha3hashsum-help-sha3-224hashsum-help-sha3-256hashsum-help-sha3-384hashsum-help-sha3-512hashsum-help-shake128hashsum-help-shake256hashsum-help-b2sumha", 17);
    v9 = "sha1shimsysvname";
    v10 = 4;
    memcpy(&v11, &v94, 16);
    v12 = *((long long *)&v96);
    uucore::mods::locale::get_message(&v94, "hashsum-help-sha224hashsum-help-sha256hashsum-help-sha384hashsum-help-sha512hashsum-help-sha3hashsum-help-sha3-224hashsum-help-sha3-256hashsum-help-sha3-384hashsum-help-sha3-512hashsum-help-shake128hashsum-help-shake256hashsum-help-b2sumhashsum-help-b3sums", 19);
    v13 = "sha224sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum(uutils coreutils) 0.1.0hashsum-abouthashsum-usagebinaryhashsum-help-binary-othercheckhashsum-help-checktaghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statusstrictha";
    v14 = 6;
    memcpy(&v15, &v94, 16);
    v16 = *((long long *)&v96);
    uucore::mods::locale::get_message(&v94, "hashsum-help-sha256hashsum-help-sha384hashsum-help-sha512hashsum-help-sha3hashsum-help-sha3-224hashsum-help-sha3-256hashsum-help-sha3-384hashsum-help-sha3-512hashsum-help-shake128hashsum-help-shake256hashsum-help-b2sumhashsum-help-b3sumsha3-224sumsha3-256s", 19);
    v17 = "sha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum(uutils coreutils) 0.1.0hashsum-abouthashsum-usagebinaryhashsum-help-binary-othercheckhashsum-help-checktaghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-stri";
    v18 = 6;
    memcpy(&v19, &v94, 16);
    v20 = *((long long *)&v96);
    uucore::mods::locale::get_message(&v94, "hashsum-help-sha384hashsum-help-sha512hashsum-help-sha3hashsum-help-sha3-224hashsum-help-sha3-256hashsum-help-sha3-384hashsum-help-sha3-512hashsum-help-shake128hashsum-help-shake256hashsum-help-b2sumhashsum-help-b3sumsha3-224sumsha3-256sumsha3-384sumsha3-5", 19);
    v21 = "sha384sha384sumsha512sha512sumb2sumb3sum(uutils coreutils) 0.1.0hashsum-abouthashsum-usagebinaryhashsum-help-binary-othercheckhashsum-help-checktaghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-strictignore-missin";
    v22 = 6;
    memcpy(&v23, &v94, 16);
    v24 = *((long long *)&v96);
    uucore::mods::locale::get_message(&v94, "hashsum-help-sha512hashsum-help-sha3hashsum-help-sha3-224hashsum-help-sha3-256hashsum-help-sha3-384hashsum-help-sha3-512hashsum-help-shake128hashsum-help-shake256hashsum-help-b2sumhashsum-help-b3sumsha3-224sumsha3-256sumsha3-384sumsha3-512sumsha3sumshake12", 19);
    v25 = "sha512sha512sumb2sumb3sum(uutils coreutils) 0.1.0hashsum-abouthashsum-usagebinaryhashsum-help-binary-othercheckhashsum-help-checktaghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-i";
    v26 = 6;
    memcpy(&v27, &v94, 16);
    v28 = *((long long *)&v96);
    uucore::mods::locale::get_message(&v94, "hashsum-help-sha3hashsum-help-sha3-224hashsum-help-sha3-256hashsum-help-sha3-384hashsum-help-sha3-512hashsum-help-shake128hashsum-help-shake256hashsum-help-b2sumhashsum-help-b3sumsha3-224sumsha3-256sumsha3-384sumsha3-512sumsha3sumshake128sumshake256sum", 17);
    v29 = "sha3";
    v30 = 4;
    memcpy(&v31, &v94, 16);
    v32 = *((long long *)&v96);
    uucore::mods::locale::get_message(&v94, "hashsum-help-sha3-224hashsum-help-sha3-256hashsum-help-sha3-384hashsum-help-sha3-512hashsum-help-shake128hashsum-help-shake256hashsum-help-b2sumhashsum-help-b3sumsha3-224sumsha3-256sumsha3-384sumsha3-512sumsha3sumshake128sumshake256sum", 21);
    v33 = "sha3-224";
    v34 = 8;
    memcpy(&v35, &v94, 16);
    v36 = *((long long *)&v96);
    uucore::mods::locale::get_message(&v94, "hashsum-help-sha3-256hashsum-help-sha3-384hashsum-help-sha3-512hashsum-help-shake128hashsum-help-shake256hashsum-help-b2sumhashsum-help-b3sumsha3-224sumsha3-256sumsha3-384sumsha3-512sumsha3sumshake128sumshake256sum", 21);
    v37 = "sha3-256shake128deadlock";
    v38 = 8;
    memcpy(&v39, &v94, 16);
    v40 = *((long long *)&v96);
    uucore::mods::locale::get_message(&v94, "hashsum-help-sha3-384hashsum-help-sha3-512hashsum-help-shake128hashsum-help-shake256hashsum-help-b2sumhashsum-help-b3sumsha3-224sumsha3-256sumsha3-384sumsha3-512sumsha3sumshake128sumshake256sum", 21);
    v41 = "sha3-384SHA3_224@";
    v42 = 8;
    memcpy(&v43, &v94, 16);
    v44 = *((long long *)&v96);
    uucore::mods::locale::get_message(&v94, "hashsum-help-sha3-512hashsum-help-shake128hashsum-help-shake256hashsum-help-b2sumhashsum-help-b3sumsha3-224sumsha3-256sumsha3-384sumsha3-512sumsha3sumshake128sumshake256sum", 21);
    v0 = "sha3-512";
    v1 = 8;
    memcpy(&v2, &v94, 16);
    v3 = *((long long *)&v96);
    uucore::mods::locale::get_message(&v94, "hashsum-help-shake128hashsum-help-shake256hashsum-help-b2sumhashsum-help-b3sumsha3-224sumsha3-256sumsha3-384sumsha3-512sumsha3sumshake128sumshake256sum", 21);
    v98 = "shake128deadlock";
    v99 = 8;
    memcpy(&v100, &v94, 16);
    v101 = *((long long *)&v96);
    uucore::mods::locale::get_message(&v94, "hashsum-help-shake256hashsum-help-b2sumhashsum-help-b3sumsha3-224sumsha3-256sumsha3-384sumsha3-512sumsha3sumshake128sumshake256sum", 21);
    v102 = "shake256";
    v103 = 8;
    memcpy(&v104, &v94, 16);
    v105 = *((long long *)&v96);
    uucore::mods::locale::get_message(&v47, "hashsum-help-b2sumhashsum-help-b3sumsha3-224sumsha3-256sumsha3-384sumsha3-512sumsha3sumshake128sumshake256sum", 18);
    v94 = "b2sumb3sum(uutils coreutils) 0.1.0hashsum-abouthashsum-usagebinaryhashsum-help-binary-othercheckhashsum-help-checktaghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-ignore-missingha";
    v95 = 5;
    v96 = v47;
    v97 = *((long long *)&v48);
    uucore::mods::locale::get_message(&v45, "hashsum-help-b3sumsha3-224sumsha3-256sumsha3-384sumsha3-512sumsha3sumshake128sumshake256sum", 18);
    v92 = v46;
    memcpy(&v91, &v45, 16);
    memcpy(&v47, &v5, 16);
    v48 = v7;
    v49 = v8;
    memcpy(&v50, &v9, 16);
    v51 = v11;
    v52 = v12;
    v55 = v16;
    v54 = v15;
    memcpy(&v53, &v13, 16);
    v58 = v20;
    memcpy(&v57, &v19, 16);
    memcpy(&v56, &v17, 16);
    v61 = v24;
    v60 = v23;
    memcpy(&v59, &v21, 16);
    v64 = v28;
    memcpy(&v63, &v27, 16);
    memcpy(&v62, &v25, 16);
    v67 = v32;
    v66 = v31;
    memcpy(&v65, &v29, 16);
    v70 = v36;
    memcpy(&v69, &v35, 16);
    memcpy(&v68, &v33, 16);
    v73 = v40;
    v72 = v39;
    memcpy(&v71, &v37, 16);
    v76 = v44;
    memcpy(&v75, &v43, 16);
    memcpy(&v74, &v41, 16);
    v79 = v3;
    v78 = v2;
    memcpy(&v77, &v0, 16);
    v82 = v101;
    memcpy(&v81, &v100, 16);
    memcpy(&v80, &v98, 16);
    v85 = v105;
    v84 = v104;
    memcpy(&v83, &v102, 16);
    v88 = v97;
    memcpy(&v87, &v96, 16);
    memcpy(&v86, &v94, 16);
    v89 = "b3sum(uutils coreutils) 0.1.0hashsum-abouthashsum-usagebinaryhashsum-help-binary-othercheckhashsum-help-checktaghashsum-help-text-otherquiethashsum-help-quietstatushashsum-help-statusstricthashsum-help-strictignore-missinghashsum-help-ignore-missinghashsum";
    v90 = 5;
    v0 = &v47;
    v1 = &v93[0].field_0;
    if (v0.next())
    {
        do
        {
            memcpy(&v94, &v106, 712);
            v102.new(v108[0], v108[1]);
            v98.long(&v102, v108);
            v102.help(&v98, v108 + 1);
            v98.action(&v102, 2);
            v102.arg(&v94, &v98);
            memcpy(&v106, &v102, 712);
            v108 = v0.next();
        } while (v108);
    }
    memcpy(v4, &v106, 712);
    core::ptr::drop_in_place<[(&str,alloc::string::String); 15]>(&v47);
    return a0;
}
