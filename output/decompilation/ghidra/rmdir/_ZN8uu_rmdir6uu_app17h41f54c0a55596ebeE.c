undefined8 _ZN8uu_rmdir6uu_app17h41f54c0a55596ebeE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_ab0 [632];
  uint local_838;
  undefined4 local_834;
  ulong local_7f4;
  undefined4 local_7ec;
  undefined local_7e8 [632];
  uint local_570;
  undefined4 local_56c;
  undefined local_568 [700];
  ulong local_2ac;
  undefined4 local_2a4;
  undefined8 local_2a0 [80];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001e4cc8)();
  _ZN12clap_builder7builder7command7Command3new17h576d2df86fc63c7aE(local_ab0,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hd7e49546799cfb28E(local_568,local_ab0);
  _ZN12clap_builder7builder7command7Command5about17hdb56695bbe51bf91E(local_ab0,local_568);
                    /* try { // try from 00155157 to 00155170 has its CatchHandler @ 00155491 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001e4e08)
            (local_7e8,"{} [OPTION]... DIRECTORY...",0x1b);
  _ZN12clap_builder7builder7command7Command14override_usage17hf62606498b350be2E
            (local_568,local_ab0,local_7e8);
  (*(code *)PTR_memcpy_001e4c98)(local_ab0,local_568,700);
  local_7f4 = local_2ac | 0x8000000080;
  local_7ec = local_2a4;
  _ZN12clap_builder7builder3arg3Arg3new17h5f1366766a2cb538E
            (local_568,"ignore-fail-on-non-empty",0x18);
  _ZN12clap_builder7builder3arg3Arg4long17h68cfac47167c0ac4E
            (local_7e8,local_568,"ignore-fail-on-non-empty",0x18);
                    /* try { // try from 00155203 to 0015521e has its CatchHandler @ 00155482 */
  _ZN12clap_builder7builder3arg3Arg4help17h63fd19df65bad6bcE
            (local_568,local_7e8,
             "ignore each failure that is solely because a directory is non-empty",0x43);
  _ZN12clap_builder7builder3arg3Arg6action17hd012108747fafac9E(local_7e8,local_568,2);
  _ZN12clap_builder7builder7command7Command3arg17hf9a3cc80c50193c0E(local_568,local_ab0,local_7e8);
  _ZN12clap_builder7builder3arg3Arg3new17h5f1366766a2cb538E(local_ab0,"parents",7);
  _ZN12clap_builder7builder3arg3Arg5short17h28b5f0ae63d184a2E(local_7e8,local_ab0,0x70);
  _ZN12clap_builder7builder3arg3Arg4long17h68cfac47167c0ac4E(local_ab0,local_7e8,"parents",7);
                    /* try { // try from 0015529d to 001552b8 has its CatchHandler @ 00155470 */
  _ZN12clap_builder7builder3arg3Arg4help17h63fd19df65bad6bcE
            (local_7e8,local_ab0,
             "remove DIRECTORY and its ancestors; e.g.,\n                  \'rmdir -p a/b/c\' is similar to rmdir a/b/c a/b a"
             ,0x6c);
  _ZN12clap_builder7builder3arg3Arg6action17hd012108747fafac9E(local_2a0,local_7e8,2);
  _ZN12clap_builder7builder7command7Command3arg17hf9a3cc80c50193c0E(local_ab0,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h5f1366766a2cb538E
            (local_568,"verbose: removing directory, \n",7);
  _ZN12clap_builder7builder3arg3Arg5short17h28b5f0ae63d184a2E(local_7e8,local_568,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17h68cfac47167c0ac4E
            (local_568,local_7e8,"verbose: removing directory, \n",7);
                    /* try { // try from 0015533d to 00155358 has its CatchHandler @ 00155461 */
  _ZN12clap_builder7builder3arg3Arg4help17h63fd19df65bad6bcE
            (local_7e8,local_568,"output a diagnostic for every directory processed",0x31);
  _ZN12clap_builder7builder3arg3Arg6action17hd012108747fafac9E(local_2a0,local_7e8,2);
  _ZN12clap_builder7builder7command7Command3arg17hf9a3cc80c50193c0E(local_568,local_ab0,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h5f1366766a2cb538E(local_ab0,&DAT_00117364,4);
  _ZN12clap_builder7builder3arg3Arg6action17hd012108747fafac9E(local_7e8,local_ab0,1);
  _ZN12clap_builder7builder3arg3Arg8num_args17hb06be691b3a932edE(local_ab0,local_7e8);
  (*(code *)PTR_memcpy_001e4c98)(local_7e8,local_ab0,0x278);
  local_570 = local_838 | 1;
  local_56c = local_834;
  local_2a0[0] = 2;
                    /* try { // try from 00155410 to 00155436 has its CatchHandler @ 001554a0 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h02bae8d5a7fc4497E(local_ab0,local_7e8,local_2a0)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_hint17hd5b50e4e7b35f9faE(local_7e8,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17hf9a3cc80c50193c0E(param_1,local_568,local_7e8);
  return param_1;
}