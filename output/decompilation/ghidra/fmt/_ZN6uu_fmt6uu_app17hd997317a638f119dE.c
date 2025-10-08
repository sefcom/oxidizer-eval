undefined8 _ZN6uu_fmt6uu_app17hd997317a638f119dE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_ab0 [632];
  uint local_838;
  undefined4 local_834;
  undefined local_830 [632];
  uint local_5b8;
  undefined4 local_5b4;
  ulong local_574;
  undefined4 local_56c;
  undefined local_568 [700];
  ulong local_2ac;
  undefined4 local_2a4;
  undefined local_2a0 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f6eb0)();
  _ZN12clap_builder7builder7command7Command3new17hbd1be3be1e6c5687E(local_830,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hbd4aa12e611aeca1E(local_568,local_830);
  _ZN12clap_builder7builder7command7Command5about17h8664dc7e42c115cdE(local_830,local_568);
                    /* try { // try from 00164f9d to 00164fb3 has its CatchHandler @ 00165971 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001f70e8)
            (local_ab0,"{} [-WIDTH] [OPTION]... [FILE]...",0x21);
  _ZN12clap_builder7builder7command7Command14override_usage17h7e27084a055fa1d4E
            (local_568,local_830,local_ab0);
  (*(code *)PTR_memcpy_001f6e90)(local_830,local_568,700);
  local_574 = local_2ac | 0x8800000088;
  local_56c = local_2a4;
  _ZN12clap_builder7builder3arg3Arg3new17h58e90980ac696a02E(local_568,"crown-margin",0xc);
  _ZN12clap_builder7builder3arg3Arg5short17ha5095fdddbfba465E(local_ab0,local_568,99);
  _ZN12clap_builder7builder3arg3Arg4long17he2253374dd610985E(local_568,local_ab0,"crown-margin",0xc)
  ;
                    /* try { // try from 0016505e to 00165076 has its CatchHandler @ 0016595f */
  _ZN12clap_builder7builder3arg3Arg4help17h1c457975661ca301E
            (local_ab0,local_568,
             "First and second line of paragraph may have different indentations, in which case the first line\'s indentation is preserved, and each subsequent line\'s indentation matches the second line."
             ,0xbc);
  _ZN12clap_builder7builder3arg3Arg6action17h408fbf360adf2399E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h8fc4cd9d1fefc92cE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h58e90980ac696a02E(local_830,"tagged-paragraph",0x10);
  _ZN12clap_builder7builder3arg3Arg5short17ha5095fdddbfba465E(local_ab0,local_830,0x74);
  _ZN12clap_builder7builder3arg3Arg4long17he2253374dd610985E
            (local_830,local_ab0,"tagged-paragraph",0x10);
                    /* try { // try from 001650f8 to 00165110 has its CatchHandler @ 0016594a */
  _ZN12clap_builder7builder3arg3Arg4help17h1c457975661ca301E
            (local_ab0,local_830,
             "Like -c, except that the first and second line of a paragraph *must* have different indentation or they are treated as separate paragraphs."
             ,0x8b);
  _ZN12clap_builder7builder3arg3Arg6action17h408fbf360adf2399E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h8fc4cd9d1fefc92cE(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h58e90980ac696a02E(local_568,&DAT_001180a0,0x10);
  _ZN12clap_builder7builder3arg3Arg5short17ha5095fdddbfba465E(local_ab0,local_568,0x6d);
  _ZN12clap_builder7builder3arg3Arg4long17he2253374dd610985E(local_568,local_ab0,&DAT_001180a0,0x10)
  ;
                    /* try { // try from 00165192 to 001651aa has its CatchHandler @ 00165935 */
  _ZN12clap_builder7builder3arg3Arg4help17h1c457975661ca301E
            (local_ab0,local_568,
             "Attempt to detect and preserve mail headers in the input. Be careful when combining this flag with -p."
             ,0x66);
  _ZN12clap_builder7builder3arg3Arg6action17h408fbf360adf2399E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h8fc4cd9d1fefc92cE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h58e90980ac696a02E(local_830,"split-only",10);
  _ZN12clap_builder7builder3arg3Arg5short17ha5095fdddbfba465E(local_ab0,local_830,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17he2253374dd610985E(local_830,local_ab0,"split-only",10);
                    /* try { // try from 0016522c to 00165244 has its CatchHandler @ 00165920 */
  _ZN12clap_builder7builder3arg3Arg4help17h1c457975661ca301E
            (local_ab0,local_830,"Split lines only, do not reflow.",0x20);
  _ZN12clap_builder7builder3arg3Arg6action17h408fbf360adf2399E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h8fc4cd9d1fefc92cE(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h58e90980ac696a02E(local_568,"uniform-spacing",0xf);
  _ZN12clap_builder7builder3arg3Arg5short17ha5095fdddbfba465E(local_ab0,local_568,0x75);
  _ZN12clap_builder7builder3arg3Arg4long17he2253374dd610985E
            (local_568,local_ab0,"uniform-spacing",0xf);
                    /* try { // try from 001652c6 to 001652de has its CatchHandler @ 0016590b */
  _ZN12clap_builder7builder3arg3Arg4help17h1c457975661ca301E
            (local_ab0,local_568,
             "Insert exactly one space between words, and two between sentences. Sentence breaks in the input are detected as [?!.] followed by two spaces or a newline; other punctuation is not interpreted as a sentence break."
             ,0xd4);
  _ZN12clap_builder7builder3arg3Arg6action17h408fbf360adf2399E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h8fc4cd9d1fefc92cE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h58e90980ac696a02E(local_830,"prefix",6);
  _ZN12clap_builder7builder3arg3Arg5short17ha5095fdddbfba465E(local_ab0,local_830,0x70);
  _ZN12clap_builder7builder3arg3Arg4long17he2253374dd610985E(local_830,local_ab0,"prefix",6);
                    /* try { // try from 00165360 to 00165396 has its CatchHandler @ 001659dd */
  _ZN12clap_builder7builder3arg3Arg4help17h1c457975661ca301E
            (local_ab0,local_830,
             "Reformat only lines beginning with PREFIX, reattaching PREFIX to reformatted lines. Unless -x is specified, leading whitespace will be ignored when matching PREFIX."
             ,0xa4);
  _ZN12clap_builder7builder3arg3Arg10value_name17h81e6765a18e841abE(local_2a0,local_ab0,"PREFIX",6);
  _ZN12clap_builder7builder7command7Command3arg17h8fc4cd9d1fefc92cE(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h58e90980ac696a02E(local_568,"skip-prefix",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17ha5095fdddbfba465E(local_ab0,local_568,0x50);
  _ZN12clap_builder7builder3arg3Arg4long17he2253374dd610985E(local_568,local_ab0,"skip-prefix",0xb);
                    /* try { // try from 00165403 to 00165439 has its CatchHandler @ 001659cb */
  _ZN12clap_builder7builder3arg3Arg4help17h1c457975661ca301E
            (local_ab0,local_568,
             "Do not reformat lines beginning with PSKIP. Unless -X is specified, leading whitespace will be ignored when matching PSKIP"
             ,0x7a);
  _ZN12clap_builder7builder3arg3Arg10value_name17h81e6765a18e841abE(local_2a0,local_ab0,"PSKIP",5);
  _ZN12clap_builder7builder7command7Command3arg17h8fc4cd9d1fefc92cE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h58e90980ac696a02E(local_830,"exact-prefix",0xc);
  _ZN12clap_builder7builder3arg3Arg5short17ha5095fdddbfba465E(local_ab0,local_830,0x78);
  _ZN12clap_builder7builder3arg3Arg4long17he2253374dd610985E(local_830,local_ab0,"exact-prefix",0xc)
  ;
                    /* try { // try from 001654a6 to 001654be has its CatchHandler @ 001658f6 */
  _ZN12clap_builder7builder3arg3Arg4help17h1c457975661ca301E
            (local_ab0,local_830,
             "PREFIX must match at the beginning of the line with no preceding whitespace.",0x4c);
  _ZN12clap_builder7builder3arg3Arg6action17h408fbf360adf2399E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h8fc4cd9d1fefc92cE(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h58e90980ac696a02E(local_568,"exact-skip-prefix",0x11);
  _ZN12clap_builder7builder3arg3Arg5short17ha5095fdddbfba465E(local_ab0,local_568,0x58);
  _ZN12clap_builder7builder3arg3Arg4long17he2253374dd610985E
            (local_568,local_ab0,"exact-skip-prefix",0x11);
                    /* try { // try from 00165540 to 00165558 has its CatchHandler @ 001658e1 */
  _ZN12clap_builder7builder3arg3Arg4help17h1c457975661ca301E
            (local_ab0,local_568,
             "PSKIP must match at the beginning of the line with no preceding whitespace.",0x4b);
  _ZN12clap_builder7builder3arg3Arg6action17h408fbf360adf2399E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h8fc4cd9d1fefc92cE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h58e90980ac696a02E(local_830,"width",5);
  _ZN12clap_builder7builder3arg3Arg5short17ha5095fdddbfba465E(local_ab0,local_830,0x77);
  _ZN12clap_builder7builder3arg3Arg4long17he2253374dd610985E(local_830,local_ab0,"width",5);
                    /* try { // try from 001655da to 00165610 has its CatchHandler @ 001659b9 */
  _ZN12clap_builder7builder3arg3Arg4help17h1c457975661ca301E
            (local_ab0,local_830,
             "Fill output lines up to a maximum of WIDTH columns, default 75. This can be specified as a negative number in the first argument."
             ,0x81);
  _ZN12clap_builder7builder3arg3Arg10value_name17h81e6765a18e841abE(local_2a0,local_ab0,"WIDTH",5);
  _ZN12clap_builder7builder7command7Command3arg17h8fc4cd9d1fefc92cE(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h58e90980ac696a02E(local_568,&DAT_00118588,4);
  _ZN12clap_builder7builder3arg3Arg5short17ha5095fdddbfba465E(local_ab0,local_568,0x67);
  _ZN12clap_builder7builder3arg3Arg4long17he2253374dd610985E(local_568,local_ab0,&DAT_00118588,4);
                    /* try { // try from 0016567d to 001656b3 has its CatchHandler @ 001659a7 */
  _ZN12clap_builder7builder3arg3Arg4help17h1c457975661ca301E
            (local_ab0,local_568,
             "Goal width, default of 93% of WIDTH. Must be less than or equal to WIDTH.",0x49);
  _ZN12clap_builder7builder3arg3Arg10value_name17h81e6765a18e841abE(local_2a0,local_ab0,"GOAL",4);
  _ZN12clap_builder7builder7command7Command3arg17h8fc4cd9d1fefc92cE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h58e90980ac696a02E(local_830,"quick",5);
  _ZN12clap_builder7builder3arg3Arg5short17ha5095fdddbfba465E(local_ab0,local_830,0x71);
  _ZN12clap_builder7builder3arg3Arg4long17he2253374dd610985E(local_830,local_ab0,"quick",5);
                    /* try { // try from 00165720 to 00165738 has its CatchHandler @ 001658cc */
  _ZN12clap_builder7builder3arg3Arg4help17h1c457975661ca301E
            (local_ab0,local_830,
             "Break lines more quickly at the expense of a potentially more ragged appearance.",0x50
            );
  _ZN12clap_builder7builder3arg3Arg6action17h408fbf360adf2399E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h8fc4cd9d1fefc92cE(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h58e90980ac696a02E(local_568,"tab-width",9);
  _ZN12clap_builder7builder3arg3Arg5short17ha5095fdddbfba465E(local_ab0,local_568,0x54);
  _ZN12clap_builder7builder3arg3Arg4long17he2253374dd610985E(local_568,local_ab0,"tab-width",9);
                    /* try { // try from 001657ba to 001657f0 has its CatchHandler @ 00165995 */
  _ZN12clap_builder7builder3arg3Arg4help17h1c457975661ca301E
            (local_ab0,local_568,"Treat tabs as TABWIDTH spaces fo",0xa1);
  _ZN12clap_builder7builder3arg3Arg10value_name17h81e6765a18e841abE
            (local_2a0,local_ab0,&DAT_00118738,8);
  _ZN12clap_builder7builder7command7Command3arg17h8fc4cd9d1fefc92cE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h58e90980ac696a02E(local_830,"files",5);
  _ZN12clap_builder7builder3arg3Arg6action17h408fbf360adf2399E(local_ab0,local_830,1);
                    /* try { // try from 0016583f to 0016586c has its CatchHandler @ 00165983 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h81e6765a18e841abE(local_830,local_ab0,"FILES",5);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h628176efa5d3776dE(local_ab0,local_830);
  (*(code *)PTR_memcpy_001f6e90)(local_830,local_ab0,0x278);
  local_5b8 = local_838 | 0x40;
  local_5b4 = local_834;
  _ZN12clap_builder7builder7command7Command3arg17h8fc4cd9d1fefc92cE(param_1,local_568,local_830);
  return param_1;
}