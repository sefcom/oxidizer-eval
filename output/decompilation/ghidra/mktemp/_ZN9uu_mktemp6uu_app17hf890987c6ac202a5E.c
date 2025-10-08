undefined8 _ZN9uu_mktemp6uu_app17hf890987c6ac202a5E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_ac8 [3];
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
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001fff00)();
  _ZN12clap_builder7builder7command7Command3new17h5db50cac6bb2c0c5E(local_830,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h16e0c3d9a351c218E(local_568,local_830);
  _ZN12clap_builder7builder7command7Command5about17hd3333a05ba94c313E(local_830,local_568);
                    /* try { // try from 0016548d to 001654a3 has its CatchHandler @ 00165a39 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_00200140)
            (local_ab0,"{} [OPTION]... [TEMPLATE]",0x19);
  _ZN12clap_builder7builder7command7Command14override_usage17hdd1d88fcfe1a7150E
            (local_568,local_830,local_ab0);
  (*(code *)PTR_memcpy_001ffeb0)(local_830,local_568,700);
  local_574 = local_2ac | 0x8000000080;
  local_56c = local_2a4;
  _ZN12clap_builder7builder3arg3Arg3new17h818570739cffec02E(local_568,"directory",9);
  _ZN12clap_builder7builder3arg3Arg5short17h9c8d68eeb82284f5E(local_ab0,local_568,100);
  _ZN12clap_builder7builder3arg3Arg4long17h3183e585d2873c7fE(local_568,local_ab0,"directory",9);
                    /* try { // try from 0016554e to 00165566 has its CatchHandler @ 00165a27 */
  _ZN12clap_builder7builder3arg3Arg4help17heac2a5ae67bb5eabE
            (local_ab0,local_568,"Make a directory instead of a file",0x22);
  _ZN12clap_builder7builder3arg3Arg6action17h0cd1618274b163e9E(local_2a0,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17h4729d43e59919395E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h818570739cffec02E(local_830,"dry-run",7);
  _ZN12clap_builder7builder3arg3Arg5short17h9c8d68eeb82284f5E(local_ab0,local_830,0x75);
  _ZN12clap_builder7builder3arg3Arg4long17h3183e585d2873c7fE(local_830,local_ab0,"dry-run",7);
                    /* try { // try from 001655e3 to 001655fb has its CatchHandler @ 00165a15 */
  _ZN12clap_builder7builder3arg3Arg4help17heac2a5ae67bb5eabE
            (local_ab0,local_830,"do not create anything; merely print a name (unsafe)",0x34);
  _ZN12clap_builder7builder3arg3Arg6action17h0cd1618274b163e9E(local_2a0,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17h4729d43e59919395E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h818570739cffec02E(local_568,"quiet",5);
  _ZN12clap_builder7builder3arg3Arg5short17h9c8d68eeb82284f5E(local_ab0,local_568,0x71);
  _ZN12clap_builder7builder3arg3Arg4long17h3183e585d2873c7fE(local_568,local_ab0,"quiet",5);
                    /* try { // try from 00165678 to 00165690 has its CatchHandler @ 00165a03 */
  _ZN12clap_builder7builder3arg3Arg4help17heac2a5ae67bb5eabE
            (local_ab0,local_568,"Fail silently if an error occurs.",0x21);
  _ZN12clap_builder7builder3arg3Arg6action17h0cd1618274b163e9E(local_2a0,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17h4729d43e59919395E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h818570739cffec02E(local_830,"suffix",6);
  _ZN12clap_builder7builder3arg3Arg4long17h3183e585d2873c7fE(local_ab0,local_830,"suffix",6);
                    /* try { // try from 001656f5 to 0016572e has its CatchHandler @ 00165a4b */
  _ZN12clap_builder7builder3arg3Arg4help17heac2a5ae67bb5eabE
            (local_830,local_ab0,
             "append SUFFIX to TEMPLATE; SUFFIX must not contain a path separator. This option is implied if TEMPLATE does not end with X."
             ,0x7c);
  _ZN12clap_builder7builder3arg3Arg10value_name17h5a7e638e0cfa072bE(local_ab0,local_830,"SUFFIX",6);
  _ZN12clap_builder7builder7command7Command3arg17h4729d43e59919395E(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h818570739cffec02E(local_568,"p",1);
  _ZN12clap_builder7builder3arg3Arg5short17h9c8d68eeb82284f5E(local_ab0,local_568,0x70);
                    /* try { // try from 0016577a to 001657f2 has its CatchHandler @ 00165a5d */
  _ZN12clap_builder7builder3arg3Arg4help17heac2a5ae67bb5eabE
            (local_568,local_ab0,"short form of --tmpdir",0x16);
  _ZN12clap_builder7builder3arg3Arg10value_name17h5a7e638e0cfa072bE(local_ab0,local_568,"DIR",3);
  _ZN12clap_builder7builder3arg3Arg8num_args17h4725b88c15ee3b35E(local_568,local_ab0);
  local_ac8[0] = 3;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h53c071e9fea324d0E(local_ab0,local_568,local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_hint17h38dc1041fdb80014E(local_2a0,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17h4729d43e59919395E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h818570739cffec02E(local_830,"tmpdir",6);
  _ZN12clap_builder7builder3arg3Arg4long17h3183e585d2873c7fE(local_ab0,local_830,"tmpdir",6);
                    /* try { // try from 00165847 to 00165880 has its CatchHandler @ 00165a6f */
  _ZN12clap_builder7builder3arg3Arg4help17heac2a5ae67bb5eabE
            (local_830,local_ab0,
             "interpret TEMPLATE relative to DIR; if DIR is not specified, use $TMPDIR ($TMP on windows) if set, else /tmp. With this option, TEMPLATE must not be an absolute name; unlike with -t, TEMPLATE may contain slashes, but mktemp creates only the final component"
             ,0x100);
  _ZN12clap_builder7builder3arg3Arg10value_name17h5a7e638e0cfa072bE(local_ab0,local_830,"DIR",3);
  _ZN12clap_builder7builder3arg3Arg8num_args17h8f8560e5ead6f6ebE(local_830,local_ab0,0,1);
  (*(code *)PTR_memcpy_001ffeb0)(local_ab0,local_830,0x278);
  local_838 = local_5b8 | 0x80;
  local_834 = local_5b4;
                    /* try { // try from 001658d4 to 0016590a has its CatchHandler @ 00165a6f */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h2c577479195a85f1E(local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg12value_parser17h53c071e9fea324d0E(local_ab0,local_830,local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_hint17h38dc1041fdb80014E(local_2a0,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17h4729d43e59919395E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h818570739cffec02E(local_568,"t",1);
  _ZN12clap_builder7builder3arg3Arg5short17h9c8d68eeb82284f5E(local_ab0,local_568,0x74);
                    /* try { // try from 00165959 to 00165974 has its CatchHandler @ 001659f1 */
  _ZN12clap_builder7builder3arg3Arg4help17heac2a5ae67bb5eabE
            (local_568,local_ab0,
             "Generate a template (using the supplied prefix and TMPDIR (TMP on windows) if set) to create a filename template [deprecated]"
             ,0x7d);
  _ZN12clap_builder7builder3arg3Arg6action17h0cd1618274b163e9E(local_ab0,local_568);
  _ZN12clap_builder7builder7command7Command3arg17h4729d43e59919395E(local_568,local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h818570739cffec02E(local_830,"template",8);
  _ZN12clap_builder7builder3arg3Arg8num_args17hcf42f6fcb8c68822E(local_ab0,local_830);
  _ZN12clap_builder7builder7command7Command3arg17h4729d43e59919395E(param_1,local_568,local_ab0);
  return param_1;
}