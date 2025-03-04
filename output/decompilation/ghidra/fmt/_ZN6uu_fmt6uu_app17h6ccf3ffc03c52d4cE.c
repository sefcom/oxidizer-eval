undefined8 _ZN6uu_fmt6uu_app17h6ccf3ffc03c52d4cE(undefined8 param_1)

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
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h64509807afd7565fE(auStack_a48,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h111b6abfa6bca800E
            (local_530,auStack_a48,"0.0.28",6);
  _ZN12clap_builder7builder7command7Command5about17h0e50f99de4bec37dE
            (auStack_a48,local_530,"Reformat paragraphs from input files (or stdin) to stdout.",0x3a
            );
                    /* try { // try from 001b5bb9 to 001b5bd2 has its CatchHandler @ 001b64d6 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_780,"{} [-WIDTH] [OPTION]... [FILE]...",0x21);
  _ZN12clap_builder7builder7command7Command14override_usage17hdfab36e8c8490863E
            (local_530,auStack_a48,local_780);
  (*(code *)PTR_memcpy_0022a4a8)(auStack_a48,local_530,700);
  local_78c = local_274 | 0x8800000088;
  local_784 = local_26c;
                    /* try { // try from 001b5c27 to 001b5c99 has its CatchHandler @ 001b6576 */
  _ZN12clap_builder7builder3arg3Arg3new17h29936642834bfc08E(local_530,"crown-margin",0xc);
  _ZN12clap_builder7builder3arg3Arg5short17h1ba77015f709dd42E(local_780,local_530,99);
  _ZN12clap_builder7builder3arg3Arg4long17h84f8c5bb34180439E(local_530,local_780,"crown-margin",0xc)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17h6d505232ae71569aE
            (local_780,local_530,
             "First and second line of paragraph may have different indentations, in which case the first line\'s indentation is preserved, and each subsequent line\'s indentation matches the second line."
             ,0xbc);
  _ZN12clap_builder7builder3arg3Arg6action17h5992498d946b2fbfE(local_268,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17hd7dea545ae1a6041E(local_530,auStack_a48,local_268)
  ;
                    /* try { // try from 001b5cca to 001b5d28 has its CatchHandler @ 001b6564 */
  _ZN12clap_builder7builder3arg3Arg3new17h29936642834bfc08E(auStack_a48,&DAT_00115090,0x10);
  _ZN12clap_builder7builder3arg3Arg5short17h1ba77015f709dd42E(local_780,auStack_a48,0x74);
  _ZN12clap_builder7builder3arg3Arg4long17h84f8c5bb34180439E
            (auStack_a48,local_780,&DAT_00115090,0x10);
  _ZN12clap_builder7builder3arg3Arg4help17h6d505232ae71569aE
            (local_780,auStack_a48,
             "Like -c, except that the first and second line of a paragraph *must* have different indentation or they are treated as separate paragraphs."
             ,0x8b);
  _ZN12clap_builder7builder3arg3Arg6action17h5992498d946b2fbfE(local_268,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17hd7dea545ae1a6041E(auStack_a48,local_530,local_268)
  ;
                    /* try { // try from 001b5d59 to 001b5dcb has its CatchHandler @ 001b6557 */
  _ZN12clap_builder7builder3arg3Arg3new17h29936642834bfc08E(local_530,&DAT_00115100,0x10);
  _ZN12clap_builder7builder3arg3Arg5short17h1ba77015f709dd42E(local_780,local_530,0x6d);
  _ZN12clap_builder7builder3arg3Arg4long17h84f8c5bb34180439E(local_530,local_780,&DAT_00115100,0x10)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17h6d505232ae71569aE
            (local_780,local_530,
             "Attempt to detect and preserve mail headers in the input. Be careful when combining this flag with -p."
             ,0x66);
  _ZN12clap_builder7builder3arg3Arg6action17h5992498d946b2fbfE(local_268,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17hd7dea545ae1a6041E(local_530,auStack_a48,local_268)
  ;
                    /* try { // try from 001b5dfc to 001b5e5a has its CatchHandler @ 001b6545 */
  _ZN12clap_builder7builder3arg3Arg3new17h29936642834bfc08E(auStack_a48,"split-only",10);
  _ZN12clap_builder7builder3arg3Arg5short17h1ba77015f709dd42E(local_780,auStack_a48,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17h84f8c5bb34180439E(auStack_a48,local_780,"split-only",10);
  _ZN12clap_builder7builder3arg3Arg4help17h6d505232ae71569aE
            (local_780,auStack_a48,"Split lines only, do not reflow.",0x20);
  _ZN12clap_builder7builder3arg3Arg6action17h5992498d946b2fbfE(local_268,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17hd7dea545ae1a6041E(auStack_a48,local_530,local_268)
  ;
                    /* try { // try from 001b5e8b to 001b5efd has its CatchHandler @ 001b6535 */
  _ZN12clap_builder7builder3arg3Arg3new17h29936642834bfc08E(local_530,"uniform-spacing",0xf);
  _ZN12clap_builder7builder3arg3Arg5short17h1ba77015f709dd42E(local_780,local_530,0x75);
  _ZN12clap_builder7builder3arg3Arg4long17h84f8c5bb34180439E
            (local_530,local_780,"uniform-spacing",0xf);
  _ZN12clap_builder7builder3arg3Arg4help17h6d505232ae71569aE
            (local_780,local_530,
             "Insert exactly one space between words, and two between sentences. Sentence breaks in the input are detected as [?!.] followed by two spaces or a newline; other punctuation is not interpreted as a sentence break."
             ,0xd4);
  _ZN12clap_builder7builder3arg3Arg6action17h5992498d946b2fbfE(local_268,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17hd7dea545ae1a6041E(local_530,auStack_a48,local_268)
  ;
                    /* try { // try from 001b5f2e to 001b5fad has its CatchHandler @ 001b65bc */
  _ZN12clap_builder7builder3arg3Arg3new17h29936642834bfc08E(auStack_a48,"prefix",6);
  _ZN12clap_builder7builder3arg3Arg5short17h1ba77015f709dd42E(local_780,auStack_a48,0x70);
  _ZN12clap_builder7builder3arg3Arg4long17h84f8c5bb34180439E(auStack_a48,local_780,"prefix",6);
  _ZN12clap_builder7builder3arg3Arg4help17h6d505232ae71569aE
            (local_780,auStack_a48,
             "Reformat only lines beginning with PREFIX, reattaching PREFIX to reformatted lines. Unless -x is specified, leading whitespace will be ignored when matching PREFIX."
             ,0xa4);
  _ZN12clap_builder7builder3arg3Arg10value_name17h8b63a1c1086fdff9E(local_268,local_780,"PREFIX",6);
  _ZN12clap_builder7builder7command7Command3arg17hd7dea545ae1a6041E(auStack_a48,local_530,local_268)
  ;
                    /* try { // try from 001b5fc6 to 001b6059 has its CatchHandler @ 001b65af */
  _ZN12clap_builder7builder3arg3Arg3new17h29936642834bfc08E(local_530,"skip-prefix",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17h1ba77015f709dd42E(local_780,local_530,0x50);
  _ZN12clap_builder7builder3arg3Arg4long17h84f8c5bb34180439E(local_530,local_780,"skip-prefix",0xb);
  _ZN12clap_builder7builder3arg3Arg4help17h6d505232ae71569aE
            (local_780,local_530,
             "Do not reformat lines beginning with PSKIP. Unless -X is specified, leading whitespace will be ignored when matching PSKIP"
             ,0x7a);
  _ZN12clap_builder7builder3arg3Arg10value_name17h8b63a1c1086fdff9E(local_268,local_780,"PSKIP",5);
  _ZN12clap_builder7builder7command7Command3arg17hd7dea545ae1a6041E(local_530,auStack_a48,local_268)
  ;
                    /* try { // try from 001b6072 to 001b60d0 has its CatchHandler @ 001b6520 */
  _ZN12clap_builder7builder3arg3Arg3new17h29936642834bfc08E(auStack_a48,"exact-prefix",0xc);
  _ZN12clap_builder7builder3arg3Arg5short17h1ba77015f709dd42E(local_780,auStack_a48,0x78);
  _ZN12clap_builder7builder3arg3Arg4long17h84f8c5bb34180439E
            (auStack_a48,local_780,"exact-prefix",0xc);
  _ZN12clap_builder7builder3arg3Arg4help17h6d505232ae71569aE
            (local_780,auStack_a48,
             "PREFIX must match at the beginning of the line with no preceding whitespace.",0x4c);
  _ZN12clap_builder7builder3arg3Arg6action17h5992498d946b2fbfE(local_268,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17hd7dea545ae1a6041E(auStack_a48,local_530,local_268)
  ;
                    /* try { // try from 001b6101 to 001b6173 has its CatchHandler @ 001b6510 */
  _ZN12clap_builder7builder3arg3Arg3new17h29936642834bfc08E(local_530,"exact-skip-prefix",0x11);
  _ZN12clap_builder7builder3arg3Arg5short17h1ba77015f709dd42E(local_780,local_530,0x58);
  _ZN12clap_builder7builder3arg3Arg4long17h84f8c5bb34180439E
            (local_530,local_780,"exact-skip-prefix",0x11);
  _ZN12clap_builder7builder3arg3Arg4help17h6d505232ae71569aE
            (local_780,local_530,
             "PSKIP must match at the beginning of the line with no preceding whitespace.",0x4b);
  _ZN12clap_builder7builder3arg3Arg6action17h5992498d946b2fbfE(local_268,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17hd7dea545ae1a6041E(local_530,auStack_a48,local_268)
  ;
                    /* try { // try from 001b61a4 to 001b6223 has its CatchHandler @ 001b659d */
  _ZN12clap_builder7builder3arg3Arg3new17h29936642834bfc08E(auStack_a48,"width",5);
  _ZN12clap_builder7builder3arg3Arg5short17h1ba77015f709dd42E(local_780,auStack_a48,0x77);
  _ZN12clap_builder7builder3arg3Arg4long17h84f8c5bb34180439E(auStack_a48,local_780,"width",5);
  _ZN12clap_builder7builder3arg3Arg4help17h6d505232ae71569aE
            (local_780,auStack_a48,
             "Fill output lines up to a maximum of WIDTH columns, default 75. This can be specified as a negative number in the first argument."
             ,0x81);
  _ZN12clap_builder7builder3arg3Arg10value_name17h8b63a1c1086fdff9E(local_268,local_780,"WIDTH",5);
  _ZN12clap_builder7builder7command7Command3arg17hd7dea545ae1a6041E(auStack_a48,local_530,local_268)
  ;
                    /* try { // try from 001b623c to 001b62cf has its CatchHandler @ 001b6590 */
  _ZN12clap_builder7builder3arg3Arg3new17h29936642834bfc08E(local_530,&DAT_00114928,4);
  _ZN12clap_builder7builder3arg3Arg5short17h1ba77015f709dd42E(local_780,local_530,0x67);
  _ZN12clap_builder7builder3arg3Arg4long17h84f8c5bb34180439E(local_530,local_780,&DAT_00114928,4);
  _ZN12clap_builder7builder3arg3Arg4help17h6d505232ae71569aE
            (local_780,local_530,
             "Goal width, default of 93% of WIDTH. Must be less than or equal to WIDTH.",0x49);
  _ZN12clap_builder7builder3arg3Arg10value_name17h8b63a1c1086fdff9E
            (local_268,local_780,
             "GOALERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG",4);
  _ZN12clap_builder7builder7command7Command3arg17hd7dea545ae1a6041E(local_530,auStack_a48,local_268)
  ;
                    /* try { // try from 001b62e8 to 001b6346 has its CatchHandler @ 001b64fb */
  _ZN12clap_builder7builder3arg3Arg3new17h29936642834bfc08E(auStack_a48,"quick",5);
  _ZN12clap_builder7builder3arg3Arg5short17h1ba77015f709dd42E(local_780,auStack_a48,0x71);
  _ZN12clap_builder7builder3arg3Arg4long17h84f8c5bb34180439E(auStack_a48,local_780,"quick",5);
  _ZN12clap_builder7builder3arg3Arg4help17h6d505232ae71569aE
            (local_780,auStack_a48,
             "Break lines more quickly at the expense of a potentially more ragged appearance.",0x50
            );
  _ZN12clap_builder7builder3arg3Arg6action17h5992498d946b2fbfE(local_268,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17hd7dea545ae1a6041E(auStack_a48,local_530,local_268)
  ;
                    /* try { // try from 001b6377 to 001b640a has its CatchHandler @ 001b6583 */
  _ZN12clap_builder7builder3arg3Arg3new17h29936642834bfc08E(local_530,"tab-width: ",9);
  _ZN12clap_builder7builder3arg3Arg5short17h1ba77015f709dd42E(local_780,local_530,0x54);
  _ZN12clap_builder7builder3arg3Arg4long17h84f8c5bb34180439E(local_530,local_780,"tab-width: ",9);
  _ZN12clap_builder7builder3arg3Arg4help17h6d505232ae71569aE
            (local_780,local_530,
             "Treat tabs as TABWIDTH spaces for determining line length, default 8. Note that this is used only for calculating line lengths; tabs are preserved in the output."
             ,0xa1);
  _ZN12clap_builder7builder3arg3Arg10value_name17h8b63a1c1086fdff9E
            (local_268,local_780,&DAT_00114b10,8);
  _ZN12clap_builder7builder7command7Command3arg17hd7dea545ae1a6041E(local_530,auStack_a48,local_268)
  ;
                    /* try { // try from 001b6423 to 001b647a has its CatchHandler @ 001b64e6 */
  _ZN12clap_builder7builder3arg3Arg3new17h29936642834bfc08E(auStack_a48,"files",5);
  _ZN12clap_builder7builder3arg3Arg6action17h5992498d946b2fbfE(local_780,auStack_a48,1);
  _ZN12clap_builder7builder3arg3Arg10value_name17h8b63a1c1086fdff9E
            (auStack_a48,local_780,
             "FILEScapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs"
             ,5);
  _ZN12clap_builder7builder3arg3Arg10value_hint17hd91671787faa792cE(local_780,auStack_a48,3);
  (*(code *)PTR_memcpy_0022a4a8)(auStack_a48,local_780,0x248);
  local_800 = local_538 | 0x40;
  local_7fc = local_534;
  _ZN12clap_builder7builder7command7Command3arg17hd7dea545ae1a6041E(param_1,local_530,auStack_a48);
  return param_1;
}