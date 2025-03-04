undefined8 _ZN5uu_du6uu_app17h2f2ed9ce6c921f55E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  char *local_ab8;
  undefined8 uStack_ab0;
  ulong local_aa8;
  undefined8 local_aa0;
  undefined8 uStack_a98;
  undefined8 local_a90;
  undefined8 uStack_a88;
  undefined8 local_a80;
  undefined8 uStack_a78;
  undefined8 local_a70;
  undefined8 uStack_a68;
  undefined8 local_a60;
  undefined4 local_a58;
  undefined4 uStack_a54;
  undefined4 uStack_a50;
  undefined4 uStack_a4c;
  undefined4 local_a48;
  undefined4 uStack_a44;
  undefined4 uStack_a40;
  undefined4 uStack_a3c;
  undefined4 local_a38;
  undefined4 uStack_a34;
  undefined4 uStack_a30;
  undefined4 uStack_a2c;
  undefined4 local_a28;
  undefined4 uStack_a24;
  undefined4 uStack_a20;
  undefined4 uStack_a1c;
  undefined8 local_a18;
  uint local_8a0;
  undefined4 local_89c;
  undefined local_888 [584];
  uint local_640;
  undefined4 local_63c;
  ulong local_5cc;
  undefined4 local_5c4;
  undefined local_5c0 [584];
  uint local_378;
  undefined4 local_374;
  ulong local_304;
  undefined4 local_2fc;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h162f37311a2c88cdE(local_5c0,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h4713cff2823b85d0E
            (local_888,local_5c0,&DAT_0011cf79,6);
  _ZN12clap_builder7builder7command7Command5about17h45b7a1a0e2736312E
            (local_5c0,local_888,&DAT_0011cf7f,0x19);
  _ZN12clap_builder7builder7command7Command10after_help17hc73d7b7264e674ddE
            (local_888,local_5c0,&DAT_0011cf98,0x22e);
                    /* try { // try from 001f4162 to 001f4176 has its CatchHandler @ 001f5571 */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(&local_ae8,&DAT_0011d1c6,0x37);
  _ZN12clap_builder7builder7command7Command14override_usage17h04167bad9a431f50E
            (local_5c0,local_888,&local_ae8);
  (*(code *)PTR_memcpy_0028a2d8)(local_888,local_5c0,700);
  local_5cc = local_304 | 0x4008000040080;
  local_5c4 = local_2fc;
                    /* try { // try from 001f41d0 to 001f4220 has its CatchHandler @ 001f5700 */
  _ZN12clap_builder7builder3arg3Arg3new17h7ed28ed0fae70edeE(local_5c0,&DAT_0010f658,4);
  _ZN12clap_builder7builder3arg3Arg4long17h0165ed5c4cae0fa6E(&local_ae8,local_5c0,&DAT_0010f658,4);
  _ZN12clap_builder7builder3arg3Arg4help17h3a366a47e26ba8d4E
            (local_5c0,&local_ae8,&DAT_0011d1fd,0x17);
  _ZN12clap_builder7builder3arg3Arg6action17he7a7971366893695E(&local_ae8,local_5c0,5);
  _ZN12clap_builder7builder7command7Command3arg17h2a205b0c3e684785E(local_5c0,local_888,&local_ae8);
                    /* try { // try from 001f4251 to 001f42b9 has its CatchHandler @ 001f56eb */
  _ZN12clap_builder7builder3arg3Arg3new17h7ed28ed0fae70edeE(local_888,&DAT_0011d214,3);
  _ZN12clap_builder7builder3arg3Arg5short17h37d14ffe681ddd9fE(&local_ae8,local_888,0x61);
  _ZN12clap_builder7builder3arg3Arg4long17h0165ed5c4cae0fa6E(local_888,&local_ae8,&DAT_0011d214,3);
  _ZN12clap_builder7builder3arg3Arg4help17h3a366a47e26ba8d4E
            (&local_ae8,local_888,&DAT_0011d217,0x30);
  _ZN12clap_builder7builder3arg3Arg6action17he7a7971366893695E(&local_268,&local_ae8,2);
  _ZN12clap_builder7builder7command7Command3arg17h2a205b0c3e684785E(local_888,local_5c0,&local_268);
                    /* try { // try from 001f42ea to 001f433a has its CatchHandler @ 001f56d6 */
  _ZN12clap_builder7builder3arg3Arg3new17h7ed28ed0fae70edeE(local_5c0,&DAT_0011d247,0xd);
  _ZN12clap_builder7builder3arg3Arg4long17h0165ed5c4cae0fa6E(&local_ae8,local_5c0,&DAT_0011d247,0xd)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17h3a366a47e26ba8d4E
            (local_5c0,&local_ae8,&DAT_0011d254,0xc4);
  _ZN12clap_builder7builder3arg3Arg6action17he7a7971366893695E(&local_ae8,local_5c0,2);
  _ZN12clap_builder7builder7command7Command3arg17h2a205b0c3e684785E(local_5c0,local_888,&local_ae8);
                    /* try { // try from 001f436b to 001f43ef has its CatchHandler @ 001f5775 */
  _ZN12clap_builder7builder3arg3Arg3new17h7ed28ed0fae70edeE(local_888,&DAT_0011cd4c,10);
  _ZN12clap_builder7builder3arg3Arg5short17h37d14ffe681ddd9fE(&local_ae8,local_888,0x42);
  _ZN12clap_builder7builder3arg3Arg4long17h0165ed5c4cae0fa6E(local_888,&local_ae8,&DAT_0011cd4c,10);
  _ZN12clap_builder7builder3arg3Arg10value_name17hb482852006cd427bE(&local_ae8,local_888,"SIZE",4);
  _ZN12clap_builder7builder3arg3Arg4help17h3a366a47e26ba8d4E
            (&local_268,&local_ae8,&DAT_0011d318,0x76);
  _ZN12clap_builder7builder7command7Command3arg17h2a205b0c3e684785E(local_888,local_5c0,&local_268);
                    /* try { // try from 001f440d to 001f4475 has its CatchHandler @ 001f56c1 */
  _ZN12clap_builder7builder3arg3Arg3new17h7ed28ed0fae70edeE(local_5c0,&DAT_0011d38e,1);
  _ZN12clap_builder7builder3arg3Arg5short17h37d14ffe681ddd9fE(&local_ae8,local_5c0,0x62);
  _ZN12clap_builder7builder3arg3Arg4long17h0165ed5c4cae0fa6E(local_5c0,&local_ae8,&DAT_0011d38f,5);
  _ZN12clap_builder7builder3arg3Arg4help17h3a366a47e26ba8d4E
            (&local_ae8,local_5c0,&DAT_0011d394,0x2e);
  _ZN12clap_builder7builder3arg3Arg6action17he7a7971366893695E(&local_268,&local_ae8,2);
  _ZN12clap_builder7builder7command7Command3arg17h2a205b0c3e684785E(local_5c0,local_888,&local_268);
                    /* try { // try from 001f44a6 to 001f4509 has its CatchHandler @ 001f56ac */
  _ZN12clap_builder7builder3arg3Arg3new17h7ed28ed0fae70edeE(local_888,&DAT_0011d3c2,1);
  _ZN12clap_builder7builder3arg3Arg4long17h0165ed5c4cae0fa6E(&local_ae8,local_888,&DAT_0011d3c3,5);
  _ZN12clap_builder7builder3arg3Arg5short17h37d14ffe681ddd9fE(local_888,&local_ae8,99);
  _ZN12clap_builder7builder3arg3Arg4help17h3a366a47e26ba8d4E
            (&local_ae8,local_888,&DAT_0011d3c8,0x15);
  _ZN12clap_builder7builder3arg3Arg6action17he7a7971366893695E(&local_268,&local_ae8,2);
  _ZN12clap_builder7builder7command7Command3arg17h2a205b0c3e684785E(local_888,local_5c0,&local_268);
                    /* try { // try from 001f453a to 001f45be has its CatchHandler @ 001f5763 */
  _ZN12clap_builder7builder3arg3Arg3new17h7ed28ed0fae70edeE(local_5c0,&DAT_0011d3dd,1);
  _ZN12clap_builder7builder3arg3Arg5short17h37d14ffe681ddd9fE(&local_ae8,local_5c0,100);
  _ZN12clap_builder7builder3arg3Arg4long17h0165ed5c4cae0fa6E(local_5c0,&local_ae8,&DAT_0011d3de,9);
  _ZN12clap_builder7builder3arg3Arg10value_name17hb482852006cd427bE
            (&local_ae8,local_5c0,&DAT_0011d3e7,1);
  _ZN12clap_builder7builder3arg3Arg4help17h3a366a47e26ba8d4E
            (&local_268,&local_ae8,&DAT_0011d3e8,0xa0);
  _ZN12clap_builder7builder7command7Command3arg17h2a205b0c3e684785E(local_5c0,local_888,&local_268);
                    /* try { // try from 001f45dc to 001f463f has its CatchHandler @ 001f5697 */
  _ZN12clap_builder7builder3arg3Arg3new17h7ed28ed0fae70edeE(local_888,&DAT_0011d488,1);
  _ZN12clap_builder7builder3arg3Arg4long17h0165ed5c4cae0fa6E(&local_ae8,local_888,&DAT_0011d489,0xe)
  ;
  _ZN12clap_builder7builder3arg3Arg5short17h37d14ffe681ddd9fE(local_888,&local_ae8,0x68);
  _ZN12clap_builder7builder3arg3Arg4help17h3a366a47e26ba8d4E
            (&local_ae8,local_888,&DAT_0011d497,0x37);
  _ZN12clap_builder7builder3arg3Arg6action17he7a7971366893695E(&local_268,&local_ae8,2);
  _ZN12clap_builder7builder7command7Command3arg17h2a205b0c3e684785E(local_888,local_5c0,&local_268);
                    /* try { // try from 001f4670 to 001f46c0 has its CatchHandler @ 001f5682 */
  _ZN12clap_builder7builder3arg3Arg3new17h7ed28ed0fae70edeE(local_5c0,&DAT_0011d4ce,6);
  _ZN12clap_builder7builder3arg3Arg4long17h0165ed5c4cae0fa6E(&local_ae8,local_5c0,&DAT_0011d4ce,6);
  _ZN12clap_builder7builder3arg3Arg4help17h3a366a47e26ba8d4E
            (local_5c0,&local_ae8,&DAT_0011d4d4,0x48);
  _ZN12clap_builder7builder3arg3Arg6action17he7a7971366893695E(&local_ae8,local_5c0,2);
  _ZN12clap_builder7builder7command7Command3arg17h2a205b0c3e684785E(local_5c0,local_888,&local_ae8);
                    /* try { // try from 001f46f1 to 001f473d has its CatchHandler @ 001f55b0 */
  _ZN12clap_builder7builder3arg3Arg3new17h7ed28ed0fae70edeE(local_888,&DAT_0011d51c,1);
  _ZN12clap_builder7builder3arg3Arg5short17h37d14ffe681ddd9fE(&local_ae8,local_888,0x6b);
  _ZN12clap_builder7builder3arg3Arg4help17h3a366a47e26ba8d4E
            (local_888,&local_ae8,&DAT_0011d51d,0x14);
  _ZN12clap_builder7builder3arg3Arg6action17he7a7971366893695E(&local_ae8,local_888,2);
  _ZN12clap_builder7builder7command7Command3arg17h2a205b0c3e684785E(local_888,local_5c0,&local_ae8);
                    /* try { // try from 001f476e to 001f47d6 has its CatchHandler @ 001f566d */
  _ZN12clap_builder7builder3arg3Arg3new17h7ed28ed0fae70edeE(local_5c0,&DAT_0011d531,1);
  _ZN12clap_builder7builder3arg3Arg5short17h37d14ffe681ddd9fE(&local_ae8,local_5c0,0x6c);
  _ZN12clap_builder7builder3arg3Arg4long17h0165ed5c4cae0fa6E(local_5c0,&local_ae8,&DAT_0011d532,0xb)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17h3a366a47e26ba8d4E
            (&local_ae8,local_5c0,&DAT_0011d53d,0x25);
  _ZN12clap_builder7builder3arg3Arg6action17he7a7971366893695E(&local_268,&local_ae8,2);
  _ZN12clap_builder7builder7command7Command3arg17h2a205b0c3e684785E(local_5c0,local_888,&local_268);
                    /* try { // try from 001f4807 to 001f486f has its CatchHandler @ 001f5658 */
  _ZN12clap_builder7builder3arg3Arg3new17h7ed28ed0fae70edeE(local_888,&DAT_0011d562,0xb);
  _ZN12clap_builder7builder3arg3Arg5short17h37d14ffe681ddd9fE(&local_ae8,local_888,0x4c);
  _ZN12clap_builder7builder3arg3Arg4long17h0165ed5c4cae0fa6E(local_888,&local_ae8,&DAT_0011d562,0xb)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17h3a366a47e26ba8d4E
            (&local_ae8,local_888,&DAT_0011d56d,0x19);
  _ZN12clap_builder7builder3arg3Arg6action17he7a7971366893695E(&local_268,&local_ae8,2);
  _ZN12clap_builder7builder7command7Command3arg17h2a205b0c3e684785E(local_888,local_5c0,&local_268);
                    /* try { // try from 001f48a0 to 001f491d has its CatchHandler @ 001f5751 */
  _ZN12clap_builder7builder3arg3Arg3new17h7ed28ed0fae70edeE(local_5c0,"dereference-args",0x10);
  _ZN12clap_builder7builder3arg3Arg5short17h37d14ffe681ddd9fE(&local_ae8,local_5c0,0x44);
  _ZN12clap_builder7builder3arg3Arg19visible_short_alias17h5d050c0345745f6fE
            (local_5c0,&local_ae8,0x48);
  _ZN12clap_builder7builder3arg3Arg4long17h0165ed5c4cae0fa6E
            (&local_ae8,local_5c0,"dereference-args",0x10);
  _ZN12clap_builder7builder3arg3Arg4help17h3a366a47e26ba8d4E
            (local_5c0,&local_ae8,&DAT_0011d586,0x38);
  _ZN12clap_builder7builder3arg3Arg6action17he7a7971366893695E(&local_ae8,local_5c0,2);
  _ZN12clap_builder7builder7command7Command3arg17h2a205b0c3e684785E(local_5c0,local_888,&local_ae8);
                    /* try { // try from 001f494e to 001f49d2 has its CatchHandler @ 001f573f */
  _ZN12clap_builder7builder3arg3Arg3new17h7ed28ed0fae70edeE(local_888,&DAT_0011d5be,0xe);
  _ZN12clap_builder7builder3arg3Arg5short17h37d14ffe681ddd9fE(&local_ae8,local_888,0x50);
  _ZN12clap_builder7builder3arg3Arg4long17h0165ed5c4cae0fa6E(local_888,&local_ae8,&DAT_0011d5be,0xe)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17h3a366a47e26ba8d4E
            (&local_ae8,local_888,&DAT_0011d5cc,0x35);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h68fe5fb7c2f3d782E
            (local_888,&local_ae8,&DAT_0011d562,0xb);
  _ZN12clap_builder7builder3arg3Arg6action17he7a7971366893695E(&local_ae8,local_888,2);
  _ZN12clap_builder7builder7command7Command3arg17h2a205b0c3e684785E(local_888,local_5c0,&local_ae8);
                    /* try { // try from 001f4a03 to 001f4a4f has its CatchHandler @ 001f559b */
  _ZN12clap_builder7builder3arg3Arg3new17h7ed28ed0fae70edeE(local_5c0,&DAT_0011d601,1);
  _ZN12clap_builder7builder3arg3Arg5short17h37d14ffe681ddd9fE(&local_ae8,local_5c0,0x6d);
  _ZN12clap_builder7builder3arg3Arg4help17h3a366a47e26ba8d4E
            (local_5c0,&local_ae8,&DAT_0011d602,0x14);
  _ZN12clap_builder7builder3arg3Arg6action17he7a7971366893695E(&local_ae8,local_5c0,2);
  _ZN12clap_builder7builder7command7Command3arg17h2a205b0c3e684785E(local_5c0,local_888,&local_ae8);
                    /* try { // try from 001f4a80 to 001f4ae8 has its CatchHandler @ 001f5643 */
  _ZN12clap_builder7builder3arg3Arg3new17h7ed28ed0fae70edeE(local_888,&DAT_0011d616,1);
  _ZN12clap_builder7builder3arg3Arg5short17h37d14ffe681ddd9fE(&local_ae8,local_888,0x30);
  _ZN12clap_builder7builder3arg3Arg4long17h0165ed5c4cae0fa6E(local_888,&local_ae8,&DAT_0010f600,4);
  _ZN12clap_builder7builder3arg3Arg4help17h3a366a47e26ba8d4E
            (&local_ae8,local_888,&DAT_0011d617,0x34);
  _ZN12clap_builder7builder3arg3Arg6action17he7a7971366893695E(&local_268,&local_ae8,2);
  _ZN12clap_builder7builder7command7Command3arg17h2a205b0c3e684785E(local_888,local_5c0,&local_268);
                    /* try { // try from 001f4b19 to 001f4b81 has its CatchHandler @ 001f562e */
  _ZN12clap_builder7builder3arg3Arg3new17h7ed28ed0fae70edeE(local_5c0,&DAT_0011d64b,1);
  _ZN12clap_builder7builder3arg3Arg5short17h37d14ffe681ddd9fE(&local_ae8,local_5c0,0x53);
  _ZN12clap_builder7builder3arg3Arg4long17h0165ed5c4cae0fa6E(local_5c0,&local_ae8,&DAT_0011d64c,0xd)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17h3a366a47e26ba8d4E
            (&local_ae8,local_5c0,&DAT_0011d659,0x25);
  _ZN12clap_builder7builder3arg3Arg6action17he7a7971366893695E(&local_268,&local_ae8,2);
  _ZN12clap_builder7builder7command7Command3arg17h2a205b0c3e684785E(local_5c0,local_888,&local_268);
                    /* try { // try from 001f4bb2 to 001f4c1a has its CatchHandler @ 001f5619 */
  _ZN12clap_builder7builder3arg3Arg3new17h7ed28ed0fae70edeE(local_888,&DAT_0011d67e,1);
  _ZN12clap_builder7builder3arg3Arg5short17h37d14ffe681ddd9fE(&local_ae8,local_888,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17h0165ed5c4cae0fa6E(local_888,&local_ae8,&DAT_0011d67f,9);
  _ZN12clap_builder7builder3arg3Arg4help17h3a366a47e26ba8d4E
            (&local_ae8,local_888,&DAT_0011d688,0x26);
  _ZN12clap_builder7builder3arg3Arg6action17he7a7971366893695E(&local_268,&local_ae8,2);
  _ZN12clap_builder7builder7command7Command3arg17h2a205b0c3e684785E(local_888,local_5c0,&local_268);
                    /* try { // try from 001f4c4b to 001f4c9b has its CatchHandler @ 001f5604 */
  _ZN12clap_builder7builder3arg3Arg3new17h7ed28ed0fae70edeE(local_5c0,&DAT_0011d6ae,2);
  _ZN12clap_builder7builder3arg3Arg4long17h0165ed5c4cae0fa6E(&local_ae8,local_5c0,&DAT_0011d6ae,2);
  _ZN12clap_builder7builder3arg3Arg4help17h3a366a47e26ba8d4E
            (local_5c0,&local_ae8,&DAT_0011d6b0,0x28);
  _ZN12clap_builder7builder3arg3Arg6action17he7a7971366893695E(&local_ae8,local_5c0,2);
  _ZN12clap_builder7builder7command7Command3arg17h2a205b0c3e684785E(local_5c0,local_888,&local_ae8);
                    /* try { // try from 001f4ccc to 001f4d34 has its CatchHandler @ 001f55ef */
  _ZN12clap_builder7builder3arg3Arg3new17h7ed28ed0fae70edeE(local_888,&DAT_0011d6d8,0xf);
  _ZN12clap_builder7builder3arg3Arg5short17h37d14ffe681ddd9fE(&local_ae8,local_888,0x78);
  _ZN12clap_builder7builder3arg3Arg4long17h0165ed5c4cae0fa6E(local_888,&local_ae8,&DAT_0011d6d8,0xf)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17h3a366a47e26ba8d4E
            (&local_ae8,local_888,&DAT_0011d6e7,0x2a);
  _ZN12clap_builder7builder3arg3Arg6action17he7a7971366893695E(&local_268,&local_ae8,2);
  _ZN12clap_builder7builder7command7Command3arg17h2a205b0c3e684785E(local_888,local_5c0,&local_268);
                    /* try { // try from 001f4d65 to 001f4ddd has its CatchHandler @ 001f57bd */
  _ZN12clap_builder7builder3arg3Arg3new17h7ed28ed0fae70edeE(local_5c0,&DAT_0011d711,9);
  _ZN12clap_builder7builder3arg3Arg5short17h37d14ffe681ddd9fE(&local_ae8,local_5c0,0x74);
  _ZN12clap_builder7builder3arg3Arg4long17h0165ed5c4cae0fa6E(local_5c0,&local_ae8,&DAT_0011d711,9);
  _ZN12clap_builder7builder3arg3Arg10value_name17hb482852006cd427bE(&local_ae8,local_5c0,"SIZE",4);
  _ZN12clap_builder7builder3arg3Arg8num_args17h0c0d87da7d7ac489E(local_5c0,&local_ae8);
  (*(code *)PTR_memcpy_0028a2d8)(&local_ae8,local_5c0,0x248);
  local_8a0 = local_378 | 0x20;
  local_89c = local_374;
                    /* try { // try from 001f4e16 to 001f4e31 has its CatchHandler @ 001f57bd */
  _ZN12clap_builder7builder3arg3Arg4help17h3a366a47e26ba8d4E
            (&local_268,&local_ae8,&DAT_0011d71a,0x57);
  _ZN12clap_builder7builder7command7Command3arg17h2a205b0c3e684785E(local_5c0,local_888,&local_268);
                    /* try { // try from 001f4e4f to 001f4eb7 has its CatchHandler @ 001f55da */
  _ZN12clap_builder7builder3arg3Arg3new17h7ed28ed0fae70edeE(local_888,&DAT_0011cee3,7);
  _ZN12clap_builder7builder3arg3Arg5short17h37d14ffe681ddd9fE(&local_ae8,local_888,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17h0165ed5c4cae0fa6E(local_888,&local_ae8,&DAT_0011cee3,7);
  _ZN12clap_builder7builder3arg3Arg4help17h3a366a47e26ba8d4E
            (&local_ae8,local_888,&DAT_0011d771,0x32);
  _ZN12clap_builder7builder3arg3Arg6action17he7a7971366893695E(&local_268,&local_ae8,2);
  _ZN12clap_builder7builder7command7Command3arg17h2a205b0c3e684785E(local_888,local_5c0,&local_268);
                    /* try { // try from 001f4ee8 to 001f4f54 has its CatchHandler @ 001f572a */
  _ZN12clap_builder7builder3arg3Arg3new17h7ed28ed0fae70edeE(local_5c0,&DAT_0011cebf,7);
  _ZN12clap_builder7builder3arg3Arg4long17h0165ed5c4cae0fa6E(&local_ae8,local_5c0,&DAT_0011cebf,7);
  _ZN12clap_builder7builder3arg3Arg10value_name17hb482852006cd427bE
            (local_5c0,&local_ae8,&DAT_0011d7a3,7);
  _ZN12clap_builder7builder3arg3Arg4help17h3a366a47e26ba8d4E
            (&local_ae8,local_5c0,&DAT_00112c98,0x20);
  _ZN12clap_builder7builder3arg3Arg6action17he7a7971366893695E(&local_268,&local_ae8,1);
  _ZN12clap_builder7builder7command7Command3arg17h2a205b0c3e684785E(local_5c0,local_888,&local_268);
                    /* try { // try from 001f4f85 to 001f501e has its CatchHandler @ 001f57ab */
  _ZN12clap_builder7builder3arg3Arg3new17h7ed28ed0fae70edeE(local_888,&DAT_0011ceb3,0xc);
  _ZN12clap_builder7builder3arg3Arg5short17h37d14ffe681ddd9fE(&local_ae8,local_888,0x58);
  _ZN12clap_builder7builder3arg3Arg4long17h0165ed5c4cae0fa6E(local_888,&local_ae8,&DAT_0011ceb3,0xc)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_name17hb482852006cd427bE
            (&local_ae8,local_888,&DAT_0010f630,4);
  _ZN12clap_builder7builder3arg3Arg10value_hint17haf2f2a709c5fadceE(local_888,&local_ae8,3);
  _ZN12clap_builder7builder3arg3Arg4help17h3a366a47e26ba8d4E
            (&local_ae8,local_888,&DAT_0011d7aa,0x2c);
  _ZN12clap_builder7builder3arg3Arg6action17he7a7971366893695E(&local_268,&local_ae8,1);
  _ZN12clap_builder7builder7command7Command3arg17h2a205b0c3e684785E(local_888,local_5c0,&local_268);
                    /* try { // try from 001f504f to 001f50d0 has its CatchHandler @ 001f5799 */
  _ZN12clap_builder7builder3arg3Arg3new17h7ed28ed0fae70edeE(local_5c0,&DAT_0011d7d6,0xb);
  _ZN12clap_builder7builder3arg3Arg4long17h0165ed5c4cae0fa6E(&local_ae8,local_5c0,&DAT_0011d7d6,0xb)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_name17hb482852006cd427bE
            (local_5c0,&local_ae8,&DAT_0010f630,4);
  _ZN12clap_builder7builder3arg3Arg10value_hint17haf2f2a709c5fadceE(&local_ae8,local_5c0,3);
  _ZN12clap_builder7builder3arg3Arg4help17h3a366a47e26ba8d4E
            (local_5c0,&local_ae8,&DAT_0011d7e1,0x7b);
  _ZN12clap_builder7builder3arg3Arg6action17he7a7971366893695E(&local_ae8,local_5c0,1);
  _ZN12clap_builder7builder7command7Command3arg17h2a205b0c3e684785E(local_5c0,local_888,&local_ae8);
                    /* try { // try from 001f5101 to 001f5151 has its CatchHandler @ 001f5787 */
  _ZN12clap_builder7builder3arg3Arg3new17h7ed28ed0fae70edeE(local_888,&DAT_0010f5c4,4);
  _ZN12clap_builder7builder3arg3Arg4long17h0165ed5c4cae0fa6E(&local_ae8,local_888,&DAT_0010f5c4,4);
  _ZN12clap_builder7builder3arg3Arg10value_name17hb482852006cd427bE
            (local_888,&local_ae8,&DAT_0010f638,4);
  (*(code *)PTR_memcpy_0028a2d8)(&local_ae8,local_888,0x248);
  local_8a0 = local_640 | 0x80;
  local_89c = local_63c;
                    /* try { // try from 001f518c to 001f519b has its CatchHandler @ 001f5787 */
  _ZN12clap_builder7builder3arg3Arg8num_args17he1e39bae9b905f29E(local_888,&local_ae8);
  local_ab8 = &DAT_0011cf6f;
  uStack_ab0 = 5;
  uStack_ad0 = 0x8000000000000000;
  local_ae8 = 0;
  uStack_ae0 = 8;
  local_ad8 = 0;
  local_aa8 = local_aa8 & 0xffffffffffffff00;
                    /* try { // try from 001f51ec to 001f5228 has its CatchHandler @ 001f55c5 */
  _ZN12clap_builder7builder14possible_value13PossibleValue5alias17hda18b201abad5f4aE
            (&local_268,&local_ae8,&DAT_0011d85c,6);
  _ZN12clap_builder7builder14possible_value13PossibleValue5alias17hda18b201abad5f4aE
            (&local_2f8,&local_268,&DAT_0011d862,3);
  local_ab8 = &DAT_0011cf74;
  uStack_ab0 = 5;
  uStack_ad0 = 0x8000000000000000;
  local_ae8 = 0;
  uStack_ae0 = 8;
  local_ad8 = 0;
  local_aa8 = local_aa8 & 0xffffffffffffff00;
                    /* try { // try from 001f526f to 001f528a has its CatchHandler @ 001f555f */
  _ZN12clap_builder7builder14possible_value13PossibleValue5alias17hda18b201abad5f4aE
            (&local_2b0,&local_ae8,&DAT_0011d865,6);
  local_ab8 = "creation";
  uStack_ab0 = 8;
  uStack_ad0 = 0x8000000000000000;
  local_ae8 = 0;
  uStack_ae0 = 8;
  local_ad8 = 0;
  local_aa8 = local_aa8 & 0xffffffffffffff00;
                    /* try { // try from 001f52d1 to 001f52ec has its CatchHandler @ 001f554d */
  _ZN12clap_builder7builder14possible_value13PossibleValue5alias17hda18b201abad5f4aE
            (&local_268,&local_ae8,&DAT_0011d86b,5);
  local_ae8 = local_2f8;
  uStack_ae0 = uStack_2f0;
  local_ad8 = local_2e8;
  uStack_ad0 = uStack_2e0;
  local_ac8 = local_2d8;
  uStack_ac0 = uStack_2d0;
  local_ab8 = (char *)local_2c8;
  uStack_ab0 = uStack_2c0;
  local_aa8 = local_2b8;
  local_aa0 = local_2b0;
  uStack_a98 = uStack_2a8;
  local_a90 = local_2a0;
  uStack_a88 = uStack_298;
  local_a80 = local_290;
  uStack_a78 = uStack_288;
  local_a70 = local_280;
  uStack_a68 = uStack_278;
  local_a60 = local_270;
  local_a18 = local_228;
  local_a28 = local_238;
  uStack_a24 = uStack_234;
  uStack_a20 = uStack_230;
  uStack_a1c = uStack_22c;
  local_a38 = local_248;
  uStack_a34 = uStack_244;
  uStack_a30 = uStack_240;
  uStack_a2c = uStack_23c;
  local_a48 = local_258;
  uStack_a44 = uStack_254;
  uStack_a40 = uStack_250;
  uStack_a3c = uStack_24c;
  local_a58 = local_268;
  uStack_a54 = uStack_264;
  uStack_a50 = uStack_260;
  uStack_a4c = uStack_25c;
                    /* try { // try from 001f53c1 to 001f53d0 has its CatchHandler @ 001f55c5 */
  _ZN107__LT_uucore__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17hf68df665b10f09a2E
            (&local_268,&local_ae8);
                    /* try { // try from 001f53d1 to 001f53e8 has its CatchHandler @ 001f5548 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17hdecf3bfdbea0147cE
            (&local_ae8,local_888,&local_268);
                    /* try { // try from 001f53e9 to 001f5404 has its CatchHandler @ 001f5787 */
  _ZN12clap_builder7builder3arg3Arg4help17h3a366a47e26ba8d4E
            (&local_268,&local_ae8,&DAT_0011d870,0xd5);
  _ZN12clap_builder7builder7command7Command3arg17h2a205b0c3e684785E(local_888,local_5c0,&local_268);
                    /* try { // try from 001f5422 to 001f548e has its CatchHandler @ 001f5715 */
  _ZN12clap_builder7builder3arg3Arg3new17h7ed28ed0fae70edeE(local_5c0,&DAT_0011d945,10);
  _ZN12clap_builder7builder3arg3Arg4long17h0165ed5c4cae0fa6E(&local_ae8,local_5c0,&DAT_0011d945,10);
  _ZN12clap_builder7builder3arg3Arg10value_name17hb482852006cd427bE
            (local_5c0,&local_ae8,&DAT_0011d94f,5);
  _ZN12clap_builder7builder3arg3Arg4help17h3a366a47e26ba8d4E
            (&local_ae8,local_5c0,&DAT_0011d954,0x60);
  _ZN12clap_builder7builder7command7Command3arg17h2a205b0c3e684785E(local_5c0,local_888,&local_ae8);
                    /* try { // try from 001f54a7 to 001f54bf has its CatchHandler @ 001f5586 */
  _ZN12clap_builder7builder3arg3Arg3new17h7ed28ed0fae70edeE(local_888,&DAT_0010f630,4);
  (*(code *)PTR_memcpy_0028a2d8)(&local_ae8,local_888,0x248);
  local_8a0 = local_640 | 4;
  local_89c = local_63c;
                    /* try { // try from 001f54f8 to 001f550c has its CatchHandler @ 001f5586 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17haf2f2a709c5fadceE(local_888,&local_ae8,2);
  _ZN12clap_builder7builder3arg3Arg6action17he7a7971366893695E(&local_ae8,local_888,1);
  _ZN12clap_builder7builder7command7Command3arg17h2a205b0c3e684785E(param_1,local_5c0,&local_ae8);
  return param_1;
}