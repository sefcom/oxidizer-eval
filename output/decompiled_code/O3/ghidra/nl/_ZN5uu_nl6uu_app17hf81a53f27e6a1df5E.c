undefined8 __rustcall uu_nl::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [584];
  uint local_800;
  undefined4 local_7fc;
  undefined local_7f8 [700];
  ulong local_53c;
  undefined4 local_534;
  undefined local_530 [584];
  uint local_2e8;
  undefined4 local_2e4;
  ulong local_274;
  undefined4 local_26c;
  char *local_268;
  undefined8 local_260;
  char *local_258;
  undefined8 local_250;
  char *local_248;
  undefined8 local_240;
  
  uVar1 = uucore::util_name();
  clap_builder::builder::command::Command::new(local_7f8,uVar1);
  clap_builder::builder::command::Command::about(local_530,local_7f8,"Number lines of files",0x15);
  clap_builder::builder::command::Command::version(local_7f8,local_530,"0.0.28",6);
                    /* try { // try from 002ace03 to 002ace17 has its CatchHandler @ 002ad804 */
  uucore::format_usage(auStack_a48,"{} [OPTION]... [FILE]...",0x18);
  clap_builder::builder::command::Command::override_usage(local_530,local_7f8,auStack_a48);
  clap_builder::builder::command::Command::after_help
            (local_7f8,local_530,
             "STYLE is one of:\n\n* a     number all lines\n* t     number only nonempty lines\n* n     number no lines\n* pBRE  number only lines that contain a match for the basic regular\n        expression, BRE\n\nFORMAT is one of:\n\n* ln    left justified, no leading zeros\n* rn    right justified, no leading zeros\n* rz    right justified, leading zeros"
             ,0x150);
  (*(code *)PTR_memcpy_004182d0)(local_530,local_7f8,700);
  local_274 = local_53c | 0x4008000040080;
  local_26c = local_534;
                    /* try { // try from 002ace90 to 002acee0 has its CatchHandler @ 002ad843 */
  clap_builder::builder::arg::Arg::new(local_7f8,"helpt",4);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_7f8,"helpt",4);
  clap_builder::builder::arg::Arg::help(local_7f8,auStack_a48,"Print help information.",0x17);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_7f8,5);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 002acf11 to 002acf29 has its CatchHandler @ 002ad819 */
  clap_builder::builder::arg::Arg::new(local_530,"fileEDOMmode",4);
  (*(code *)PTR_memcpy_004182d0)(auStack_a48,local_530,0x248);
  local_800 = local_2e8 | 4;
  local_7fc = local_2e4;
  clap_builder::builder::arg::Arg::action(local_530,auStack_a48,1);
                    /* try { // try from 002acf7a to 002acf89 has its CatchHandler @ 002ad819 */
  clap_builder::builder::arg::Arg::value_hint(auStack_a48,local_530,3);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 002acfa2 to 002ad026 has its CatchHandler @ 002ad8ee */
  clap_builder::builder::arg::Arg::new(local_7f8,"body-numbering",0xe);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x62);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"body-numbering",0xe);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_7f8,"use STYLE for numbering body lines",0x22);
  clap_builder::builder::arg::Arg::value_name(&local_268,auStack_a48,"STYLE",5);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 002ad044 to 002ad0c8 has its CatchHandler @ 002ad8dc */
  clap_builder::builder::arg::Arg::new(local_530,"section-delimiter",0x11);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,100);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"section-delimiter",0x11);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,"use CC for separating logical pages",0x23);
  clap_builder::builder::arg::Arg::value_name(&local_268,auStack_a48,"CC",2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 002ad0e6 to 002ad16a has its CatchHandler @ 002ad8ca */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_00160fc0,0x10);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x66);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,&DAT_00160fc0,0x10);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_7f8,"use STYLE for numbering footer lines",0x24);
  clap_builder::builder::arg::Arg::value_name(&local_268,auStack_a48,"STYLE",5);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 002ad188 to 002ad20c has its CatchHandler @ 002ad8b8 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_001617d0,0x10);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x68);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,&DAT_001617d0,0x10);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,"use STYLE for numbering header lines",0x24);
  clap_builder::builder::arg::Arg::value_name(&local_268,auStack_a48,"STYLE",5);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 002ad22a to 002ad2ae has its CatchHandler @ 002ad8a6 */
  clap_builder::builder::arg::Arg::new(local_7f8,"line-increment",0xe);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x69);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"line-increment",0xe);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_7f8,"line number increment at each line",0x22);
  clap_builder::builder::arg::Arg::value_name(local_7f8,auStack_a48,"NUMBER",6);
                    /* try { // try from 002ad2af to 002ad2bc has its CatchHandler @ 002ad7ef */
  _<i64_as_clap_builder::builder::value_parser::ValueParserFactory>::value_parser(&local_268);
                    /* try { // try from 002ad2bd to 002ad2d4 has its CatchHandler @ 002ad7ea */
  clap_builder::builder::arg::Arg::value_parser(auStack_a48,local_7f8,&local_268);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 002ad2ed to 002ad371 has its CatchHandler @ 002ad894 */
  clap_builder::builder::arg::Arg::new(local_530,"join-blank-lines",0x10);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x6c);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"join-blank-lines",0x10);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,"group of NUMBER empty lines counted as one",0x2a);
  clap_builder::builder::arg::Arg::value_name(local_530,auStack_a48,"NUMBER",6);
                    /* try { // try from 002ad372 to 002ad37f has its CatchHandler @ 002ad7d5 */
  _<u64_as_clap_builder::builder::value_parser::ValueParserFactory>::value_parser(&local_268);
                    /* try { // try from 002ad380 to 002ad397 has its CatchHandler @ 002ad7d0 */
  clap_builder::builder::arg::Arg::value_parser(auStack_a48,local_530,&local_268);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 002ad3b0 to 002ad49d has its CatchHandler @ 002ad900 */
  clap_builder::builder::arg::Arg::new(local_7f8,"number-format",0xd);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x6e);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"number-format",0xd);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_7f8,"insert line numbers according to FORMAT",0x27);
  clap_builder::builder::arg::Arg::value_name(local_7f8,auStack_a48,"FORMAT",6);
  local_268 = "ln";
  local_260 = 2;
  local_258 = "rn";
  local_250 = 2;
  local_248 = "rz";
  local_240 = 2;
  clap_builder::builder::arg::Arg::value_parser(auStack_a48,local_7f8,&local_268);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 002ad4b6 to 002ad51e has its CatchHandler @ 002ad82e */
  clap_builder::builder::arg::Arg::new(local_530,"no-renumber",0xb);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x70);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"no-renumber",0xb);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,"do not reset line numbers at logical pages",0x2a);
  clap_builder::builder::arg::Arg::action(&local_268,auStack_a48,3);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 002ad54f to 002ad5d3 has its CatchHandler @ 002ad882 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_001618c0,0x10);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x73);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,&DAT_001618c0,0x10);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_7f8,"add STRING after (possible) line number",0x27);
  clap_builder::builder::arg::Arg::value_name(&local_268,auStack_a48,"STRING",6);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 002ad5f1 to 002ad675 has its CatchHandler @ 002ad86d */
  clap_builder::builder::arg::Arg::new(local_530,"starting-line-number",0x14);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x76);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"starting-line-number",0x14);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,"first line number on each logical page",0x26);
  clap_builder::builder::arg::Arg::value_name(local_530,auStack_a48,"NUMBER",6);
                    /* try { // try from 002ad676 to 002ad683 has its CatchHandler @ 002ad7bb */
  _<i64_as_clap_builder::builder::value_parser::ValueParserFactory>::value_parser(&local_268);
                    /* try { // try from 002ad684 to 002ad69b has its CatchHandler @ 002ad7b6 */
  clap_builder::builder::arg::Arg::value_parser(auStack_a48,local_530,&local_268);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 002ad6b4 to 002ad738 has its CatchHandler @ 002ad858 */
  clap_builder::builder::arg::Arg::new(local_7f8,"number-width",0xc);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x77);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"number-width",0xc);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_7f8,"use NUMBER columns for line numbers",0x23);
  clap_builder::builder::arg::Arg::value_name(local_7f8,auStack_a48,"NUMBER",6);
                    /* try { // try from 002ad739 to 002ad73d has its CatchHandler @ 002ad7a1 */
  local_260 = ::alloc::boxed::Box<T>::new();
  local_268 = (char *)0x4;
  local_258 = "";
                    /* try { // try from 002ad761 to 002ad778 has its CatchHandler @ 002ad79c */
  clap_builder::builder::arg::Arg::value_parser(auStack_a48,local_7f8,&local_268);
  clap_builder::builder::command::Command::arg(param_1,local_530,auStack_a48);
  return param_1;
}