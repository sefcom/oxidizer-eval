undefined8 _ZN7uu_stat6uu_app17hbfdb7614c9afe971E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_ab0 [640];
  undefined local_830 [700];
  ulong local_574;
  undefined4 local_56c;
  undefined local_568 [700];
  ulong local_2ac;
  undefined4 local_2a4;
  undefined8 local_2a0 [80];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00222020)();
  _ZN12clap_builder7builder7command7Command3new17hf04ee7269db4a35dE(local_830,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h8f7ba9c768b8e1ccE(local_568,local_830);
  _ZN12clap_builder7builder7command7Command5about17hc5b8c863685e00c8E(local_830,local_568);
                    /* try { // try from 0017760d to 00177623 has its CatchHandler @ 00177a27 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_00222320)
            (local_ab0,"{} [OPTION]... FILE...",0x16);
  _ZN12clap_builder7builder7command7Command14override_usage17h6530ccc920480916E
            (local_568,local_830,local_ab0);
  (*(code *)PTR_memcpy_00221f78)(local_830,local_568,700);
  local_574 = local_2ac | 0x8000000080;
  local_56c = local_2a4;
  _ZN12clap_builder7builder3arg3Arg3new17h10d836e237a10c16E(local_568,"dereference",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17hd2f21798c755ba31E(local_ab0,local_568,0x4c);
  _ZN12clap_builder7builder3arg3Arg4long17hd6c92cf0ef1a3cb7E(local_568,local_ab0,"dereference",0xb);
                    /* try { // try from 001776ce to 001776e6 has its CatchHandler @ 00177a15 */
  _ZN12clap_builder7builder3arg3Arg4help17h039b1eac09cebbbbE(local_ab0,local_568,"follow links",0xc)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h42d0aa8cc14ebe75E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17hc77837b9df89f70dE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h10d836e237a10c16E(local_830,"file-system",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17hd2f21798c755ba31E(local_ab0,local_830,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17hd6c92cf0ef1a3cb7E(local_830,local_ab0,"file-system",0xb);
                    /* try { // try from 00177768 to 00177780 has its CatchHandler @ 00177a03 */
  _ZN12clap_builder7builder3arg3Arg4help17h039b1eac09cebbbbE
            (local_ab0,local_830,"display file system status instead of file status",0x31);
  _ZN12clap_builder7builder3arg3Arg6action17h42d0aa8cc14ebe75E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17hc77837b9df89f70dE(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h10d836e237a10c16E(local_568,"terse",5);
  _ZN12clap_builder7builder3arg3Arg5short17hd2f21798c755ba31E(local_ab0,local_568,0x74);
  _ZN12clap_builder7builder3arg3Arg4long17hd6c92cf0ef1a3cb7E(local_568,local_ab0,"terse",5);
                    /* try { // try from 00177802 to 0017781a has its CatchHandler @ 001779f1 */
  _ZN12clap_builder7builder3arg3Arg4help17h039b1eac09cebbbbE
            (local_ab0,local_568,"print the information in terse form",0x23);
  _ZN12clap_builder7builder3arg3Arg6action17h42d0aa8cc14ebe75E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17hc77837b9df89f70dE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h10d836e237a10c16E(local_830,"format",6);
  _ZN12clap_builder7builder3arg3Arg5short17hd2f21798c755ba31E(local_ab0,local_830,99);
  _ZN12clap_builder7builder3arg3Arg4long17hd6c92cf0ef1a3cb7E(local_830,local_ab0,"format",6);
                    /* try { // try from 0017789c to 001778c6 has its CatchHandler @ 00177a5d */
  _ZN12clap_builder7builder3arg3Arg4help17h039b1eac09cebbbbE
            (local_ab0,local_830,
             "use the specified FORMAT instead of the default;\n output a newline after each use of FORMAT"
             ,0x5b);
  _ZN12clap_builder7builder3arg3Arg10value_name17h195a05d29915983dE(local_2a0,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17hc77837b9df89f70dE(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h10d836e237a10c16E(local_568,"printf",6);
  _ZN12clap_builder7builder3arg3Arg4long17hd6c92cf0ef1a3cb7E(local_ab0,local_568,"printf",6);
                    /* try { // try from 0017791b to 00177948 has its CatchHandler @ 00177a4b */
  _ZN12clap_builder7builder3arg3Arg10value_name17h195a05d29915983dE(local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg4help17h039b1eac09cebbbbE
            (local_ab0,local_568,
             "like --format, but interpret backslash escapes,\n            and do not output a mandatory trailing newline;\n            if you want a newline, include \n in FORMA"
             ,0xa2);
  _ZN12clap_builder7builder7command7Command3arg17hc77837b9df89f70dE(local_568,local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h10d836e237a10c16E(local_830,"files",5);
  _ZN12clap_builder7builder3arg3Arg6action17h42d0aa8cc14ebe75E(local_ab0,local_830,1);
  local_2a0[0] = 2;
                    /* try { // try from 001779a0 to 001779c9 has its CatchHandler @ 00177a39 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h4456a8c2318f35b3E(local_830,local_ab0,local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_hint17h398543e52015991bE(local_ab0,local_830);
  _ZN12clap_builder7builder7command7Command3arg17hc77837b9df89f70dE(param_1,local_568,local_ab0);
  return param_1;
}