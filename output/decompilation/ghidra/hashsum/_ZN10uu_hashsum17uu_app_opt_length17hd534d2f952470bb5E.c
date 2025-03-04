void _ZN10uu_hashsum17uu_app_opt_length17hd534d2f952470bb5E(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_790;
  undefined8 local_788;
  undefined *local_780;
  undefined local_778 [592];
  undefined local_528 [592];
  undefined local_2d8 [712];
  
  (*(code *)PTR_memcpy_0047f5e0)(local_2d8,param_2,0x2c8);
                    /* try { // try from 002db380 to 002db3b3 has its CatchHandler @ 002db484 */
  _ZN12clap_builder7builder3arg3Arg3new17h3b16b83c680bff0dE(local_778,"length",6);
  _ZN12clap_builder7builder3arg3Arg4long17h5908e9ea86bf7a3bE(local_528,local_778,"length",6);
                    /* try { // try from 002db3b4 to 002db3b8 has its CatchHandler @ 002db472 */
  local_788 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h335045434651419aE();
  local_790 = 4;
  local_780 = &DAT_0043ec80;
                    /* try { // try from 002db3d3 to 002db3e9 has its CatchHandler @ 002db470 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17he5d3a65a49706accE
            (local_778,local_528,&local_790);
  _ZN12clap_builder7builder3arg3Arg5short17hfc41e05dee6976e2E(local_528,local_778,0x6c);
                    /* try { // try from 002db404 to 002db43a has its CatchHandler @ 002db484 */
  _ZN12clap_builder7builder3arg3Arg4help17h7220c48f981ef5b5E
            (local_778,local_528,
             "digest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8"
             ,99);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hcce032071395fcecE
            (local_528,local_778,"length",6);
  _ZN12clap_builder7builder3arg3Arg6action17he04288933a5d3869E(local_778,local_528,0);
  _ZN12clap_builder7builder7command7Command3arg17h001132be747f46b6E(param_1,local_2d8,local_778);
  return;
}