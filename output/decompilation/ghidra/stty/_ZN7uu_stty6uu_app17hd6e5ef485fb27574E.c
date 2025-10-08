undefined8 _ZN7uu_stty6uu_app17hd6e5ef485fb27574E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_ab0 [700];
  ulong local_7f4;
  undefined4 local_7ec;
  undefined local_7e8 [640];
  undefined local_568 [700];
  ulong local_2ac;
  undefined4 local_2a4;
  undefined local_2a0 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001eadc0)();
  _ZN12clap_builder7builder7command7Command3new17hda51f2c03f6c5a23E(local_568,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h7b6a0d3675479830E(local_ab0,local_568);
                    /* try { // try from 0015a937 to 0015a950 has its CatchHandler @ 0015ac43 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001eaf90)
            (local_7e8,
             "{} [-F DEVICE | --file=DEVICE] [SETTING]...\n{} [-F DEVICE | --file=DEVICE] [-a|--all]\n{} [-F DEVICE | --file=DEVICE] [-g|--save]"
             ,0x80);
  _ZN12clap_builder7builder7command7Command14override_usage17hbdf2b92e35e386f0E
            (local_568,local_ab0,local_7e8);
  _ZN12clap_builder7builder7command7Command5about17h517b88dabecf8643E(local_ab0,local_568);
  (*(code *)PTR_memcpy_001ead90)(local_568,local_ab0,700);
  local_2ac = local_7f4 | 0x8000000080;
  local_2a4 = local_7ec;
  _ZN12clap_builder7builder3arg3Arg3new17hf636dcc93de60b13E(local_ab0,"all",3);
  _ZN12clap_builder7builder3arg3Arg5short17h8d098838df0f4f22E(local_7e8,local_ab0,0x61);
  _ZN12clap_builder7builder3arg3Arg4long17hfab8d6ba0693c341E(local_ab0,local_7e8,"all",3);
                    /* try { // try from 0015aa08 to 0015aa23 has its CatchHandler @ 0015ac31 */
  _ZN12clap_builder7builder3arg3Arg4help17h4897139ac14d5f73E
            (local_7e8,local_ab0,"print all current settings in human-readable form",0x31);
  _ZN12clap_builder7builder3arg3Arg6action17h4c18f5c57b6b0550E(local_2a0,local_7e8,2);
  _ZN12clap_builder7builder7command7Command3arg17h95b66e83f28ce007E(local_ab0,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hf636dcc93de60b13E(local_568,&DAT_001197a4,4);
  _ZN12clap_builder7builder3arg3Arg5short17h8d098838df0f4f22E(local_7e8,local_568,0x67);
  _ZN12clap_builder7builder3arg3Arg4long17hfab8d6ba0693c341E(local_568,local_7e8,&DAT_001197a4,4);
                    /* try { // try from 0015aaa8 to 0015aac3 has its CatchHandler @ 0015ac22 */
  _ZN12clap_builder7builder3arg3Arg4help17h4897139ac14d5f73E
            (local_7e8,local_568,"print all current settings in a stty-readable form",0x32);
  _ZN12clap_builder7builder3arg3Arg6action17h4c18f5c57b6b0550E(local_2a0,local_7e8,2);
  _ZN12clap_builder7builder7command7Command3arg17h95b66e83f28ce007E(local_568,local_ab0,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hf636dcc93de60b13E(local_ab0,"file",4);
  _ZN12clap_builder7builder3arg3Arg5short17h8d098838df0f4f22E(local_7e8,local_ab0,0x46);
  _ZN12clap_builder7builder3arg3Arg4long17hfab8d6ba0693c341E(local_ab0,local_7e8,"file",4);
                    /* try { // try from 0015ab42 to 0015ab81 has its CatchHandler @ 0015ac52 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h594396eae1bf45c6E(local_7e8,local_ab0);
  _ZN12clap_builder7builder3arg3Arg10value_name17h5556da447cd8907eE(local_ab0,local_7e8);
  _ZN12clap_builder7builder3arg3Arg4help17h4897139ac14d5f73E
            (local_7e8,local_ab0,"open and use the specified DEVICE instead of stdin",0x32);
  _ZN12clap_builder7builder7command7Command3arg17h95b66e83f28ce007E(local_ab0,local_568,local_7e8);
  _ZN12clap_builder7builder3arg3Arg3new17hf636dcc93de60b13E(local_568,"settings",8);
  _ZN12clap_builder7builder3arg3Arg6action17h4c18f5c57b6b0550E(local_7e8,local_568,1);
                    /* try { // try from 0015abd0 to 0015abeb has its CatchHandler @ 0015ac13 */
  _ZN12clap_builder7builder3arg3Arg4help17h4897139ac14d5f73E
            (local_568,local_7e8,"settings to change",0x12);
  _ZN12clap_builder7builder7command7Command3arg17h95b66e83f28ce007E(param_1,local_ab0,local_568);
  return param_1;
}