undefined8 _ZN5uu_ln6uu_app17hee3aeb3cff9e1650E(undefined8 param_1)

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
  _ZN12clap_builder7builder7command7Command3new17hd201f2ff4bdbb22aE(auStack_a48,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hd279b53c2e81648eE
            (local_530,auStack_a48,"0.0.28",6);
  _ZN12clap_builder7builder7command7Command5about17h14285ec20af23239E
            (auStack_a48,local_530,"Make links between files.",0x19);
                    /* try { // try from 001b8f59 to 001b8f72 has its CatchHandler @ 001b977d */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E
            (local_780,
             "{} [OPTION]... [-T] TARGET LINK_NAME\n{} [OPTION]... TARGET\n{} [OPTION]... TARGET... DIRECTORY\n{} [OPTION]... -t DIRECTORY TARGET..."
             ,0x83);
  _ZN12clap_builder7builder7command7Command14override_usage17he3739cf08eae10bcE
            (local_530,auStack_a48,local_780);
  (*(code *)PTR_memcpy_00230f68)(auStack_a48,local_530,700);
  local_78c = local_274 | 0x8000000080;
  local_784 = local_26c;
                    /* try { // try from 001b8fc7 to 001b8fd4 has its CatchHandler @ 001b976d */
  _ZN6uucore8features14backup_control9arguments6backup17h804b9c4d220a6bfaE(local_780);
  _ZN12clap_builder7builder7command7Command3arg17h4abc64ce55f11013E(local_530,auStack_a48,local_780)
  ;
                    /* try { // try from 001b8fed to 001b8ffa has its CatchHandler @ 001b9758 */
  _ZN6uucore8features14backup_control9arguments14backup_no_args17h7f5ee465b0f6b670E(local_780);
  _ZN12clap_builder7builder7command7Command3arg17h4abc64ce55f11013E(auStack_a48,local_530,local_780)
  ;
                    /* try { // try from 001b9013 to 001b9085 has its CatchHandler @ 001b97eb */
  _ZN12clap_builder7builder3arg3Arg3new17ha224f4e45bc95b4eE(local_530,"force",5);
  _ZN12clap_builder7builder3arg3Arg5short17hef88c3297fecd295E(local_780,local_530,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17h5c4dba651152cd6bE(local_530,local_780,"force",5);
  _ZN12clap_builder7builder3arg3Arg4help17h32db748ac84da4ceE
            (local_780,local_530,"remove existing destination files",0x21);
  _ZN12clap_builder7builder3arg3Arg6action17he8e33ae435700345E(local_268,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17h4abc64ce55f11013E(local_530,auStack_a48,local_268)
  ;
                    /* try { // try from 001b90b6 to 001b9114 has its CatchHandler @ 001b97d9 */
  _ZN12clap_builder7builder3arg3Arg3new17ha224f4e45bc95b4eE(auStack_a48,"interactive",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17hef88c3297fecd295E(local_780,auStack_a48,0x69);
  _ZN12clap_builder7builder3arg3Arg4long17h5c4dba651152cd6bE
            (auStack_a48,local_780,"interactive",0xb);
  _ZN12clap_builder7builder3arg3Arg4help17h32db748ac84da4ceE
            (local_780,auStack_a48,"prompt whether to remove existing destination files",0x33);
  _ZN12clap_builder7builder3arg3Arg6action17he8e33ae435700345E(local_268,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17h4abc64ce55f11013E(auStack_a48,local_530,local_268)
  ;
                    /* try { // try from 001b9145 to 001b91b7 has its CatchHandler @ 001b97cc */
  _ZN12clap_builder7builder3arg3Arg3new17ha224f4e45bc95b4eE(local_530,"no-dereference",0xe);
  _ZN12clap_builder7builder3arg3Arg5short17hef88c3297fecd295E(local_780,local_530,0x6e);
  _ZN12clap_builder7builder3arg3Arg4long17h5c4dba651152cd6bE
            (local_530,local_780,"no-dereference",0xe);
  _ZN12clap_builder7builder3arg3Arg4help17h32db748ac84da4ceE
            (local_780,local_530,
             "treat LINK_NAME as a normal file if it is a symbolic link to a directory",0x48);
  _ZN12clap_builder7builder3arg3Arg6action17he8e33ae435700345E(local_268,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17h4abc64ce55f11013E(local_530,auStack_a48,local_268)
  ;
                    /* try { // try from 001b91e8 to 001b9262 has its CatchHandler @ 001b981c */
  _ZN12clap_builder7builder3arg3Arg3new17ha224f4e45bc95b4eE(auStack_a48,"logical",7);
  _ZN12clap_builder7builder3arg3Arg5short17hef88c3297fecd295E(local_780,auStack_a48,0x4c);
  _ZN12clap_builder7builder3arg3Arg4long17h5c4dba651152cd6bE(auStack_a48,local_780,"logical",7);
  _ZN12clap_builder7builder3arg3Arg4help17h32db748ac84da4ceE
            (local_780,auStack_a48,"follow TARGETs that are symbolic links",0x26);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h1a9833f1653364a1E
            (auStack_a48,local_780,&DAT_00115cc8,8);
  _ZN12clap_builder7builder3arg3Arg6action17he8e33ae435700345E(local_780,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17h4abc64ce55f11013E(auStack_a48,local_530,local_780)
  ;
                    /* try { // try from 001b928e to 001b9300 has its CatchHandler @ 001b97bf */
  _ZN12clap_builder7builder3arg3Arg3new17ha224f4e45bc95b4eE(local_530,&DAT_00115cc8,8);
  _ZN12clap_builder7builder3arg3Arg5short17hef88c3297fecd295E(local_780,local_530,0x50);
  _ZN12clap_builder7builder3arg3Arg4long17h5c4dba651152cd6bE(local_530,local_780,&DAT_00115cc8,8);
  _ZN12clap_builder7builder3arg3Arg4help17h32db748ac84da4ceE
            (local_780,local_530,"make hard links directly to symbolic links",0x2a);
  _ZN12clap_builder7builder3arg3Arg6action17he8e33ae435700345E(local_268,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17h4abc64ce55f11013E(local_530,auStack_a48,local_268)
  ;
                    /* try { // try from 001b9331 to 001b93ab has its CatchHandler @ 001b980a */
  _ZN12clap_builder7builder3arg3Arg3new17ha224f4e45bc95b4eE
            (auStack_a48,"symbolicEALREADYDeadlock",8);
  _ZN12clap_builder7builder3arg3Arg5short17hef88c3297fecd295E(local_780,auStack_a48,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17h5c4dba651152cd6bE
            (auStack_a48,local_780,"symbolicEALREADYDeadlock",8);
  _ZN12clap_builder7builder3arg3Arg4help17h32db748ac84da4ceE
            (local_780,auStack_a48,"make symbolic links instead of hard links",0x29);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h1a9833f1653364a1E
            (auStack_a48,local_780,"symbolicEALREADYDeadlock",8);
  _ZN12clap_builder7builder3arg3Arg6action17he8e33ae435700345E(local_780,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17h4abc64ce55f11013E(auStack_a48,local_530,local_780)
  ;
                    /* try { // try from 001b93d7 to 001b93e4 has its CatchHandler @ 001b9748 */
  _ZN6uucore8features14backup_control9arguments6suffix17h659b6e9a409bb614E(local_780);
  _ZN12clap_builder7builder7command7Command3arg17h4abc64ce55f11013E(local_530,auStack_a48,local_780)
  ;
                    /* try { // try from 001b93fd to 001b94a1 has its CatchHandler @ 001b982e */
  _ZN12clap_builder7builder3arg3Arg3new17ha224f4e45bc95b4eE(auStack_a48,&DAT_00115770,0x10);
  _ZN12clap_builder7builder3arg3Arg5short17hef88c3297fecd295E(local_780,auStack_a48,0x74);
  _ZN12clap_builder7builder3arg3Arg4long17h5c4dba651152cd6bE
            (auStack_a48,local_780,&DAT_00115770,0x10);
  _ZN12clap_builder7builder3arg3Arg4help17h32db748ac84da4ceE
            (local_780,auStack_a48,"specify the DIRECTORY in which to create the links",0x32);
  _ZN12clap_builder7builder3arg3Arg10value_name17h7782d995d3e96a9fE(auStack_a48,local_780);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h5cae060624e20492E(local_780,auStack_a48,4);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17hfdefdbf6c576ef27E
            (local_268,local_780,"no-target-directory",0x13);
  _ZN12clap_builder7builder7command7Command3arg17h4abc64ce55f11013E(auStack_a48,local_530,local_268)
  ;
                    /* try { // try from 001b94ba to 001b952c has its CatchHandler @ 001b97b2 */
  _ZN12clap_builder7builder3arg3Arg3new17ha224f4e45bc95b4eE(local_530,"no-target-directory",0x13);
  _ZN12clap_builder7builder3arg3Arg5short17hef88c3297fecd295E(local_780,local_530,0x54);
  _ZN12clap_builder7builder3arg3Arg4long17h5c4dba651152cd6bE
            (local_530,local_780,"no-target-directory",0x13);
  _ZN12clap_builder7builder3arg3Arg4help17h32db748ac84da4ceE
            (local_780,local_530,"treat LINK_NAME as a normal file always",0x27);
  _ZN12clap_builder7builder3arg3Arg6action17he8e33ae435700345E(local_268,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17h4abc64ce55f11013E(local_530,auStack_a48,local_268)
  ;
                    /* try { // try from 001b955d to 001b95d7 has its CatchHandler @ 001b97f8 */
  _ZN12clap_builder7builder3arg3Arg3new17ha224f4e45bc95b4eE(auStack_a48,"relative",8);
  _ZN12clap_builder7builder3arg3Arg5short17hef88c3297fecd295E(local_780,auStack_a48,0x72);
  _ZN12clap_builder7builder3arg3Arg4long17h5c4dba651152cd6bE(auStack_a48,local_780,"relative",8);
  _ZN12clap_builder7builder3arg3Arg4help17h32db748ac84da4ceE
            (local_780,auStack_a48,"create symbolic links relative to link location",0x2f);
  _ZN12clap_builder7builder3arg3Arg8requires17h1d27d71543f2d819E
            (auStack_a48,local_780,"symbolicEALREADYDeadlock",8);
  _ZN12clap_builder7builder3arg3Arg6action17he8e33ae435700345E(local_780,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17h4abc64ce55f11013E(auStack_a48,local_530,local_780)
  ;
                    /* try { // try from 001b9603 to 001b9675 has its CatchHandler @ 001b97a2 */
  _ZN12clap_builder7builder3arg3Arg3new17ha224f4e45bc95b4eE(local_530,"verbose",7);
  _ZN12clap_builder7builder3arg3Arg5short17hef88c3297fecd295E(local_780,local_530,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17h5c4dba651152cd6bE(local_530,local_780,"verbose",7);
  _ZN12clap_builder7builder3arg3Arg4help17h32db748ac84da4ceE
            (local_780,local_530,"print name of each linked file",0x1e);
  _ZN12clap_builder7builder3arg3Arg6action17he8e33ae435700345E(local_268,local_780,2);
  _ZN12clap_builder7builder7command7Command3arg17h4abc64ce55f11013E(local_530,auStack_a48,local_268)
  ;
                    /* try { // try from 001b96a6 to 001b96e1 has its CatchHandler @ 001b978d */
  _ZN12clap_builder7builder3arg3Arg3new17ha224f4e45bc95b4eE(auStack_a48,"files",5);
  _ZN12clap_builder7builder3arg3Arg6action17he8e33ae435700345E(local_780,auStack_a48,1);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h5cae060624e20492E(auStack_a48,local_780,2);
  (*(code *)PTR_memcpy_00230f68)(local_780,auStack_a48,0x248);
  local_538 = local_800 | 1;
  local_534 = local_7fc;
                    /* try { // try from 001b971a to 001b9724 has its CatchHandler @ 001b978d */
  _ZN12clap_builder7builder3arg3Arg8num_args17h1ca3ae445e0bf9b1E(auStack_a48,local_780);
  _ZN12clap_builder7builder7command7Command3arg17h4abc64ce55f11013E(param_1,local_530,auStack_a48);
  return param_1;
}