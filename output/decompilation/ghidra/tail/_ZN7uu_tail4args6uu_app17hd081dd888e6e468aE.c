undefined8 _ZN7uu_tail4args6uu_app17hd081dd888e6e468aE(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined local_ac0 [632];
  uint local_848;
  undefined4 local_844;
  undefined *local_840;
  undefined8 local_838;
  undefined *local_830;
  undefined8 local_828;
  uint local_5c8;
  undefined4 local_5c4;
  ulong local_584;
  undefined4 local_57c;
  undefined local_578 [632];
  uint local_300;
  undefined4 local_2fc;
  ulong local_2bc;
  undefined4 local_2b4;
  undefined *local_2b0;
  undefined8 local_2a8;
  undefined *local_2a0;
  undefined8 local_298;
  
  uVar2 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0027d350)();
  _ZN12clap_builder7builder7command7Command3new17h2e31ba8c757b8f5eE(&local_840,uVar2);
  _ZN12clap_builder7builder7command7Command7version17h267fdd9edaa9591bE(local_578,&local_840);
  _ZN12clap_builder7builder7command7Command5about17h89914f5fde8276ecE(&local_840,local_578);
                    /* try { // try from 001a0250 to 001a0266 has its CatchHandler @ 001a0e09 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_0027d7b0)(local_ac0,&DAT_0012492c,0x16)
  ;
  _ZN12clap_builder7builder7command7Command14override_usage17h3d5ba385d058e130E
            (local_578,&local_840,local_ac0);
  puVar1 = PTR_memcpy_0027d2f0;
  (*(code *)PTR_memcpy_0027d2f0)(&local_840,local_578,700);
  local_584 = local_2bc | 0x8000000080;
  local_57c = local_2b4;
  _ZN12clap_builder7builder3arg3Arg3new17h20264cdf54e40620E(local_578,&DAT_00124553,5);
  _ZN12clap_builder7builder3arg3Arg5short17h2a594879963a62b8E(local_ac0,local_578,99);
  _ZN12clap_builder7builder3arg3Arg4long17h445183b57429113bE(local_578,local_ac0,&DAT_00124553,5);
  (*(code *)puVar1)(local_ac0,local_578,0x278);
  local_848 = local_300 | 0x20;
  local_844 = local_2fc;
  local_2b0 = &DAT_00124553;
  local_2a8 = 5;
  local_2a0 = &DAT_00124558;
  local_298 = 5;
                    /* try { // try from 001a0376 to 001a03ab has its CatchHandler @ 001a0ea8 */
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h21f226da5fcfe92aE
            (local_578,local_ac0,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg4help17hf63af9f8bad37977E(local_ac0,local_578,&DAT_00124942,0x18)
  ;
  _ZN12clap_builder7builder7command7Command3arg17hc0fd4ce8e2245b06E(local_578,&local_840,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h20264cdf54e40620E(&local_840,&DAT_00124645,6);
  _ZN12clap_builder7builder3arg3Arg5short17h2a594879963a62b8E(local_ac0,&local_840,0x66);
  _ZN12clap_builder7builder3arg3Arg4long17h445183b57429113bE(&local_840,local_ac0,&DAT_00124645,6);
                    /* try { // try from 001a0415 to 001a0421 has its CatchHandler @ 001a0ef0 */
  _ZN12clap_builder7builder3arg3Arg21default_missing_value17h3c843c8a98e9163dE(local_ac0,&local_840)
  ;
  _ZN12clap_builder7builder3arg3Arg8num_args17hb51fb6a5d668a320E(&local_840,local_ac0,0,1);
  (*(code *)PTR_memcpy_0027d2f0)(local_ac0,&local_840,0x278);
  local_848 = local_5c8 | 0x80;
  local_844 = local_5c4;
  local_840 = &DAT_0012495a;
  local_838 = 10;
  local_830 = &DAT_00121a58;
  local_828 = 4;
                    /* try { // try from 001a04a8 to 001a04bc has its CatchHandler @ 001a0df7 */
  _ZN117__LT_uucore__features__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17h9fa9d8b15e49bd57E
            (&local_2b0,&local_840);
                    /* try { // try from 001a04bd to 001a04d6 has its CatchHandler @ 001a0df2 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17ha026d414d5d080ccE
            (&local_840,local_ac0,&local_2b0);
                    /* try { // try from 001a04d7 to 001a0512 has its CatchHandler @ 001a0ef0 */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h5382a3db1c32db33E
            (local_ac0,&local_840,&DAT_00124645,6);
  _ZN12clap_builder7builder3arg3Arg4help17hf63af9f8bad37977E
            (&local_2b0,local_ac0,&DAT_00124964,0x1a);
  _ZN12clap_builder7builder7command7Command3arg17hc0fd4ce8e2245b06E(&local_840,local_578,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h20264cdf54e40620E(local_578,&DAT_00124558,5);
  _ZN12clap_builder7builder3arg3Arg5short17h2a594879963a62b8E(local_ac0,local_578,0x6e);
  _ZN12clap_builder7builder3arg3Arg4long17h445183b57429113bE(local_578,local_ac0,&DAT_00124558,5);
  (*(code *)PTR_memcpy_0027d2f0)(local_ac0,local_578,0x278);
  local_848 = local_300 | 0x20;
  local_844 = local_2fc;
  local_2b0 = &DAT_00124553;
  local_2a8 = 5;
  local_2a0 = &DAT_00124558;
  local_298 = 5;
                    /* try { // try from 001a05d5 to 001a060a has its CatchHandler @ 001a0e96 */
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h21f226da5fcfe92aE
            (local_578,local_ac0,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg4help17hf63af9f8bad37977E(local_ac0,local_578,&DAT_0012497e,0x18)
  ;
  _ZN12clap_builder7builder7command7Command3arg17hc0fd4ce8e2245b06E(local_578,&local_840,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h20264cdf54e40620E(&local_840,&DAT_00124691,3);
  _ZN12clap_builder7builder3arg3Arg4long17h445183b57429113bE(local_ac0,&local_840,&DAT_00124691,3);
                    /* try { // try from 001a065c to 001a06b3 has its CatchHandler @ 001a0ede */
  _ZN12clap_builder7builder3arg3Arg10value_name17h1a60bc4a9d9b1dcfE
            (&local_840,local_ac0,&DAT_00124996,3);
  _ZN12clap_builder7builder3arg3Arg4help17hf63af9f8bad37977E
            (local_ac0,&local_840,&DAT_00124999,0x2d);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h5382a3db1c32db33E
            (&local_2b0,local_ac0,&DAT_00124691,3);
  _ZN12clap_builder7builder7command7Command3arg17hc0fd4ce8e2245b06E(&local_840,local_578,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h20264cdf54e40620E(local_578,&DAT_00124699,5);
  _ZN12clap_builder7builder3arg3Arg5short17h2a594879963a62b8E(local_ac0,local_578,0x71);
  _ZN12clap_builder7builder3arg3Arg4long17h445183b57429113bE(local_578,local_ac0,&DAT_00124699,5);
                    /* try { // try from 001a0720 to 001a0793 has its CatchHandler @ 001a0ecc */
  _ZN12clap_builder7builder3arg3Arg13visible_alias17hdd9e01bb24d43dbfE(local_ac0,local_578);
  local_2b0 = &DAT_00124699;
  local_2a8 = 5;
  local_2a0 = &DAT_00124656;
  local_298 = 7;
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h21f226da5fcfe92aE
            (local_578,local_ac0,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg4help17hf63af9f8bad37977E(local_ac0,local_578,&DAT_001249cc,0x26)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h3c323cccbe8af5d1E(&local_2b0,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17hc0fd4ce8e2245b06E(local_578,&local_840,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h20264cdf54e40620E(&local_840,&DAT_00124670,0xe);
  _ZN12clap_builder7builder3arg3Arg5short17h2a594879963a62b8E(local_ac0,&local_840,0x73);
                    /* try { // try from 001a07f7 to 001a084f has its CatchHandler @ 001a0e84 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h1a60bc4a9d9b1dcfE
            (&local_840,local_ac0,&DAT_001249f2,1);
  _ZN12clap_builder7builder3arg3Arg4long17h445183b57429113bE(local_ac0,&local_840,&DAT_00124670,0xe)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17hf63af9f8bad37977E
            (&local_2b0,local_ac0,&DAT_001249f3,0x48);
  _ZN12clap_builder7builder7command7Command3arg17hc0fd4ce8e2245b06E(&local_840,local_578,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h20264cdf54e40620E(local_578,&DAT_0012467e,0x13);
                    /* try { // try from 001a0889 to 001a08db has its CatchHandler @ 001a0e72 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h1a60bc4a9d9b1dcfE
            (local_ac0,local_578,&DAT_001249f2,1);
  _ZN12clap_builder7builder3arg3Arg4long17h445183b57429113bE(local_578,local_ac0,&DAT_0012467e,0x13)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17hf63af9f8bad37977E(local_ac0,local_578,&DAT_00124a3b,0xfe)
  ;
  _ZN12clap_builder7builder7command7Command3arg17hc0fd4ce8e2245b06E(local_578,&local_840,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h20264cdf54e40620E(&local_840,&DAT_00124656,7);
  _ZN12clap_builder7builder3arg3Arg5short17h2a594879963a62b8E(local_ac0,&local_840,0x76);
  _ZN12clap_builder7builder3arg3Arg4long17h445183b57429113bE(&local_840,local_ac0,&DAT_00124656,7);
  local_2b0 = &DAT_00124699;
  local_2a8 = 5;
  local_2a0 = &DAT_00124656;
  local_298 = 7;
                    /* try { // try from 001a0966 to 001a0998 has its CatchHandler @ 001a0e5d */
  _ZN12clap_builder7builder3arg3Arg18overrides_with_all17h21f226da5fcfe92aE
            (local_ac0,&local_840,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg4help17hf63af9f8bad37977E
            (&local_840,local_ac0,&DAT_00124b39,0x27);
  _ZN12clap_builder7builder3arg3Arg6action17h3c323cccbe8af5d1E(local_ac0,&local_840,2);
  _ZN12clap_builder7builder7command7Command3arg17hc0fd4ce8e2245b06E(&local_840,local_578,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h20264cdf54e40620E(local_578,&DAT_00124544,0xf);
  _ZN12clap_builder7builder3arg3Arg5short17h2a594879963a62b8E(local_ac0,local_578,0x7a);
  _ZN12clap_builder7builder3arg3Arg4long17h445183b57429113bE(local_578,local_ac0,&DAT_00124544,0xf);
                    /* try { // try from 001a0a1a to 001a0a32 has its CatchHandler @ 001a0ddd */
  _ZN12clap_builder7builder3arg3Arg4help17hf63af9f8bad37977E(local_ac0,local_578,&DAT_00124b60,0x22)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h3c323cccbe8af5d1E(&local_2b0,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17hc0fd4ce8e2245b06E(local_578,&local_840,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h20264cdf54e40620E(&local_840,&DAT_0012464b,0xb);
                    /* try { // try from 001a0a81 to 001a0af4 has its CatchHandler @ 001a0eba */
  _ZN12clap_builder7builder3arg3Arg5alias17h5de87fc9649bfe6fE
            (local_ac0,&local_840,&DAT_001222a0,0x10);
  _ZN12clap_builder7builder3arg3Arg5alias17h5de87fc9649bfe6fE(&local_840,local_ac0,&DAT_00124b82,3);
  _ZN12clap_builder7builder3arg3Arg4long17h445183b57429113bE(local_ac0,&local_840,&DAT_0012464b,0xb)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17hf63af9f8bad37977E
            (&local_840,local_ac0,&DAT_00124b85,0x31);
  _ZN12clap_builder7builder3arg3Arg6action17h3c323cccbe8af5d1E(local_ac0,&local_840,2);
  _ZN12clap_builder7builder7command7Command3arg17hc0fd4ce8e2245b06E(&local_840,local_578,local_ac0);
  _ZN12clap_builder7builder3arg3Arg3new17h20264cdf54e40620E(local_578,&DAT_00124640,5);
  _ZN12clap_builder7builder3arg3Arg4long17h445183b57429113bE(local_ac0,local_578,&DAT_00124640,5);
                    /* try { // try from 001a0b5e to 001a0b97 has its CatchHandler @ 001a0e48 */
  _ZN12clap_builder7builder3arg3Arg4help17hf63af9f8bad37977E(local_578,local_ac0,&DAT_00124bb6,0x30)
  ;
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h5382a3db1c32db33E
            (local_ac0,local_578,&DAT_00124640,5);
  _ZN12clap_builder7builder3arg3Arg6action17h3c323cccbe8af5d1E(&local_2b0,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17hc0fd4ce8e2245b06E(local_578,&local_840,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h20264cdf54e40620E(&local_840,&DAT_0012463f,1);
  _ZN12clap_builder7builder3arg3Arg5short17h2a594879963a62b8E(local_ac0,&local_840,0x46);
                    /* try { // try from 001a0bfb to 001a0c34 has its CatchHandler @ 001a0e33 */
  _ZN12clap_builder7builder3arg3Arg4help17hf63af9f8bad37977E
            (&local_840,local_ac0,&DAT_00124be6,0x1d);
  _ZN12clap_builder7builder3arg3Arg14overrides_with17h5382a3db1c32db33E
            (local_ac0,&local_840,&DAT_0012463f,1);
  _ZN12clap_builder7builder3arg3Arg6action17h3c323cccbe8af5d1E(&local_2b0,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17hc0fd4ce8e2245b06E(&local_840,local_578,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h20264cdf54e40620E(local_578,&DAT_0012465d,0x13);
  _ZN12clap_builder7builder3arg3Arg4long17h445183b57429113bE(local_ac0,local_578,&DAT_00124c03,0x12)
  ;
                    /* try { // try from 001a0ca2 to 001a0cb9 has its CatchHandler @ 001a0dc8 */
  _ZN12clap_builder7builder3arg3Arg5alias17h5de87fc9649bfe6fE
            (local_578,local_ac0,&DAT_0012465d,0x13);
  (*(code *)PTR_memcpy_0027d2f0)(local_ac0,local_578,0x278);
  local_848 = local_300 | 4;
  local_844 = local_2fc;
  _ZN12clap_builder7builder3arg3Arg6action17h3c323cccbe8af5d1E(&local_2b0,local_ac0,2);
  _ZN12clap_builder7builder7command7Command3arg17hc0fd4ce8e2245b06E(local_578,&local_840,&local_2b0)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h20264cdf54e40620E(&local_840,&DAT_00124694,5);
  _ZN12clap_builder7builder3arg3Arg6action17h3c323cccbe8af5d1E(local_ac0,&local_840,1);
  _ZN12clap_builder7builder3arg3Arg8num_args17hcbfde4872ecd4280E(&local_840,local_ac0);
  local_2b0 = (undefined *)0x2;
                    /* try { // try from 001a0d74 to 001a0d9a has its CatchHandler @ 001a0e1e */
  _ZN12clap_builder7builder3arg3Arg12value_parser17hd67223dcbbb3ce87E
            (local_ac0,&local_840,&local_2b0);
  _ZN12clap_builder7builder3arg3Arg10value_hint17hf490d386d6fe0bcfE(&local_840,local_ac0);
  _ZN12clap_builder7builder7command7Command3arg17hc0fd4ce8e2245b06E(param_1,local_578,&local_840);
  return param_1;
}