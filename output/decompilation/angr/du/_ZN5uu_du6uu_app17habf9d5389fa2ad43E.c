long long uu_du::uu_app(unsigned long long a0)
{
    void* v0;  // [bp-0xb58], Other Possible Types: char
    unsigned long long v1;  // [bp-0xb50]
    int v2;  // [bp-0xb48], Other Possible Types: void*
    unsigned long long v3;  // [bp-0xb40]
    int v4;  // [bp-0xb38]
    int v5;  // [bp-0xb28], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0xb20]
    unsigned long long v7;  // [bp-0xb18], Other Possible Types: char
    int v8;  // [bp-0xb10]
    int v9;  // [bp-0xb00]
    int v10;  // [bp-0xaf0]
    int v11;  // [bp-0xae0]
    unsigned long long v12;  // [bp-0xad0]
    int v13;  // [bp-0xac8]
    int v14;  // [bp-0xab8]
    int v15;  // [bp-0xaa8]
    char v16;  // [bp-0xa98]
    unsigned long long v17;  // [bp-0xa88]
    unsigned int v18;  // [bp-0x8e0]
    unsigned int v19;  // [bp-0x8dc]
    int v20;  // [bp-0x8d0]
    char v21;  // [bp-0x8c0]
    unsigned int v22;  // [bp-0x648]
    char v23;  // [bp-0x644]
    unsigned long v24;  // [bp-0x604]
    unsigned int v25;  // [bp-0x5fc]
    char v26;  // [bp-0x5f8]
    unsigned int v27;  // [bp-0x380]
    char v28;  // [bp-0x37c]
    unsigned long long v29;  // [bp-0x33c]
    unsigned int v30;  // [bp-0x334]
    char v31;  // [bp-0x330]
    int v32;  // [bp-0x320]
    int v33;  // [bp-0x310]
    int v34;  // [bp-0x300]
    unsigned long long v35;  // [bp-0x2f0]
    int v36;  // [bp-0x2e8], Other Possible Types: char
    int v37;  // [bp-0x2d8]
    int v38;  // [bp-0x2c8]
    int v39;  // [bp-0x2b8]
    unsigned long long v40;  // [bp-0x2a8]
    int v41;  // [bp-0x2a0], Other Possible Types: char
    int v42;  // [bp-0x290]
    int v43;  // [bp-0x280]
    char v44;  // [bp-0x270]
    char v45;  // [bp-0x260]
    unsigned long long v48;  // rdx

    v21.new(uucore::util_name(), v48);
    v26.version(&v21);
    v21.about(&v26);
    v26.after_help(&v21);
    uucore::format_usage(&v0, "{} [OPTION]... [FILE]...\n{} [OPTION]... --files0-from=FPrint help information.allwrite counts for all files, not just directoriesapparent-sizeprint apparent sizes, rather than disk usage although the apparent size is usually smaller, it may be larger due t", 55);
    v21.override_usage(&v26, &v0);
    memcpy(&v26, &v21, 700);
    v29 = 2252349570023552 | v24;
    v30 = v25;
    v21.new("helpNoneshim", 4);
    v0.long(&v21, "helpNoneshim", 4);
    v21.help(&v0, "Print help information.allwrite counts for all files, not just directoriesapparent-sizeprint apparent sizes, rather than disk usage although the apparent size is usually smaller, it may be larger due to holes in ('sparse') files, internal fragmentation, in", 23);
    v0.action(&v21, 5);
    v21.arg(&v26, &v0);
    v26.new("allwrite counts for all files, not just directoriesapparent-sizeprint apparent sizes, rather than disk usage although the apparent size is usually smaller, it may be larger due to holes in ('sparse') files, internal fragmentation, indirect blocks, and the ", 3);
    v0.short(&v26, 97);
    v26.long(&v0, "allwrite counts for all files, not just directoriesapparent-sizeprint apparent sizes, rather than disk usage although the apparent size is usually smaller, it may be larger due to holes in ('sparse') files, internal fragmentation, indirect blocks, and the ", 3);
    v0.help(&v26, "write counts for all files, not just directoriesapparent-sizeprint apparent sizes, rather than disk usage although the apparent size is usually smaller, it may be larger due to holes in ('sparse') files, internal fragmentation, indirect blocks, and the lik", 48);
    v41.action(&v0, 2);
    v26.arg(&v21, &v41);
    v21.new("apparent-sizeprint apparent sizes, rather than disk usage although the apparent size is usually smaller, it may be larger due to holes in ('sparse') files, internal fragmentation, indirect blocks, and the likescale sizes by SIZE before printing them. E.g.,", 13);
    v0.long(&v21, "apparent-sizeprint apparent sizes, rather than disk usage although the apparent size is usually smaller, it may be larger due to holes in ('sparse') files, internal fragmentation, indirect blocks, and the likescale sizes by SIZE before printing them. E.g.,", 13);
    v21.help(&v0, "print apparent sizes, rather than disk usage although the apparent size is usually smaller, it may be larger due to holes in ('sparse') files, internal fragmentation, indirect blocks, and the likescale sizes by SIZE before printing them. E.g., '-BM' prints", 196);
    v0.action(&v21, 2);
    v21.arg(&v26, &v0);
    v26.new("block-size ignored\nsrc/uu/du/src/du.rscannot read directory cannot access ", 10);
    v0.short(&v26, 66);
    v26.long(&v0, "block-size ignored\nsrc/uu/du/src/du.rscannot read directory cannot access ", 10);
    v0.value_name(&v26, "SIZE", 4);
    v41.help(&v0, "scale sizes by SIZE before printing them. E.g., '-BM' prints sizes in units of 1,048,576 bytes. See SIZE format below.bbytesequivalent to '--apparent-size --block-size=1'ctotalproduce a grand totaldmax-depthNprint the total for a directory (or file, with -", 118);
    v26.arg(&v21, &v41);
    v21.new("bbytesequivalent to '--apparent-size --block-size=1'ctotalproduce a grand totaldmax-depthNprint the total for a directory (or file, with --all) only if it is N or fewer levels below the command line argument;  --max-depth=0 is the same as --summarizehhuman", 1);
    v0.short(&v21, 98);
    v21.long(&v0, "bytesequivalent to '--apparent-size --block-size=1'ctotalproduce a grand totaldmax-depthNprint the total for a directory (or file, with --all) only if it is N or fewer levels below the command line argument;  --max-depth=0 is the same as --summarizehhuman-", 5);
    v0.help(&v21, "equivalent to '--apparent-size --block-size=1'ctotalproduce a grand totaldmax-depthNprint the total for a directory (or file, with --all) only if it is N or fewer levels below the command line argument;  --max-depth=0 is the same as --summarizehhuman-reada", 46);
    v41.action(&v0, 2);
    v21.arg(&v26, &v41);
    v26.new("ctotalproduce a grand totaldmax-depthNprint the total for a directory (or file, with --all) only if it is N or fewer levels below the command line argument;  --max-depth=0 is the same as --summarizehhuman-readableprint sizes in human readable format (e.g.,", 1);
    v0.long(&v26, "totalproduce a grand totaldmax-depthNprint the total for a directory (or file, with --all) only if it is N or fewer levels below the command line argument;  --max-depth=0 is the same as --summarizehhuman-readableprint sizes in human readable format (e.g., ", 5);
    v26.short(&v0, 99);
    v0.help(&v26, "produce a grand totaldmax-depthNprint the total for a directory (or file, with --all) only if it is N or fewer levels below the command line argument;  --max-depth=0 is the same as --summarizehhuman-readableprint sizes in human readable format (e.g., 1K 23", 21);
    v41.action(&v0, 2);
    v26.arg(&v21, &v41);
    v21.new("dmax-depthNprint the total for a directory (or file, with --all) only if it is N or fewer levels below the command line argument;  --max-depth=0 is the same as --summarizehhuman-readableprint sizes in human readable format (e.g., 1K 234M 2G)inodeslist inod", 1);
    v0.short(&v21, 100);
    v21.long(&v0, "max-depthNprint the total for a directory (or file, with --all) only if it is N or fewer levels below the command line argument;  --max-depth=0 is the same as --summarizehhuman-readableprint sizes in human readable format (e.g., 1K 234M 2G)inodeslist inode", 9);
    v0.value_name(&v21, "Nprint the total for a directory (or file, with --all) only if it is N or fewer levels below the command line argument;  --max-depth=0 is the same as --summarizehhuman-readableprint sizes in human readable format (e.g., 1K 234M 2G)inodeslist inode usage in", 1);
    v41.help(&v0, "print the total for a directory (or file, with --all) only if it is N or fewer levels below the command line argument;  --max-depth=0 is the same as --summarizehhuman-readableprint sizes in human readable format (e.g., 1K 234M 2G)inodeslist inode usage inf", 160);
    v21.arg(&v26, &v41);
    v26.new("hhuman-readableprint sizes in human readable format (e.g., 1K 234M 2G)inodeslist inode usage information instead of block usage like --block-size=1Kklike --block-size=1Klcount-linkscount sizes many times if hard linkeddereferencefollow all symbolic linksfo", 1);
    v0.long(&v26, "human-readableprint sizes in human readable format (e.g., 1K 234M 2G)inodeslist inode usage information instead of block usage like --block-size=1Kklike --block-size=1Klcount-linkscount sizes many times if hard linkeddereferencefollow all symbolic linksfol", 14);
    v26.short(&v0, 104);
    v0.help(&v26, "print sizes in human readable format (e.g., 1K 234M 2G)inodeslist inode usage information instead of block usage like --block-size=1Kklike --block-size=1Klcount-linkscount sizes many times if hard linkeddereferencefollow all symbolic linksfollow only symli", 55);
    v41.action(&v0, 2);
    v26.arg(&v21, &v41);
    v21.new("inodeslist inode usage information instead of block usage like --block-size=1Kklike --block-size=1Klcount-linkscount sizes many times if hard linkeddereferencefollow all symbolic linksfollow only symlinks that are listed on the command lineno-dereferencedo", 6);
    v0.long(&v21, "inodeslist inode usage information instead of block usage like --block-size=1Kklike --block-size=1Klcount-linkscount sizes many times if hard linkeddereferencefollow all symbolic linksfollow only symlinks that are listed on the command lineno-dereferencedo", 6);
    v21.help(&v0, "list inode usage information instead of block usage like --block-size=1Kklike --block-size=1Klcount-linkscount sizes many times if hard linkeddereferencefollow all symbolic linksfollow only symlinks that are listed on the command lineno-dereferencedon't fo", 72);
    v0.action(&v21, 2);
    v21.arg(&v26, &v0);
    v26.new("klike --block-size=1Klcount-linkscount sizes many times if hard linkeddereferencefollow all symbolic linksfollow only symlinks that are listed on the command lineno-dereferencedon't follow any symbolic links (this is the default)mlike --block-size=1M0end e", 1);
    v0.short(&v26, 107);
    v26.help(&v0, "like --block-size=1Klcount-linkscount sizes many times if hard linkeddereferencefollow all symbolic linksfollow only symlinks that are listed on the command lineno-dereferencedon't follow any symbolic links (this is the default)mlike --block-size=1M0end ea", 20);
    v0.action(&v26, 2);
    v26.arg(&v21, &v0);
    v21.new("lcount-linkscount sizes many times if hard linkeddereferencefollow all symbolic linksfollow only symlinks that are listed on the command lineno-dereferencedon't follow any symbolic links (this is the default)mlike --block-size=1M0end each output line with ", 1);
    v0.short(&v21, 108);
    v21.long(&v0, "count-linkscount sizes many times if hard linkeddereferencefollow all symbolic linksfollow only symlinks that are listed on the command lineno-dereferencedon't follow any symbolic links (this is the default)mlike --block-size=1M0end each output line with 0", 11);
    v0.help(&v21, "count sizes many times if hard linkeddereferencefollow all symbolic linksfollow only symlinks that are listed on the command lineno-dereferencedon't follow any symbolic links (this is the default)mlike --block-size=1M0end each output line with 0 byte rathe", 37);
    v41.action(&v0, 2);
    v21.arg(&v26, &v41);
    v26.new("dereferencefollow all symbolic linksfollow only symlinks that are listed on the command lineno-dereferencedon't follow any symbolic links (this is the default)mlike --block-size=1M0end each output line with 0 byte rather than newlineSseparate-dirsdo not in", 11);
    v0.short(&v26, 76);
    v26.long(&v0, "dereferencefollow all symbolic linksfollow only symlinks that are listed on the command lineno-dereferencedon't follow any symbolic links (this is the default)mlike --block-size=1M0end each output line with 0 byte rather than newlineSseparate-dirsdo not in", 11);
    v0.help(&v26, "follow all symbolic linksfollow only symlinks that are listed on the command lineno-dereferencedon't follow any symbolic links (this is the default)mlike --block-size=1M0end each output line with 0 byte rather than newlineSseparate-dirsdo not include size ", 25);
    v41.action(&v0, 2);
    v26.arg(&v21, &v41);
    v21.new("dereference-argsConnection resetentity not found", 16);
    v0.short(&v21, 68);
    v21.visible_short_alias(&v0);
    v0.long(&v21, "dereference-argsConnection resetentity not found", 16);
    v21.help(&v0, "follow only symlinks that are listed on the command lineno-dereferencedon't follow any symbolic links (this is the default)mlike --block-size=1M0end each output line with 0 byte rather than newlineSseparate-dirsdo not include size of subdirectoriesssummari", 56);
    v0.action(&v21, 2);
    v21.arg(&v26, &v0);
    v26.new("no-dereferencedon't follow any symbolic links (this is the default)mlike --block-size=1M0end each output line with 0 byte rather than newlineSseparate-dirsdo not include size of subdirectoriesssummarizedisplay only a total for each argumentsilike -h, but u", 14);
    v0.short(&v26, 80);
    v26.long(&v0, "no-dereferencedon't follow any symbolic links (this is the default)mlike --block-size=1M0end each output line with 0 byte rather than newlineSseparate-dirsdo not include size of subdirectoriesssummarizedisplay only a total for each argumentsilike -h, but u", 14);
    v0.help(&v26, "don't follow any symbolic links (this is the default)mlike --block-size=1M0end each output line with 0 byte rather than newlineSseparate-dirsdo not include size of subdirectoriesssummarizedisplay only a total for each argumentsilike -h, but use powers of 1", 53);
    v26.overrides_with(&v0);
    v0.action(&v26, 2);
    v26.arg(&v21, &v0);
    v21.new("mlike --block-size=1M0end each output line with 0 byte rather than newlineSseparate-dirsdo not include size of subdirectoriesssummarizedisplay only a total for each argumentsilike -h, but use powers of 1000 not 1024one-file-systemskip directories on differ", 1);
    v0.short(&v21, 109);
    v21.help(&v0, "like --block-size=1M0end each output line with 0 byte rather than newlineSseparate-dirsdo not include size of subdirectoriesssummarizedisplay only a total for each argumentsilike -h, but use powers of 1000 not 1024one-file-systemskip directories on differe", 20);
    v0.action(&v21, 2);
    v21.arg(&v26, &v0);
    v26.new("0end each output line with 0 byte rather than newlineSseparate-dirsdo not include size of subdirectoriesssummarizedisplay only a total for each argumentsilike -h, but use powers of 1000 not 1024one-file-systemskip directories on different file systemsthres", 1);
    v0.short(&v26, 48);
    v26.long(&v0, "nullBOLDBlue", 4);
    v0.help(&v26, "end each output line with 0 byte rather than newlineSseparate-dirsdo not include size of subdirectoriesssummarizedisplay only a total for each argumentsilike -h, but use powers of 1000 not 1024one-file-systemskip directories on different file systemsthresh", 52);
    v41.action(&v0, 2);
    v26.arg(&v21, &v41);
    v21.new("Sseparate-dirsdo not include size of subdirectoriesssummarizedisplay only a total for each argumentsilike -h, but use powers of 1000 not 1024one-file-systemskip directories on different file systemsthresholdexclude entries smaller than SIZE if positive, or", 1);
    v0.short(&v21, 83);
    v21.long(&v0, "separate-dirsdo not include size of subdirectoriesssummarizedisplay only a total for each argumentsilike -h, but use powers of 1000 not 1024one-file-systemskip directories on different file systemsthresholdexclude entries smaller than SIZE if positive, or ", 13);
    v0.help(&v21, "do not include size of subdirectoriesssummarizedisplay only a total for each argumentsilike -h, but use powers of 1000 not 1024one-file-systemskip directories on different file systemsthresholdexclude entries smaller than SIZE if positive, or entries great", 37);
    v41.action(&v0, 2);
    v21.arg(&v26, &v41);
    v26.new("ssummarizedisplay only a total for each argumentsilike -h, but use powers of 1000 not 1024one-file-systemskip directories on different file systemsthresholdexclude entries smaller than SIZE if positive, or entries greater than SIZE if negativeverbose mode ", 1);
    v0.short(&v26, 115);
    v26.long(&v0, "summarizedisplay only a total for each argumentsilike -h, but use powers of 1000 not 1024one-file-systemskip directories on different file systemsthresholdexclude entries smaller than SIZE if positive, or entries greater than SIZE if negativeverbose mode (", 9);
    v0.help(&v26, "display only a total for each argumentsilike -h, but use powers of 1000 not 1024one-file-systemskip directories on different file systemsthresholdexclude entries smaller than SIZE if positive, or entries greater than SIZE if negativeverbose mode (option no", 38);
    v41.action(&v0, 2);
    v26.arg(&v21, &v41);
    v21.new("silike -h, but use powers of 1000 not 1024one-file-systemskip directories on different file systemsthresholdexclude entries smaller than SIZE if positive, or entries greater than SIZE if negativeverbose mode (option not present in GNU/Coreutils)PATTERNexcl", 2);
    v0.long(&v21, "silike -h, but use powers of 1000 not 1024one-file-systemskip directories on different file systemsthresholdexclude entries smaller than SIZE if positive, or entries greater than SIZE if negativeverbose mode (option not present in GNU/Coreutils)PATTERNexcl", 2);
    v21.help(&v0, "like -h, but use powers of 1000 not 1024one-file-systemskip directories on different file systemsthresholdexclude entries smaller than SIZE if positive, or entries greater than SIZE if negativeverbose mode (option not present in GNU/Coreutils)PATTERNexclud", 40);
    v0.action(&v21, 2);
    v21.arg(&v26, &v0);
    v26.new("one-file-systemskip directories on different file systemsthresholdexclude entries smaller than SIZE if positive, or entries greater than SIZE if negativeverbose mode (option not present in GNU/Coreutils)PATTERNexclude files that match any pattern in FILEfi", 15);
    v0.short(&v26, 120);
    v26.long(&v0, "one-file-systemskip directories on different file systemsthresholdexclude entries smaller than SIZE if positive, or entries greater than SIZE if negativeverbose mode (option not present in GNU/Coreutils)PATTERNexclude files that match any pattern in FILEfi", 15);
    v0.help(&v26, "skip directories on different file systemsthresholdexclude entries smaller than SIZE if positive, or entries greater than SIZE if negativeverbose mode (option not present in GNU/Coreutils)PATTERNexclude files that match any pattern in FILEfiles0-fromsummar", 42);
    v41.action(&v0, 2);
    v26.arg(&v21, &v41);
    v21.new("thresholdexclude entries smaller than SIZE if positive, or entries greater than SIZE if negativeverbose mode (option not present in GNU/Coreutils)PATTERNexclude files that match any pattern in FILEfiles0-fromsummarize device usage of the NUL-terminated fil", 9);
    v0.short(&v21, 116);
    v21.long(&v0, "thresholdexclude entries smaller than SIZE if positive, or entries greater than SIZE if negativeverbose mode (option not present in GNU/Coreutils)PATTERNexclude files that match any pattern in FILEfiles0-fromsummarize device usage of the NUL-terminated fil", 9);
    v0.value_name(&v21, "SIZE", 4);
    v21.num_args(&v0);
    memcpy(&v0, &v21, 632);
    v18 = v22 | 32;
    v19 = *((int *)&v23);
    v41.help(&v0, "exclude entries smaller than SIZE if positive, or entries greater than SIZE if negativeverbose mode (option not present in GNU/Coreutils)PATTERNexclude files that match any pattern in FILEfiles0-fromsummarize device usage of the NUL-terminated file names s", 87);
    v21.arg(&v26, &v41);
    v26.new("verbose: \n\ttotal\t: read error: Is a directorycannot open '' for reading: No such file or directory:", 7);
    v0.short(&v26, 118);
    v26.long(&v0, "verbose: \n\ttotal\t: read error: Is a directorycannot open '' for reading: No such file or directory:", 7);
    v0.help(&v26, "verbose mode (option not present in GNU/Coreutils)PATTERNexclude files that match any pattern in FILEfiles0-fromsummarize device usage of the NUL-terminated file names specified in file F; if F is -, then read names from standard inputaccessusestatusbirths", 50);
    v41.action(&v0, 2);
    v26.arg(&v21, &v41);
    v21.new("excludeverbose: \n\ttotal\t: read error: Is a directorycannot open '' for reading: No such file or directory:", 7);
    v0.long(&v21, "excludeverbose: \n\ttotal\t: read error: Is a directorycannot open '' for reading: No such file or directory:", 7);
    v21.value_name(&v0, "PATTERNexclude files that match any pattern in FILEfiles0-fromsummarize device usage of the NUL-terminated file names specified in file F; if F is -, then read names from standard inputaccessusestatusbirthshow time of the last modification of any file in t", 7);
    v0.help(&v21, "exclude files that match PATTERN", 32);
    v41.action(&v0, 1);
    v21.arg(&v26, &v41);
    v26.new("exclude-fromexcludeverbose: \n\ttotal\t: read error: Is a directorycannot open '' for reading: No such file or directory:", 12);
    v0.short(&v26, 88);
    v26.long(&v0, "exclude-fromexcludeverbose: \n\ttotal\t: read error: Is a directorycannot open '' for reading: No such file or directory:", 12);
    v0.value_name(&v26, "FILEWORDcharJuly", 4);
    v26.value_hint(&v0, 3);
    v0.help(&v26, "exclude files that match any pattern in FILEfiles0-fromsummarize device usage of the NUL-terminated file names specified in file F; if F is -, then read names from standard inputaccessusestatusbirthshow time of the last modification of any file in the dire", 44);
    v41.action(&v0, 1);
    v26.arg(&v21, &v41);
    v21.new("files0-fromsummarize device usage of the NUL-terminated file names specified in file F; if F is -, then read names from standard inputaccessusestatusbirthshow time of the last modification of any file in the directory, or any of its subdirectories. If WORD", 11);
    v0.long(&v21, "files0-fromsummarize device usage of the NUL-terminated file names specified in file F; if F is -, then read names from standard inputaccessusestatusbirthshow time of the last modification of any file in the directory, or any of its subdirectories. If WORD", 11);
    v21.value_name(&v0, "FILEWORDcharJuly", 4);
    v0.value_hint(&v21, 3);
    v21.help(&v0, "summarize device usage of the NUL-terminated file names specified in file F; if F is -, then read names from standard inputaccessusestatusbirthshow time of the last modification of any file in the directory, or any of its subdirectories. If WORD is given, ", 123);
    v0.action(&v21, 1);
    v21.arg(&v26, &v0);
    v26.new("timecodetip:", 4);
    v0.long(&v26, "timecodetip:", 4);
    v26.value_name(&v0, "WORDcharJuly", 4);
    memcpy(&v0, &v26, 632);
    v18 = 128 | v27;
    v19 = *((int *)&v28);
    v26.num_args(&v0);
    v5 = "atimectime(uutils coreutils) 0.0.30Estimate file space usageDisplay values are in units of the first available SIZE from --block-size,\nand the DU_BLOCK_SIZE, BLOCK_SIZE and BLOCKSIZE environment variables.\nOtherwise, units default to 1024 bytes (or 512 if ";
    v6 = 5;
    v3 = 0x8000000000000000;
    v4 = v20;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v7 = 0;
    v41.alias(&v0, "accessusestatusbirthshow time of the last modification of any file in the directory, or any of its subdirectories. If WORD is given, show time as WORD instead of modification time: atime, access, use, ctime, status, birth or creationtime-styleSTYLEshow tim", 6);
    v31.alias(&v41, "usestatusbirthshow time of the last modification of any file in the directory, or any of its subdirectories. If WORD is given, show time as WORD instead of modification time: atime, access, use, ctime, status, birth or creationtime-styleSTYLEshow times usi", 3);
    v5 = "ctime(uutils coreutils) 0.0.30Estimate file space usageDisplay values are in units of the first available SIZE from --block-size,\nand the DU_BLOCK_SIZE, BLOCK_SIZE and BLOCKSIZE environment variables.\nOtherwise, units default to 1024 bytes (or 512 if POSIX";
    v6 = 5;
    v3 = 0x8000000000000000;
    v4 = v20;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v7 = 0;
    v36.alias(&v0, "statusbirthshow time of the last modification of any file in the directory, or any of its subdirectories. If WORD is given, show time as WORD instead of modification time: atime, access, use, ctime, status, birth or creationtime-styleSTYLEshow times using ", 6);
    v5 = "creationUIoErrorinternal error: entered unreachable code: should be caught by clap";
    v6 = 8;
    v3 = 0x8000000000000000;
    v4 = v20;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v7 = 0;
    v41.alias(&v0, "birthshow time of the last modification of any file in the directory, or any of its subdirectories. If WORD is given, show time as WORD instead of modification time: atime, access, use, ctime, status, birth or creationtime-styleSTYLEshow times using style ", 5);
    memcpy(&v0, &v31, 16);
    v2 = v32;
    v4 = v33;
    v5 = v34;
    v7 = v35;
    v8 = v36;
    v9 = v37;
    v10 = v38;
    v11 = v39;
    v12 = v40;
    v17 = *((long long *)&v45);
    memcpy(&v16, &v44, 16);
    v15 = v43;
    v14 = v42;
    v13 = v41;
    v41.from(&v0);
    v0.value_parser(&v26, &v41);
    v41.help(&v0, "show time of the last modification of any file in the directory, or any of its subdirectories. If WORD is given, show time as WORD instead of modification time: atime, access, use, ctime, status, birth or creationtime-styleSTYLEshow times using style STYLE", 213);
    v26.arg(&v21, &v41);
    v21.new("time-styleSTYLEshow times using style STYLE: full-iso, long-iso, iso, +FORMAT FORMAT is interpreted like 'date'invalid suffix in -- argument invalid ---- too large", 10);
    v0.long(&v21, "time-styleSTYLEshow times using style STYLE: full-iso, long-iso, iso, +FORMAT FORMAT is interpreted like 'date'invalid suffix in -- argument invalid ---- too large", 10);
    v21.value_name(&v0, "STYLEshow times using style STYLE: full-iso, long-iso, iso, +FORMAT FORMAT is interpreted like 'date'invalid suffix in -- argument invalid ---- too large", 5);
    v0.help(&v21, "show times using style STYLE: full-iso, long-iso, iso, +FORMAT FORMAT is interpreted like 'date'invalid suffix in -- argument invalid ---- too large", 96);
    v21.arg(&v26, &v0);
    v26.new("FILEWORDcharJuly", 4);
    memcpy(&v0, &v26, 632);
    v18 = v27 | 4;
    v19 = *((int *)&v28);
    v26.value_hint(&v0, 2);
    v0.action(&v26, 1);
    a0.arg(&v21, &v0);
    return a0;
}
