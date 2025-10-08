undefined8 _ZN5uu_wc6uu_app17h2fb478d89b05fb4cE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_ac8 [3];
  char *local_ab0;
  undefined8 local_aa8;
  char *local_aa0;
  undefined8 local_a98;
  undefined *local_a90;
  undefined8 local_a88;
  char *local_a80;
  undefined8 local_a78;
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
  undefined local_2a0 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001ff9e0)();
  _ZN12clap_builder7builder7command7Command3new17hdb76b1b3bbe88b70E(&local_ab0,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hd6e327b2345828fbE(local_568,&local_ab0);
  _ZN12clap_builder7builder7command7Command5about17hdcb6fb92a1e0caf9E(&local_ab0,local_568);
                    /* try { // try from 00165ac7 to 00165ae0 has its CatchHandler @ 0016613a */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001ffcd0)
            (local_7e8,"{} [OPTION]... [FILE]...",0x18);
  _ZN12clap_builder7builder7command7Command14override_usage17hc9a69258f21906b8E
            (local_568,&local_ab0,local_7e8);
  (*(code *)PTR_memcpy_001ff9c8)(&local_ab0,local_568,700);
  local_7f4 = local_2ac | 0x8800000088;
  local_7ec = local_2a4;
  _ZN12clap_builder7builder3arg3Arg3new17h8c4090ff46fad2eaE(local_568,&DAT_0011a106,5);
  _ZN12clap_builder7builder3arg3Arg5short17h1a3b538d32751114E(local_7e8,local_568,99);
  _ZN12clap_builder7builder3arg3Arg4long17hfdf46bf16e2a9055E(local_568,local_7e8,&DAT_0011a106,5);
                    /* try { // try from 00165b8b to 00165ba6 has its CatchHandler @ 0016612b */
  _ZN12clap_builder7builder3arg3Arg4help17ha00bcebb5a4e2912E
            (local_7e8,local_568,"print the byte counts",0x15);
  _ZN12clap_builder7builder3arg3Arg6action17hf63c2c22540d6dd2E(local_2a0,local_7e8,2);
  _ZN12clap_builder7builder7command7Command3arg17hea5d6fb53bcbcaa9E(local_568,&local_ab0,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h8c4090ff46fad2eaE(&local_ab0,&DAT_0011a10b,5);
  _ZN12clap_builder7builder3arg3Arg5short17h1a3b538d32751114E(local_7e8,&local_ab0,0x6d);
  _ZN12clap_builder7builder3arg3Arg4long17hfdf46bf16e2a9055E(&local_ab0,local_7e8,&DAT_0011a10b,5);
                    /* try { // try from 00165c25 to 00165c40 has its CatchHandler @ 00166119 */
  _ZN12clap_builder7builder3arg3Arg4help17ha00bcebb5a4e2912E
            (local_7e8,&local_ab0,"print the character counts",0x1a);
  _ZN12clap_builder7builder3arg3Arg6action17hf63c2c22540d6dd2E(local_2a0,local_7e8,2);
  _ZN12clap_builder7builder7command7Command3arg17hea5d6fb53bcbcaa9E(&local_ab0,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h8c4090ff46fad2eaE(local_568,&DAT_0011a110,0xb);
  _ZN12clap_builder7builder3arg3Arg4long17hfdf46bf16e2a9055E(local_7e8,local_568,&DAT_0011a110,0xb);
                    /* try { // try from 00165cad to 00165d1e has its CatchHandler @ 0016616d */
  _ZN12clap_builder7builder3arg3Arg10value_name17h43c9a29c7a9a2f59E(local_568,local_7e8,"F",1);
  _ZN12clap_builder7builder3arg3Arg4help17ha00bcebb5a4e2912E
            (local_7e8,local_568,
             "read input from the files specified by\n  NUL-terminated names in file F;\n  If F is - then read names from standard input"
             ,0x78);
  local_ac8[0] = 2;
  _ZN12clap_builder7builder3arg3Arg12value_parser17h260f25d8f2c8eb39E(local_568,local_7e8,local_ac8)
  ;
  _ZN12clap_builder7builder3arg3Arg10value_hint17hc8a704b196fdf959E(local_7e8,local_568);
  _ZN12clap_builder7builder7command7Command3arg17hea5d6fb53bcbcaa9E(local_568,&local_ab0,local_7e8);
  _ZN12clap_builder7builder3arg3Arg3new17h8c4090ff46fad2eaE(&local_ab0,&DAT_0011a11b,5);
  _ZN12clap_builder7builder3arg3Arg5short17h1a3b538d32751114E(local_7e8,&local_ab0,0x6c);
  _ZN12clap_builder7builder3arg3Arg4long17hfdf46bf16e2a9055E(&local_ab0,local_7e8,&DAT_0011a11b,5);
                    /* try { // try from 00165d85 to 00165da0 has its CatchHandler @ 00166107 */
  _ZN12clap_builder7builder3arg3Arg4help17ha00bcebb5a4e2912E
            (local_7e8,&local_ab0,"print the newline counts",0x18);
  _ZN12clap_builder7builder3arg3Arg6action17hf63c2c22540d6dd2E(local_2a0,local_7e8,2);
  _ZN12clap_builder7builder7command7Command3arg17hea5d6fb53bcbcaa9E(&local_ab0,local_568,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h8c4090ff46fad2eaE(local_568,&DAT_0011a120,0xf);
  _ZN12clap_builder7builder3arg3Arg5short17h1a3b538d32751114E(local_7e8,local_568,0x4c);
  _ZN12clap_builder7builder3arg3Arg4long17hfdf46bf16e2a9055E(local_568,local_7e8,&DAT_0011a120,0xf);
                    /* try { // try from 00165e25 to 00165e40 has its CatchHandler @ 001660f8 */
  _ZN12clap_builder7builder3arg3Arg4help17ha00bcebb5a4e2912E
            (local_7e8,local_568,"print the length of the longest line",0x24);
  _ZN12clap_builder7builder3arg3Arg6action17hf63c2c22540d6dd2E(local_2a0,local_7e8,2);
  _ZN12clap_builder7builder7command7Command3arg17hea5d6fb53bcbcaa9E(local_568,&local_ab0,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h8c4090ff46fad2eaE(&local_ab0,&DAT_0011a12f,5);
  _ZN12clap_builder7builder3arg3Arg4long17hfdf46bf16e2a9055E(local_7e8,&local_ab0,&DAT_0011a12f,5);
  local_ab0 = "autoBool";
  local_aa8 = 4;
  local_aa0 = "always";
  local_a98 = 6;
  local_a90 = &DAT_00118b48;
  local_a88 = 4;
  local_a80 = "never";
  local_a78 = 5;
                    /* try { // try from 00165efb to 00165f0c has its CatchHandler @ 001660e6 */
  _ZN117__LT_uucore__features__parser__shortcut_value_parser__ShortcutValueParser_u20_as_u20_core__convert__From_LT_I_GT__GT_4from17h5633c288c25eb3daE
            (local_2a0,&local_ab0);
                    /* try { // try from 00165f0d to 00165f26 has its CatchHandler @ 001660e4 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h97d2b77951c87a42E
            (&local_ab0,local_7e8,local_2a0);
                    /* try { // try from 00165f27 to 00165f44 has its CatchHandler @ 0016615b */
  _ZN12clap_builder7builder3arg3Arg10value_name17h43c9a29c7a9a2f59E
            (local_7e8,&local_ab0,&DAT_00118b38,4);
  (*(code *)PTR_memcpy_001ff9c8)(&local_ab0,local_7e8,0x278);
  local_838 = local_570 | 0x10;
  local_834 = local_56c;
                    /* try { // try from 00165f7f to 00165f9a has its CatchHandler @ 0016615b */
  _ZN12clap_builder7builder3arg3Arg4help17ha00bcebb5a4e2912E
            (local_7e8,&local_ab0,
             "when to print a line with total counts;\n  WHEN can be: auto, always, only, never",
             0x50);
  _ZN12clap_builder7builder7command7Command3arg17hea5d6fb53bcbcaa9E(&local_ab0,local_568,local_7e8);
  _ZN12clap_builder7builder3arg3Arg3new17h8c4090ff46fad2eaE(local_568,&DAT_0011a134,5);
  _ZN12clap_builder7builder3arg3Arg5short17h1a3b538d32751114E(local_7e8,local_568,0x77);
  _ZN12clap_builder7builder3arg3Arg4long17hfdf46bf16e2a9055E(local_568,local_7e8,&DAT_0011a134,5);
                    /* try { // try from 00166007 to 00166022 has its CatchHandler @ 001660d2 */
  _ZN12clap_builder7builder3arg3Arg4help17ha00bcebb5a4e2912E
            (local_7e8,local_568,"print the word counts",0x15);
  _ZN12clap_builder7builder3arg3Arg6action17hf63c2c22540d6dd2E(local_2a0,local_7e8,2);
  _ZN12clap_builder7builder7command7Command3arg17hea5d6fb53bcbcaa9E(local_568,&local_ab0,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h8c4090ff46fad2eaE(&local_ab0,&DAT_0011a139,5);
  _ZN12clap_builder7builder3arg3Arg6action17hf63c2c22540d6dd2E(local_7e8,&local_ab0,1);
                    /* try { // try from 00166086 to 001660a7 has its CatchHandler @ 00166149 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h260f25d8f2c8eb39E
            (&local_ab0,local_7e8,local_ac8);
  _ZN12clap_builder7builder3arg3Arg10value_hint17hc8a704b196fdf959E(local_7e8,&local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17hea5d6fb53bcbcaa9E(param_1,local_568,local_7e8);
  return param_1;
}