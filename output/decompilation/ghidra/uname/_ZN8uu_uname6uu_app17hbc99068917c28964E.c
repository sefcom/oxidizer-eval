undefined8 _ZN8uu_uname6uu_app17hbc99068917c28964E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [584];
  uint local_800;
  undefined4 local_7fc;
  undefined local_7f8 [584];
  uint local_5b0;
  undefined4 local_5ac;
  ulong local_53c;
  undefined4 local_534;
  undefined local_530 [584];
  uint local_2e8;
  undefined4 local_2e4;
  ulong local_274;
  undefined4 local_26c;
  undefined local_268 [592];
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h33de013894abd84dE(local_7f8,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h5183e70f273eb493E
            (local_530,local_7f8,"0.0.28",6);
  _ZN12clap_builder7builder7command7Command5about17h71f73133e2e1a990E
            (local_7f8,local_530,"Print certain system information. \nWith no OPTION, same as -s.",
             0x3e);
                    /* try { // try from 001a8cf3 to 001a8d07 has its CatchHandler @ 001a933e */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(auStack_a48,"{} [OPTION]...",0xe);
  _ZN12clap_builder7builder7command7Command14override_usage17h2ab54060bf0607bfE
            (local_530,local_7f8,auStack_a48);
  (*(code *)PTR_memcpy_0020e7d0)(local_7f8,local_530,700);
  local_53c = local_274 | 0x8000000080;
  local_534 = local_26c;
                    /* try { // try from 001a8d61 to 001a8dc9 has its CatchHandler @ 001a93c2 */
  _ZN12clap_builder7builder3arg3Arg3new17h1141f38d1bd57110E(local_530,"all",3);
  _ZN12clap_builder7builder3arg3Arg5short17hab43391185e493c5E(auStack_a48,local_530,0x61);
  _ZN12clap_builder7builder3arg3Arg4long17ha91bc731b37cf9cbE(local_530,auStack_a48,"all",3);
  _ZN12clap_builder7builder3arg3Arg4help17h51dd6f0148051d6dE
            (auStack_a48,local_530,"Behave as though all of the options -mnrsvo were specified.",
             0x3b);
  _ZN12clap_builder7builder3arg3Arg6action17h8a255baa2ae38d24E(local_268,auStack_a48);
  _ZN12clap_builder7builder7command7Command3arg17h747f304f861eac9fE(local_530,local_7f8,local_268);
                    /* try { // try from 001a8df5 to 001a8e79 has its CatchHandler @ 001a93e6 */
  _ZN12clap_builder7builder3arg3Arg3new17h1141f38d1bd57110E(local_7f8,"kernel-name",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17hab43391185e493c5E(auStack_a48,local_7f8,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17ha91bc731b37cf9cbE
            (local_7f8,auStack_a48,"kernel-name",0xb);
  _ZN12clap_builder7builder3arg3Arg5alias17h62ef68af077758a7E(auStack_a48,local_7f8,"sysname",7);
  _ZN12clap_builder7builder3arg3Arg4help17h51dd6f0148051d6dE
            (local_7f8,auStack_a48,"print the kernel name.",0x16);
  _ZN12clap_builder7builder3arg3Arg6action17h8a255baa2ae38d24E(auStack_a48,local_7f8);
  _ZN12clap_builder7builder7command7Command3arg17h747f304f861eac9fE(local_7f8,local_530,auStack_a48)
  ;
                    /* try { // try from 001a8ea5 to 001a8f0d has its CatchHandler @ 001a93b0 */
  _ZN12clap_builder7builder3arg3Arg3new17h1141f38d1bd57110E(local_530,"nodenameDeadlock",8);
  _ZN12clap_builder7builder3arg3Arg5short17hab43391185e493c5E(auStack_a48,local_530,0x6e);
  _ZN12clap_builder7builder3arg3Arg4long17ha91bc731b37cf9cbE
            (local_530,auStack_a48,"nodenameDeadlock",8);
  _ZN12clap_builder7builder3arg3Arg4help17h51dd6f0148051d6dE
            (auStack_a48,local_530,
             "print the nodename (the nodename may be a name that the system is known by to a communications network)."
             ,0x68);
  _ZN12clap_builder7builder3arg3Arg6action17h8a255baa2ae38d24E(local_268,auStack_a48);
  _ZN12clap_builder7builder7command7Command3arg17h747f304f861eac9fE(local_530,local_7f8,local_268);
                    /* try { // try from 001a8f39 to 001a8fbd has its CatchHandler @ 001a93d4 */
  _ZN12clap_builder7builder3arg3Arg3new17h1141f38d1bd57110E(local_7f8,"kernel-release",0xe);
  _ZN12clap_builder7builder3arg3Arg5short17hab43391185e493c5E(auStack_a48,local_7f8,0x72);
  _ZN12clap_builder7builder3arg3Arg4long17ha91bc731b37cf9cbE
            (local_7f8,auStack_a48,"kernel-release",0xe);
  _ZN12clap_builder7builder3arg3Arg5alias17h62ef68af077758a7E(auStack_a48,local_7f8,"release",7);
  _ZN12clap_builder7builder3arg3Arg4help17h51dd6f0148051d6dE
            (local_7f8,auStack_a48,"print the operating system release.",0x23);
  _ZN12clap_builder7builder3arg3Arg6action17h8a255baa2ae38d24E(auStack_a48,local_7f8);
  _ZN12clap_builder7builder7command7Command3arg17h747f304f861eac9fE(local_7f8,local_530,auStack_a48)
  ;
                    /* try { // try from 001a8fe9 to 001a9051 has its CatchHandler @ 001a939e */
  _ZN12clap_builder7builder3arg3Arg3new17h1141f38d1bd57110E(local_530,"kernel-version",0xe);
  _ZN12clap_builder7builder3arg3Arg5short17hab43391185e493c5E(auStack_a48,local_530,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17ha91bc731b37cf9cbE
            (local_530,auStack_a48,"kernel-version",0xe);
  _ZN12clap_builder7builder3arg3Arg4help17h51dd6f0148051d6dE
            (auStack_a48,local_530,"print the operating system version.",0x23);
  _ZN12clap_builder7builder3arg3Arg6action17h8a255baa2ae38d24E(local_268,auStack_a48);
  _ZN12clap_builder7builder7command7Command3arg17h747f304f861eac9fE(local_530,local_7f8,local_268);
                    /* try { // try from 001a907d to 001a90e5 has its CatchHandler @ 001a938c */
  _ZN12clap_builder7builder3arg3Arg3new17h1141f38d1bd57110E(local_7f8,"machine",7);
  _ZN12clap_builder7builder3arg3Arg5short17hab43391185e493c5E(auStack_a48,local_7f8,0x6d);
  _ZN12clap_builder7builder3arg3Arg4long17ha91bc731b37cf9cbE(local_7f8,auStack_a48,"machine",7);
  _ZN12clap_builder7builder3arg3Arg4help17h51dd6f0148051d6dE
            (auStack_a48,local_7f8,"print the machine hardware name.",0x20);
  _ZN12clap_builder7builder3arg3Arg6action17h8a255baa2ae38d24E(local_268,auStack_a48);
  _ZN12clap_builder7builder7command7Command3arg17h747f304f861eac9fE(local_7f8,local_530,local_268);
                    /* try { // try from 001a9111 to 001a9179 has its CatchHandler @ 001a937a */
  _ZN12clap_builder7builder3arg3Arg3new17h1141f38d1bd57110E
            (local_530,anon_fa20d908ae531394d995a480a5191403_8_llvm_9354271668978287964,0x10);
  _ZN12clap_builder7builder3arg3Arg5short17hab43391185e493c5E(auStack_a48,local_530,0x6f);
  _ZN12clap_builder7builder3arg3Arg4long17ha91bc731b37cf9cbE
            (local_530,auStack_a48,anon_fa20d908ae531394d995a480a5191403_8_llvm_9354271668978287964,
             0x10);
  _ZN12clap_builder7builder3arg3Arg4help17h51dd6f0148051d6dE
            (auStack_a48,local_530,"print the operating system name.",0x20);
  _ZN12clap_builder7builder3arg3Arg6action17h8a255baa2ae38d24E(local_268,auStack_a48);
  _ZN12clap_builder7builder7command7Command3arg17h747f304f861eac9fE(local_530,local_7f8,local_268);
                    /* try { // try from 001a91a5 to 001a920d has its CatchHandler @ 001a9368 */
  _ZN12clap_builder7builder3arg3Arg3new17h1141f38d1bd57110E(local_7f8,"processor",9);
  _ZN12clap_builder7builder3arg3Arg5short17hab43391185e493c5E(auStack_a48,local_7f8,0x70);
  _ZN12clap_builder7builder3arg3Arg4long17ha91bc731b37cf9cbE(local_7f8,auStack_a48,"processor",9);
  _ZN12clap_builder7builder3arg3Arg4help17h51dd6f0148051d6dE
            (auStack_a48,local_7f8,"print the processor type (non-portable)",0x27);
  _ZN12clap_builder7builder3arg3Arg6action17h8a255baa2ae38d24E(local_7f8,auStack_a48);
  (*(code *)PTR_memcpy_0020e7d0)(auStack_a48,local_7f8,0x248);
  local_800 = local_5b0 | 4;
  local_7fc = local_5ac;
  _ZN12clap_builder7builder7command7Command3arg17h747f304f861eac9fE(local_7f8,local_530,auStack_a48)
  ;
                    /* try { // try from 001a926c to 001a92d4 has its CatchHandler @ 001a9353 */
  _ZN12clap_builder7builder3arg3Arg3new17h1141f38d1bd57110E(local_530,"hardware-platform",0x11);
  _ZN12clap_builder7builder3arg3Arg5short17hab43391185e493c5E(auStack_a48,local_530,0x69);
  _ZN12clap_builder7builder3arg3Arg4long17ha91bc731b37cf9cbE
            (local_530,auStack_a48,"hardware-platform",0x11);
  _ZN12clap_builder7builder3arg3Arg4help17h51dd6f0148051d6dE
            (auStack_a48,local_530,"print the hardware platform (non-portable)",0x2a);
  _ZN12clap_builder7builder3arg3Arg6action17h8a255baa2ae38d24E(local_530,auStack_a48);
  (*(code *)PTR_memcpy_0020e7d0)(auStack_a48,local_530,0x248);
  local_800 = local_2e8 | 4;
  local_7fc = local_2e4;
  _ZN12clap_builder7builder7command7Command3arg17h747f304f861eac9fE(param_1,local_7f8,auStack_a48);
  return param_1;
}