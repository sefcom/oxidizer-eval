undefined8 _ZN8uu_uname6uu_app17h498fd26d6b647696E(undefined8 param_1)

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
  undefined local_568 [632];
  uint local_2f0;
  undefined4 local_2ec;
  ulong local_2ac;
  undefined4 local_2a4;
  undefined local_2a0 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001e0590)();
  _ZN12clap_builder7builder7command7Command3new17hbda45aa305631dcfE(local_830,uVar1);
  _ZN12clap_builder7builder7command7Command7version17he6e5046ac45c09d1E(local_568,local_830);
  _ZN12clap_builder7builder7command7Command5about17h7aa8fc1aee1fdc42E(local_830,local_568);
                    /* try { // try from 0015222d to 00152243 has its CatchHandler @ 00152909 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001e06c8)
            (local_ab0,"{} [OPTION]...",0xe);
  _ZN12clap_builder7builder7command7Command14override_usage17h8eae2dd7ca76b962E
            (local_568,local_830,local_ab0);
  (*(code *)PTR_memcpy_001e0568)(local_830,local_568,700);
  local_574 = local_2ac | 0x8000000080;
  local_56c = local_2a4;
  _ZN12clap_builder7builder3arg3Arg3new17he81dc6faa32add45E(local_568,"all",3);
  _ZN12clap_builder7builder3arg3Arg5short17h00cb5c393bd6dc66E(local_ab0,local_568,0x61);
  _ZN12clap_builder7builder3arg3Arg4long17hcf126cd65342a1c0E(local_568,local_ab0,"all",3);
                    /* try { // try from 001522ee to 00152306 has its CatchHandler @ 001528f7 */
  _ZN12clap_builder7builder3arg3Arg4help17h34bdc4567447d108E
            (local_ab0,local_568,"Behave as though all of the options -mnrsvo were specified.",0x3b)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hd5cbde159c2534e8E(local_2a0,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17h3d175528a18336eeE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17he81dc6faa32add45E(local_830,"kernel-name",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17h00cb5c393bd6dc66E(local_ab0,local_830,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17hcf126cd65342a1c0E(local_830,local_ab0,"kernel-name",0xb);
                    /* try { // try from 00152383 to 001523b4 has its CatchHandler @ 0015292d */
  _ZN12clap_builder7builder3arg3Arg5alias17h9ab28ff6795de8a8E(local_ab0,local_830,"sysname");
  _ZN12clap_builder7builder3arg3Arg4help17h34bdc4567447d108E
            (local_830,local_ab0,"print the kernel name.",0x16);
  _ZN12clap_builder7builder3arg3Arg6action17hd5cbde159c2534e8E(local_ab0,local_830);
  _ZN12clap_builder7builder7command7Command3arg17h3d175528a18336eeE(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17he81dc6faa32add45E(local_568,&DAT_00116f88,8);
  _ZN12clap_builder7builder3arg3Arg5short17h00cb5c393bd6dc66E(local_ab0,local_568,0x6e);
  _ZN12clap_builder7builder3arg3Arg4long17hcf126cd65342a1c0E(local_568,local_ab0,&DAT_00116f88,8);
                    /* try { // try from 00152431 to 00152449 has its CatchHandler @ 001528e5 */
  _ZN12clap_builder7builder3arg3Arg4help17h34bdc4567447d108E
            (local_ab0,local_568,
             "print the nodename (the nodename may be a name that the system is known by to a communications network)."
             ,0x68);
  _ZN12clap_builder7builder3arg3Arg6action17hd5cbde159c2534e8E(local_2a0,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17h3d175528a18336eeE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17he81dc6faa32add45E(local_830,"kernel-release",0xe);
  _ZN12clap_builder7builder3arg3Arg5short17h00cb5c393bd6dc66E(local_ab0,local_830,0x72);
  _ZN12clap_builder7builder3arg3Arg4long17hcf126cd65342a1c0E
            (local_830,local_ab0,"kernel-release",0xe);
                    /* try { // try from 001524c6 to 001524f7 has its CatchHandler @ 0015291b */
  _ZN12clap_builder7builder3arg3Arg5alias17h9ab28ff6795de8a8E(local_ab0,local_830,"release");
  _ZN12clap_builder7builder3arg3Arg4help17h34bdc4567447d108E
            (local_830,local_ab0,"print the operating system release.",0x23);
  _ZN12clap_builder7builder3arg3Arg6action17hd5cbde159c2534e8E(local_ab0,local_830);
  _ZN12clap_builder7builder7command7Command3arg17h3d175528a18336eeE(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17he81dc6faa32add45E(local_568,"kernel-version",0xe);
  _ZN12clap_builder7builder3arg3Arg5short17h00cb5c393bd6dc66E(local_ab0,local_568,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17hcf126cd65342a1c0E
            (local_568,local_ab0,"kernel-version",0xe);
                    /* try { // try from 00152574 to 0015258c has its CatchHandler @ 001528d3 */
  _ZN12clap_builder7builder3arg3Arg4help17h34bdc4567447d108E
            (local_ab0,local_568,"print the operating system version.",0x23);
  _ZN12clap_builder7builder3arg3Arg6action17hd5cbde159c2534e8E(local_2a0,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17h3d175528a18336eeE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17he81dc6faa32add45E(local_830,"machine",7);
  _ZN12clap_builder7builder3arg3Arg5short17h00cb5c393bd6dc66E(local_ab0,local_830,0x6d);
  _ZN12clap_builder7builder3arg3Arg4long17hcf126cd65342a1c0E(local_830,local_ab0,"machine",7);
                    /* try { // try from 00152609 to 00152621 has its CatchHandler @ 001528c1 */
  _ZN12clap_builder7builder3arg3Arg4help17h34bdc4567447d108E
            (local_ab0,local_830,"print the machine hardware name.",0x20);
  _ZN12clap_builder7builder3arg3Arg6action17hd5cbde159c2534e8E(local_2a0,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17h3d175528a18336eeE(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17he81dc6faa32add45E(local_568,&DAT_001175b0,0x10);
  _ZN12clap_builder7builder3arg3Arg5short17h00cb5c393bd6dc66E(local_ab0,local_568,0x6f);
  _ZN12clap_builder7builder3arg3Arg4long17hcf126cd65342a1c0E(local_568,local_ab0,&DAT_001175b0,0x10)
  ;
                    /* try { // try from 0015269e to 001526b6 has its CatchHandler @ 001528af */
  _ZN12clap_builder7builder3arg3Arg4help17h34bdc4567447d108E
            (local_ab0,local_568,"print the operating system name.",0x20);
  _ZN12clap_builder7builder3arg3Arg6action17hd5cbde159c2534e8E(local_2a0,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17h3d175528a18336eeE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17he81dc6faa32add45E(local_830,"processor",9);
  _ZN12clap_builder7builder3arg3Arg5short17h00cb5c393bd6dc66E(local_ab0,local_830,0x70);
  _ZN12clap_builder7builder3arg3Arg4long17hcf126cd65342a1c0E(local_830,local_ab0,"processor",9);
                    /* try { // try from 00152733 to 0015274b has its CatchHandler @ 0015289a */
  _ZN12clap_builder7builder3arg3Arg4help17h34bdc4567447d108E
            (local_ab0,local_830,"print the processor type (non-portable)",0x27);
  _ZN12clap_builder7builder3arg3Arg6action17hd5cbde159c2534e8E(local_830,local_ab0);
  (*(code *)PTR_memcpy_001e0568)(local_ab0,local_830,0x278);
  local_838 = local_5b8 | 4;
  local_834 = local_5b4;
  _ZN12clap_builder7builder7command7Command3arg17h3d175528a18336eeE(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17he81dc6faa32add45E(local_568,"hardware-platform",0x11);
  _ZN12clap_builder7builder3arg3Arg5short17h00cb5c393bd6dc66E(local_ab0,local_568,0x69);
  _ZN12clap_builder7builder3arg3Arg4long17hcf126cd65342a1c0E
            (local_568,local_ab0,"hardware-platform",0x11);
                    /* try { // try from 001527fd to 00152815 has its CatchHandler @ 00152885 */
  _ZN12clap_builder7builder3arg3Arg4help17h34bdc4567447d108E
            (local_ab0,local_568,"print the hardware platform (non-portable)",0x2a);
  _ZN12clap_builder7builder3arg3Arg6action17hd5cbde159c2534e8E(local_568,local_ab0);
  (*(code *)PTR_memcpy_001e0568)(local_ab0,local_568,0x278);
  local_838 = local_2f0 | 4;
  local_834 = local_2ec;
  _ZN12clap_builder7builder7command7Command3arg17h3d175528a18336eeE(param_1,local_830,local_ab0);
  return param_1;
}