undefined8 _ZN5uu_du6uu_app17habf9d5389fa2ad43E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_b58;
  undefined8 uStack_b50;
  undefined8 local_b48;
  undefined8 uStack_b40;
  undefined8 local_b38;
  undefined8 uStack_b30;
  char *local_b28;
  undefined8 uStack_b20;
  ulong local_b18;
  undefined8 local_b10;
  undefined8 uStack_b08;
  undefined8 local_b00;
  undefined8 uStack_af8;
  undefined8 local_af0;
  undefined8 uStack_ae8;
  undefined8 local_ae0;
  undefined8 uStack_ad8;
  undefined8 local_ad0;
  undefined4 local_ac8;
  undefined4 uStack_ac4;
  undefined4 uStack_ac0;
  undefined4 uStack_abc;
  undefined4 local_ab8;
  undefined4 uStack_ab4;
  undefined4 uStack_ab0;
  undefined4 uStack_aac;
  undefined4 local_aa8;
  undefined4 uStack_aa4;
  undefined4 uStack_aa0;
  undefined4 uStack_a9c;
  undefined4 local_a98;
  undefined4 uStack_a94;
  undefined4 uStack_a90;
  undefined4 uStack_a8c;
  undefined8 local_a88;
  uint local_8e0;
  undefined4 local_8dc;
  undefined local_8c0 [632];
  uint local_648;
  undefined4 local_644;
  ulong local_604;
  undefined4 local_5fc;
  undefined local_5f8 [632];
  uint local_380;
  undefined4 local_37c;
  ulong local_33c;
  undefined4 local_334;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined8 local_260;
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0024e880)();
  _ZN12clap_builder7builder7command7Command3new17h45cdf7975ffd0ad0E(local_8c0,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h71ca2a97acaab561E(local_5f8,local_8c0);
  _ZN12clap_builder7builder7command7Command5about17h05551ccc0695b999E(local_8c0,local_5f8);
  _ZN12clap_builder7builder7command7Command10after_help17h8901b1f912cb5214E(local_5f8,local_8c0);
                    /* try { // try from 00198b10 to 00198b24 has its CatchHandler @ 0019a04b */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_0024ec00)
            (&local_b58,"{} [OPTION]... [FILE]...\n{} [OPTION]... --files0-from=F",0x37);
  _ZN12clap_builder7builder7command7Command14override_usage17h47191a5b99330ee2E
            (local_8c0,local_5f8,&local_b58);
  (*(code *)PTR_memcpy_0024e718)(local_5f8,local_8c0,700);
  local_33c = local_604 | 0x8008000080080;
  local_334 = local_5fc;
  _ZN12clap_builder7builder3arg3Arg3new17hafcf7864a64549efE(local_8c0,&DAT_0011e9e0,4);
  _ZN12clap_builder7builder3arg3Arg4long17h3a9d5ebc30382ea1E(&local_b58,local_8c0,&DAT_0011e9e0,4);
                    /* try { // try from 00198bb3 to 00198bce has its CatchHandler @ 0019a036 */
  _ZN12clap_builder7builder3arg3Arg4help17h584a1d2e64fd917dE
            (local_8c0,&local_b58,"Print help information.",0x17);
  _ZN12clap_builder7builder3arg3Arg6action17hb68e9e4dee372978E(&local_b58,local_8c0,5);
  _ZN12clap_builder7builder7command7Command3arg17h9f2affe725c5faaaE(local_8c0,local_5f8,&local_b58);
  _ZN12clap_builder7builder3arg3Arg3new17hafcf7864a64549efE(local_5f8,"all",3);
  _ZN12clap_builder7builder3arg3Arg5short17he552bdc63100fdb4E(&local_b58,local_5f8,0x61);
  _ZN12clap_builder7builder3arg3Arg4long17h3a9d5ebc30382ea1E(local_5f8,&local_b58,"all",3);
                    /* try { // try from 00198c4c to 00198c62 has its CatchHandler @ 0019a021 */
  _ZN12clap_builder7builder3arg3Arg4help17h584a1d2e64fd917dE
            (&local_b58,local_5f8,"write counts for all files, not just directories",0x30);
  _ZN12clap_builder7builder3arg3Arg6action17hb68e9e4dee372978E(&local_2a0,&local_b58,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f2affe725c5faaaE(local_5f8,local_8c0,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hafcf7864a64549efE(local_8c0,"apparent-size",0xd);
  _ZN12clap_builder7builder3arg3Arg4long17h3a9d5ebc30382ea1E
            (&local_b58,local_8c0,"apparent-size",0xd);
                    /* try { // try from 00198cc8 to 00198ce3 has its CatchHandler @ 0019a00c */
  _ZN12clap_builder7builder3arg3Arg4help17h584a1d2e64fd917dE
            (local_8c0,&local_b58,
             "print apparent sizes, rather than disk usage although the apparent size is usually smaller, it may be larger due to holes in (\'sparse\') files, internal fragmentation, indirect blocks, and the like"
             ,0xc4);
  _ZN12clap_builder7builder3arg3Arg6action17hb68e9e4dee372978E(&local_b58,local_8c0,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f2affe725c5faaaE(local_8c0,local_5f8,&local_b58);
  _ZN12clap_builder7builder3arg3Arg3new17hafcf7864a64549efE(local_5f8,"block-size ignored\n",10);
  _ZN12clap_builder7builder3arg3Arg5short17he552bdc63100fdb4E(&local_b58,local_5f8,0x42);
  _ZN12clap_builder7builder3arg3Arg4long17h3a9d5ebc30382ea1E
            (local_5f8,&local_b58,"block-size ignored\n",10);
                    /* try { // try from 00198d61 to 00198d93 has its CatchHandler @ 0019a0dd */
  _ZN12clap_builder7builder3arg3Arg10value_name17h462c81dd99a90185E
            (&local_b58,local_5f8,&DAT_0011e928,4);
  _ZN12clap_builder7builder3arg3Arg4help17h584a1d2e64fd917dE
            (&local_2a0,&local_b58,
             "scale sizes by SIZE before printing them. E.g., \'-BM\' prints sizes in units of 1,048,576 bytes. See SIZE format below."
             ,0x76);
  _ZN12clap_builder7builder7command7Command3arg17h9f2affe725c5faaaE(local_5f8,local_8c0,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hafcf7864a64549efE(local_8c0,"b",1);
  _ZN12clap_builder7builder3arg3Arg5short17he552bdc63100fdb4E(&local_b58,local_8c0,0x62);
  _ZN12clap_builder7builder3arg3Arg4long17h3a9d5ebc30382ea1E(local_8c0,&local_b58,"bytes",5);
                    /* try { // try from 00198dff to 00198e15 has its CatchHandler @ 00199ff7 */
  _ZN12clap_builder7builder3arg3Arg4help17h584a1d2e64fd917dE
            (&local_b58,local_8c0,"equivalent to \'--apparent-size --block-size=1\'",0x2e);
  _ZN12clap_builder7builder3arg3Arg6action17hb68e9e4dee372978E(&local_2a0,&local_b58,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f2affe725c5faaaE(local_8c0,local_5f8,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hafcf7864a64549efE(local_5f8,"c",1);
  _ZN12clap_builder7builder3arg3Arg4long17h3a9d5ebc30382ea1E(&local_b58,local_5f8,"total",5);
  _ZN12clap_builder7builder3arg3Arg5short17he552bdc63100fdb4E(local_5f8,&local_b58,99);
                    /* try { // try from 00198e94 to 00198eaa has its CatchHandler @ 00199fe2 */
  _ZN12clap_builder7builder3arg3Arg4help17h584a1d2e64fd917dE
            (&local_b58,local_5f8,"produce a grand total",0x15);
  _ZN12clap_builder7builder3arg3Arg6action17hb68e9e4dee372978E(&local_2a0,&local_b58,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f2affe725c5faaaE(local_5f8,local_8c0,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hafcf7864a64549efE(local_8c0,"d",1);
  _ZN12clap_builder7builder3arg3Arg5short17he552bdc63100fdb4E(&local_b58,local_8c0,100);
  _ZN12clap_builder7builder3arg3Arg4long17h3a9d5ebc30382ea1E(local_8c0,&local_b58,"max-depth",9);
                    /* try { // try from 00198f29 to 00198f5b has its CatchHandler @ 0019a0cb */
  _ZN12clap_builder7builder3arg3Arg10value_name17h462c81dd99a90185E(&local_b58,local_8c0,"N",1);
  _ZN12clap_builder7builder3arg3Arg4help17h584a1d2e64fd917dE
            (&local_2a0,&local_b58,
             "print the total for a directory (or file, with --all) only if it is N or fewer levels below the command line argument;  --max-depth=0 is the same as --summarize"
             ,0xa0);
  _ZN12clap_builder7builder7command7Command3arg17h9f2affe725c5faaaE(local_8c0,local_5f8,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hafcf7864a64549efE(local_5f8,"h",1);
  _ZN12clap_builder7builder3arg3Arg4long17h3a9d5ebc30382ea1E
            (&local_b58,local_5f8,"human-readable",0xe);
  _ZN12clap_builder7builder3arg3Arg5short17he552bdc63100fdb4E(local_5f8,&local_b58,0x68);
                    /* try { // try from 00198fc7 to 00198fdd has its CatchHandler @ 00199fcd */
  _ZN12clap_builder7builder3arg3Arg4help17h584a1d2e64fd917dE
            (&local_b58,local_5f8,"print sizes in human readable format (e.g., 1K 234M 2G)",0x37);
  _ZN12clap_builder7builder3arg3Arg6action17hb68e9e4dee372978E(&local_2a0,&local_b58,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f2affe725c5faaaE(local_5f8,local_8c0,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hafcf7864a64549efE(local_8c0,"inodes",6);
  _ZN12clap_builder7builder3arg3Arg4long17h3a9d5ebc30382ea1E(&local_b58,local_8c0,"inodes",6);
                    /* try { // try from 00199043 to 0019905e has its CatchHandler @ 00199fb8 */
  _ZN12clap_builder7builder3arg3Arg4help17h584a1d2e64fd917dE
            (local_8c0,&local_b58,
             "list inode usage information instead of block usage like --block-size=1K",0x48);
  _ZN12clap_builder7builder3arg3Arg6action17hb68e9e4dee372978E(&local_b58,local_8c0,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f2affe725c5faaaE(local_8c0,local_5f8,&local_b58);
  _ZN12clap_builder7builder3arg3Arg3new17hafcf7864a64549efE(local_5f8,"k",1);
  _ZN12clap_builder7builder3arg3Arg5short17he552bdc63100fdb4E(&local_b58,local_5f8,0x6b);
                    /* try { // try from 001990be to 001990d9 has its CatchHandler @ 00199fa3 */
  _ZN12clap_builder7builder3arg3Arg4help17h584a1d2e64fd917dE
            (local_5f8,&local_b58,"like --block-size=1K",0x14);
  _ZN12clap_builder7builder3arg3Arg6action17hb68e9e4dee372978E(&local_b58,local_5f8,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f2affe725c5faaaE(local_5f8,local_8c0,&local_b58);
  _ZN12clap_builder7builder3arg3Arg3new17hafcf7864a64549efE(local_8c0,"l",1);
  _ZN12clap_builder7builder3arg3Arg5short17he552bdc63100fdb4E(&local_b58,local_8c0,0x6c);
  _ZN12clap_builder7builder3arg3Arg4long17h3a9d5ebc30382ea1E(local_8c0,&local_b58,"count-links",0xb)
  ;
                    /* try { // try from 00199158 to 0019916e has its CatchHandler @ 00199f8e */
  _ZN12clap_builder7builder3arg3Arg4help17h584a1d2e64fd917dE
            (&local_b58,local_8c0,"count sizes many times if hard linked",0x25);
  _ZN12clap_builder7builder3arg3Arg6action17hb68e9e4dee372978E(&local_2a0,&local_b58,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f2affe725c5faaaE(local_8c0,local_5f8,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hafcf7864a64549efE(local_5f8,"dereference",0xb);
  _ZN12clap_builder7builder3arg3Arg5short17he552bdc63100fdb4E(&local_b58,local_5f8,0x4c);
  _ZN12clap_builder7builder3arg3Arg4long17h3a9d5ebc30382ea1E(local_5f8,&local_b58,"dereference",0xb)
  ;
                    /* try { // try from 001991ec to 00199202 has its CatchHandler @ 00199f79 */
  _ZN12clap_builder7builder3arg3Arg4help17h584a1d2e64fd917dE
            (&local_b58,local_5f8,"follow all symbolic links",0x19);
  _ZN12clap_builder7builder3arg3Arg6action17hb68e9e4dee372978E(&local_2a0,&local_b58,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f2affe725c5faaaE(local_5f8,local_8c0,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hafcf7864a64549efE(local_8c0,"dereference-args",0x10);
  _ZN12clap_builder7builder3arg3Arg5short17he552bdc63100fdb4E(&local_b58,local_8c0,0x44);
                    /* try { // try from 00199262 to 001992ac has its CatchHandler @ 0019a0b9 */
  _ZN12clap_builder7builder3arg3Arg19visible_short_alias17h8abe76db7d80bfd5E(local_8c0,&local_b58);
  _ZN12clap_builder7builder3arg3Arg4long17h3a9d5ebc30382ea1E
            (&local_b58,local_8c0,"dereference-args",0x10);
  _ZN12clap_builder7builder3arg3Arg4help17h584a1d2e64fd917dE
            (local_8c0,&local_b58,"follow only symlinks that are listed on the command line",0x38);
  _ZN12clap_builder7builder3arg3Arg6action17hb68e9e4dee372978E(&local_b58,local_8c0,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f2affe725c5faaaE(local_8c0,local_5f8,&local_b58);
  _ZN12clap_builder7builder3arg3Arg3new17hafcf7864a64549efE(local_5f8,"no-dereference",0xe);
  _ZN12clap_builder7builder3arg3Arg5short17he552bdc63100fdb4E(&local_b58,local_5f8,0x50);
  _ZN12clap_builder7builder3arg3Arg4long17h3a9d5ebc30382ea1E
            (local_5f8,&local_b58,"no-dereference",0xe);
                    /* try { // try from 0019932a to 00199350 has its CatchHandler @ 0019a0a7 */
  _ZN12clap_builder7builder3arg3Arg4help17h584a1d2e64fd917dE
            (&local_b58,local_5f8,"don\'t follow any symbolic links (this is the default)",0x35);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hbd211fffcbf27667E(local_5f8,&local_b58);
  _ZN12clap_builder7builder3arg3Arg6action17hb68e9e4dee372978E(&local_b58,local_5f8,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f2affe725c5faaaE(local_5f8,local_8c0,&local_b58);
  _ZN12clap_builder7builder3arg3Arg3new17hafcf7864a64549efE(local_8c0,"m",1);
  _ZN12clap_builder7builder3arg3Arg5short17he552bdc63100fdb4E(&local_b58,local_8c0,0x6d);
                    /* try { // try from 001993b0 to 001993cb has its CatchHandler @ 00199f64 */
  _ZN12clap_builder7builder3arg3Arg4help17h584a1d2e64fd917dE
            (local_8c0,&local_b58,"like --block-size=1M",0x14);
  _ZN12clap_builder7builder3arg3Arg6action17hb68e9e4dee372978E(&local_b58,local_8c0,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f2affe725c5faaaE(local_8c0,local_5f8,&local_b58);
  _ZN12clap_builder7builder3arg3Arg3new17hafcf7864a64549efE(local_5f8,"0",1);
  _ZN12clap_builder7builder3arg3Arg5short17he552bdc63100fdb4E(&local_b58,local_5f8,0x30);
  _ZN12clap_builder7builder3arg3Arg4long17h3a9d5ebc30382ea1E(local_5f8,&local_b58,&DAT_0011e980,4);
                    /* try { // try from 0019944a to 00199460 has its CatchHandler @ 00199f4f */
  _ZN12clap_builder7builder3arg3Arg4help17h584a1d2e64fd917dE
            (&local_b58,local_5f8,"end each output line with 0 byte rather than newline",0x34);
  _ZN12clap_builder7builder3arg3Arg6action17hb68e9e4dee372978E(&local_2a0,&local_b58,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f2affe725c5faaaE(local_5f8,local_8c0,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hafcf7864a64549efE(local_8c0,"S",1);
  _ZN12clap_builder7builder3arg3Arg5short17he552bdc63100fdb4E(&local_b58,local_8c0,0x53);
  _ZN12clap_builder7builder3arg3Arg4long17h3a9d5ebc30382ea1E
            (local_8c0,&local_b58,"separate-dirs",0xd);
                    /* try { // try from 001994df to 001994f5 has its CatchHandler @ 00199f3a */
  _ZN12clap_builder7builder3arg3Arg4help17h584a1d2e64fd917dE
            (&local_b58,local_8c0,"do not include size of subdirectories",0x25);
  _ZN12clap_builder7builder3arg3Arg6action17hb68e9e4dee372978E(&local_2a0,&local_b58,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f2affe725c5faaaE(local_8c0,local_5f8,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hafcf7864a64549efE(local_5f8,"s",1);
  _ZN12clap_builder7builder3arg3Arg5short17he552bdc63100fdb4E(&local_b58,local_5f8,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17h3a9d5ebc30382ea1E(local_5f8,&local_b58,"summarize",9);
                    /* try { // try from 00199574 to 0019958a has its CatchHandler @ 00199f25 */
  _ZN12clap_builder7builder3arg3Arg4help17h584a1d2e64fd917dE
            (&local_b58,local_5f8,"display only a total for each argument",0x26);
  _ZN12clap_builder7builder3arg3Arg6action17hb68e9e4dee372978E(&local_2a0,&local_b58,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f2affe725c5faaaE(local_5f8,local_8c0,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hafcf7864a64549efE(local_8c0,"si",2);
  _ZN12clap_builder7builder3arg3Arg4long17h3a9d5ebc30382ea1E(&local_b58,local_8c0,"si",2);
                    /* try { // try from 001995f0 to 0019960b has its CatchHandler @ 00199f10 */
  _ZN12clap_builder7builder3arg3Arg4help17h584a1d2e64fd917dE
            (local_8c0,&local_b58,"like -h, but use powers of 1000 not 1024",0x28);
  _ZN12clap_builder7builder3arg3Arg6action17hb68e9e4dee372978E(&local_b58,local_8c0,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f2affe725c5faaaE(local_8c0,local_5f8,&local_b58);
  _ZN12clap_builder7builder3arg3Arg3new17hafcf7864a64549efE(local_5f8,"one-file-system",0xf);
  _ZN12clap_builder7builder3arg3Arg5short17he552bdc63100fdb4E(&local_b58,local_5f8,0x78);
  _ZN12clap_builder7builder3arg3Arg4long17h3a9d5ebc30382ea1E
            (local_5f8,&local_b58,"one-file-system",0xf);
                    /* try { // try from 00199689 to 0019969f has its CatchHandler @ 00199efb */
  _ZN12clap_builder7builder3arg3Arg4help17h584a1d2e64fd917dE
            (&local_b58,local_5f8,"skip directories on different file systems",0x2a);
  _ZN12clap_builder7builder3arg3Arg6action17hb68e9e4dee372978E(&local_2a0,&local_b58,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f2affe725c5faaaE(local_5f8,local_8c0,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hafcf7864a64549efE(local_8c0,"threshold",9);
  _ZN12clap_builder7builder3arg3Arg5short17he552bdc63100fdb4E(&local_b58,local_8c0,0x74);
  _ZN12clap_builder7builder3arg3Arg4long17h3a9d5ebc30382ea1E(local_8c0,&local_b58,"threshold",9);
                    /* try { // try from 0019971d to 00199733 has its CatchHandler @ 0019a092 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h462c81dd99a90185E
            (&local_b58,local_8c0,&DAT_0011e928,4);
  _ZN12clap_builder7builder3arg3Arg8num_args17hdb5535818e492c0eE(local_8c0,&local_b58);
  (*(code *)PTR_memcpy_0024e718)(&local_b58,local_8c0,0x278);
  local_8e0 = local_648 | 0x20;
  local_8dc = local_644;
                    /* try { // try from 0019977a to 00199795 has its CatchHandler @ 0019a092 */
  _ZN12clap_builder7builder3arg3Arg4help17h584a1d2e64fd917dE
            (&local_2a0,&local_b58,
             "exclude entries smaller than SIZE if positive, or entries greater than SIZE if negative"
             ,0x57);
  _ZN12clap_builder7builder7command7Command3arg17h9f2affe725c5faaaE(local_8c0,local_5f8,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hafcf7864a64549efE
            (local_5f8,
             "verbose: \n\ttotal\t: read error: Is a directorycannot open \'\' for reading: No such file or directory:"
             ,7);
  _ZN12clap_builder7builder3arg3Arg5short17he552bdc63100fdb4E(&local_b58,local_5f8,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17h3a9d5ebc30382ea1E
            (local_5f8,&local_b58,
             "verbose: \n\ttotal\t: read error: Is a directorycannot open \'\' for reading: No such file or directory:"
             ,7);
                    /* try { // try from 00199800 to 00199816 has its CatchHandler @ 00199ee6 */
  _ZN12clap_builder7builder3arg3Arg4help17h584a1d2e64fd917dE
            (&local_b58,local_5f8,"verbose mode (option not present in GNU/Coreutils)",0x32);
  _ZN12clap_builder7builder3arg3Arg6action17hb68e9e4dee372978E(&local_2a0,&local_b58,2);
  _ZN12clap_builder7builder7command7Command3arg17h9f2affe725c5faaaE(local_5f8,local_8c0,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hafcf7864a64549efE(local_8c0,"exclude",7);
  _ZN12clap_builder7builder3arg3Arg4long17h3a9d5ebc30382ea1E(&local_b58,local_8c0,"exclude",7);
                    /* try { // try from 0019987c to 001998b3 has its CatchHandler @ 0019a07d */
  _ZN12clap_builder7builder3arg3Arg10value_name17h462c81dd99a90185E
            (local_8c0,&local_b58,"PATTERN",7);
  _ZN12clap_builder7builder3arg3Arg4help17h584a1d2e64fd917dE
            (&local_b58,local_8c0,&DAT_001214a0,0x20);
  _ZN12clap_builder7builder3arg3Arg6action17hb68e9e4dee372978E(&local_2a0,&local_b58,1);
  _ZN12clap_builder7builder7command7Command3arg17h9f2affe725c5faaaE(local_8c0,local_5f8,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hafcf7864a64549efE(local_5f8,"exclude-from",0xc);
  _ZN12clap_builder7builder3arg3Arg5short17he552bdc63100fdb4E(&local_b58,local_5f8,0x58);
  _ZN12clap_builder7builder3arg3Arg4long17h3a9d5ebc30382ea1E
            (local_5f8,&local_b58,"exclude-from",0xc);
                    /* try { // try from 00199931 to 00199978 has its CatchHandler @ 0019a120 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h462c81dd99a90185E
            (&local_b58,local_5f8,&DAT_0011e9b4,4);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h48d892b9356562a6E(local_5f8,&local_b58,3);
  _ZN12clap_builder7builder3arg3Arg4help17h584a1d2e64fd917dE
            (&local_b58,local_5f8,"exclude files that match any pattern in FILE",0x2c);
  _ZN12clap_builder7builder3arg3Arg6action17hb68e9e4dee372978E(&local_2a0,&local_b58,1);
  _ZN12clap_builder7builder7command7Command3arg17h9f2affe725c5faaaE(local_5f8,local_8c0,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hafcf7864a64549efE(local_8c0,"files0-from",0xb);
  _ZN12clap_builder7builder3arg3Arg4long17h3a9d5ebc30382ea1E(&local_b58,local_8c0,"files0-from",0xb)
  ;
                    /* try { // try from 001999de to 00199a2a has its CatchHandler @ 0019a10e */
  _ZN12clap_builder7builder3arg3Arg10value_name17h462c81dd99a90185E
            (local_8c0,&local_b58,&DAT_0011e9b4,4);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h48d892b9356562a6E(&local_b58,local_8c0,3);
  _ZN12clap_builder7builder3arg3Arg4help17h584a1d2e64fd917dE
            (local_8c0,&local_b58,
             "summarize device usage of the NUL-terminated file names specified in file F; if F is -, then read names from standard input"
             ,0x7b);
  _ZN12clap_builder7builder3arg3Arg6action17hb68e9e4dee372978E(&local_b58,local_8c0,1);
  _ZN12clap_builder7builder7command7Command3arg17h9f2affe725c5faaaE(local_8c0,local_5f8,&local_b58);
  _ZN12clap_builder7builder3arg3Arg3new17hafcf7864a64549efE(local_5f8,&DAT_0011e944,4);
  _ZN12clap_builder7builder3arg3Arg4long17h3a9d5ebc30382ea1E(&local_b58,local_5f8,&DAT_0011e944,4);
                    /* try { // try from 00199a90 to 00199aab has its CatchHandler @ 0019a075 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h462c81dd99a90185E
            (local_5f8,&local_b58,&DAT_0011e9b8,4);
  (*(code *)PTR_memcpy_0024e718)(&local_b58,local_5f8,0x278);
  local_8e0 = local_380 | 0x80;
  local_8dc = local_37c;
  _ZN12clap_builder7builder3arg3Arg8num_args17h41de31b25648b013E(local_5f8,&local_b58);
  local_b28 = "atime";
  uStack_b20 = 5;
  uStack_b40 = 0x8000000000000000;
  local_b58 = 0;
  uStack_b50 = 8;
  local_b48 = 0;
  local_b18 = local_b18 & 0xffffffffffffff00;
                    /* try { // try from 00199b46 to 00199b82 has its CatchHandler @ 0019a0ef */
  _ZN12clap_builder7builder14possible_value13PossibleValue5alias17hf18292d0dd5891e4E
            (&local_2a0,&local_b58,"access",6);
  _ZN12clap_builder7builder14possible_value13PossibleValue5alias17hf18292d0dd5891e4E
            (&local_330,&local_2a0,"use",3);
  local_b28 = "ctime";
  uStack_b20 = 5;
  uStack_b40 = 0x8000000000000000;
  local_b58 = 0;
  uStack_b50 = 8;
  local_b48 = 0;
  local_b18 = local_b18 & 0xffffffffffffff00;
                    /* try { // try from 00199bc9 to 00199be4 has its CatchHandler @ 00199ed1 */
  _ZN12clap_builder7builder14possible_value13PossibleValue5alias17hf18292d0dd5891e4E
            (&local_2e8,&local_b58,"status",6);
  local_b28 = "creation";
  uStack_b20 = 8;
  uStack_b40 = 0x8000000000000000;
  local_b58 = 0;
  uStack_b50 = 8;
  local_b48 = 0;
  local_b18 = local_b18 & 0xffffffffffffff00;
                    /* try { // try from 00199c2b to 00199c46 has its CatchHandler @ 00199ebf */
  _ZN12clap_builder7builder14possible_value13PossibleValue5alias17hf18292d0dd5891e4E
            (&local_2a0,&local_b58,"birth",5);
  local_b58 = local_330;
  uStack_b50 = uStack_328;
  local_b48 = local_320;
  uStack_b40 = uStack_318;
  local_b38 = local_310;
  uStack_b30 = uStack_308;
  local_b28 = (char *)local_300;
  uStack_b20 = uStack_2f8;
  local_b18 = local_2f0;
  local_b10 = local_2e8;
  uStack_b08 = uStack_2e0;
  local_b00 = local_2d8;
  uStack_af8 = uStack_2d0;
  local_af0 = local_2c8;
  uStack_ae8 = uStack_2c0;
  local_ae0 = local_2b8;
  uStack_ad8 = uStack_2b0;
  local_ad0 = local_2a8;
  local_a88 = local_260;
  local_a98 = local_270;
  uStack_a94 = uStack_26c;
  uStack_a90 = uStack_268;
  uStack_a8c = uStack_264;
  local_aa8 = local_280;
  uStack_aa4 = uStack_27c;
  uStack_aa0 = uStack_278;
  uStack_a9c = uStack_274;
  local_ab8 = local_290;
  uStack_ab4 = uStack_28c;
  uStack_ab0 = uStack_288;
  uStack_aac = uStack_284;
  local_ac8 = local_2a0;
  uStack_ac4 = uStack_29c;
  uStack_ac0 = uStack_298;
  uStack_abc = uStack_294;
                    /* try { // try from 00199d1b to 00199d2a has its CatchHandler @ 0019a0ef */
  _ZN117__LT_uucore__features__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17h42ecd2172e02f350E
            (&local_2a0,&local_b58);
                    /* try { // try from 00199d2b to 00199d42 has its CatchHandler @ 00199eb7 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17ha48db8fe7c44b6aeE
            (&local_b58,local_5f8,&local_2a0);
                    /* try { // try from 00199d43 to 00199d5e has its CatchHandler @ 0019a075 */
  _ZN12clap_builder7builder3arg3Arg4help17h584a1d2e64fd917dE
            (&local_2a0,&local_b58,
             "show time of the last modification of any file in the directory, or any of its subdirectories. If WORD is given, show time as WORD instead of modification time: atime, access, use, ctime, status, birth or creation"
             ,0xd5);
  _ZN12clap_builder7builder7command7Command3arg17h9f2affe725c5faaaE(local_5f8,local_8c0,&local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hafcf7864a64549efE(local_8c0,"time-style",10);
  _ZN12clap_builder7builder3arg3Arg4long17h3a9d5ebc30382ea1E(&local_b58,local_8c0,"time-style",10);
                    /* try { // try from 00199db1 to 00199de8 has its CatchHandler @ 0019a060 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h462c81dd99a90185E(local_8c0,&local_b58,"STYLE",5);
  _ZN12clap_builder7builder3arg3Arg4help17h584a1d2e64fd917dE
            (&local_b58,local_8c0,
             "show times using style STYLE: full-iso, long-iso, iso, +FORMAT FORMAT is interpreted like \'date\'invalid suffix in -- argument invalid ---- too largeInvalidMaxDepthArgSummarizeDepthConflictInvalidTimeStyleArgInvalidTimeArgInvalidGlobinvalid maximum depth summarizing conflicts with --max-depth=invalid argument  for \'time style\'\nValid arguments are:\n- \'"
             ,0x60);
  _ZN12clap_builder7builder7command7Command3arg17h9f2affe725c5faaaE(local_8c0,local_5f8,&local_b58);
  _ZN12clap_builder7builder3arg3Arg3new17hafcf7864a64549efE(local_5f8,&DAT_0011e9b4,4);
  (*(code *)PTR_memcpy_0024e718)(&local_b58,local_5f8,0x278);
  local_8e0 = local_380 | 4;
  local_8dc = local_37c;
                    /* try { // try from 00199e50 to 00199e64 has its CatchHandler @ 00199ea2 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h48d892b9356562a6E(local_5f8,&local_b58,2);
  _ZN12clap_builder7builder3arg3Arg6action17hb68e9e4dee372978E(&local_b58,local_5f8,1);
  _ZN12clap_builder7builder7command7Command3arg17h9f2affe725c5faaaE(param_1,local_8c0,&local_b58);
  return param_1;
}