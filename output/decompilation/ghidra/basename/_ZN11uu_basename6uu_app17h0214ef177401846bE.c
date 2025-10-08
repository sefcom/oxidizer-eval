undefined8 _ZN11uu_basename6uu_app17h0214ef177401846bE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_830 [632];
  uint local_5b8;
  undefined4 local_5b4;
  undefined local_5b0 [632];
  uint local_338;
  undefined4 local_334;
  ulong local_2f4;
  undefined4 local_2ec;
  undefined local_2e8 [700];
  ulong local_2c;
  undefined4 local_24;
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001e5938)();
  _ZN12clap_builder7builder7command7Command3new17h459332d9f8e578d8E(local_5b0,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hfb65dc2f2ba316e0E(local_2e8,local_5b0);
  _ZN12clap_builder7builder7command7Command5about17he0ea2338ffab2ea1E(local_5b0,local_2e8);
                    /* try { // try from 00156aad to 00156ac3 has its CatchHandler @ 00156def */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001e5b40)
            (local_830,"{} [-z] NAME [SUFFIX]\n{} OPTION... NAME...",0x2a);
  _ZN12clap_builder7builder7command7Command14override_usage17hb9d846602d926a8aE
            (local_2e8,local_5b0,local_830);
  (*(code *)PTR_memcpy_001e5a90)(local_5b0,local_2e8,700);
  local_2f4 = local_2c | 0x8000000080;
  local_2ec = local_24;
  _ZN12clap_builder7builder3arg3Arg3new17hd6bcf8aadc168148E(local_2e8,"multiple",8);
  _ZN12clap_builder7builder3arg3Arg5short17h9f636bb963379e35E(local_830,local_2e8,0x61);
  _ZN12clap_builder7builder3arg3Arg4long17h1e62d214933c52baE(local_2e8,local_830,"multiple",8);
                    /* try { // try from 00156b6e to 00156bb9 has its CatchHandler @ 00156e13 */
  _ZN12clap_builder7builder3arg3Arg4help17h03a2805fd44da2fcE
            (local_830,local_2e8,"support multiple arguments and treat each as a NAME",0x33);
  _ZN12clap_builder7builder3arg3Arg6action17h4cb045f44981e661E(local_2e8,local_830,2);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h5482812f43ef6bd4E
            (local_830,local_2e8,"multiple",8);
  _ZN12clap_builder7builder7command7Command3arg17ha61b074e9aba73cfE(local_2e8,local_5b0,local_830);
  _ZN12clap_builder7builder3arg3Arg3new17hd6bcf8aadc168148E(local_5b0,&DAT_00117750,4);
  _ZN12clap_builder7builder3arg3Arg6action17h4cb045f44981e661E(local_830,local_5b0,1);
                    /* try { // try from 00156c05 to 00156c14 has its CatchHandler @ 00156ddd */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h1cf79802a65db06aE(local_5b0,local_830);
  (*(code *)PTR_memcpy_001e5a90)(local_830,local_5b0,0x278);
  local_5b8 = local_338 | 0x204;
  local_5b4 = local_334;
  _ZN12clap_builder7builder7command7Command3arg17ha61b074e9aba73cfE(local_5b0,local_2e8,local_830);
  _ZN12clap_builder7builder3arg3Arg3new17hd6bcf8aadc168148E(local_2e8,"suffix",6);
  _ZN12clap_builder7builder3arg3Arg5short17h9f636bb963379e35E(local_830,local_2e8,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17h1e62d214933c52baE(local_2e8,local_830,"suffix",6);
                    /* try { // try from 00156cb8 to 00156d00 has its CatchHandler @ 00156e25 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h1b3c279dd8907e24E(local_830,local_2e8);
  _ZN12clap_builder7builder3arg3Arg4help17h03a2805fd44da2fcE
            (local_2e8,local_830,"remove a trailing SUFFIX; implies -a",0x24);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h5482812f43ef6bd4E
            (local_830,local_2e8,"suffix",6);
  _ZN12clap_builder7builder7command7Command3arg17ha61b074e9aba73cfE(local_2e8,local_5b0,local_830);
  _ZN12clap_builder7builder3arg3Arg3new17hd6bcf8aadc168148E(local_5b0,&DAT_00117734,4);
  _ZN12clap_builder7builder3arg3Arg5short17h9f636bb963379e35E(local_830,local_5b0,0x7a);
  _ZN12clap_builder7builder3arg3Arg4long17h1e62d214933c52baE(local_5b0,local_830,&DAT_00117734,4);
                    /* try { // try from 00156d6a to 00156db5 has its CatchHandler @ 00156e01 */
  _ZN12clap_builder7builder3arg3Arg4help17h03a2805fd44da2fcE
            (local_830,local_5b0,
             "end each output line with NUL, not newlinesrc/uu/basename/src/basename.rs",0x2a);
  _ZN12clap_builder7builder3arg3Arg6action17h4cb045f44981e661E(local_5b0,local_830,2);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h5482812f43ef6bd4E
            (local_830,local_5b0,&DAT_00117734,4);
  _ZN12clap_builder7builder7command7Command3arg17ha61b074e9aba73cfE(param_1,local_2e8,local_830);
  return param_1;
}