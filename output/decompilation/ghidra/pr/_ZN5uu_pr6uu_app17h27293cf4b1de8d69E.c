undefined8 _ZN5uu_pr6uu_app17h27293cf4b1de8d69E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [584];
  uint local_800;
  undefined4 local_7fc;
  undefined local_7f8 [584];
  uint local_5b0;
  undefined4 local_5ac;
  ulong local_53c;
  undefined4 local_534;
  undefined local_530 [700];
  ulong local_274;
  undefined4 local_26c;
  undefined local_268 [592];
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h7dec7b017f2ecb6eE(local_530,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hd212dec74c26cbc6E
            (local_7f8,local_530,"0.0.28",6);
  _ZN12clap_builder7builder7command7Command5about17h66e2f5a678db2873E
            (local_530,local_7f8,
             "Write content of given file or standard input to standard output with pagination filter"
             ,0x57);
  _ZN12clap_builder7builder7command7Command10after_help17h7605065ff121a4e0E
            (local_7f8,local_530,
             "+PAGE           Begin output at page number page of the formatted input.\n-COLUMN         Produce multi-column output. See --column\n\nThe pr utility is a printing and pagination filter for text files.\nWhen multiple input files are specified, each is read, formatted, and written to standard output.\nBy default, the input is separated into 66-line pages, each with\n\n* A 5-line header with the page number, date, time, and the pathname of the file.\n* A 5-line trailer consisting of blank lines.\n\nIf standard output is associated with a terminal, diagnostic messages are suppressed until the pr\nutility has completed processing.\n\nWhen multiple column output is specified, text columns are of equal width.\nBy default, text columns are separated by at least one <blank>.\nInput lines that do not fit into a text column are truncated.\nLines are not truncated under single column output."
             ,0x36d);
                    /* try { // try from 002c3062 to 002c3076 has its CatchHandler @ 002c3cd1 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(auStack_a48,"{} [OPTION]... [FILE]...",0x18);
  _ZN12clap_builder7builder7command7Command14override_usage17h87816ddf62385552E
            (local_530,local_7f8,auStack_a48);
  (*(code *)PTR_memcpy_004484e8)(local_7f8,local_530,700);
  local_53c = local_274 | 0x4008800040088;
  local_534 = local_26c;
                    /* try { // try from 002c30d0 to 002c313c has its CatchHandler @ 002c3e60 */
  _ZN12clap_builder7builder3arg3Arg3new17hc1928347fd83b3e7E(local_530,"pages",5);
  _ZN12clap_builder7builder3arg3Arg4long17hda8e355c2f00d33bE(auStack_a48,local_530,"pages",5);
  _ZN12clap_builder7builder3arg3Arg4help17h851d896d2a6d3ed6E
            (local_530,auStack_a48,"Begin and stop printing with page FIRST_PAGE[:LAST_PAGE]",0x38);
  _ZN12clap_builder7builder3arg3Arg10value_name17h4ad66697c80d0fe3E
            (auStack_a48,local_530,"FIRST_PAGE[:LAST_PAGE]",0x16);
  _ZN12clap_builder7builder7command7Command3arg17hf1a4905edfc0c63eE(local_530,local_7f8,auStack_a48)
  ;
                    /* try { // try from 002c3155 to 002c31d9 has its CatchHandler @ 002c3e4e */
  _ZN12clap_builder7builder3arg3Arg3new17hc1928347fd83b3e7E(local_7f8,"header",6);
  _ZN12clap_builder7builder3arg3Arg5short17h6d87e454e0b6080eE(auStack_a48,local_7f8,0x68);
  _ZN12clap_builder7builder3arg3Arg4long17hda8e355c2f00d33bE(local_7f8,auStack_a48,"header",6);
  _ZN12clap_builder7builder3arg3Arg4help17h851d896d2a6d3ed6E
            (auStack_a48,local_7f8,
             "Use the string header to replace the file name in the header line.",0x42);
  _ZN12clap_builder7builder3arg3Arg10value_name17h4ad66697c80d0fe3E
            (local_268,auStack_a48,"STRING",6);
  _ZN12clap_builder7builder7command7Command3arg17hf1a4905edfc0c63eE(local_7f8,local_530,local_268);
                    /* try { // try from 002c31f7 to 002c325f has its CatchHandler @ 002c3d79 */
  _ZN12clap_builder7builder3arg3Arg3new17hc1928347fd83b3e7E(local_530,"double-space",0xc);
  _ZN12clap_builder7builder3arg3Arg5short17h6d87e454e0b6080eE(auStack_a48,local_530,100);
  _ZN12clap_builder7builder3arg3Arg4long17hda8e355c2f00d33bE
            (local_530,auStack_a48,"double-space",0xc);
  _ZN12clap_builder7builder3arg3Arg4help17h851d896d2a6d3ed6E
            (auStack_a48,local_530,
             "Produce output that is double spaced. An extra <newline> character is output following every <newline> found in the input."
             ,0x7a);
  _ZN12clap_builder7builder3arg3Arg6action17hb15e21bfc8572261E(local_268,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17hf1a4905edfc0c63eE(local_530,local_7f8,local_268);
                    /* try { // try from 002c3290 to 002c32f8 has its CatchHandler @ 002c3e3c */
  _ZN12clap_builder7builder3arg3Arg3new17hc1928347fd83b3e7E(local_7f8,"number-lines",0xc);
  _ZN12clap_builder7builder3arg3Arg5short17h6d87e454e0b6080eE(auStack_a48,local_7f8,0x6e);
  _ZN12clap_builder7builder3arg3Arg4long17hda8e355c2f00d33bE
            (local_7f8,auStack_a48,"number-lines",0xc);
  _ZN12clap_builder7builder3arg3Arg4help17h851d896d2a6d3ed6E
            (auStack_a48,local_7f8,
             "Provide width digit line numbering.  The default for width, if not specified, is 5.  The number occupies the first width column positions of each text column or each line of -m output.  If char (any non-digit character) is given, it is appended to the line number to separate it from whatever follows.  The default for char is a <tab>. Line numbers longer than width columns are truncated."
             ,0x185);
  (*(code *)PTR_memcpy_004484e8)(local_7f8,auStack_a48,0x248);
  local_5b0 = local_800 | 0x20;
  local_5ac = local_7fc;
                    /* try { // try from 002c3331 to 002c3347 has its CatchHandler @ 002c3e3c */
  _ZN12clap_builder7builder3arg3Arg10value_name17h4ad66697c80d0fe3E
            (auStack_a48,local_7f8,"[char][width]",0xd);
  _ZN12clap_builder7builder7command7Command3arg17hf1a4905edfc0c63eE(local_7f8,local_530,auStack_a48)
  ;
                    /* try { // try from 002c3360 to 002c33e4 has its CatchHandler @ 002c3e2a */
  _ZN12clap_builder7builder3arg3Arg3new17hc1928347fd83b3e7E(local_530,"first-line-number",0x11);
  _ZN12clap_builder7builder3arg3Arg5short17h6d87e454e0b6080eE(auStack_a48,local_530,0x4e);
  _ZN12clap_builder7builder3arg3Arg4long17hda8e355c2f00d33bE
            (local_530,auStack_a48,"first-line-number",0x11);
  _ZN12clap_builder7builder3arg3Arg4help17h851d896d2a6d3ed6E
            (auStack_a48,local_530,"start counting with NUMBER at 1st line of first page printed",
             0x3c);
  _ZN12clap_builder7builder3arg3Arg10value_name17h4ad66697c80d0fe3E
            (local_268,auStack_a48,"NUMBER",6);
  _ZN12clap_builder7builder7command7Command3arg17hf1a4905edfc0c63eE(local_530,local_7f8,local_268);
                    /* try { // try from 002c3402 to 002c346a has its CatchHandler @ 002c3d64 */
  _ZN12clap_builder7builder3arg3Arg3new17hc1928347fd83b3e7E(local_7f8,"omit-header",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17h6d87e454e0b6080eE(auStack_a48,local_7f8,0x74);
  _ZN12clap_builder7builder3arg3Arg4long17hda8e355c2f00d33bE
            (local_7f8,auStack_a48,"omit-header",0xb);
  _ZN12clap_builder7builder3arg3Arg4help17h851d896d2a6d3ed6E
            (auStack_a48,local_7f8,
             "Write neither the five-line identifying header nor the five-line trailer usually supplied for each page. Quit writing after the last line of each file without spacing to the end of the page."
             ,0xbe);
  _ZN12clap_builder7builder3arg3Arg6action17hb15e21bfc8572261E(local_268,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17hf1a4905edfc0c63eE(local_7f8,local_530,local_268);
                    /* try { // try from 002c349b to 002c351f has its CatchHandler @ 002c3e18 */
  _ZN12clap_builder7builder3arg3Arg3new17hc1928347fd83b3e7E(local_530,"length",6);
  _ZN12clap_builder7builder3arg3Arg5short17h6d87e454e0b6080eE(auStack_a48,local_530,0x6c);
  _ZN12clap_builder7builder3arg3Arg4long17hda8e355c2f00d33bE(local_530,auStack_a48,"length",6);
  _ZN12clap_builder7builder3arg3Arg4help17h851d896d2a6d3ed6E
            (auStack_a48,local_530,
             "Override the 66-line default (default number of lines of text 56, and with -F 63) and reset the page length to lines.  If lines is not greater than the sum  of  both the  header  and trailer depths (in lines), the pr utility shall suppress both the header and trailer, as if the -t option were in effect. "
             ,0x131);
  _ZN12clap_builder7builder3arg3Arg10value_name17h4ad66697c80d0fe3E
            (local_268,auStack_a48,"PAGE_LENGTH",0xb);
  _ZN12clap_builder7builder7command7Command3arg17hf1a4905edfc0c63eE(local_530,local_7f8,local_268);
                    /* try { // try from 002c353d to 002c35a5 has its CatchHandler @ 002c3d4f */
  _ZN12clap_builder7builder3arg3Arg3new17hc1928347fd83b3e7E(local_7f8,&DAT_00166ae0,0x10);
  _ZN12clap_builder7builder3arg3Arg5short17h6d87e454e0b6080eE(auStack_a48,local_7f8,0x72);
  _ZN12clap_builder7builder3arg3Arg4long17hda8e355c2f00d33bE
            (local_7f8,auStack_a48,&DAT_00166ae0,0x10);
  _ZN12clap_builder7builder3arg3Arg4help17h851d896d2a6d3ed6E
            (auStack_a48,local_7f8,"omit warning when a file cannot be opened",0x29);
  _ZN12clap_builder7builder3arg3Arg6action17hb15e21bfc8572261E(local_268,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17hf1a4905edfc0c63eE(local_7f8,local_530,local_268);
                    /* try { // try from 002c35d6 to 002c3653 has its CatchHandler @ 002c3e06 */
  _ZN12clap_builder7builder3arg3Arg3new17hc1928347fd83b3e7E(local_530,"form-feed",9);
  _ZN12clap_builder7builder3arg3Arg5short17h6d87e454e0b6080eE(auStack_a48,local_530,0x46);
  _ZN12clap_builder7builder3arg3Arg11short_alias17h45960be7a58464faE(local_530,auStack_a48,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17hda8e355c2f00d33bE(auStack_a48,local_530,"form-feed",9);
  _ZN12clap_builder7builder3arg3Arg4help17h851d896d2a6d3ed6E
            (local_530,auStack_a48,
             "Use a <form-feed> for new pages, instead of the default behavior that uses a sequence of <newline>s."
             ,100);
  _ZN12clap_builder7builder3arg3Arg6action17hb15e21bfc8572261E(auStack_a48,local_530,2);
  _ZN12clap_builder7builder7command7Command3arg17hf1a4905edfc0c63eE(local_530,local_7f8,auStack_a48)
  ;
                    /* try { // try from 002c3684 to 002c3708 has its CatchHandler @ 002c3df4 */
  _ZN12clap_builder7builder3arg3Arg3new17hc1928347fd83b3e7E(local_7f8,"width",5);
  _ZN12clap_builder7builder3arg3Arg5short17h6d87e454e0b6080eE(auStack_a48,local_7f8,0x77);
  _ZN12clap_builder7builder3arg3Arg4long17hda8e355c2f00d33bE(local_7f8,auStack_a48,"width",5);
  _ZN12clap_builder7builder3arg3Arg4help17h851d896d2a6d3ed6E
            (auStack_a48,local_7f8,
             "Set the width of the line to width column positions for multiple text-column output only. If the -w option is not specified and the -s option is not specified, the default width shall be 72. If the -w option is not specified and the -s option is specified, the default width shall be 512."
             ,0x120);
  _ZN12clap_builder7builder3arg3Arg10value_name17h4ad66697c80d0fe3E(local_268,auStack_a48,"width",5)
  ;
  _ZN12clap_builder7builder7command7Command3arg17hf1a4905edfc0c63eE(local_7f8,local_530,local_268);
                    /* try { // try from 002c3726 to 002c37aa has its CatchHandler @ 002c3de2 */
  _ZN12clap_builder7builder3arg3Arg3new17hc1928347fd83b3e7E(local_530,"page-width",10);
  _ZN12clap_builder7builder3arg3Arg5short17h6d87e454e0b6080eE(auStack_a48,local_530,0x57);
  _ZN12clap_builder7builder3arg3Arg4long17hda8e355c2f00d33bE(local_530,auStack_a48,"page-width",10);
  _ZN12clap_builder7builder3arg3Arg4help17h851d896d2a6d3ed6E
            (auStack_a48,local_530,
             "set page width to PAGE_WIDTH (72) characters always, truncate lines, except -J option is set, no interference with -S or -s"
             ,0x7b);
  _ZN12clap_builder7builder3arg3Arg10value_name17h4ad66697c80d0fe3E(local_268,auStack_a48,"width",5)
  ;
  _ZN12clap_builder7builder7command7Command3arg17hf1a4905edfc0c63eE(local_530,local_7f8,local_268);
                    /* try { // try from 002c37c8 to 002c3830 has its CatchHandler @ 002c3d3a */
  _ZN12clap_builder7builder3arg3Arg3new17hc1928347fd83b3e7E(local_7f8,"across",6);
  _ZN12clap_builder7builder3arg3Arg5short17h6d87e454e0b6080eE(auStack_a48,local_7f8,0x61);
  _ZN12clap_builder7builder3arg3Arg4long17hda8e355c2f00d33bE(local_7f8,auStack_a48,"across",6);
  _ZN12clap_builder7builder3arg3Arg4help17h851d896d2a6d3ed6E
            (auStack_a48,local_7f8,
             "Modify the effect of the - column option so that the columns are filled across the page in a  round-robin  order (for example, when column is 2, the first input line heads column 1, the second heads column 2, the third is the second line in column 1, and so on)."
             ,0x106);
  _ZN12clap_builder7builder3arg3Arg6action17hb15e21bfc8572261E(local_268,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17hf1a4905edfc0c63eE(local_7f8,local_530,local_268);
                    /* try { // try from 002c3861 to 002c38cd has its CatchHandler @ 002c3dcd */
  _ZN12clap_builder7builder3arg3Arg3new17hc1928347fd83b3e7E(local_530,"column",6);
  _ZN12clap_builder7builder3arg3Arg4long17hda8e355c2f00d33bE(auStack_a48,local_530,"column",6);
  _ZN12clap_builder7builder3arg3Arg4help17h851d896d2a6d3ed6E
            (local_530,auStack_a48,
             "Produce multi-column output that is arranged in column columns (the default shall be 1) and is written down each column  in  the order in which the text is received from the input file. This option should not be used with -m. The options -e and -i shall be assumed for multiple text-column output.  Whether or not text columns are produced with identical vertical lengths is unspecified, but a text column shall never exceed the length of the page (see the -l option). When used with -t, use the minimum number of lines to write the output."
             ,0x21c);
  _ZN12clap_builder7builder3arg3Arg10value_name17h4ad66697c80d0fe3E
            (auStack_a48,local_530,"column",6);
  _ZN12clap_builder7builder7command7Command3arg17hf1a4905edfc0c63eE(local_530,local_7f8,auStack_a48)
  ;
                    /* try { // try from 002c38e6 to 002c396a has its CatchHandler @ 002c3db8 */
  _ZN12clap_builder7builder3arg3Arg3new17hc1928347fd83b3e7E(local_7f8,"separator",9);
  _ZN12clap_builder7builder3arg3Arg5short17h6d87e454e0b6080eE(auStack_a48,local_7f8,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17hda8e355c2f00d33bE(local_7f8,auStack_a48,"separator",9);
  _ZN12clap_builder7builder3arg3Arg4help17h851d896d2a6d3ed6E
            (auStack_a48,local_7f8,
             "Separate text columns by the single character char instead of by the appropriate number of <space>s (default for char is the <tab> character)."
             ,0x8e);
  _ZN12clap_builder7builder3arg3Arg10value_name17h4ad66697c80d0fe3E
            (local_268,auStack_a48,&DAT_00164b58,4);
  _ZN12clap_builder7builder7command7Command3arg17hf1a4905edfc0c63eE(local_7f8,local_530,local_268);
                    /* try { // try from 002c3988 to 002c3a0c has its CatchHandler @ 002c3da3 */
  _ZN12clap_builder7builder3arg3Arg3new17hc1928347fd83b3e7E(local_530,"sep-string",10);
  _ZN12clap_builder7builder3arg3Arg5short17h6d87e454e0b6080eE(auStack_a48,local_530,0x53);
  _ZN12clap_builder7builder3arg3Arg4long17hda8e355c2f00d33bE(local_530,auStack_a48,"sep-string",10);
  _ZN12clap_builder7builder3arg3Arg4help17h851d896d2a6d3ed6E
            (auStack_a48,local_530,
             "separate columns by STRING, without -S: Default separator <TAB> with -J and <space> otherwise (same as -S\" \"), no effect on column options"
             ,0x8a);
  _ZN12clap_builder7builder3arg3Arg10value_name17h4ad66697c80d0fe3E
            (local_268,auStack_a48,"string",6);
  _ZN12clap_builder7builder7command7Command3arg17hf1a4905edfc0c63eE(local_530,local_7f8,local_268);
                    /* try { // try from 002c3a2a to 002c3a92 has its CatchHandler @ 002c3d25 */
  _ZN12clap_builder7builder3arg3Arg3new17hc1928347fd83b3e7E(local_7f8,"merge",5);
  _ZN12clap_builder7builder3arg3Arg5short17h6d87e454e0b6080eE(auStack_a48,local_7f8,0x6d);
  _ZN12clap_builder7builder3arg3Arg4long17hda8e355c2f00d33bE(local_7f8,auStack_a48,"merge",5);
  _ZN12clap_builder7builder3arg3Arg4help17h851d896d2a6d3ed6E
            (auStack_a48,local_7f8,
             "Merge files. Standard output shall be formatted so the pr utility writes one line from each file specified by a file operand, side by side into text columns of equal fixed widths, in terms of the number of column positions. Implementations shall support merging of at least nine file operands."
             ,0x125);
  _ZN12clap_builder7builder3arg3Arg6action17hb15e21bfc8572261E(local_268,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17hf1a4905edfc0c63eE(local_7f8,local_530,local_268);
                    /* try { // try from 002c3ac3 to 002c3b47 has its CatchHandler @ 002c3d8e */
  _ZN12clap_builder7builder3arg3Arg3new17hc1928347fd83b3e7E(local_530,"indent",6);
  _ZN12clap_builder7builder3arg3Arg5short17h6d87e454e0b6080eE(auStack_a48,local_530,0x6f);
  _ZN12clap_builder7builder3arg3Arg4long17hda8e355c2f00d33bE(local_530,auStack_a48,"indent",6);
  _ZN12clap_builder7builder3arg3Arg4help17h851d896d2a6d3ed6E
            (auStack_a48,local_530,
             "Each line of output shall be preceded by offset <space>s. If the -o option is not specified, the default offset shall be zero. The space taken is in addition to the output line width (see the -w option below)."
             ,0xd1);
  _ZN12clap_builder7builder3arg3Arg10value_name17h4ad66697c80d0fe3E
            (local_268,auStack_a48,"margin",6);
  _ZN12clap_builder7builder7command7Command3arg17hf1a4905edfc0c63eE(local_530,local_7f8,local_268);
                    /* try { // try from 002c3b65 to 002c3bb1 has its CatchHandler @ 002c3cfb */
  _ZN12clap_builder7builder3arg3Arg3new17hc1928347fd83b3e7E(local_7f8,"join-lines",10);
  _ZN12clap_builder7builder3arg3Arg5short17h6d87e454e0b6080eE(auStack_a48,local_7f8,0x4a);
  _ZN12clap_builder7builder3arg3Arg4help17h851d896d2a6d3ed6E
            (local_7f8,auStack_a48,
             "merge full lines, turns off -W line truncation, no column alignment, --sep-string[=STRING] sets separators"
             ,0x6a);
  _ZN12clap_builder7builder3arg3Arg6action17hb15e21bfc8572261E(auStack_a48,local_7f8,2);
  _ZN12clap_builder7builder7command7Command3arg17hf1a4905edfc0c63eE(local_7f8,local_530,auStack_a48)
  ;
                    /* try { // try from 002c3be2 to 002c3c32 has its CatchHandler @ 002c3d10 */
  _ZN12clap_builder7builder3arg3Arg3new17hc1928347fd83b3e7E(local_530,"helpt",4);
  _ZN12clap_builder7builder3arg3Arg4long17hda8e355c2f00d33bE(auStack_a48,local_530,"helpt",4);
  _ZN12clap_builder7builder3arg3Arg4help17h851d896d2a6d3ed6E
            (local_530,auStack_a48,"Print help information",0x16);
  _ZN12clap_builder7builder3arg3Arg6action17hb15e21bfc8572261E(auStack_a48,local_530,5);
  _ZN12clap_builder7builder7command7Command3arg17hf1a4905edfc0c63eE(local_530,local_7f8,auStack_a48)
  ;
                    /* try { // try from 002c3c63 to 002c3ca8 has its CatchHandler @ 002c3ce6 */
  _ZN12clap_builder7builder3arg3Arg3new17hc1928347fd83b3e7E(local_7f8,"files",5);
  _ZN12clap_builder7builder3arg3Arg6action17hb15e21bfc8572261E(auStack_a48,local_7f8,1);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h7a2c9cfd900e9b67E(local_7f8,auStack_a48,3);
  _ZN12clap_builder7builder7command7Command3arg17hf1a4905edfc0c63eE(param_1,local_530,local_7f8);
  return param_1;
}