undefined8 __rustcall uu_pr::uu_app(undefined8 param_1)

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
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_530,uVar1);
  clap_builder::builder::command::Command::version(local_7f8,local_530,"0.0.28",6);
  clap_builder::builder::command::Command::about
            (local_530,local_7f8,
             "Write content of given file or standard input to standard output with pagination filter"
             ,0x57);
  clap_builder::builder::command::Command::after_help
            (local_7f8,local_530,
             "+PAGE           Begin output at page number page of the formatted input.\n-COLUMN         Produce multi-column output. See --column\n\nThe pr utility is a printing and pagination filter for text files.\nWhen multiple input files are specified, each is read, formatted, and written to standard output.\nBy default, the input is separated into 66-line pages, each with\n\n* A 5-line header with the page number, date, time, and the pathname of the file.\n* A 5-line trailer consisting of blank lines.\n\nIf standard output is associated with a terminal, diagnostic messages are suppressed until the pr\nutility has completed processing.\n\nWhen multiple column output is specified, text columns are of equal width.\nBy default, text columns are separated by at least one <blank>.\nInput lines that do not fit into a text column are truncated.\nLines are not truncated under single column output."
             ,0x36d);
                    /* try { // try from 002c24e2 to 002c24f6 has its CatchHandler @ 002c3151 */
  uucore::format_usage(auStack_a48,"{} [OPTION]... [FILE]...",0x18);
  clap_builder::builder::command::Command::override_usage(local_530,local_7f8,auStack_a48);
  (*(code *)PTR_memcpy_00447cc0)(local_7f8,local_530,700);
  local_53c = local_274 | 0x4008800040088;
  local_534 = local_26c;
                    /* try { // try from 002c2550 to 002c25bc has its CatchHandler @ 002c32e0 */
  clap_builder::builder::arg::Arg::new(local_530,"pages",5);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,"pages",5);
  clap_builder::builder::arg::Arg::help
            (local_530,auStack_a48,"Begin and stop printing with page FIRST_PAGE[:LAST_PAGE]",0x38);
  clap_builder::builder::arg::Arg::value_name(auStack_a48,local_530,"FIRST_PAGE[:LAST_PAGE]",0x16);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 002c25d5 to 002c2659 has its CatchHandler @ 002c32ce */
  clap_builder::builder::arg::Arg::new(local_7f8,"header",6);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x68);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"header",6);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_7f8,
             "Use the string header to replace the file name in the header line.",0x42);
  clap_builder::builder::arg::Arg::value_name(local_268,auStack_a48,"STRING",6);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_268);
                    /* try { // try from 002c2677 to 002c26df has its CatchHandler @ 002c31f9 */
  clap_builder::builder::arg::Arg::new(local_530,"double-space",0xc);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,100);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"double-space",0xc);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,
             "Produce output that is double spaced. An extra <newline> character is output following every <newline> found in the input."
             ,0x7a);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 002c2710 to 002c2778 has its CatchHandler @ 002c32bc */
  clap_builder::builder::arg::Arg::new(local_7f8,"number-lines",0xc);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x6e);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"number-lines",0xc);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_7f8,
             "Provide width digit line numbering.  The default for width, if not specified, is 5.  The number occupies the first width column positions of each text column or each line of -m output.  If char (any non-digit character) is given, it is appended to the line number to separate it from whatever follows.  The default for char is a <tab>. Line numbers longer than width columns are truncated."
             ,0x185);
  (*(code *)PTR_memcpy_00447cc0)(local_7f8,auStack_a48,0x248);
  local_5b0 = local_800 | 0x20;
  local_5ac = local_7fc;
                    /* try { // try from 002c27b1 to 002c27c7 has its CatchHandler @ 002c32bc */
  clap_builder::builder::arg::Arg::value_name(auStack_a48,local_7f8,"[char][width]",0xd);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 002c27e0 to 002c2864 has its CatchHandler @ 002c32aa */
  clap_builder::builder::arg::Arg::new(local_530,"first-line-number",0x11);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x4e);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"first-line-number",0x11);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,"start counting with NUMBER at 1st line of first page printed",
             0x3c);
  clap_builder::builder::arg::Arg::value_name(local_268,auStack_a48,"NUMBER",6);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 002c2882 to 002c28ea has its CatchHandler @ 002c31e4 */
  clap_builder::builder::arg::Arg::new(local_7f8,"omit-header",0xb);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x74);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"omit-header",0xb);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_7f8,
             "Write neither the five-line identifying header nor the five-line trailer usually supplied for each page. Quit writing after the last line of each file without spacing to the end of the page."
             ,0xbe);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_268);
                    /* try { // try from 002c291b to 002c299f has its CatchHandler @ 002c3298 */
  clap_builder::builder::arg::Arg::new(local_530,"length",6);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x6c);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"length",6);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,
             "Override the 66-line default (default number of lines of text 56, and with -F 63) and reset the page length to lines.  If lines is not greater than the sum  of  both the  header  and trailer depths (in lines), the pr utility shall suppress both the header and trailer, as if the -t option were in effect. "
             ,0x131);
  clap_builder::builder::arg::Arg::value_name(local_268,auStack_a48,"PAGE_LENGTH",0xb);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 002c29bd to 002c2a25 has its CatchHandler @ 002c31cf */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_00166c60,0x10);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x72);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,&DAT_00166c60,0x10);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_7f8,"omit warning when a file cannot be opened",0x29);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_268);
                    /* try { // try from 002c2a56 to 002c2ad3 has its CatchHandler @ 002c3286 */
  clap_builder::builder::arg::Arg::new(local_530,"form-feed",9);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x46);
  clap_builder::builder::arg::Arg::short_alias(local_530,auStack_a48,0x66);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,"form-feed",9);
  clap_builder::builder::arg::Arg::help
            (local_530,auStack_a48,
             "Use a <form-feed> for new pages, instead of the default behavior that uses a sequence of <newline>s."
             ,100);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_530,2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 002c2b04 to 002c2b88 has its CatchHandler @ 002c3274 */
  clap_builder::builder::arg::Arg::new(local_7f8,"width",5);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x77);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"width",5);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_7f8,
             "Set the width of the line to width column positions for multiple text-column output only. If the -w option is not specified and the -s option is not specified, the default width shall be 72. If the -w option is not specified and the -s option is specified, the default width shall be 512."
             ,0x120);
  clap_builder::builder::arg::Arg::value_name(local_268,auStack_a48,"width",5);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_268);
                    /* try { // try from 002c2ba6 to 002c2c2a has its CatchHandler @ 002c3262 */
  clap_builder::builder::arg::Arg::new(local_530,"page-width",10);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x57);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"page-width",10);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,
             "set page width to PAGE_WIDTH (72) characters always, truncate lines, except -J option is set, no interference with -S or -s"
             ,0x7b);
  clap_builder::builder::arg::Arg::value_name(local_268,auStack_a48,"width",5);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 002c2c48 to 002c2cb0 has its CatchHandler @ 002c31ba */
  clap_builder::builder::arg::Arg::new(local_7f8,"across",6);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x61);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"across",6);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_7f8,
             "Modify the effect of the - column option so that the columns are filled across the page in a  round-robin  order (for example, when column is 2, the first input line heads column 1, the second heads column 2, the third is the second line in column 1, and so on)."
             ,0x106);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_268);
                    /* try { // try from 002c2ce1 to 002c2d4d has its CatchHandler @ 002c324d */
  clap_builder::builder::arg::Arg::new(local_530,"column",6);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,"column",6);
  clap_builder::builder::arg::Arg::help
            (local_530,auStack_a48,
             "Produce multi-column output that is arranged in column columns (the default shall be 1) and is written down each column  in  the order in which the text is received from the input file. This option should not be used with -m. The options -e and -i shall be assumed for multiple text-column output.  Whether or not text columns are produced with identical vertical lengths is unspecified, but a text column shall never exceed the length of the page (see the -l option). When used with -t, use the minimum number of lines to write the output."
             ,0x21c);
  clap_builder::builder::arg::Arg::value_name(auStack_a48,local_530,"column",6);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 002c2d66 to 002c2dea has its CatchHandler @ 002c3238 */
  clap_builder::builder::arg::Arg::new(local_7f8,"separator",9);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x73);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"separator",9);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_7f8,
             "Separate text columns by the single character char instead of by the appropriate number of <space>s (default for char is the <tab> character)."
             ,0x8e);
  clap_builder::builder::arg::Arg::value_name(local_268,auStack_a48,&DAT_00164c58,4);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_268);
                    /* try { // try from 002c2e08 to 002c2e8c has its CatchHandler @ 002c3223 */
  clap_builder::builder::arg::Arg::new(local_530,"sep-string",10);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x53);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"sep-string",10);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,
             "separate columns by STRING, without -S: Default separator <TAB> with -J and <space> otherwise (same as -S\" \"), no effect on column options"
             ,0x8a);
  clap_builder::builder::arg::Arg::value_name(local_268,auStack_a48,"string",6);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 002c2eaa to 002c2f12 has its CatchHandler @ 002c31a5 */
  clap_builder::builder::arg::Arg::new(local_7f8,"merge",5);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x6d);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"merge",5);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_7f8,
             "Merge files. Standard output shall be formatted so the pr utility writes one line from each file specified by a file operand, side by side into text columns of equal fixed widths, in terms of the number of column positions. Implementations shall support merging of at least nine file operands."
             ,0x125);
  clap_builder::builder::arg::Arg::action(local_268,auStack_a48,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,local_268);
                    /* try { // try from 002c2f43 to 002c2fc7 has its CatchHandler @ 002c320e */
  clap_builder::builder::arg::Arg::new(local_530,"indent",6);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x6f);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"indent",6);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,
             "Each line of output shall be preceded by offset <space>s. If the -o option is not specified, the default offset shall be zero. The space taken is in addition to the output line width (see the -w option below)."
             ,0xd1);
  clap_builder::builder::arg::Arg::value_name(local_268,auStack_a48,"margin",6);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,local_268);
                    /* try { // try from 002c2fe5 to 002c3031 has its CatchHandler @ 002c317b */
  clap_builder::builder::arg::Arg::new(local_7f8,"join-lines",10);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x4a);
  clap_builder::builder::arg::Arg::help
            (local_7f8,auStack_a48,
             "merge full lines, turns off -W line truncation, no column alignment, --sep-string[=STRING] sets separators"
             ,0x6a);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_7f8,2);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 002c3062 to 002c30b2 has its CatchHandler @ 002c3190 */
  clap_builder::builder::arg::Arg::new(local_530,"helpt",4);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_530,"helpt",4);
  clap_builder::builder::arg::Arg::help(local_530,auStack_a48,"Print help information",0x16);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_530,5);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 002c30e3 to 002c3128 has its CatchHandler @ 002c3166 */
  clap_builder::builder::arg::Arg::new(local_7f8,"files",5);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_7f8,1);
  clap_builder::builder::arg::Arg::value_hint(local_7f8,auStack_a48,3);
  clap_builder::builder::command::Command::arg(param_1,local_530,local_7f8);
  return param_1;
}