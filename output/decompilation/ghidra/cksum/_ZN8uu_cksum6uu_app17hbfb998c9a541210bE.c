undefined8 _ZN8uu_cksum6uu_app17hbfb998c9a541210bE(undefined8 param_1)

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
  undefined8 local_268;
  undefined8 local_260;
  undefined *local_258;
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17hc4791226d997769fE(local_7f8,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h6af4f4fec42e0bfcE
            (local_530,local_7f8,&DAT_00165d7e,6);
  _ZN12clap_builder7builder7command7Command5about17h465eee02d36c0f6bE
            (local_7f8,local_530,&DAT_00155680,0x20);
                    /* try { // try from 002e2693 to 002e26a7 has its CatchHandler @ 002e316c */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(auStack_a48,&DAT_00165d84,0x16);
  _ZN12clap_builder7builder7command7Command14override_usage17h7dcdf9dabc732f96E
            (local_530,local_7f8,auStack_a48);
  (*(code *)PTR_memcpy_004960a0)(local_7f8,local_530,700);
  local_53c = local_274 | 0x8800000088;
  local_534 = local_26c;
                    /* try { // try from 002e2701 to 002e2719 has its CatchHandler @ 002e324d */
  _ZN12clap_builder7builder3arg3Arg3new17hbda368a754bfeecaE(local_530,"filemode",4);
  (*(code *)PTR_memcpy_004960a0)(auStack_a48,local_530,0x248);
  local_800 = local_2e8 | 4;
  local_7fc = local_2e4;
  _ZN12clap_builder7builder3arg3Arg6action17h32c9b645fd3f4279E(local_530,auStack_a48,1);
  local_268 = 2;
                    /* try { // try from 002e2776 to 002e279d has its CatchHandler @ 002e324d */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h2cb6f9793451f7a9E
            (auStack_a48,local_530,&local_268);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h307fea4c41f31510E(&local_268,auStack_a48,3);
  _ZN12clap_builder7builder7command7Command3arg17h5efeed937d3b5e7dE(local_530,local_7f8,&local_268);
                    /* try { // try from 002e27bb to 002e282e has its CatchHandler @ 002e32a7 */
  _ZN12clap_builder7builder3arg3Arg3new17hbda368a754bfeecaE(local_7f8,&DAT_00165d9a,9);
  _ZN12clap_builder7builder3arg3Arg4long17hafaa49ca8618007eE(auStack_a48,local_7f8,&DAT_00165d9a,9);
  _ZN12clap_builder7builder3arg3Arg5short17h76f2a3ae4a7efd56E(local_7f8,auStack_a48,0x61);
  _ZN12clap_builder7builder3arg3Arg4help17h44dbe5bb7ba0ac97E
            (auStack_a48,local_7f8,&DAT_00165da3,0x2f);
  _ZN12clap_builder7builder3arg3Arg10value_name17hb6cf57d750a55842E(local_7f8,auStack_a48);
  (*(code *)PTR_memcpy_004960a0)(&local_268,&PTR_s_sysv_00455678,0xf0);
                    /* try { // try from 002e284c to 002e285e has its CatchHandler @ 002e32a7 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h461944c7bd2494a6E
            (auStack_a48,local_7f8,&local_268);
  _ZN12clap_builder7builder7command7Command3arg17h5efeed937d3b5e7dE(local_7f8,local_530,auStack_a48)
  ;
                    /* try { // try from 002e2877 to 002e28fb has its CatchHandler @ 002e3295 */
  _ZN12clap_builder7builder3arg3Arg3new17hbda368a754bfeecaE(local_530,"untagged",8);
  _ZN12clap_builder7builder3arg3Arg4long17hafaa49ca8618007eE(auStack_a48,local_530,"untagged",8);
  _ZN12clap_builder7builder3arg3Arg4help17h44dbe5bb7ba0ac97E
            (local_530,auStack_a48,&DAT_00165e0c,0x35);
  _ZN12clap_builder7builder3arg3Arg6action17h32c9b645fd3f4279E(auStack_a48,local_530,2);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hed4a0bb1cdf80f12E
            (&local_268,auStack_a48,&DAT_00165d75,3);
  _ZN12clap_builder7builder7command7Command3arg17h5efeed937d3b5e7dE(local_530,local_7f8,&local_268);
                    /* try { // try from 002e2919 to 002e299d has its CatchHandler @ 002e3283 */
  _ZN12clap_builder7builder3arg3Arg3new17hbda368a754bfeecaE(local_7f8,&DAT_00165d75,3);
  _ZN12clap_builder7builder3arg3Arg4long17hafaa49ca8618007eE(auStack_a48,local_7f8,&DAT_00165d75,3);
  _ZN12clap_builder7builder3arg3Arg4help17h44dbe5bb7ba0ac97E
            (local_7f8,auStack_a48,&DAT_00165e41,0x36);
  _ZN12clap_builder7builder3arg3Arg6action17h32c9b645fd3f4279E(auStack_a48,local_7f8,2);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hed4a0bb1cdf80f12E
            (&local_268,auStack_a48,"untagged",8);
  _ZN12clap_builder7builder7command7Command3arg17h5efeed937d3b5e7dE(local_7f8,local_530,&local_268);
                    /* try { // try from 002e29bb to 002e29ef has its CatchHandler @ 002e323b */
  _ZN12clap_builder7builder3arg3Arg3new17hbda368a754bfeecaE(local_530,&DAT_00165e77,6);
  _ZN12clap_builder7builder3arg3Arg4long17hafaa49ca8618007eE(auStack_a48,local_530,&DAT_00165e77,6);
                    /* try { // try from 002e29f0 to 002e29f4 has its CatchHandler @ 002e315c */
  local_260 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1b8fa5609220b983E();
  local_268 = 4;
  local_258 = &DAT_00455768;
                    /* try { // try from 002e2a18 to 002e2a2f has its CatchHandler @ 002e3157 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h0c2b0b6f80eb2588E
            (local_530,auStack_a48,&local_268);
  _ZN12clap_builder7builder3arg3Arg5short17h76f2a3ae4a7efd56E(auStack_a48,local_530,0x6c);
                    /* try { // try from 002e2a48 to 002e2a63 has its CatchHandler @ 002e323b */
  _ZN12clap_builder7builder3arg3Arg4help17h44dbe5bb7ba0ac97E(local_530,auStack_a48,&DAT_00165e7d,99)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h32c9b645fd3f4279E(auStack_a48,local_530,0);
  _ZN12clap_builder7builder7command7Command3arg17h5efeed937d3b5e7dE(local_530,local_7f8,auStack_a48)
  ;
                    /* try { // try from 002e2a91 to 002e2ae1 has its CatchHandler @ 002e3229 */
  _ZN12clap_builder7builder3arg3Arg3new17hbda368a754bfeecaE(local_7f8,&DAT_00165ee0,3);
  _ZN12clap_builder7builder3arg3Arg4long17hafaa49ca8618007eE(auStack_a48,local_7f8,&DAT_00165ee0,3);
  _ZN12clap_builder7builder3arg3Arg4help17h44dbe5bb7ba0ac97E
            (local_7f8,auStack_a48,&DAT_00165ee3,0x29);
  _ZN12clap_builder7builder3arg3Arg6action17h32c9b645fd3f4279E(auStack_a48,local_7f8,2);
  _ZN12clap_builder7builder7command7Command3arg17h5efeed937d3b5e7dE(local_7f8,local_530,auStack_a48)
  ;
                    /* try { // try from 002e2b12 to 002e2b62 has its CatchHandler @ 002e3214 */
  _ZN12clap_builder7builder3arg3Arg3new17hbda368a754bfeecaE(local_530,&DAT_00165f0c,6);
  _ZN12clap_builder7builder3arg3Arg4long17hafaa49ca8618007eE(auStack_a48,local_530,&DAT_00165f0c,6);
  _ZN12clap_builder7builder3arg3Arg4help17h44dbe5bb7ba0ac97E
            (local_530,auStack_a48,&DAT_00165f12,0x35);
  _ZN12clap_builder7builder3arg3Arg6action17h32c9b645fd3f4279E(auStack_a48,local_530,2);
  _ZN12clap_builder7builder7command7Command3arg17h5efeed937d3b5e7dE(local_530,local_7f8,auStack_a48)
  ;
                    /* try { // try from 002e2b93 to 002e2c2a has its CatchHandler @ 002e3271 */
  _ZN12clap_builder7builder3arg3Arg3new17hbda368a754bfeecaE(local_7f8,&DAT_00165f47,5);
  _ZN12clap_builder7builder3arg3Arg5short17h76f2a3ae4a7efd56E(auStack_a48,local_7f8,99);
  _ZN12clap_builder7builder3arg3Arg4long17hafaa49ca8618007eE(local_7f8,auStack_a48,&DAT_00165f47,5);
  _ZN12clap_builder7builder3arg3Arg4help17h44dbe5bb7ba0ac97E
            (auStack_a48,local_7f8,&DAT_00165f4c,0x2b);
  _ZN12clap_builder7builder3arg3Arg6action17h32c9b645fd3f4279E(local_7f8,auStack_a48,2);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h674f2147962b758eE
            (auStack_a48,local_7f8,&DAT_00165d75,3);
  _ZN12clap_builder7builder7command7Command3arg17h5efeed937d3b5e7dE(local_7f8,local_530,auStack_a48)
  ;
                    /* try { // try from 002e2c43 to 002e2cc7 has its CatchHandler @ 002e325f */
  _ZN12clap_builder7builder3arg3Arg3new17hbda368a754bfeecaE(local_530,&DAT_00165f77,6);
  _ZN12clap_builder7builder3arg3Arg4long17hafaa49ca8618007eE(auStack_a48,local_530,&DAT_00165f77,6);
  _ZN12clap_builder7builder3arg3Arg4help17h44dbe5bb7ba0ac97E
            (local_530,auStack_a48,&DAT_00165f7d,0x25);
  _ZN12clap_builder7builder3arg3Arg6action17h32c9b645fd3f4279E(auStack_a48,local_530,2);
  _ZN12clap_builder7builder3arg3Arg14conflicts_with17h674f2147962b758eE
            (&local_268,auStack_a48,&DAT_00165ee0,3);
  _ZN12clap_builder7builder7command7Command3arg17h5efeed937d3b5e7dE(local_530,local_7f8,&local_268);
                    /* try { // try from 002e2ce5 to 002e2d19 has its CatchHandler @ 002e31ff */
  _ZN12clap_builder7builder3arg3Arg3new17hbda368a754bfeecaE(local_7f8,"text",4);
  _ZN12clap_builder7builder3arg3Arg4long17hafaa49ca8618007eE(auStack_a48,local_7f8,"text",4);
  _ZN12clap_builder7builder3arg3Arg5short17h76f2a3ae4a7efd56E(local_7f8,auStack_a48,0x74);
  (*(code *)PTR_memcpy_004960a0)(auStack_a48,local_7f8,0x248);
  local_800 = local_5b0 | 4;
  local_7fc = local_5ac;
                    /* try { // try from 002e2d65 to 002e2d80 has its CatchHandler @ 002e31ff */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hed4a0bb1cdf80f12E
            (local_7f8,auStack_a48,&DAT_00165d78,6);
  _ZN12clap_builder7builder3arg3Arg6action17h32c9b645fd3f4279E(auStack_a48,local_7f8,2);
  _ZN12clap_builder7builder7command7Command3arg17h5efeed937d3b5e7dE(local_7f8,local_530,auStack_a48)
  ;
                    /* try { // try from 002e2db1 to 002e2de5 has its CatchHandler @ 002e31ea */
  _ZN12clap_builder7builder3arg3Arg3new17hbda368a754bfeecaE(local_530,&DAT_00165d78,6);
  _ZN12clap_builder7builder3arg3Arg4long17hafaa49ca8618007eE(auStack_a48,local_530,&DAT_00165d78,6);
  _ZN12clap_builder7builder3arg3Arg5short17h76f2a3ae4a7efd56E(local_530,auStack_a48,0x62);
  (*(code *)PTR_memcpy_004960a0)(auStack_a48,local_530,0x248);
  local_800 = local_2e8 | 4;
  local_7fc = local_2e4;
                    /* try { // try from 002e2e31 to 002e2e4c has its CatchHandler @ 002e31ea */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hed4a0bb1cdf80f12E
            (local_530,auStack_a48,"text",4);
  _ZN12clap_builder7builder3arg3Arg6action17h32c9b645fd3f4279E(auStack_a48,local_530,2);
  _ZN12clap_builder7builder7command7Command3arg17h5efeed937d3b5e7dE(local_530,local_7f8,auStack_a48)
  ;
                    /* try { // try from 002e2e7d to 002e2ee5 has its CatchHandler @ 002e31d5 */
  _ZN12clap_builder7builder3arg3Arg3new17hbda368a754bfeecaE(local_7f8,"warnZeroV",4);
  _ZN12clap_builder7builder3arg3Arg5short17h76f2a3ae4a7efd56E(auStack_a48,local_7f8,0x77);
  _ZN12clap_builder7builder3arg3Arg4long17hafaa49ca8618007eE(local_7f8,auStack_a48,"warnZeroV",4);
  _ZN12clap_builder7builder3arg3Arg4help17h44dbe5bb7ba0ac97E
            (auStack_a48,local_7f8,&DAT_00165fa2,0x2e);
  _ZN12clap_builder7builder3arg3Arg6action17h32c9b645fd3f4279E(&local_268,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17h5efeed937d3b5e7dE(local_7f8,local_530,&local_268);
                    /* try { // try from 002e2f16 to 002e2f66 has its CatchHandler @ 002e31c0 */
  _ZN12clap_builder7builder3arg3Arg3new17hbda368a754bfeecaE(local_530,&DAT_00165fd0,6);
  _ZN12clap_builder7builder3arg3Arg4long17hafaa49ca8618007eE(auStack_a48,local_530,&DAT_00165fd0,6);
  _ZN12clap_builder7builder3arg3Arg4help17h44dbe5bb7ba0ac97E
            (local_530,auStack_a48,&DAT_00165fd6,0x30);
  _ZN12clap_builder7builder3arg3Arg6action17h32c9b645fd3f4279E(auStack_a48,local_530,2);
  _ZN12clap_builder7builder7command7Command3arg17h5efeed937d3b5e7dE(local_530,local_7f8,auStack_a48)
  ;
                    /* try { // try from 002e2f97 to 002e2fe7 has its CatchHandler @ 002e31ab */
  _ZN12clap_builder7builder3arg3Arg3new17hbda368a754bfeecaE(local_7f8,&DAT_00166006,5);
  _ZN12clap_builder7builder3arg3Arg4long17hafaa49ca8618007eE(auStack_a48,local_7f8,&DAT_00166006,5);
  _ZN12clap_builder7builder3arg3Arg4help17h44dbe5bb7ba0ac97E
            (local_7f8,auStack_a48,&DAT_0016600b,0x32);
  _ZN12clap_builder7builder3arg3Arg6action17h32c9b645fd3f4279E(auStack_a48,local_7f8,2);
  _ZN12clap_builder7builder7command7Command3arg17h5efeed937d3b5e7dE(local_7f8,local_530,auStack_a48)
  ;
                    /* try { // try from 002e3018 to 002e3068 has its CatchHandler @ 002e3196 */
  _ZN12clap_builder7builder3arg3Arg3new17hbda368a754bfeecaE(local_530,&DAT_0016603d,0xe);
  _ZN12clap_builder7builder3arg3Arg4long17hafaa49ca8618007eE
            (auStack_a48,local_530,&DAT_0016603d,0xe);
  _ZN12clap_builder7builder3arg3Arg4help17h44dbe5bb7ba0ac97E
            (local_530,auStack_a48,&DAT_0016604b,0x2d);
  _ZN12clap_builder7builder3arg3Arg6action17h32c9b645fd3f4279E(auStack_a48,local_530,2);
  _ZN12clap_builder7builder7command7Command3arg17h5efeed937d3b5e7dE(local_530,local_7f8,auStack_a48)
  ;
                    /* try { // try from 002e3099 to 002e30fc has its CatchHandler @ 002e3181 */
  _ZN12clap_builder7builder3arg3Arg3new17hbda368a754bfeecaE(local_7f8,"zero",4);
  _ZN12clap_builder7builder3arg3Arg4long17hafaa49ca8618007eE(auStack_a48,local_7f8,"zero",4);
  _ZN12clap_builder7builder3arg3Arg5short17h76f2a3ae4a7efd56E(local_7f8,auStack_a48,0x7a);
  _ZN12clap_builder7builder3arg3Arg4help17h44dbe5bb7ba0ac97E
            (auStack_a48,local_7f8,&DAT_00166078,0x4b);
  _ZN12clap_builder7builder3arg3Arg6action17h32c9b645fd3f4279E(&local_268,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17h5efeed937d3b5e7dE(local_7f8,local_530,&local_268);
  _ZN12clap_builder7builder7command7Command10after_help17h1bf004b88ccc38aaE
            (param_1,local_7f8,&DAT_001660c3,0x1cb);
  return param_1;
}