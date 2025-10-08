undefined8 _ZN5uu_tr6uu_app17hb3fe02f7dda5c29eE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_ab0 [640];
  undefined local_830 [700];
  uint local_574;
  ulong local_570;
  undefined local_568 [700];
  uint local_2ac;
  ulong local_2a8;
  undefined8 local_2a0 [80];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00205328)();
  _ZN12clap_builder7builder7command7Command3new17hf6b5217b571cfc36E(local_830,uVar1);
  _ZN12clap_builder7builder7command7Command7version17he59be18cac18fb88E(local_568,local_830);
  _ZN12clap_builder7builder7command7Command5about17h70cc0b6c72480c67E(local_830,local_568);
                    /* try { // try from 0017211d to 00172133 has its CatchHandler @ 001724f4 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_00205540)
            (local_ab0,"{} [OPTION]... SET1 [SET2]",0x1a);
  _ZN12clap_builder7builder7command7Command14override_usage17hc9680a393529db81E
            (local_568,local_830,local_ab0);
  (*(code *)PTR_memcpy_002051e8)(local_830,local_568,700);
  local_570 = local_2a8 | 0x80;
  local_574 = local_2ac | 0xa0;
  _ZN12clap_builder7builder3arg3Arg3new17hdbf5f3c818aaa1bdE(local_568,"complement",10);
                    /* try { // try from 001721ab to 0017223a has its CatchHandler @ 0017253c */
  _ZN12clap_builder7builder3arg3Arg19visible_short_alias17h8bc91419bad83a32E(local_ab0,local_568);
  _ZN12clap_builder7builder3arg3Arg5short17hc815e1e027380631E(local_568,local_ab0,99);
  _ZN12clap_builder7builder3arg3Arg4long17h24e3c52d467d1682E(local_ab0,local_568,"complement",10);
  _ZN12clap_builder7builder3arg3Arg4help17had42866d35738224E
            (local_568,local_ab0,"use the complement of SET1",0x1a);
  _ZN12clap_builder7builder3arg3Arg6action17h1fe4d170f312104eE(local_ab0,local_568);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h1d8337fa5d51364fE
            (local_2a0,local_ab0,"complement",10);
  _ZN12clap_builder7builder7command7Command3arg17h9e0927a5770c3f42E(local_568,local_830,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17hdbf5f3c818aaa1bdE(local_830,"delete",6);
  _ZN12clap_builder7builder3arg3Arg5short17hc815e1e027380631E(local_ab0,local_830,100);
  _ZN12clap_builder7builder3arg3Arg4long17h24e3c52d467d1682E(local_830,local_ab0,"delete",6);
                    /* try { // try from 001722a7 to 001722ed has its CatchHandler @ 0017252a */
  _ZN12clap_builder7builder3arg3Arg4help17had42866d35738224E
            (local_ab0,local_830,"delete characters in SET1, do not translate",0x2b);
  _ZN12clap_builder7builder3arg3Arg6action17h1fe4d170f312104eE(local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h1d8337fa5d51364fE
            (local_ab0,local_830,"delete",6);
  _ZN12clap_builder7builder7command7Command3arg17h9e0927a5770c3f42E(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17hdbf5f3c818aaa1bdE(local_568,"squeeze-repeats",0xf);
  _ZN12clap_builder7builder3arg3Arg4long17h24e3c52d467d1682E
            (local_ab0,local_568,"squeeze-repeats",0xf);
  _ZN12clap_builder7builder3arg3Arg5short17hc815e1e027380631E(local_568,local_ab0,0x73);
                    /* try { // try from 00172357 to 0017239d has its CatchHandler @ 00172518 */
  _ZN12clap_builder7builder3arg3Arg4help17had42866d35738224E
            (local_ab0,local_568,
             "replace each sequence of a repeated character that is listed in the last specified SET, with a single occurrence of that character"
             ,0x82);
  _ZN12clap_builder7builder3arg3Arg6action17h1fe4d170f312104eE(local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h1d8337fa5d51364fE
            (local_ab0,local_568,"squeeze-repeats",0xf);
  _ZN12clap_builder7builder7command7Command3arg17h9e0927a5770c3f42E(local_568,local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17hdbf5f3c818aaa1bdE(local_830,"truncate-set1",0xd);
  _ZN12clap_builder7builder3arg3Arg4long17h24e3c52d467d1682E
            (local_ab0,local_830,"truncate-set1",0xd);
  _ZN12clap_builder7builder3arg3Arg5short17hc815e1e027380631E(local_830,local_ab0,0x74);
                    /* try { // try from 00172407 to 0017244d has its CatchHandler @ 00172506 */
  _ZN12clap_builder7builder3arg3Arg4help17had42866d35738224E
            (local_ab0,local_830,"first truncate SET1 to length of SET2",0x25);
  _ZN12clap_builder7builder3arg3Arg6action17h1fe4d170f312104eE(local_830,local_ab0);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h1d8337fa5d51364fE
            (local_ab0,local_830,"truncate-set1",0xd);
  _ZN12clap_builder7builder7command7Command3arg17h9e0927a5770c3f42E(local_830,local_568,local_ab0);
  _ZN12clap_builder7builder3arg3Arg3new17hdbf5f3c818aaa1bdE(local_568,&DAT_00119db8,4);
  _ZN12clap_builder7builder3arg3Arg8num_args17h7f3365883499be02E(local_ab0,local_568);
  local_2a0[0] = 2;
                    /* try { // try from 001724a0 to 001724b7 has its CatchHandler @ 001724e2 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h19bdfe0c92a9be7bE(local_568,local_ab0,local_2a0)
  ;
  _ZN12clap_builder7builder7command7Command3arg17h9e0927a5770c3f42E(param_1,local_830,local_568);
  return param_1;
}