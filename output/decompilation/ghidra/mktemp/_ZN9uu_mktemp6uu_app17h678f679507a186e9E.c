undefined8 _ZN9uu_mktemp6uu_app17h678f679507a186e9E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_a60;
  undefined8 local_a58;
  ulong local_a50;
  undefined local_a48 [584];
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
  undefined8 local_268;
  undefined8 local_260;
  ulong local_258;
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h76c7f6d05f88d66bE(local_7f8,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hd42484b89d9bacd4E
            (local_530,local_7f8,"0.0.28",6);
  _ZN12clap_builder7builder7command7Command5about17h7938a9e7ef03708fE
            (local_7f8,local_530,"Create a temporary file or directory.",0x25);
                    /* try { // try from 001bf963 to 001bf979 has its CatchHandler @ 001bff49 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(local_a48,"{} [OPTION]... [TEMPLATE]",0x19);
  _ZN12clap_builder7builder7command7Command14override_usage17h619a592790955547E
            (local_530,local_7f8,local_a48);
  (*(code *)PTR_memcpy_0023adc8)(local_7f8,local_530,700);
  local_53c = local_274 | 0x8000000080;
  local_534 = local_26c;
                    /* try { // try from 001bf9d5 to 001bfa41 has its CatchHandler @ 001bffa6 */
  _ZN12clap_builder7builder3arg3Arg3new17ha5d5728112458319E(local_530,"directory",9);
  _ZN12clap_builder7builder3arg3Arg5short17h64644c15e6ab22daE(local_a48,local_530,100);
  _ZN12clap_builder7builder3arg3Arg4long17haebb94b99a5f5408E(local_530,local_a48,"directory",9);
  _ZN12clap_builder7builder3arg3Arg4help17h379e16b3ef3e663dE
            (local_a48,local_530,"Make a directory instead of a file",0x22);
  _ZN12clap_builder7builder3arg3Arg6action17hfdbb6a40310369ccE(&local_268,local_a48);
  _ZN12clap_builder7builder7command7Command3arg17hf4963ed5bd9d715dE(local_530,local_7f8,&local_268);
                    /* try { // try from 001bfa6f to 001bfadb has its CatchHandler @ 001bff94 */
  _ZN12clap_builder7builder3arg3Arg3new17ha5d5728112458319E(local_7f8,"dry-run",7);
  _ZN12clap_builder7builder3arg3Arg5short17h64644c15e6ab22daE(local_a48,local_7f8,0x75);
  _ZN12clap_builder7builder3arg3Arg4long17haebb94b99a5f5408E(local_7f8,local_a48,"dry-run",7);
  _ZN12clap_builder7builder3arg3Arg4help17h379e16b3ef3e663dE
            (local_a48,local_7f8,"do not create anything; merely print a name (unsafe)",0x34);
  _ZN12clap_builder7builder3arg3Arg6action17hfdbb6a40310369ccE(&local_268,local_a48);
  _ZN12clap_builder7builder7command7Command3arg17hf4963ed5bd9d715dE(local_7f8,local_530,&local_268);
                    /* try { // try from 001bfb09 to 001bfb75 has its CatchHandler @ 001bff82 */
  _ZN12clap_builder7builder3arg3Arg3new17ha5d5728112458319E(local_530,"quiet",5);
  _ZN12clap_builder7builder3arg3Arg5short17h64644c15e6ab22daE(local_a48,local_530,0x71);
  _ZN12clap_builder7builder3arg3Arg4long17haebb94b99a5f5408E(local_530,local_a48,"quiet",5);
  _ZN12clap_builder7builder3arg3Arg4help17h379e16b3ef3e663dE
            (local_a48,local_530,"Fail silently if an error occurs.",0x21);
  _ZN12clap_builder7builder3arg3Arg6action17hfdbb6a40310369ccE(&local_268,local_a48);
  _ZN12clap_builder7builder7command7Command3arg17hf4963ed5bd9d715dE(local_530,local_7f8,&local_268);
                    /* try { // try from 001bfba3 to 001bfc15 has its CatchHandler @ 001bffb8 */
  _ZN12clap_builder7builder3arg3Arg3new17ha5d5728112458319E(local_7f8,"suffix",6);
  _ZN12clap_builder7builder3arg3Arg4long17haebb94b99a5f5408E(local_a48,local_7f8,"suffix",6);
  _ZN12clap_builder7builder3arg3Arg4help17h379e16b3ef3e663dE
            (local_7f8,local_a48,
             "append SUFFIX to TEMPLATE; SUFFIX must not contain a path separator. This option is implied if TEMPLATE does not end with X."
             ,0x7c);
  _ZN12clap_builder7builder3arg3Arg10value_name17h2a7635652bc5a76eE(local_a48,local_7f8,"SUFFIX",6);
  _ZN12clap_builder7builder7command7Command3arg17hf4963ed5bd9d715dE(local_7f8,local_530,local_a48);
                    /* try { // try from 001bfc30 to 001bfd0f has its CatchHandler @ 001bffca */
  _ZN12clap_builder7builder3arg3Arg3new17ha5d5728112458319E(local_530,"p",1);
  _ZN12clap_builder7builder3arg3Arg5short17h64644c15e6ab22daE(local_a48,local_530,0x70);
  _ZN12clap_builder7builder3arg3Arg4help17h379e16b3ef3e663dE
            (local_530,local_a48,"short form of --tmpdir",0x16);
  _ZN12clap_builder7builder3arg3Arg10value_name17h2a7635652bc5a76eE(local_a48,local_530,"DIR",3);
  _ZN12clap_builder7builder3arg3Arg8num_args17h6743cf132f863e79E(local_530,local_a48);
  local_a60 = 3;
  local_258 = local_a50;
  local_268 = 3;
  local_260 = local_a58;
  _ZN12clap_builder7builder3arg3Arg12value_parser17hb5266bfd1f63f64cE
            (local_a48,local_530,&local_268);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h5b4535c7fc4341ebE(&local_268,local_a48,4);
  _ZN12clap_builder7builder7command7Command3arg17hf4963ed5bd9d715dE(local_530,local_7f8,&local_268);
                    /* try { // try from 001bfd2d to 001bfdd9 has its CatchHandler @ 001bffdc */
  _ZN12clap_builder7builder3arg3Arg3new17ha5d5728112458319E(local_7f8,"tmpdir",6);
  _ZN12clap_builder7builder3arg3Arg4long17haebb94b99a5f5408E(local_a48,local_7f8,"tmpdir",6);
  _ZN12clap_builder7builder3arg3Arg4help17h379e16b3ef3e663dE
            (local_7f8,local_a48,
             "interpret TEMPLATE relative to DIR; if DIR is not specified, use $TMPDIR ($TMP on windows) if set, else /tmp. With this option, TEMPLATE must not be an absolute name; unlike with -t, TEMPLATE may contain slashes, but mktemp creates only the final component"
             ,0x100);
  _ZN12clap_builder7builder3arg3Arg10value_name17h2a7635652bc5a76eE(local_a48,local_7f8,"DIR",3);
  local_268 = 0;
  local_260 = 1;
  local_258 = local_258 & 0xffffffffffffff00;
  _ZN12clap_builder7builder3arg3Arg8num_args17he75e4a05b31a31abE(local_7f8,local_a48,&local_268);
  (*(code *)PTR_memcpy_0023adc8)(local_a48,local_7f8,0x248);
  local_800 = local_5b0 | 0x80;
  local_7fc = local_5ac;
                    /* try { // try from 001bfe16 to 001bfe5f has its CatchHandler @ 001bffdc */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h2c072bf86a60bf55E(local_7f8,local_a48,"p",1);
  _ZN12clap_builder7builder3arg3Arg12value_parser17hb5266bfd1f63f64cE
            (local_a48,local_7f8,&local_a60);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h5b4535c7fc4341ebE(&local_268,local_a48,4);
  _ZN12clap_builder7builder7command7Command3arg17hf4963ed5bd9d715dE(local_7f8,local_530,&local_268);
                    /* try { // try from 001bfe7d to 001bfecb has its CatchHandler @ 001bff70 */
  _ZN12clap_builder7builder3arg3Arg3new17ha5d5728112458319E(local_530,"t",1);
  _ZN12clap_builder7builder3arg3Arg5short17h64644c15e6ab22daE(local_a48,local_530,0x74);
  _ZN12clap_builder7builder3arg3Arg4help17h379e16b3ef3e663dE
            (local_530,local_a48,
             "Generate a template (using the supplied prefix and TMPDIR (TMP on windows) if set) to create a filename template [deprecated]"
             ,0x7d);
  _ZN12clap_builder7builder3arg3Arg6action17hfdbb6a40310369ccE(local_a48,local_530);
  _ZN12clap_builder7builder7command7Command3arg17hf4963ed5bd9d715dE(local_530,local_7f8,local_a48);
                    /* try { // try from 001bfef9 to 001bff23 has its CatchHandler @ 001bff5e */
  _ZN12clap_builder7builder3arg3Arg3new17ha5d5728112458319E(local_7f8,"templateDeadlock",8);
  _ZN12clap_builder7builder3arg3Arg8num_args17hc0a90c4cca44ae1dE(local_a48,local_7f8);
  _ZN12clap_builder7builder7command7Command3arg17hf4963ed5bd9d715dE(param_1,local_530,local_a48);
  return param_1;
}