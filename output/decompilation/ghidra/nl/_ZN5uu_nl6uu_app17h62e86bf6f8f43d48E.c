undefined8 _ZN5uu_nl6uu_app17h62e86bf6f8f43d48E(undefined8 param_1)

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
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17hd78aab08a8b31c20E(local_7f8,uVar1);
  _ZN12clap_builder7builder7command7Command5about17h40bfd31f33fa63c5E
            (local_530,local_7f8,"Number lines of files",0x15);
  _ZN12clap_builder7builder7command7Command7version17h3a7547e439a5f2d6E
            (local_7f8,local_530,"0.0.28",6);
                    /* try { // try from 002acf93 to 002acfa7 has its CatchHandler @ 002ad994 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(auStack_a48,"{} [OPTION]... [FILE]...",0x18);
  _ZN12clap_builder7builder7command7Command14override_usage17hc45c9c787b169d6cE
            (local_530,local_7f8,auStack_a48);
  _ZN12clap_builder7builder7command7Command10after_help17hc7b8767b1b6b1de1E
            (local_7f8,local_530,
             "STYLE is one of:\n\n* a     number all lines\n* t     number only nonempty lines\n* n     number no lines\n* pBRE  number only lines that contain a match for the basic regular\n        expression, BRE\n\nFORMAT is one of:\n\n* ln    left justified, no leading zeros\n* rn    right justified, no leading zeros\n* rz    right justified, leading zeros"
             ,0x150);
  (*(code *)PTR_memcpy_00417578)(local_530,local_7f8,700);
  local_274 = local_53c | 0x4008000040080;
  local_26c = local_534;
                    /* try { // try from 002ad020 to 002ad070 has its CatchHandler @ 002ad9d3 */
  _ZN12clap_builder7builder3arg3Arg3new17h44f368f26e40926bE(local_7f8,"helpt",4);
  _ZN12clap_builder7builder3arg3Arg4long17he99126bf183af45aE(auStack_a48,local_7f8,"helpt",4);
  _ZN12clap_builder7builder3arg3Arg4help17h8b61f4007585e044E
            (local_7f8,auStack_a48,"Print help information.",0x17);
  _ZN12clap_builder7builder3arg3Arg6action17he34be3aec48eea3dE(auStack_a48,local_7f8,5);
  _ZN12clap_builder7builder7command7Command3arg17h47326fbf44751a69E(local_7f8,local_530,auStack_a48)
  ;
                    /* try { // try from 002ad0a1 to 002ad0b9 has its CatchHandler @ 002ad9a9 */
  _ZN12clap_builder7builder3arg3Arg3new17h44f368f26e40926bE(local_530,"fileEDOMmode",4);
  (*(code *)PTR_memcpy_00417578)(auStack_a48,local_530,0x248);
  local_800 = local_2e8 | 4;
  local_7fc = local_2e4;
  _ZN12clap_builder7builder3arg3Arg6action17he34be3aec48eea3dE(local_530,auStack_a48,1);
                    /* try { // try from 002ad10a to 002ad119 has its CatchHandler @ 002ad9a9 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h60190d51d1c5eb8bE(auStack_a48,local_530,3);
  _ZN12clap_builder7builder7command7Command3arg17h47326fbf44751a69E(local_530,local_7f8,auStack_a48)
  ;
                    /* try { // try from 002ad132 to 002ad1b6 has its CatchHandler @ 002ada7e */
  _ZN12clap_builder7builder3arg3Arg3new17h44f368f26e40926bE(local_7f8,"body-numbering",0xe);
  _ZN12clap_builder7builder3arg3Arg5short17hb89f1ce4d7c5bc2cE(auStack_a48,local_7f8,0x62);
  _ZN12clap_builder7builder3arg3Arg4long17he99126bf183af45aE
            (local_7f8,auStack_a48,"body-numbering",0xe);
  _ZN12clap_builder7builder3arg3Arg4help17h8b61f4007585e044E
            (auStack_a48,local_7f8,"use STYLE for numbering body lines",0x22);
  _ZN12clap_builder7builder3arg3Arg10value_name17h72b97bc36a496091E
            (&local_268,auStack_a48,"STYLE",5);
  _ZN12clap_builder7builder7command7Command3arg17h47326fbf44751a69E(local_7f8,local_530,&local_268);
                    /* try { // try from 002ad1d4 to 002ad258 has its CatchHandler @ 002ada6c */
  _ZN12clap_builder7builder3arg3Arg3new17h44f368f26e40926bE(local_530,"section-delimiter",0x11);
  _ZN12clap_builder7builder3arg3Arg5short17hb89f1ce4d7c5bc2cE(auStack_a48,local_530,100);
  _ZN12clap_builder7builder3arg3Arg4long17he99126bf183af45aE
            (local_530,auStack_a48,"section-delimiter",0x11);
  _ZN12clap_builder7builder3arg3Arg4help17h8b61f4007585e044E
            (auStack_a48,local_530,"use CC for separating logical pages",0x23);
  _ZN12clap_builder7builder3arg3Arg10value_name17h72b97bc36a496091E(&local_268,auStack_a48,"CC",2);
  _ZN12clap_builder7builder7command7Command3arg17h47326fbf44751a69E(local_530,local_7f8,&local_268);
                    /* try { // try from 002ad276 to 002ad2fa has its CatchHandler @ 002ada5a */
  _ZN12clap_builder7builder3arg3Arg3new17h44f368f26e40926bE(local_7f8,&DAT_00160e70,0x10);
  _ZN12clap_builder7builder3arg3Arg5short17hb89f1ce4d7c5bc2cE(auStack_a48,local_7f8,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17he99126bf183af45aE
            (local_7f8,auStack_a48,&DAT_00160e70,0x10);
  _ZN12clap_builder7builder3arg3Arg4help17h8b61f4007585e044E
            (auStack_a48,local_7f8,"use STYLE for numbering footer lines",0x24);
  _ZN12clap_builder7builder3arg3Arg10value_name17h72b97bc36a496091E
            (&local_268,auStack_a48,"STYLE",5);
  _ZN12clap_builder7builder7command7Command3arg17h47326fbf44751a69E(local_7f8,local_530,&local_268);
                    /* try { // try from 002ad318 to 002ad39c has its CatchHandler @ 002ada48 */
  _ZN12clap_builder7builder3arg3Arg3new17h44f368f26e40926bE(local_530,&DAT_00161680,0x10);
  _ZN12clap_builder7builder3arg3Arg5short17hb89f1ce4d7c5bc2cE(auStack_a48,local_530,0x68);
  _ZN12clap_builder7builder3arg3Arg4long17he99126bf183af45aE
            (local_530,auStack_a48,&DAT_00161680,0x10);
  _ZN12clap_builder7builder3arg3Arg4help17h8b61f4007585e044E
            (auStack_a48,local_530,"use STYLE for numbering header lines",0x24);
  _ZN12clap_builder7builder3arg3Arg10value_name17h72b97bc36a496091E
            (&local_268,auStack_a48,"STYLE",5);
  _ZN12clap_builder7builder7command7Command3arg17h47326fbf44751a69E(local_530,local_7f8,&local_268);
                    /* try { // try from 002ad3ba to 002ad43e has its CatchHandler @ 002ada36 */
  _ZN12clap_builder7builder3arg3Arg3new17h44f368f26e40926bE(local_7f8,"line-increment",0xe);
  _ZN12clap_builder7builder3arg3Arg5short17hb89f1ce4d7c5bc2cE(auStack_a48,local_7f8,0x69);
  _ZN12clap_builder7builder3arg3Arg4long17he99126bf183af45aE
            (local_7f8,auStack_a48,"line-increment",0xe);
  _ZN12clap_builder7builder3arg3Arg4help17h8b61f4007585e044E
            (auStack_a48,local_7f8,"line number increment at each line",0x22);
  _ZN12clap_builder7builder3arg3Arg10value_name17h72b97bc36a496091E
            (local_7f8,auStack_a48,"NUMBER",6);
                    /* try { // try from 002ad43f to 002ad44c has its CatchHandler @ 002ad97f */
  _ZN79__LT_i64_u20_as_u20_clap_builder__builder__value_parser__ValueParserFactory_GT_12value_parser17h49a810d89a08e531E
            (&local_268);
                    /* try { // try from 002ad44d to 002ad464 has its CatchHandler @ 002ad97a */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h4e017dd67ef25d56E
            (auStack_a48,local_7f8,&local_268);
  _ZN12clap_builder7builder7command7Command3arg17h47326fbf44751a69E(local_7f8,local_530,auStack_a48)
  ;
                    /* try { // try from 002ad47d to 002ad501 has its CatchHandler @ 002ada24 */
  _ZN12clap_builder7builder3arg3Arg3new17h44f368f26e40926bE(local_530,"join-blank-lines",0x10);
  _ZN12clap_builder7builder3arg3Arg5short17hb89f1ce4d7c5bc2cE(auStack_a48,local_530,0x6c);
  _ZN12clap_builder7builder3arg3Arg4long17he99126bf183af45aE
            (local_530,auStack_a48,"join-blank-lines",0x10);
  _ZN12clap_builder7builder3arg3Arg4help17h8b61f4007585e044E
            (auStack_a48,local_530,"group of NUMBER empty lines counted as one",0x2a);
  _ZN12clap_builder7builder3arg3Arg10value_name17h72b97bc36a496091E
            (local_530,auStack_a48,"NUMBER",6);
                    /* try { // try from 002ad502 to 002ad50f has its CatchHandler @ 002ad965 */
  _ZN79__LT_u64_u20_as_u20_clap_builder__builder__value_parser__ValueParserFactory_GT_12value_parser17hb2c940b47939cb64E
            (&local_268);
                    /* try { // try from 002ad510 to 002ad527 has its CatchHandler @ 002ad960 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17hb966a35be36ae890E
            (auStack_a48,local_530,&local_268);
  _ZN12clap_builder7builder7command7Command3arg17h47326fbf44751a69E(local_530,local_7f8,auStack_a48)
  ;
                    /* try { // try from 002ad540 to 002ad62d has its CatchHandler @ 002ada90 */
  _ZN12clap_builder7builder3arg3Arg3new17h44f368f26e40926bE(local_7f8,"number-format",0xd);
  _ZN12clap_builder7builder3arg3Arg5short17hb89f1ce4d7c5bc2cE(auStack_a48,local_7f8,0x6e);
  _ZN12clap_builder7builder3arg3Arg4long17he99126bf183af45aE
            (local_7f8,auStack_a48,"number-format",0xd);
  _ZN12clap_builder7builder3arg3Arg4help17h8b61f4007585e044E
            (auStack_a48,local_7f8,"insert line numbers according to FORMAT",0x27);
  _ZN12clap_builder7builder3arg3Arg10value_name17h72b97bc36a496091E
            (local_7f8,auStack_a48,"FORMAT",6);
  local_268 = "ln";
  local_260 = 2;
  local_258 = "rn";
  local_250 = 2;
  local_248 = "rz";
  local_240 = 2;
  _ZN12clap_builder7builder3arg3Arg12value_parser17hc89b69345b3b823dE
            (auStack_a48,local_7f8,&local_268);
  _ZN12clap_builder7builder7command7Command3arg17h47326fbf44751a69E(local_7f8,local_530,auStack_a48)
  ;
                    /* try { // try from 002ad646 to 002ad6ae has its CatchHandler @ 002ad9be */
  _ZN12clap_builder7builder3arg3Arg3new17h44f368f26e40926bE(local_530,"no-renumber",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17hb89f1ce4d7c5bc2cE(auStack_a48,local_530,0x70);
  _ZN12clap_builder7builder3arg3Arg4long17he99126bf183af45aE
            (local_530,auStack_a48,"no-renumber",0xb);
  _ZN12clap_builder7builder3arg3Arg4help17h8b61f4007585e044E
            (auStack_a48,local_530,"do not reset line numbers at logical pages",0x2a);
  _ZN12clap_builder7builder3arg3Arg6action17he34be3aec48eea3dE(&local_268,auStack_a48,3);
  _ZN12clap_builder7builder7command7Command3arg17h47326fbf44751a69E(local_530,local_7f8,&local_268);
                    /* try { // try from 002ad6df to 002ad763 has its CatchHandler @ 002ada12 */
  _ZN12clap_builder7builder3arg3Arg3new17h44f368f26e40926bE(local_7f8,&DAT_00161770,0x10);
  _ZN12clap_builder7builder3arg3Arg5short17hb89f1ce4d7c5bc2cE(auStack_a48,local_7f8,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17he99126bf183af45aE
            (local_7f8,auStack_a48,&DAT_00161770,0x10);
  _ZN12clap_builder7builder3arg3Arg4help17h8b61f4007585e044E
            (auStack_a48,local_7f8,"add STRING after (possible) line number",0x27);
  _ZN12clap_builder7builder3arg3Arg10value_name17h72b97bc36a496091E
            (&local_268,auStack_a48,"STRING",6);
  _ZN12clap_builder7builder7command7Command3arg17h47326fbf44751a69E(local_7f8,local_530,&local_268);
                    /* try { // try from 002ad781 to 002ad805 has its CatchHandler @ 002ad9fd */
  _ZN12clap_builder7builder3arg3Arg3new17h44f368f26e40926bE(local_530,"starting-line-number",0x14);
  _ZN12clap_builder7builder3arg3Arg5short17hb89f1ce4d7c5bc2cE(auStack_a48,local_530,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17he99126bf183af45aE
            (local_530,auStack_a48,"starting-line-number",0x14);
  _ZN12clap_builder7builder3arg3Arg4help17h8b61f4007585e044E
            (auStack_a48,local_530,"first line number on each logical page",0x26);
  _ZN12clap_builder7builder3arg3Arg10value_name17h72b97bc36a496091E
            (local_530,auStack_a48,"NUMBER",6);
                    /* try { // try from 002ad806 to 002ad813 has its CatchHandler @ 002ad94b */
  _ZN79__LT_i64_u20_as_u20_clap_builder__builder__value_parser__ValueParserFactory_GT_12value_parser17h49a810d89a08e531E
            (&local_268);
                    /* try { // try from 002ad814 to 002ad82b has its CatchHandler @ 002ad946 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h4e017dd67ef25d56E
            (auStack_a48,local_530,&local_268);
  _ZN12clap_builder7builder7command7Command3arg17h47326fbf44751a69E(local_530,local_7f8,auStack_a48)
  ;
                    /* try { // try from 002ad844 to 002ad8c8 has its CatchHandler @ 002ad9e8 */
  _ZN12clap_builder7builder3arg3Arg3new17h44f368f26e40926bE(local_7f8,"number-width",0xc);
  _ZN12clap_builder7builder3arg3Arg5short17hb89f1ce4d7c5bc2cE(auStack_a48,local_7f8,0x77);
  _ZN12clap_builder7builder3arg3Arg4long17he99126bf183af45aE
            (local_7f8,auStack_a48,"number-width",0xc);
  _ZN12clap_builder7builder3arg3Arg4help17h8b61f4007585e044E
            (auStack_a48,local_7f8,"use NUMBER columns for line numbers",0x23);
  _ZN12clap_builder7builder3arg3Arg10value_name17h72b97bc36a496091E
            (local_7f8,auStack_a48,"NUMBER",6);
                    /* try { // try from 002ad8c9 to 002ad8cd has its CatchHandler @ 002ad931 */
  local_260 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h256edf188ae77d63E();
  local_268 = (char *)0x4;
  local_258 = "";
                    /* try { // try from 002ad8f1 to 002ad908 has its CatchHandler @ 002ad92c */
  _ZN12clap_builder7builder3arg3Arg12value_parser17hd5dbec673a1006bbE
            (auStack_a48,local_7f8,&local_268);
  _ZN12clap_builder7builder7command7Command3arg17h47326fbf44751a69E(param_1,local_530,auStack_a48);
  return param_1;
}