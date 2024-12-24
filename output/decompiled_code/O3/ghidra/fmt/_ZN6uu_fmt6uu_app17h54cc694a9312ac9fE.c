undefined8 __rustcall uu_fmt::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [584];
  uint local_800;
  undefined4 local_7fc;
  ulong local_78c;
  undefined4 local_784;
  undefined local_780 [584];
  uint local_538;
  undefined4 local_534;
  undefined local_530 [700];
  ulong local_274;
  undefined4 local_26c;
  undefined local_268 [592];
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(auStack_a48,uVar1);
  clap_builder::builder::command::Command::version(local_530,auStack_a48,"0.0.28",6);
  clap_builder::builder::command::Command::about
            (auStack_a48,local_530,"Reformat paragraphs from input files (or stdin) to stdout.",0x3a
            );
                    /* try { // try from 001b6099 to 001b60b2 has its CatchHandler @ 001b69b6 */
  uucore::format_usage(local_780,"{} [-WIDTH] [OPTION]... [FILE]...",0x21);
  clap_builder::builder::command::Command::override_usage(local_530,auStack_a48,local_780);
  (*(code *)PTR_memcpy_0022b7b8)(auStack_a48,local_530,700);
  local_78c = local_274 | 0x8800000088;
  local_784 = local_26c;
                    /* try { // try from 001b6107 to 001b6179 has its CatchHandler @ 001b6a56 */
  clap_builder::builder::arg::Arg::new(local_530,"crown-margin",0xc);
  clap_builder::builder::arg::Arg::short(local_780,local_530,99);
  clap_builder::builder::arg::Arg::long(local_530,local_780,"crown-margin",0xc);
  clap_builder::builder::arg::Arg::help
            (local_780,local_530,
             "First and second line of paragraph may have different indentations, in which case the first line\'s indentation is preserved, and each subsequent line\'s indentation matches the second line."
             ,0xbc);
  clap_builder::builder::arg::Arg::action(local_268,local_780,2);
  clap_builder::builder::command::Command::arg(local_530,auStack_a48,local_268);
                    /* try { // try from 001b61aa to 001b6208 has its CatchHandler @ 001b6a44 */
  clap_builder::builder::arg::Arg::new(auStack_a48,&DAT_00115210,0x10);
  clap_builder::builder::arg::Arg::short(local_780,auStack_a48,0x74);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_780,&DAT_00115210,0x10);
  clap_builder::builder::arg::Arg::help
            (local_780,auStack_a48,
             "Like -c, except that the first and second line of a paragraph *must* have different indentation or they are treated as separate paragraphs."
             ,0x8b);
  clap_builder::builder::arg::Arg::action(local_268,local_780,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_530,local_268);
                    /* try { // try from 001b6239 to 001b62ab has its CatchHandler @ 001b6a37 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_00115280,0x10);
  clap_builder::builder::arg::Arg::short(local_780,local_530,0x6d);
  clap_builder::builder::arg::Arg::long(local_530,local_780,&DAT_00115280,0x10);
  clap_builder::builder::arg::Arg::help
            (local_780,local_530,
             "Attempt to detect and preserve mail headers in the input. Be careful when combining this flag with -p."
             ,0x66);
  clap_builder::builder::arg::Arg::action(local_268,local_780,2);
  clap_builder::builder::command::Command::arg(local_530,auStack_a48,local_268);
                    /* try { // try from 001b62dc to 001b633a has its CatchHandler @ 001b6a25 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"split-only",10);
  clap_builder::builder::arg::Arg::short(local_780,auStack_a48,0x73);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_780,"split-only",10);
  clap_builder::builder::arg::Arg::help
            (local_780,auStack_a48,"Split lines only, do not reflow.",0x20);
  clap_builder::builder::arg::Arg::action(local_268,local_780,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_530,local_268);
                    /* try { // try from 001b636b to 001b63dd has its CatchHandler @ 001b6a15 */
  clap_builder::builder::arg::Arg::new(local_530,"uniform-spacing",0xf);
  clap_builder::builder::arg::Arg::short(local_780,local_530,0x75);
  clap_builder::builder::arg::Arg::long(local_530,local_780,"uniform-spacing",0xf);
  clap_builder::builder::arg::Arg::help
            (local_780,local_530,
             "Insert exactly one space between words, and two between sentences. Sentence breaks in the input are detected as [?!.] followed by two spaces or a newline; other punctuation is not interpreted as a sentence break."
             ,0xd4);
  clap_builder::builder::arg::Arg::action(local_268,local_780,2);
  clap_builder::builder::command::Command::arg(local_530,auStack_a48,local_268);
                    /* try { // try from 001b640e to 001b648d has its CatchHandler @ 001b6a9c */
  clap_builder::builder::arg::Arg::new(auStack_a48,"prefix",6);
  clap_builder::builder::arg::Arg::short(local_780,auStack_a48,0x70);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_780,"prefix",6);
  clap_builder::builder::arg::Arg::help
            (local_780,auStack_a48,
             "Reformat only lines beginning with PREFIX, reattaching PREFIX to reformatted lines. Unless -x is specified, leading whitespace will be ignored when matching PREFIX."
             ,0xa4);
  clap_builder::builder::arg::Arg::value_name(local_268,local_780,"PREFIX",6);
  clap_builder::builder::command::Command::arg(auStack_a48,local_530,local_268);
                    /* try { // try from 001b64a6 to 001b6539 has its CatchHandler @ 001b6a8f */
  clap_builder::builder::arg::Arg::new(local_530,"skip-prefix",0xb);
  clap_builder::builder::arg::Arg::short(local_780,local_530,0x50);
  clap_builder::builder::arg::Arg::long(local_530,local_780,"skip-prefix",0xb);
  clap_builder::builder::arg::Arg::help
            (local_780,local_530,
             "Do not reformat lines beginning with PSKIP. Unless -X is specified, leading whitespace will be ignored when matching PSKIP"
             ,0x7a);
  clap_builder::builder::arg::Arg::value_name(local_268,local_780,"PSKIP",5);
  clap_builder::builder::command::Command::arg(local_530,auStack_a48,local_268);
                    /* try { // try from 001b6552 to 001b65b0 has its CatchHandler @ 001b6a00 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"exact-prefix",0xc);
  clap_builder::builder::arg::Arg::short(local_780,auStack_a48,0x78);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_780,"exact-prefix",0xc);
  clap_builder::builder::arg::Arg::help
            (local_780,auStack_a48,
             "PREFIX must match at the beginning of the line with no preceding whitespace.",0x4c);
  clap_builder::builder::arg::Arg::action(local_268,local_780,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_530,local_268);
                    /* try { // try from 001b65e1 to 001b6653 has its CatchHandler @ 001b69f0 */
  clap_builder::builder::arg::Arg::new(local_530,"exact-skip-prefix",0x11);
  clap_builder::builder::arg::Arg::short(local_780,local_530,0x58);
  clap_builder::builder::arg::Arg::long(local_530,local_780,"exact-skip-prefix",0x11);
  clap_builder::builder::arg::Arg::help
            (local_780,local_530,
             "PSKIP must match at the beginning of the line with no preceding whitespace.",0x4b);
  clap_builder::builder::arg::Arg::action(local_268,local_780,2);
  clap_builder::builder::command::Command::arg(local_530,auStack_a48,local_268);
                    /* try { // try from 001b6684 to 001b6703 has its CatchHandler @ 001b6a7d */
  clap_builder::builder::arg::Arg::new(auStack_a48,"width",5);
  clap_builder::builder::arg::Arg::short(local_780,auStack_a48,0x77);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_780,"width",5);
  clap_builder::builder::arg::Arg::help
            (local_780,auStack_a48,
             "Fill output lines up to a maximum of WIDTH columns, default 75. This can be specified as a negative number in the first argument."
             ,0x81);
  clap_builder::builder::arg::Arg::value_name(local_268,local_780,"WIDTH",5);
  clap_builder::builder::command::Command::arg(auStack_a48,local_530,local_268);
                    /* try { // try from 001b671c to 001b67af has its CatchHandler @ 001b6a70 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_00114a28,4);
  clap_builder::builder::arg::Arg::short(local_780,local_530,0x67);
  clap_builder::builder::arg::Arg::long(local_530,local_780,&DAT_00114a28,4);
  clap_builder::builder::arg::Arg::help
            (local_780,local_530,
             "Goal width, default of 93% of WIDTH. Must be less than or equal to WIDTH.",0x49);
  clap_builder::builder::arg::Arg::value_name
            (local_268,local_780,
             "GOALERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG",4);
  clap_builder::builder::command::Command::arg(local_530,auStack_a48,local_268);
                    /* try { // try from 001b67c8 to 001b6826 has its CatchHandler @ 001b69db */
  clap_builder::builder::arg::Arg::new(auStack_a48,"quick",5);
  clap_builder::builder::arg::Arg::short(local_780,auStack_a48,0x71);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_780,"quick",5);
  clap_builder::builder::arg::Arg::help
            (local_780,auStack_a48,
             "Break lines more quickly at the expense of a potentially more ragged appearance.",0x50
            );
  clap_builder::builder::arg::Arg::action(local_268,local_780,2);
  clap_builder::builder::command::Command::arg(auStack_a48,local_530,local_268);
                    /* try { // try from 001b6857 to 001b68ea has its CatchHandler @ 001b6a63 */
  clap_builder::builder::arg::Arg::new(local_530,"tab-width: ",9);
  clap_builder::builder::arg::Arg::short(local_780,local_530,0x54);
  clap_builder::builder::arg::Arg::long(local_530,local_780,"tab-width: ",9);
  clap_builder::builder::arg::Arg::help
            (local_780,local_530,
             "Treat tabs as TABWIDTH spaces for determining line length, default 8. Note that this is used only for calculating line lengths; tabs are preserved in the output."
             ,0xa1);
  clap_builder::builder::arg::Arg::value_name(local_268,local_780,&DAT_00114c10,8);
  clap_builder::builder::command::Command::arg(local_530,auStack_a48,local_268);
                    /* try { // try from 001b6903 to 001b695a has its CatchHandler @ 001b69c6 */
  clap_builder::builder::arg::Arg::new(auStack_a48,"files",5);
  clap_builder::builder::arg::Arg::action(local_780,auStack_a48,1);
  clap_builder::builder::arg::Arg::value_name
            (auStack_a48,local_780,
             "FILEScapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs"
             ,5);
  clap_builder::builder::arg::Arg::value_hint(local_780,auStack_a48,3);
  (*(code *)PTR_memcpy_0022b7b8)(auStack_a48,local_780,0x248);
  local_800 = local_538 | 0x40;
  local_7fc = local_534;
  clap_builder::builder::command::Command::arg(param_1,local_530,auStack_a48);
  return param_1;
}