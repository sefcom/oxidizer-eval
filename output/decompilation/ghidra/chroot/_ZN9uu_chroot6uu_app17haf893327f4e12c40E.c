undefined8 _ZN9uu_chroot6uu_app17haf893327f4e12c40E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_ab0 [632];
  uint local_838;
  undefined4 local_834;
  uint local_7f4;
  ulong local_7f0;
  undefined local_7e8 [632];
  uint local_570;
  undefined4 local_56c;
  undefined local_568 [700];
  uint local_2ac;
  ulong local_2a8;
  undefined local_2a0 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00201768)();
  _ZN12clap_builder7builder7command7Command3new17he655d6112b264d2aE(local_568,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hbc345fd020c67bddE(local_ab0,local_568);
  _ZN12clap_builder7builder7command7Command5about17h9695584bad955640E(local_568,local_ab0);
                    /* try { // try from 001670ba to 001670d3 has its CatchHandler @ 00167464 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_002018a0)
            (local_7e8,"{} [OPTION]... NEWROOT [COMMAND [ARG]...]: \n",0x29);
  _ZN12clap_builder7builder7command7Command14override_usage17h9ed9d499548e5fb2E
            (local_ab0,local_568,local_7e8);
  (*(code *)PTR_memcpy_00201528)(local_568,local_ab0,700);
  local_2a8 = local_7f0 | 0x80;
  local_2ac = local_7f4 | 0xa0;
  _ZN12clap_builder7builder3arg3Arg3new17h600b3af57d23d9c0E(local_ab0,"newroot",7);
                    /* try { // try from 00167148 to 0016715c has its CatchHandler @ 00167452 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h1258efaa4f04a1d2E(local_7e8,local_ab0,4);
  (*(code *)PTR_memcpy_00201528)(local_ab0,local_7e8,0x278);
  local_838 = local_570 | 5;
  local_834 = local_56c;
  _ZN12clap_builder7builder3arg3Arg5index17h9e2e0ba4091d6a0fE(local_7e8,local_ab0,1);
  _ZN12clap_builder7builder7command7Command3arg17h04b6d3512805db65E(local_ab0,local_568,local_7e8);
  _ZN12clap_builder7builder3arg3Arg3new17h600b3af57d23d9c0E(local_568,"groups",6);
  _ZN12clap_builder7builder3arg3Arg4long17hd907dc38845f9644E(local_7e8,local_568,"groups",6);
                    /* try { // try from 001671fe to 0016724f has its CatchHandler @ 00167488 */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h1311749084f12761E(local_568,local_7e8);
  _ZN12clap_builder7builder3arg3Arg4help17h4f0c1de7b41ae031E
            (local_7e8,local_568,"Comma-separated list of groups to switch to",0x2b);
  _ZN12clap_builder7builder3arg3Arg10value_name17h3586aa0aa1c465b1E
            (local_2a0,local_7e8,"GROUP1,GROUP2...",0x10);
  _ZN12clap_builder7builder7command7Command3arg17h04b6d3512805db65E(local_568,local_ab0,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h600b3af57d23d9c0E(local_ab0,"userspec",8);
  _ZN12clap_builder7builder3arg3Arg4long17hd907dc38845f9644E(local_7e8,local_ab0,"userspec",8);
                    /* try { // try from 001672a1 to 001672d7 has its CatchHandler @ 00167476 */
  _ZN12clap_builder7builder3arg3Arg4help17h4f0c1de7b41ae031E
            (local_ab0,local_7e8,"Colon-separated user and group to switch to.",0x2c);
  _ZN12clap_builder7builder3arg3Arg10value_name17h3586aa0aa1c465b1E
            (local_7e8,local_ab0,"USER:GROUP",10);
  _ZN12clap_builder7builder7command7Command3arg17h04b6d3512805db65E(local_ab0,local_568,local_7e8);
  _ZN12clap_builder7builder3arg3Arg3new17h600b3af57d23d9c0E(local_568,"skip-chdir",10);
  _ZN12clap_builder7builder3arg3Arg4long17hd907dc38845f9644E(local_7e8,local_568,"skip-chdir",10);
                    /* try { // try from 0016732c to 00167347 has its CatchHandler @ 00167443 */
  _ZN12clap_builder7builder3arg3Arg4help17h4f0c1de7b41ae031E
            (local_568,local_7e8,
             "Use this option to not change the working directory to / after changing the root directory to newroot, i.e., inside the chroot."
             ,0x7f);
  _ZN12clap_builder7builder3arg3Arg6action17h77f0a6791951ab7cE(local_7e8,local_568,2);
  _ZN12clap_builder7builder7command7Command3arg17h04b6d3512805db65E(local_568,local_ab0,local_7e8);
  _ZN12clap_builder7builder3arg3Arg3new17h600b3af57d23d9c0E(local_ab0,"command",7);
  _ZN12clap_builder7builder3arg3Arg6action17h77f0a6791951ab7cE(local_7e8,local_ab0,1);
                    /* try { // try from 001673ab to 001673bc has its CatchHandler @ 00167431 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h1258efaa4f04a1d2E(local_ab0,local_7e8,6);
  (*(code *)PTR_memcpy_00201528)(local_7e8,local_ab0,0x278);
  local_570 = local_838 | 4;
  local_56c = local_834;
  _ZN12clap_builder7builder3arg3Arg5index17h9e2e0ba4091d6a0fE(local_ab0,local_7e8,2);
  _ZN12clap_builder7builder7command7Command3arg17h04b6d3512805db65E(param_1,local_568,local_ab0);
  return param_1;
}