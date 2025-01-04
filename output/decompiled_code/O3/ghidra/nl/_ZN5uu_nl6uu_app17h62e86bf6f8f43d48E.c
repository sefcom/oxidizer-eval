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
                    /* try { // try from 002acf93 to 002acfa7 has its CatchHandler @ 002ad994 */
  uucore::format_usage(auStack_a48,"{} [OPTION]... [FILE]...",0x18);
  clap_builder::builder::command::Command::override_usage(local_530,local_7f8,auStack_a48);
  clap_builder::builder::command::Command::after_help
            (local_7f8,local_530,
             "STYLE is one of:\n\n* a     number all lines\n* t     number only nonempty lines\n* n     number no lines\n* pBRE  number only lines that contain a match for the basic regular\n        expression, BRE\n\nFORMAT is one of:\n\n* ln    left justified, no leading zeros\n* rn    right justified, no leading zeros\n* rz    right justified, leading zeros"
             ,0x150);
  (*(code *)PTR_memcpy_00417578)(local_530,local_7f8,700);
  local_274 = local_53c | 0x4008000040080;
  local_26c = local_534;
                    /* try { // try from 002ad020 to 002ad070 has its CatchHandler @ 002ad9d3 */
  clap_builder::builder::arg::Arg::new(local_7f8,"helpt",4);
  clap_builder::builder::arg::Arg::long(auStack_a48,local_7f8,"helpt",4);
  clap_builder::builder::arg::Arg::help(local_7f8,auStack_a48,"Print help information.",0x17);
  clap_builder::builder::arg::Arg::action(auStack_a48,local_7f8,5);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 002ad0a1 to 002ad0b9 has its CatchHandler @ 002ad9a9 */
  clap_builder::builder::arg::Arg::new(local_530,"fileEDOMmode",4);
  (*(code *)PTR_memcpy_00417578)(auStack_a48,local_530,0x248);
  local_800 = local_2e8 | 4;
  local_7fc = local_2e4;
  clap_builder::builder::arg::Arg::action(local_530,auStack_a48,1);
                    /* try { // try from 002ad10a to 002ad119 has its CatchHandler @ 002ad9a9 */
  clap_builder::builder::arg::Arg::value_hint(auStack_a48,local_530,3);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 002ad132 to 002ad1b6 has its CatchHandler @ 002ada7e */
  clap_builder::builder::arg::Arg::new(local_7f8,"body-numbering",0xe);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x62);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"body-numbering",0xe);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_7f8,"use STYLE for numbering body lines",0x22);
  clap_builder::builder::arg::Arg::value_name(&local_268,auStack_a48,"STYLE",5);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 002ad1d4 to 002ad258 has its CatchHandler @ 002ada6c */
  clap_builder::builder::arg::Arg::new(local_530,"section-delimiter",0x11);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,100);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"section-delimiter",0x11);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,"use CC for separating logical pages",0x23);
  clap_builder::builder::arg::Arg::value_name(&local_268,auStack_a48,"CC",2);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 002ad276 to 002ad2fa has its CatchHandler @ 002ada5a */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_00160e70,0x10);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x66);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,&DAT_00160e70,0x10);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_7f8,"use STYLE for numbering footer lines",0x24);
  clap_builder::builder::arg::Arg::value_name(&local_268,auStack_a48,"STYLE",5);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 002ad318 to 002ad39c has its CatchHandler @ 002ada48 */
  clap_builder::builder::arg::Arg::new(local_530,&DAT_00161680,0x10);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x68);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,&DAT_00161680,0x10);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,"use STYLE for numbering header lines",0x24);
  clap_builder::builder::arg::Arg::value_name(&local_268,auStack_a48,"STYLE",5);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 002ad3ba to 002ad43e has its CatchHandler @ 002ada36 */
  clap_builder::builder::arg::Arg::new(local_7f8,"line-increment",0xe);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x69);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"line-increment",0xe);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_7f8,"line number increment at each line",0x22);
  clap_builder::builder::arg::Arg::value_name(local_7f8,auStack_a48,"NUMBER",6);
                    /* try { // try from 002ad43f to 002ad44c has its CatchHandler @ 002ad97f */
  _<i64_as_clap_builder::builder::value_parser::ValueParserFactory>::value_parser(&local_268);
                    /* try { // try from 002ad44d to 002ad464 has its CatchHandler @ 002ad97a */
  clap_builder::builder::arg::Arg::value_parser(auStack_a48,local_7f8,&local_268);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,auStack_a48);
                    /* try { // try from 002ad47d to 002ad501 has its CatchHandler @ 002ada24 */
  clap_builder::builder::arg::Arg::new(local_530,"join-blank-lines",0x10);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x6c);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"join-blank-lines",0x10);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,"group of NUMBER empty lines counted as one",0x2a);
  clap_builder::builder::arg::Arg::value_name(local_530,auStack_a48,"NUMBER",6);
                    /* try { // try from 002ad502 to 002ad50f has its CatchHandler @ 002ad965 */
  _<u64_as_clap_builder::builder::value_parser::ValueParserFactory>::value_parser(&local_268);
                    /* try { // try from 002ad510 to 002ad527 has its CatchHandler @ 002ad960 */
  clap_builder::builder::arg::Arg::value_parser(auStack_a48,local_530,&local_268);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 002ad540 to 002ad62d has its CatchHandler @ 002ada90 */
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
                    /* try { // try from 002ad646 to 002ad6ae has its CatchHandler @ 002ad9be */
  clap_builder::builder::arg::Arg::new(local_530,"no-renumber",0xb);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x70);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"no-renumber",0xb);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,"do not reset line numbers at logical pages",0x2a);
  clap_builder::builder::arg::Arg::action(&local_268,auStack_a48,3);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,&local_268);
                    /* try { // try from 002ad6df to 002ad763 has its CatchHandler @ 002ada12 */
  clap_builder::builder::arg::Arg::new(local_7f8,&DAT_00161770,0x10);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x73);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,&DAT_00161770,0x10);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_7f8,"add STRING after (possible) line number",0x27);
  clap_builder::builder::arg::Arg::value_name(&local_268,auStack_a48,"STRING",6);
  clap_builder::builder::command::Command::arg(local_7f8,local_530,&local_268);
                    /* try { // try from 002ad781 to 002ad805 has its CatchHandler @ 002ad9fd */
  clap_builder::builder::arg::Arg::new(local_530,"starting-line-number",0x14);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_530,0x76);
  clap_builder::builder::arg::Arg::long(local_530,auStack_a48,"starting-line-number",0x14);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_530,"first line number on each logical page",0x26);
  clap_builder::builder::arg::Arg::value_name(local_530,auStack_a48,"NUMBER",6);
                    /* try { // try from 002ad806 to 002ad813 has its CatchHandler @ 002ad94b */
  _<i64_as_clap_builder::builder::value_parser::ValueParserFactory>::value_parser(&local_268);
                    /* try { // try from 002ad814 to 002ad82b has its CatchHandler @ 002ad946 */
  clap_builder::builder::arg::Arg::value_parser(auStack_a48,local_530,&local_268);
  clap_builder::builder::command::Command::arg(local_530,local_7f8,auStack_a48);
                    /* try { // try from 002ad844 to 002ad8c8 has its CatchHandler @ 002ad9e8 */
  clap_builder::builder::arg::Arg::new(local_7f8,"number-width",0xc);
  clap_builder::builder::arg::Arg::short(auStack_a48,local_7f8,0x77);
  clap_builder::builder::arg::Arg::long(local_7f8,auStack_a48,"number-width",0xc);
  clap_builder::builder::arg::Arg::help
            (auStack_a48,local_7f8,"use NUMBER columns for line numbers",0x23);
  clap_builder::builder::arg::Arg::value_name(local_7f8,auStack_a48,"NUMBER",6);
                    /* try { // try from 002ad8c9 to 002ad8cd has its CatchHandler @ 002ad931 */
  local_260 = ::alloc::boxed::Box<T>::new();
  local_268 = (char *)0x4;
  local_258 = "";
                    /* try { // try from 002ad8f1 to 002ad908 has its CatchHandler @ 002ad92c */
  clap_builder::builder::arg::Arg::value_parser(auStack_a48,local_7f8,&local_268);
  clap_builder::builder::command::Command::arg(param_1,local_530,auStack_a48);
  return param_1;
}