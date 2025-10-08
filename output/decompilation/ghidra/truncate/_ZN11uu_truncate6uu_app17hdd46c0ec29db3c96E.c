undefined8 _ZN11uu_truncate6uu_app17hdd46c0ec29db3c96E(undefined8 param_1)

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
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001e9f70)();
  _ZN12clap_builder7builder7command7Command3new17habc07e768520ecdbE(local_568,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hd38b0567f5511ee1E(local_830,local_568);
  _ZN12clap_builder7builder7command7Command5about17h62627682378df86eE(local_568,local_830);
                    /* try { // try from 001589cd to 001589e3 has its CatchHandler @ 00158de6 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001ea1a8)
            (local_ab0,"{} [OPTION]... [FILE]...",0x18);
  _ZN12clap_builder7builder7command7Command14override_usage17h52ca43afcd3b097cE
            (local_830,local_568,local_ab0);
  (*(code *)PTR_memcpy_001ea038)(local_568,local_830,700);
  local_2ac = local_574 | 0x8000000080;
  local_2a4 = local_56c;
  _ZN12clap_builder7builder3arg3Arg3new17he7d569d0c5e6aa05E(local_830,"io-blocks",9);
  _ZN12clap_builder7builder3arg3Arg5short17h4a5fd04a5ea3ce94E(local_ab0,local_830,0x6f);
  _ZN12clap_builder7builder3arg3Arg4long17he2a86ef0046ce618E(local_830,local_ab0,"io-blocks",9);
                    /* try { // try from 00158a8e to 00158aa6 has its CatchHandler @ 00158dd4 */
  _ZN12clap_builder7builder3arg3Arg4help17h91609bae8a5d3ddfE
            (local_ab0,local_830,
             "treat SIZE as the number of I/O blocks of the file rather than bytes (NOT IMPLEMENTED)"
             ,0x56);
  _ZN12clap_builder7builder3arg3Arg6action17h6c7becc968285d86E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h1dc9aee23d423d01E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17he7d569d0c5e6aa05E(local_568,"no-create",9);
  _ZN12clap_builder7builder3arg3Arg5short17h4a5fd04a5ea3ce94E(local_ab0,local_568,99);
  _ZN12clap_builder7builder3arg3Arg4long17he2a86ef0046ce618E(local_568,local_ab0,"no-create",9);
                    /* try { // try from 00158b28 to 00158b40 has its CatchHandler @ 00158dc2 */
  _ZN12clap_builder7builder3arg3Arg4help17h91609bae8a5d3ddfE
            (local_ab0,local_568,"do not create files that do not exist",0x25);
  _ZN12clap_builder7builder3arg3Arg6action17h6c7becc968285d86E(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h1dc9aee23d423d01E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17he7d569d0c5e6aa05E(local_830,"reference",9);
  _ZN12clap_builder7builder3arg3Arg5short17h4a5fd04a5ea3ce94E(local_ab0,local_830,0x72);
  _ZN12clap_builder7builder3arg3Arg4long17he2a86ef0046ce618E(local_830,local_ab0,"reference",9);
                    /* try { // try from 00158bc2 to 00158c28 has its CatchHandler @ 00158e1c */
  _ZN12clap_builder7builder3arg3Arg23required_unless_present17h65416279d5997ea5E
            (local_ab0,local_830,"size",4);
  _ZN12clap_builder7builder3arg3Arg4help17h91609bae8a5d3ddfE
            (local_830,local_ab0,"base the size of each file on the size of RFILE",0x2f);
  _ZN12clap_builder7builder3arg3Arg10value_name17h1ea2e814677343cdE(local_ab0,local_830,"RFILE",5);
  _ZN12clap_builder7builder3arg3Arg10value_hint17hbfa99e75fed69c87E(local_2a0,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17h1dc9aee23d423d01E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17he7d569d0c5e6aa05E(local_568,"size",4);
  _ZN12clap_builder7builder3arg3Arg5short17h4a5fd04a5ea3ce94E(local_ab0,local_568,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17he2a86ef0046ce618E(local_568,local_ab0,"size",4);
                    /* try { // try from 00158c95 to 00158ce9 has its CatchHandler @ 00158e0a */
  _ZN12clap_builder7builder3arg3Arg23required_unless_present17h65416279d5997ea5E
            (local_ab0,local_568,"reference",9);
  _ZN12clap_builder7builder3arg3Arg4help17h91609bae8a5d3ddfE
            (local_568,local_ab0,
             "set or adjust the size of each file according to SIZE, which is in bytes unless --io-blocks is specified"
             ,0x68);
  _ZN12clap_builder7builder3arg3Arg10value_name17h1ea2e814677343cdE
            (local_ab0,local_568,&DAT_0011774c,4);
  _ZN12clap_builder7builder7command7Command3arg17h1dc9aee23d423d01E(local_568,local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17he7d569d0c5e6aa05E(local_830,"files",5);
                    /* try { // try from 00158d20 to 00158d38 has its CatchHandler @ 00158df8 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h1ea2e814677343cdE
            (local_ab0,local_830,&DAT_001177b0,4);
  _ZN12clap_builder7builder3arg3Arg6action17h6c7becc968285d86E(local_830,local_ab0,1);
  (*(code *)PTR_memcpy_001ea038)(local_ab0,local_830,0x278);
  local_838 = local_5b8 | 1;
  local_834 = local_5b4;
                    /* try { // try from 00158d88 to 00158d97 has its CatchHandler @ 00158df8 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17hbfa99e75fed69c87E(local_830,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17h1dc9aee23d423d01E(param_1,local_568,local_830);
  return param_1;
}