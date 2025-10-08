undefined8 _ZN10uu_install6uu_app17hc6c3e3f673447f2bE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_ab0 [640];
  undefined local_830 [700];
  ulong local_574;
  undefined4 local_56c;
  undefined local_568 [700];
  ulong local_2ac;
  undefined4 local_2a4;
  undefined local_2a0 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00209820)();
  _ZN12clap_builder7builder7command7Command3new17h46e25ca664e85eaaE(local_830,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hc894d1ecd0f5766aE(local_568,local_830);
  _ZN12clap_builder7builder7command7Command5about17h45ff5e39201c53f3E(local_830,local_568);
                    /* try { // try from 00165a6d to 00165a83 has its CatchHandler @ 0016661d */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_00209ba0)
            (local_ab0,"{} [OPTION]... [FILE]...",0x18);
  _ZN12clap_builder7builder7command7Command14override_usage17he69e42135cf535b6E
            (local_568,local_830,local_ab0);
  (*(code *)PTR_memcpy_00209920)(local_830,local_568,700);
  local_574 = local_2ac | 0x8000000080;
  local_56c = local_2a4;
                    /* try { // try from 00165adf to 00165ae9 has its CatchHandler @ 0016660b */
  (*(code *)PTR__ZN6uucore8features14backup_control9arguments6backup17h97e05fc730627326E_00209ba8)
            (local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17h0ec9153d3af233ecE(local_568,local_830,local_ab0);
                    /* try { // try from 00165b04 to 00165b0e has its CatchHandler @ 001665f6 */
  (*(code *)
    PTR__ZN6uucore8features14backup_control9arguments14backup_no_args17hfb21d07466a7545aE_00209bb0)
            (local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17h0ec9153d3af233ecE(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17hb449c7693a811bdfE(local_568,"ignored",7);
  _ZN12clap_builder7builder3arg3Arg5short17hf6c650c84c3048c7E(local_ab0,local_568,99);
                    /* try { // try from 00165b5d to 00165b74 has its CatchHandler @ 001665e1 */
  _ZN12clap_builder7builder3arg3Arg4help17h8e5a9a796f2f652dE(local_568,local_ab0,"ignored",7);
  _ZN12clap_builder7builder3arg3Arg6action17hf82c138f6e0125ebE(local_ab0,local_568,2);
  _ZN12clap_builder7builder7command7Command3arg17h0ec9153d3af233ecE(local_568,local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17hb449c7693a811bdfE(local_830,"compare",7);
  _ZN12clap_builder7builder3arg3Arg5short17hf6c650c84c3048c7E(local_ab0,local_830,0x43);
  _ZN12clap_builder7builder3arg3Arg4long17h58058337003763d4E(local_830,local_ab0,"compare",7);
                    /* try { // try from 00165bf6 to 00165c0e has its CatchHandler @ 001665cc */
  _ZN12clap_builder7builder3arg3Arg4help17h8e5a9a796f2f652dE
            (local_ab0,local_830,
             "compare each pair of source and destination files, and in some cases, do not modify the destination at all"
             ,0x6a);
  _ZN12clap_builder7builder3arg3Arg6action17hf82c138f6e0125ebE(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h0ec9153d3af233ecE(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hb449c7693a811bdfE(local_568,"directory",9);
  _ZN12clap_builder7builder3arg3Arg5short17hf6c650c84c3048c7E(local_ab0,local_568,100);
  _ZN12clap_builder7builder3arg3Arg4long17h58058337003763d4E(local_568,local_ab0,"directory",9);
                    /* try { // try from 00165c90 to 00165ca8 has its CatchHandler @ 001665b7 */
  _ZN12clap_builder7builder3arg3Arg4help17h8e5a9a796f2f652dE
            (local_ab0,local_568,
             "treat all arguments as directory names. create all components of the specified directories"
             ,0x5a);
  _ZN12clap_builder7builder3arg3Arg6action17hf82c138f6e0125ebE(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h0ec9153d3af233ecE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hb449c7693a811bdfE(local_830,"create-leading",0xe);
  _ZN12clap_builder7builder3arg3Arg5short17hf6c650c84c3048c7E(local_ab0,local_830,0x44);
                    /* try { // try from 00165d0c to 00165d27 has its CatchHandler @ 001665a2 */
  _ZN12clap_builder7builder3arg3Arg4help17h8e5a9a796f2f652dE
            (local_830,local_ab0,
             "create all leading components of DEST except the last, then copy SOURCE to DEST",0x4f)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hf82c138f6e0125ebE(local_ab0,local_830,2);
  _ZN12clap_builder7builder7command7Command3arg17h0ec9153d3af233ecE(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17hb449c7693a811bdfE(local_568,"group",5);
  _ZN12clap_builder7builder3arg3Arg5short17hf6c650c84c3048c7E(local_ab0,local_568,0x67);
  _ZN12clap_builder7builder3arg3Arg4long17h58058337003763d4E(local_568,local_ab0,"group",5);
                    /* try { // try from 00165da9 to 00165ddf has its CatchHandler @ 00166653 */
  _ZN12clap_builder7builder3arg3Arg4help17h8e5a9a796f2f652dE
            (local_ab0,local_568,"set group ownership, instead of process\'s current group",0x37);
  _ZN12clap_builder7builder3arg3Arg10value_name17h85015b029d6c4cc6E(local_2a0,local_ab0,"GROUP",5);
  _ZN12clap_builder7builder7command7Command3arg17h0ec9153d3af233ecE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hb449c7693a811bdfE(local_830,"mode",4);
  _ZN12clap_builder7builder3arg3Arg5short17hf6c650c84c3048c7E(local_ab0,local_830,0x6d);
  _ZN12clap_builder7builder3arg3Arg4long17h58058337003763d4E(local_830,local_ab0,"mode",4);
                    /* try { // try from 00165e4c to 00165e82 has its CatchHandler @ 00166641 */
  _ZN12clap_builder7builder3arg3Arg4help17h8e5a9a796f2f652dE
            (local_ab0,local_830,"set permission mode (as in chmod), instead of rwxr-xr-x",0x37);
  _ZN12clap_builder7builder3arg3Arg10value_name17h85015b029d6c4cc6E
            (local_2a0,local_ab0,&DAT_0011ad58,4);
  _ZN12clap_builder7builder7command7Command3arg17h0ec9153d3af233ecE(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hb449c7693a811bdfE(local_568,"owner",5);
  _ZN12clap_builder7builder3arg3Arg5short17hf6c650c84c3048c7E(local_ab0,local_568,0x6f);
  _ZN12clap_builder7builder3arg3Arg4long17h58058337003763d4E(local_568,local_ab0,"owner",5);
                    /* try { // try from 00165eef to 00165f3c has its CatchHandler @ 00166689 */
  _ZN12clap_builder7builder3arg3Arg4help17h8e5a9a796f2f652dE
            (local_ab0,local_568,"set ownership (super-user only)",0x1f);
  _ZN12clap_builder7builder3arg3Arg10value_name17h85015b029d6c4cc6E(local_568,local_ab0,"OWNER",5);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h441a06941cda7fe1E(local_ab0,local_568,9);
  _ZN12clap_builder7builder7command7Command3arg17h0ec9153d3af233ecE(local_568,local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17hb449c7693a811bdfE(local_830,"preserve-timestamps",0x13);
  _ZN12clap_builder7builder3arg3Arg5short17hf6c650c84c3048c7E(local_ab0,local_830,0x70);
  _ZN12clap_builder7builder3arg3Arg4long17h58058337003763d4E
            (local_830,local_ab0,"preserve-timestamps",0x13);
                    /* try { // try from 00165fa6 to 00165fbe has its CatchHandler @ 0016658d */
  _ZN12clap_builder7builder3arg3Arg4help17h8e5a9a796f2f652dE
            (local_ab0,local_830,
             "apply access/modification times of SOURCE files to corresponding destination files",
             0x52);
  _ZN12clap_builder7builder3arg3Arg6action17hf82c138f6e0125ebE(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h0ec9153d3af233ecE(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hb449c7693a811bdfE(local_568,"strip",5);
  _ZN12clap_builder7builder3arg3Arg5short17hf6c650c84c3048c7E(local_ab0,local_568,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17h58058337003763d4E(local_568,local_ab0,"strip",5);
                    /* try { // try from 00166040 to 00166058 has its CatchHandler @ 00166578 */
  _ZN12clap_builder7builder3arg3Arg4help17h8e5a9a796f2f652dE
            (local_ab0,local_568,"strip symbol tables (no action Windows)",0x27);
  _ZN12clap_builder7builder3arg3Arg6action17hf82c138f6e0125ebE(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h0ec9153d3af233ecE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hb449c7693a811bdfE(local_830,"strip-program",0xd);
  _ZN12clap_builder7builder3arg3Arg4long17h58058337003763d4E
            (local_ab0,local_830,"strip-program",0xd);
                    /* try { // try from 001660c2 to 00166112 has its CatchHandler @ 00166677 */
  _ZN12clap_builder7builder3arg3Arg4help17h8e5a9a796f2f652dE
            (local_830,local_ab0,"program used to strip binaries (no action Windows)",0x32);
  _ZN12clap_builder7builder3arg3Arg10value_name17h85015b029d6c4cc6E(local_ab0,local_830,"PROGRAM",7)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_hint17h441a06941cda7fe1E(local_2a0,local_ab0,6);
  _ZN12clap_builder7builder7command7Command3arg17h0ec9153d3af233ecE(local_830,local_568,local_2a0);
                    /* try { // try from 00166130 to 0016613a has its CatchHandler @ 00166563 */
  (*(code *)PTR__ZN6uucore8features14backup_control9arguments6suffix17h87e85728d219a77fE_00209bb8)
            (local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17h0ec9153d3af233ecE(local_568,local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17hb449c7693a811bdfE(local_830,&DAT_0011a5a0,0x10);
  _ZN12clap_builder7builder3arg3Arg5short17hf6c650c84c3048c7E(local_ab0,local_830,0x74);
  _ZN12clap_builder7builder3arg3Arg4long17h58058337003763d4E(local_830,local_ab0,&DAT_0011a5a0,0x10)
  ;
                    /* try { // try from 001661a4 to 001661f1 has its CatchHandler @ 00166665 */
  _ZN12clap_builder7builder3arg3Arg4help17h8e5a9a796f2f652dE
            (local_ab0,local_830,"move all SOURCE arguments into DIRECTORY",0x28);
  _ZN12clap_builder7builder3arg3Arg10value_name17h85015b029d6c4cc6E
            (local_830,local_ab0,"DIRECTORY",9);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h441a06941cda7fe1E(local_ab0,local_830,4);
  _ZN12clap_builder7builder7command7Command3arg17h0ec9153d3af233ecE(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17hb449c7693a811bdfE(local_568,"no-target-directory",0x13);
  _ZN12clap_builder7builder3arg3Arg5short17hf6c650c84c3048c7E(local_ab0,local_568,0x54);
  _ZN12clap_builder7builder3arg3Arg4long17h58058337003763d4E
            (local_568,local_ab0,"no-target-directory",0x13);
                    /* try { // try from 0016625b to 00166273 has its CatchHandler @ 0016654e */
  _ZN12clap_builder7builder3arg3Arg4help17h8e5a9a796f2f652dE
            (local_ab0,local_568,"treat DEST as a normal file",0x1b);
  _ZN12clap_builder7builder3arg3Arg6action17hf82c138f6e0125ebE(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h0ec9153d3af233ecE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hb449c7693a811bdfE(local_830,"verbose",7);
  _ZN12clap_builder7builder3arg3Arg5short17hf6c650c84c3048c7E(local_ab0,local_830,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17h58058337003763d4E(local_830,local_ab0,"verbose",7);
                    /* try { // try from 001662f5 to 0016630d has its CatchHandler @ 00166539 */
  _ZN12clap_builder7builder3arg3Arg4help17h8e5a9a796f2f652dE
            (local_ab0,local_830,"explain what is being done",0x1a);
  _ZN12clap_builder7builder3arg3Arg6action17hf82c138f6e0125ebE(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h0ec9153d3af233ecE(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hb449c7693a811bdfE(local_568,"preserve-context",0x10);
  _ZN12clap_builder7builder3arg3Arg5short17hf6c650c84c3048c7E(local_ab0,local_568,0x50);
  _ZN12clap_builder7builder3arg3Arg4long17h58058337003763d4E
            (local_568,local_ab0,"preserve-context",0x10);
                    /* try { // try from 0016638f to 001663a7 has its CatchHandler @ 00166524 */
  _ZN12clap_builder7builder3arg3Arg4help17h8e5a9a796f2f652dE
            (local_ab0,local_568,"(unimplemented) preserve security context",0x29);
  _ZN12clap_builder7builder3arg3Arg6action17hf82c138f6e0125ebE(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h0ec9153d3af233ecE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hb449c7693a811bdfE(local_830,"context",7);
  _ZN12clap_builder7builder3arg3Arg5short17hf6c650c84c3048c7E(local_ab0,local_830,0x5a);
  _ZN12clap_builder7builder3arg3Arg4long17h58058337003763d4E(local_830,local_ab0,"context",7);
                    /* try { // try from 00166429 to 0016645f has its CatchHandler @ 0016662f */
  _ZN12clap_builder7builder3arg3Arg4help17h8e5a9a796f2f652dE
            (local_ab0,local_830,"(unimplemented) set security context of files and directories",
             0x3d);
  _ZN12clap_builder7builder3arg3Arg10value_name17h85015b029d6c4cc6E(local_830,local_ab0,"CONTEXT",7)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hf82c138f6e0125ebE(local_ab0,local_830,2);
  _ZN12clap_builder7builder7command7Command3arg17h0ec9153d3af233ecE(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17hb449c7693a811bdfE(local_568,"files",5);
  _ZN12clap_builder7builder3arg3Arg6action17hf82c138f6e0125ebE(local_ab0,local_568,1);
  _ZN12clap_builder7builder3arg3Arg8num_args17h038d881881927931E(local_568,local_ab0);
                    /* try { // try from 001664d6 to 001664e7 has its CatchHandler @ 0016650f */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h441a06941cda7fe1E(local_ab0,local_568,2);
  _ZN12clap_builder7builder7command7Command3arg17h0ec9153d3af233ecE(param_1,local_830,local_ab0);
  return param_1;
}