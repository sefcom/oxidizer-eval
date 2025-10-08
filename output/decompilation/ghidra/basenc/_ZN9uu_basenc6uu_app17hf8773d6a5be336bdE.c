undefined8 _ZN9uu_basenc6uu_app17hf8773d6a5be336bdE(undefined8 param_1)

{
  undefined *puVar1;
  undefined local_fb0 [640];
  undefined local_d30 [640];
  undefined local_ab0 [712];
  undefined local_7e8 [712];
  undefined local_520 [640];
  undefined local_2a0 [640];
  
  (*(code *)PTR__ZN9uu_base3211base_common8base_app17hf62dc1f5a26396f2E_00218cd8)
            (local_7e8,
             "Encode/decode data and print to standard output\nWith no FILE, or when FILE is -, read standard input.\n\nWhen decoding, the input may contain newlines in addition to the bytes of\nthe formal alphabet. Use --ignore-garbage to attempt to recover\nfrom any other non-alphabet bytes in the encoded stream."
             ,0x129,"{} [OPTION]... [FILE]",0x15);
  _ZN12clap_builder7builder3arg3Arg3new17h1f8c2db82ca22d91E(local_ab0,"base64",6);
  _ZN12clap_builder7builder3arg3Arg4long17h1b0d770fd536ad44E(local_2a0,local_ab0,"base64",6);
                    /* try { // try from 00168242 to 0016827f has its CatchHandler @ 0016878c */
  _ZN12clap_builder7builder3arg3Arg4help17hf221cb535377cfbeE
            (local_fb0,local_2a0,"same as \'base64\' program",0x18);
  _ZN12clap_builder7builder3arg3Arg6action17h75f9294667bf6f81E(local_520,local_fb0);
  _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h256b271d75ae46c1E
            (local_d30,local_520);
  (*(code *)PTR_memcpy_00218b88)(local_ab0,local_7e8,0x2c8);
  _ZN12clap_builder7builder7command7Command3arg17ha5d99f6751f86f1eE(local_7e8,local_ab0,local_d30);
  _ZN12clap_builder7builder3arg3Arg3new17h1f8c2db82ca22d91E(local_ab0,"base64url",9);
  _ZN12clap_builder7builder3arg3Arg4long17h1b0d770fd536ad44E(local_2a0,local_ab0,"base64url",9);
                    /* try { // try from 001682ee to 0016832b has its CatchHandler @ 0016878c */
  _ZN12clap_builder7builder3arg3Arg4help17hf221cb535377cfbeE
            (local_fb0,local_2a0,"file- and url-safe base64",0x19);
  _ZN12clap_builder7builder3arg3Arg6action17h75f9294667bf6f81E(local_520,local_fb0);
  _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h256b271d75ae46c1E
            (local_d30,local_520);
  (*(code *)PTR_memcpy_00218b88)(local_ab0,local_7e8,0x2c8);
  _ZN12clap_builder7builder7command7Command3arg17ha5d99f6751f86f1eE(local_7e8,local_ab0,local_d30);
  _ZN12clap_builder7builder3arg3Arg3new17h1f8c2db82ca22d91E(local_ab0,"base32",6);
  _ZN12clap_builder7builder3arg3Arg4long17h1b0d770fd536ad44E(local_2a0,local_ab0,"base32",6);
                    /* try { // try from 0016839a to 001683d7 has its CatchHandler @ 0016878c */
  _ZN12clap_builder7builder3arg3Arg4help17hf221cb535377cfbeE
            (local_fb0,local_2a0,"same as \'base32\' program",0x18);
  _ZN12clap_builder7builder3arg3Arg6action17h75f9294667bf6f81E(local_520,local_fb0);
  _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h256b271d75ae46c1E
            (local_d30,local_520);
  (*(code *)PTR_memcpy_00218b88)(local_ab0,local_7e8,0x2c8);
  _ZN12clap_builder7builder7command7Command3arg17ha5d99f6751f86f1eE(local_7e8,local_ab0,local_d30);
  _ZN12clap_builder7builder3arg3Arg3new17h1f8c2db82ca22d91E(local_ab0,"base32hex",9);
  _ZN12clap_builder7builder3arg3Arg4long17h1b0d770fd536ad44E(local_2a0,local_ab0,"base32hex",9);
                    /* try { // try from 00168446 to 00168483 has its CatchHandler @ 0016878c */
  _ZN12clap_builder7builder3arg3Arg4help17hf221cb535377cfbeE
            (local_fb0,local_2a0,"extended hex alphabet base32",0x1c);
  _ZN12clap_builder7builder3arg3Arg6action17h75f9294667bf6f81E(local_520,local_fb0);
  _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h256b271d75ae46c1E
            (local_d30,local_520);
  (*(code *)PTR_memcpy_00218b88)(local_ab0,local_7e8,0x2c8);
  _ZN12clap_builder7builder7command7Command3arg17ha5d99f6751f86f1eE(local_7e8,local_ab0,local_d30);
  _ZN12clap_builder7builder3arg3Arg3new17h1f8c2db82ca22d91E(local_ab0,"base16",6);
  _ZN12clap_builder7builder3arg3Arg4long17h1b0d770fd536ad44E(local_2a0,local_ab0,"base16",6);
                    /* try { // try from 001684f2 to 0016852f has its CatchHandler @ 0016878c */
  _ZN12clap_builder7builder3arg3Arg4help17hf221cb535377cfbeE(local_fb0,local_2a0,"hex encoding",0xc)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17h75f9294667bf6f81E(local_520,local_fb0);
  _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h256b271d75ae46c1E
            (local_d30,local_520);
  (*(code *)PTR_memcpy_00218b88)(local_ab0,local_7e8,0x2c8);
  _ZN12clap_builder7builder7command7Command3arg17ha5d99f6751f86f1eE(local_7e8,local_ab0,local_d30);
  _ZN12clap_builder7builder3arg3Arg3new17h1f8c2db82ca22d91E(local_ab0,"base2lsbf",9);
  _ZN12clap_builder7builder3arg3Arg4long17h1b0d770fd536ad44E(local_2a0,local_ab0,"base2lsbf",9);
                    /* try { // try from 0016859e to 001685db has its CatchHandler @ 0016878c */
  _ZN12clap_builder7builder3arg3Arg4help17hf221cb535377cfbeE
            (local_fb0,local_2a0,"bit string with least significant bit (lsb) first",0x31);
  _ZN12clap_builder7builder3arg3Arg6action17h75f9294667bf6f81E(local_520,local_fb0);
  _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h256b271d75ae46c1E
            (local_d30,local_520);
  (*(code *)PTR_memcpy_00218b88)(local_ab0,local_7e8,0x2c8);
  _ZN12clap_builder7builder7command7Command3arg17ha5d99f6751f86f1eE(local_7e8,local_ab0,local_d30);
  _ZN12clap_builder7builder3arg3Arg3new17h1f8c2db82ca22d91E(local_ab0,"base2msbf",9);
  _ZN12clap_builder7builder3arg3Arg4long17h1b0d770fd536ad44E(local_2a0,local_ab0,"base2msbf",9);
                    /* try { // try from 0016864a to 00168687 has its CatchHandler @ 0016878c */
  _ZN12clap_builder7builder3arg3Arg4help17hf221cb535377cfbeE
            (local_fb0,local_2a0,"bit string with most significant bit (msb) first",0x30);
  _ZN12clap_builder7builder3arg3Arg6action17h75f9294667bf6f81E(local_520,local_fb0);
  _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h256b271d75ae46c1E
            (local_d30,local_520);
  (*(code *)PTR_memcpy_00218b88)(local_ab0,local_7e8,0x2c8);
  _ZN12clap_builder7builder7command7Command3arg17ha5d99f6751f86f1eE(local_7e8,local_ab0,local_d30);
  _ZN12clap_builder7builder3arg3Arg3new17h1f8c2db82ca22d91E(local_ab0,"z85",3);
  _ZN12clap_builder7builder3arg3Arg4long17h1b0d770fd536ad44E(local_2a0,local_ab0,"z85",3);
                    /* try { // try from 001686f6 to 00168733 has its CatchHandler @ 0016878c */
  _ZN12clap_builder7builder3arg3Arg4help17hf221cb535377cfbeE(local_fb0,local_2a0,"ascii85-li",0x7f);
  _ZN12clap_builder7builder3arg3Arg6action17h75f9294667bf6f81E(local_520,local_fb0);
  _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h256b271d75ae46c1E
            (local_d30,local_520);
  puVar1 = PTR_memcpy_00218b88;
  (*(code *)PTR_memcpy_00218b88)(local_ab0,local_7e8,0x2c8);
  _ZN12clap_builder7builder7command7Command3arg17ha5d99f6751f86f1eE(local_7e8,local_ab0,local_d30);
  (*(code *)puVar1)(param_1,local_7e8,0x2c8);
  return param_1;
}