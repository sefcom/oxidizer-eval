undefined8 _ZN5uu_ln6uu_app17h0c67f180ed7e66cdE(undefined8 param_1)

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
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001fce78)();
  _ZN12clap_builder7builder7command7Command3new17h1fe578c5376c1054E(local_830,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h5f1bf330d1a7b23cE(local_568,local_830);
  _ZN12clap_builder7builder7command7Command5about17h1d35ac200b7609ebE(local_830,local_568);
                    /* try { // try from 001649ed to 00164a03 has its CatchHandler @ 001652bd */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001fd108)
            (local_ab0,
             "{} [OPTION]... [-T] TARGET LINK_NAME\n{} [OPTION]... TARGET\n{} [OPTION]... TARGET... DIRECTORY\n{} [OPTION]... -t DIRECTORY TARGET..."
             ,0x83);
  _ZN12clap_builder7builder7command7Command14override_usage17h9d7db7502c482d2bE
            (local_568,local_830,local_ab0);
  (*(code *)PTR_memcpy_001fcde8)(local_830,local_568,700);
  local_574 = local_2ac | 0x8000000080;
  local_56c = local_2a4;
                    /* try { // try from 00164a5f to 00164a69 has its CatchHandler @ 001652ab */
  (*(code *)PTR__ZN6uucore8features14backup_control9arguments6backup17h97e05fc730627326E_001fd110)
            (local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17hc93fd97a67522eedE(local_568,local_830,local_ab0);
                    /* try { // try from 00164a84 to 00164a8e has its CatchHandler @ 00165299 */
  (*(code *)
    PTR__ZN6uucore8features14backup_control9arguments14backup_no_args17hfb21d07466a7545aE_001fd118)
            (local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17hc93fd97a67522eedE(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h3d0033c10ba3d4cbE(local_568,"force",5);
  _ZN12clap_builder7builder3arg3Arg5short17hbe918a9232d56de2E(local_ab0,local_568,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17hab7044ee72e818d9E(local_568,local_ab0,"force",5);
                    /* try { // try from 00164af8 to 00164b10 has its CatchHandler @ 00165287 */
  _ZN12clap_builder7builder3arg3Arg4help17h616b41aec6e47ae1E
            (local_ab0,local_568,"remove existing destination files",0x21);
  _ZN12clap_builder7builder3arg3Arg6action17h0f6082952064c1beE(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17hc93fd97a67522eedE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h3d0033c10ba3d4cbE(local_830,"interactive",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17hbe918a9232d56de2E(local_ab0,local_830,0x69);
  _ZN12clap_builder7builder3arg3Arg4long17hab7044ee72e818d9E(local_830,local_ab0,"interactive",0xb);
                    /* try { // try from 00164b92 to 00164baa has its CatchHandler @ 00165272 */
  _ZN12clap_builder7builder3arg3Arg4help17h616b41aec6e47ae1E
            (local_ab0,local_830,"prompt whether to remove existing destination files",0x33);
  _ZN12clap_builder7builder3arg3Arg6action17h0f6082952064c1beE(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17hc93fd97a67522eedE(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h3d0033c10ba3d4cbE(local_568,"no-dereference",0xe);
  _ZN12clap_builder7builder3arg3Arg5short17hbe918a9232d56de2E(local_ab0,local_568,0x6e);
  _ZN12clap_builder7builder3arg3Arg4long17hab7044ee72e818d9E
            (local_568,local_ab0,"no-dereference",0xe);
                    /* try { // try from 00164c2c to 00164c44 has its CatchHandler @ 0016525d */
  _ZN12clap_builder7builder3arg3Arg4help17h616b41aec6e47ae1E
            (local_ab0,local_568,
             "treat LINK_NAME as a normal file if it is a symbolic link to a directory",0x48);
  _ZN12clap_builder7builder3arg3Arg6action17h0f6082952064c1beE(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17hc93fd97a67522eedE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h3d0033c10ba3d4cbE(local_830,"logical",7);
  _ZN12clap_builder7builder3arg3Arg5short17hbe918a9232d56de2E(local_ab0,local_830,0x4c);
  _ZN12clap_builder7builder3arg3Arg4long17hab7044ee72e818d9E(local_830,local_ab0,"logical",7);
                    /* try { // try from 00164cc6 to 00164cf7 has its CatchHandler @ 001652f3 */
  _ZN12clap_builder7builder3arg3Arg4help17h616b41aec6e47ae1E
            (local_ab0,local_830,"follow TARGETs that are symbolic links",0x26);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h74613fd0c73069d3E
            (local_830,local_ab0,"physicalNotFoundTimedOut");
  _ZN12clap_builder7builder3arg3Arg6action17h0f6082952064c1beE(local_ab0,local_830,2);
  _ZN12clap_builder7builder7command7Command3arg17hc93fd97a67522eedE(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h3d0033c10ba3d4cbE(local_568,"physicalNotFoundTimedOut",8);
  _ZN12clap_builder7builder3arg3Arg5short17hbe918a9232d56de2E(local_ab0,local_568,0x50);
  _ZN12clap_builder7builder3arg3Arg4long17hab7044ee72e818d9E
            (local_568,local_ab0,"physicalNotFoundTimedOut",8);
                    /* try { // try from 00164d79 to 00164d91 has its CatchHandler @ 00165248 */
  _ZN12clap_builder7builder3arg3Arg4help17h616b41aec6e47ae1E
            (local_ab0,local_568,"make hard links directly to symbolic links",0x2a);
  _ZN12clap_builder7builder3arg3Arg6action17h0f6082952064c1beE(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17hc93fd97a67522eedE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h3d0033c10ba3d4cbE(local_830,"symbolic",8);
  _ZN12clap_builder7builder3arg3Arg5short17hbe918a9232d56de2E(local_ab0,local_830,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17hab7044ee72e818d9E(local_830,local_ab0,"symbolic",8);
                    /* try { // try from 00164e13 to 00164e44 has its CatchHandler @ 001652e1 */
  _ZN12clap_builder7builder3arg3Arg4help17h616b41aec6e47ae1E
            (local_ab0,local_830,"make symbolic links instead of hard links",0x29);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h74613fd0c73069d3E
            (local_830,local_ab0,"symbolic");
  _ZN12clap_builder7builder3arg3Arg6action17h0f6082952064c1beE(local_ab0,local_830,2);
  _ZN12clap_builder7builder7command7Command3arg17hc93fd97a67522eedE(local_830,local_568,local_ab0);
                    /* try { // try from 00164e77 to 00164e81 has its CatchHandler @ 00165233 */
  (*(code *)PTR__ZN6uucore8features14backup_control9arguments6suffix17h87e85728d219a77fE_001fd120)
            (local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17hc93fd97a67522eedE(local_568,local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h3d0033c10ba3d4cbE(local_830,&DAT_00118fc0,0x10);
  _ZN12clap_builder7builder3arg3Arg5short17hbe918a9232d56de2E(local_ab0,local_830,0x74);
  _ZN12clap_builder7builder3arg3Arg4long17hab7044ee72e818d9E(local_830,local_ab0,&DAT_00118fc0,0x10)
  ;
                    /* try { // try from 00164eeb to 00164f3e has its CatchHandler @ 00165305 */
  _ZN12clap_builder7builder3arg3Arg4help17h616b41aec6e47ae1E
            (local_ab0,local_830,"specify the DIRECTORY in which to create the links",0x32);
  _ZN12clap_builder7builder3arg3Arg10value_name17hdb554a3b64504164E(local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h108376d307e34658E(local_ab0,local_830,4);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h79674d7a38f2b4f0E(local_2a0,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17hc93fd97a67522eedE(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h3d0033c10ba3d4cbE(local_568,"no-target-directory",0x13);
  _ZN12clap_builder7builder3arg3Arg5short17hbe918a9232d56de2E(local_ab0,local_568,0x54);
  _ZN12clap_builder7builder3arg3Arg4long17hab7044ee72e818d9E
            (local_568,local_ab0,"no-target-directory",0x13);
                    /* try { // try from 00164fab to 00164fc3 has its CatchHandler @ 0016521e */
  _ZN12clap_builder7builder3arg3Arg4help17h616b41aec6e47ae1E
            (local_ab0,local_568,"treat LINK_NAME as a normal file always",0x27);
  _ZN12clap_builder7builder3arg3Arg6action17h0f6082952064c1beE(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17hc93fd97a67522eedE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h3d0033c10ba3d4cbE(local_830,"relative",8);
  _ZN12clap_builder7builder3arg3Arg5short17hbe918a9232d56de2E(local_ab0,local_830,0x72);
  _ZN12clap_builder7builder3arg3Arg4long17hab7044ee72e818d9E(local_830,local_ab0,"relative",8);
                    /* try { // try from 00165045 to 0016506f has its CatchHandler @ 001652cf */
  _ZN12clap_builder7builder3arg3Arg4help17h616b41aec6e47ae1E
            (local_ab0,local_830,"create symbolic links relative to link location",0x2f);
  _ZN12clap_builder7builder3arg3Arg8requires17h3474dacfe4037fedE(local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg6action17h0f6082952064c1beE(local_ab0,local_830,2);
  _ZN12clap_builder7builder7command7Command3arg17hc93fd97a67522eedE(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h3d0033c10ba3d4cbE(local_568,"verbose",7);
  _ZN12clap_builder7builder3arg3Arg5short17hbe918a9232d56de2E(local_ab0,local_568,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17hab7044ee72e818d9E(local_568,local_ab0,"verbose",7);
                    /* try { // try from 001650f1 to 00165109 has its CatchHandler @ 00165209 */
  _ZN12clap_builder7builder3arg3Arg4help17h616b41aec6e47ae1E
            (local_ab0,local_568,"print name of each linked file",0x1e);
  _ZN12clap_builder7builder3arg3Arg6action17h0f6082952064c1beE(local_2a0,local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17hc93fd97a67522eedE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h3d0033c10ba3d4cbE(local_830,"files",5);
  _ZN12clap_builder7builder3arg3Arg6action17h0f6082952064c1beE(local_ab0,local_830,1);
                    /* try { // try from 0016516d to 00165181 has its CatchHandler @ 001651f4 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h108376d307e34658E(local_830,local_ab0,2);
  (*(code *)PTR_memcpy_001fcde8)(local_ab0,local_830,0x278);
  local_838 = local_5b8 | 1;
  local_834 = local_5b4;
  _ZN12clap_builder7builder3arg3Arg8num_args17h3dfaa0fdb01525a2E(local_830,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17hc93fd97a67522eedE(param_1,local_568,local_830);
  return param_1;
}