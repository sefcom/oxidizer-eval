undefined8 _ZN8uu_mknod6uu_app17hee70adc3caf76ce8E(undefined8 param_1)

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
  undefined8 local_2a0 [80];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001ea648)();
  _ZN12clap_builder7builder7command7Command3new17h798e8f5589914cd1E(local_830,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h46a133896b236d86E(local_568,local_830);
                    /* try { // try from 0015a1fa to 0015a210 has its CatchHandler @ 0015a79a */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001ea7d8)
            (local_ab0,"{} [OPTION]... NAME TYPE [MAJOR MINOR]",0x26);
  _ZN12clap_builder7builder7command7Command14override_usage17he64daacbb0f28d7bE
            (local_830,local_568,local_ab0);
  _ZN12clap_builder7builder7command7Command10after_help17ha08818f55e995f35E(local_568,local_830);
  _ZN12clap_builder7builder7command7Command5about17h1984dbc4754ccff9E(local_830,local_568);
  (*(code *)PTR_memcpy_001ea610)(local_568,local_830,700);
  local_2ac = local_574 | 0x8000000080;
  local_2a4 = local_56c;
  _ZN12clap_builder7builder3arg3Arg3new17h7fb456389be2838aE(local_830,"mode",4);
  _ZN12clap_builder7builder3arg3Arg5short17h2a19e4e47b869cc2E(local_ab0,local_830,0x6d);
  _ZN12clap_builder7builder3arg3Arg4long17hed845466523ffc14E(local_830,local_ab0,"mode",4);
                    /* try { // try from 0015a2e1 to 0015a317 has its CatchHandler @ 0015a7d0 */
  _ZN12clap_builder7builder3arg3Arg10value_name17hef7850b820aea9cdE
            (local_ab0,local_830,&DAT_00117abc,4);
  _ZN12clap_builder7builder3arg3Arg4help17hc128733667074f60E
            (local_2a0,local_ab0,"set file permission bits to MODE, not a=rw - umask",0x32);
  _ZN12clap_builder7builder7command7Command3arg17h20f370cdfd64909dE(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h7fb456389be2838aE(local_568,&DAT_00117aa0,4);
                    /* try { // try from 0015a351 to 0015a387 has its CatchHandler @ 0015a806 */
  _ZN12clap_builder7builder3arg3Arg10value_name17hef7850b820aea9cdE
            (local_ab0,local_568,&DAT_00117a84,4);
  _ZN12clap_builder7builder3arg3Arg4help17hc128733667074f60E
            (local_568,local_ab0,"name of the new file",0x14);
  (*(code *)PTR_memcpy_001ea610)(local_ab0,local_568,0x278);
  local_838 = local_2f0 | 1;
  local_834 = local_2ec;
                    /* try { // try from 0015a3c2 to 0015a3d1 has its CatchHandler @ 0015a806 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17hbccc3529f708f314E(local_2a0,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17h20f370cdfd64909dE(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h7fb456389be2838aE(local_830,&DAT_00117aa8,4);
                    /* try { // try from 0015a40b to 0015a441 has its CatchHandler @ 0015a7f4 */
  _ZN12clap_builder7builder3arg3Arg10value_name17hef7850b820aea9cdE
            (local_ab0,local_830,&DAT_00117ab4,4);
  _ZN12clap_builder7builder3arg3Arg4help17hc128733667074f60E
            (local_830,local_ab0,"type of the new file (b, c, u or p)",0x23);
  (*(code *)PTR_memcpy_001ea610)(local_ab0,local_830,0x278);
  local_838 = local_5b8 | 1;
  local_834 = local_5b4;
                    /* try { // try from 0015a47c to 0015a48b has its CatchHandler @ 0015a7f4 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h731231a26ed22bc7E(local_2a0,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17h20f370cdfd64909dE(local_830,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h7fb456389be2838aE(local_568,"major",5);
                    /* try { // try from 0015a4c8 to 0015a4fa has its CatchHandler @ 0015a7be */
  _ZN12clap_builder7builder3arg3Arg10value_name17hef7850b820aea9cdE(local_ab0,local_568,"major",5);
  _ZN12clap_builder7builder3arg3Arg4help17hc128733667074f60E
            (local_568,local_ab0,"major file type",0xf);
                    /* try { // try from 0015a4fb to 0015a508 has its CatchHandler @ 0015a788 */
  (*(code *)
    PTR__ZN79__LT_u64_u20_as_u20_clap_builder__builder__value_parser__ValueParserFactory_GT_12value_parser17hc43a5cf9c5a78de9E_001ea7e0
  )(local_2a0);
                    /* try { // try from 0015a509 to 0015a522 has its CatchHandler @ 0015a786 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17haea02f2eaf28966dE(local_ab0,local_568,local_2a0)
  ;
  _ZN12clap_builder7builder7command7Command3arg17h20f370cdfd64909dE(local_568,local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h7fb456389be2838aE(local_830,"minor",5);
                    /* try { // try from 0015a55c to 0015a58e has its CatchHandler @ 0015a7ac */
  _ZN12clap_builder7builder3arg3Arg10value_name17hef7850b820aea9cdE(local_ab0,local_830,"minor",5);
  _ZN12clap_builder7builder3arg3Arg4help17hc128733667074f60E
            (local_830,local_ab0,"minor file type",0xf);
                    /* try { // try from 0015a58f to 0015a59c has its CatchHandler @ 0015a774 */
  (*(code *)
    PTR__ZN79__LT_u64_u20_as_u20_clap_builder__builder__value_parser__ValueParserFactory_GT_12value_parser17hc43a5cf9c5a78de9E_001ea7e0
  )(local_2a0);
                    /* try { // try from 0015a59d to 0015a5b6 has its CatchHandler @ 0015a772 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17haea02f2eaf28966dE(local_ab0,local_830,local_2a0)
  ;
  _ZN12clap_builder7builder7command7Command3arg17h20f370cdfd64909dE(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h7fb456389be2838aE(local_568,"z",1);
  _ZN12clap_builder7builder3arg3Arg5short17h2a19e4e47b869cc2E(local_ab0,local_568,0x5a);
                    /* try { // try from 0015a602 to 0015a61d has its CatchHandler @ 0015a75d */
  _ZN12clap_builder7builder3arg3Arg4help17hc128733667074f60E
            (local_568,local_ab0,
             "set SELinux security context of each created directory to the default type",0x4a);
  _ZN12clap_builder7builder3arg3Arg6action17haf1b539228126a88E(local_ab0,local_568);
  _ZN12clap_builder7builder7command7Command3arg17h20f370cdfd64909dE(local_568,local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17h7fb456389be2838aE(local_830,"context",7);
  _ZN12clap_builder7builder3arg3Arg4long17hed845466523ffc14E(local_ab0,local_830,"context",7);
                    /* try { // try from 0015a682 to 0015a6c3 has its CatchHandler @ 0015a7e2 */
  _ZN12clap_builder7builder3arg3Arg10value_name17hef7850b820aea9cdE(local_830,local_ab0,"CTX",3);
  local_2a0[0] = 1;
  _ZN12clap_builder7builder3arg3Arg12value_parser17habbd166a826087b1E(local_ab0,local_830,local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg8num_args17h6bc20e6b44061eecE(local_830,local_ab0,0,1);
  (*(code *)PTR_memcpy_001ea610)(local_ab0,local_830,0x278);
  local_838 = local_5b8 | 0x80;
  local_834 = local_5b4;
                    /* try { // try from 0015a717 to 0015a732 has its CatchHandler @ 0015a7e2 */
  _ZN12clap_builder7builder3arg3Arg4help17hc128733667074f60E
            (local_830,local_ab0,
             "like -Z, or if CTX is specified then set the SELinux or SMACK security context to CTX"
             ,0x55);
  _ZN12clap_builder7builder7command7Command3arg17h20f370cdfd64909dE(param_1,local_568,local_830);
  return param_1;
}