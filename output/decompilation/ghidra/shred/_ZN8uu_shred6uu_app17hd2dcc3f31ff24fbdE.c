undefined8 _ZN8uu_shred6uu_app17hd2dcc3f31ff24fbdE(undefined8 param_1)

{
  undefined8 uVar1;
  char *local_ab0;
  undefined8 local_aa8;
  undefined *local_aa0;
  undefined8 local_a98;
  char *local_a90;
  undefined8 local_a88;
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
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00200c88)();
  _ZN12clap_builder7builder7command7Command3new17h5787b64ed8d4e1d7E(local_830,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h035a63d40d5df98eE(local_568,local_830);
  _ZN12clap_builder7builder7command7Command5about17hded723cb4a330c03E(local_830,local_568);
  _ZN12clap_builder7builder7command7Command10after_help17hbc05816b53cbfdbaE(local_568,local_830);
                    /* try { // try from 00163a80 to 00163a96 has its CatchHandler @ 00164190 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_00200e48)
            (&local_ab0,"{} [OPTION]... FILE...",0x16);
  _ZN12clap_builder7builder7command7Command14override_usage17h9d88d80646690c9fE
            (local_830,local_568,&local_ab0);
  (*(code *)PTR_memcpy_00200c50)(local_568,local_830,700);
  local_2ac = local_574 | 0x8000000080;
  local_2a4 = local_56c;
  _ZN12clap_builder7builder3arg3Arg3new17h826bb93c26dbd644E(local_830,"force",5);
  _ZN12clap_builder7builder3arg3Arg4long17ha1c24f18a2780cb3E(&local_ab0,local_830,"force",5);
  _ZN12clap_builder7builder3arg3Arg5short17h80a7da4595f844f0E(local_830,&local_ab0,0x66);
                    /* try { // try from 00163b41 to 00163b59 has its CatchHandler @ 0016417e */
  _ZN12clap_builder7builder3arg3Arg4help17h1b2448d379a4e28aE
            (&local_ab0,local_830,"change permissions to allow writing if necessary",0x30);
  _ZN12clap_builder7builder3arg3Arg6action17hee4b97f47648487fE(local_2a0,&local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h3bb89aafa86e77c8E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h826bb93c26dbd644E(local_568,"iterations",10);
  _ZN12clap_builder7builder3arg3Arg4long17ha1c24f18a2780cb3E(&local_ab0,local_568,"iterations",10);
  _ZN12clap_builder7builder3arg3Arg5short17h80a7da4595f844f0E(local_568,&local_ab0,0x6e);
                    /* try { // try from 00163bdb to 00163c23 has its CatchHandler @ 001641c6 */
  _ZN12clap_builder7builder3arg3Arg4help17h1b2448d379a4e28aE
            (&local_ab0,local_568,"overwrite N times instead of the default (3)",0x2c);
  _ZN12clap_builder7builder3arg3Arg10value_name17hafdca14bc914f0dbE(local_568,&local_ab0,"NUMBER",6)
  ;
  _ZN12clap_builder7builder3arg3Arg13default_value17h5c0c2141adf94317E(&local_ab0,local_568);
  _ZN12clap_builder7builder7command7Command3arg17h3bb89aafa86e77c8E(local_568,local_830,&local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h826bb93c26dbd644E(local_830,"size",4);
  _ZN12clap_builder7builder3arg3Arg4long17ha1c24f18a2780cb3E(&local_ab0,local_830,"size",4);
  _ZN12clap_builder7builder3arg3Arg5short17h80a7da4595f844f0E(local_830,&local_ab0,0x73);
                    /* try { // try from 00163c8d to 00163cc3 has its CatchHandler @ 001641a2 */
  _ZN12clap_builder7builder3arg3Arg10value_name17hafdca14bc914f0dbE(&local_ab0,local_830,"N",1);
  _ZN12clap_builder7builder3arg3Arg4help17h1b2448d379a4e28aE
            (local_2a0,&local_ab0,"shred this many bytes (suffixes like K, M, G accepted)",0x36);
  _ZN12clap_builder7builder7command7Command3arg17h3bb89aafa86e77c8E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h826bb93c26dbd644E(local_568,"u",1);
  _ZN12clap_builder7builder3arg3Arg5short17h80a7da4595f844f0E(&local_ab0,local_568,0x75);
                    /* try { // try from 00163d12 to 00163d2d has its CatchHandler @ 0016416c */
  _ZN12clap_builder7builder3arg3Arg4help17h1b2448d379a4e28aE
            (local_568,&local_ab0,"deallocate and remove file after overwriting",0x2c);
  _ZN12clap_builder7builder3arg3Arg6action17hee4b97f47648487fE(&local_ab0,local_568,2);
  _ZN12clap_builder7builder7command7Command3arg17h3bb89aafa86e77c8E(local_568,local_830,&local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h826bb93c26dbd644E(local_830,"remove",6);
  _ZN12clap_builder7builder3arg3Arg4long17ha1c24f18a2780cb3E(&local_ab0,local_830,"remove",6);
                    /* try { // try from 00163d97 to 00163db2 has its CatchHandler @ 001641b4 */
  _ZN12clap_builder7builder3arg3Arg10value_name17hafdca14bc914f0dbE(local_830,&local_ab0,"HOW",3);
  local_ab0 = "unlink";
  local_aa8 = 6;
  local_aa0 = &DAT_001188a8;
  local_a98 = 4;
  local_a90 = "wipesync";
  local_a88 = 8;
                    /* try { // try from 00163df2 to 00163e03 has its CatchHandler @ 0016415a */
  _ZN117__LT_uucore__features__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17h685cf0531e84223dE
            (local_2a0,&local_ab0);
                    /* try { // try from 00163e04 to 00163e1d has its CatchHandler @ 00164158 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17hbc44474890119c99E
            (&local_ab0,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg8num_args17ha85da491194ffe3eE(local_830,&local_ab0,0,1);
  (*(code *)PTR_memcpy_00200c50)(&local_ab0,local_830,0x278);
  local_838 = local_5b8 | 0x80;
  local_834 = local_5b4;
                    /* try { // try from 00163e71 to 00163e9e has its CatchHandler @ 001641b4 */
  _ZN12clap_builder7builder3arg3Arg21default_missing_value17hdfcae24132487aebE(local_830,&local_ab0)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17h1b2448d379a4e28aE
            (&local_ab0,local_830,"like -u but give control on HOW to delete;  See below",0x35);
  _ZN12clap_builder7builder3arg3Arg6action17hee4b97f47648487fE(local_2a0,&local_ab0,0);
  _ZN12clap_builder7builder7command7Command3arg17h3bb89aafa86e77c8E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h826bb93c26dbd644E(local_568,"verbose",7);
  _ZN12clap_builder7builder3arg3Arg4long17ha1c24f18a2780cb3E(&local_ab0,local_568,"verbose",7);
  _ZN12clap_builder7builder3arg3Arg5short17h80a7da4595f844f0E(local_568,&local_ab0,0x76);
                    /* try { // try from 00163f1d to 00163f35 has its CatchHandler @ 00164146 */
  _ZN12clap_builder7builder3arg3Arg4help17h1b2448d379a4e28aE
            (&local_ab0,local_568,"show progress",0xd);
  _ZN12clap_builder7builder3arg3Arg6action17hee4b97f47648487fE(local_2a0,&local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h3bb89aafa86e77c8E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h826bb93c26dbd644E(local_830,"exact",5);
  _ZN12clap_builder7builder3arg3Arg4long17ha1c24f18a2780cb3E(&local_ab0,local_830,"exact",5);
  _ZN12clap_builder7builder3arg3Arg5short17h80a7da4595f844f0E(local_830,&local_ab0,0x78);
                    /* try { // try from 00163fb7 to 00163fcf has its CatchHandler @ 00164131 */
  _ZN12clap_builder7builder3arg3Arg4help17h1b2448d379a4e28aE
            (&local_ab0,local_830,
             "do not round file sizes up to the next full block;\nthis is the default for non-regular files"
             ,0x5c);
  _ZN12clap_builder7builder3arg3Arg6action17hee4b97f47648487fE(local_2a0,&local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h3bb89aafa86e77c8E(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h826bb93c26dbd644E(local_568,&DAT_001188b8,4);
  _ZN12clap_builder7builder3arg3Arg4long17ha1c24f18a2780cb3E(&local_ab0,local_568,&DAT_001188b8,4);
  _ZN12clap_builder7builder3arg3Arg5short17h80a7da4595f844f0E(local_568,&local_ab0,0x7a);
                    /* try { // try from 00164051 to 00164069 has its CatchHandler @ 0016411c */
  _ZN12clap_builder7builder3arg3Arg4help17h1b2448d379a4e28aE
            (&local_ab0,local_568,"add a final overwrite with zeros to hide shredding: ",0x32);
  _ZN12clap_builder7builder3arg3Arg6action17hee4b97f47648487fE(local_2a0,&local_ab0,2);
  _ZN12clap_builder7builder7command7Command3arg17h3bb89aafa86e77c8E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h826bb93c26dbd644E(local_830,"file",4);
  _ZN12clap_builder7builder3arg3Arg6action17hee4b97f47648487fE(&local_ab0,local_830,1);
                    /* try { // try from 001640cd to 001640dc has its CatchHandler @ 00164107 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17hb429941a9b1bcb70E(local_830,&local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17h3bb89aafa86e77c8E(param_1,local_568,local_830);
  return param_1;
}