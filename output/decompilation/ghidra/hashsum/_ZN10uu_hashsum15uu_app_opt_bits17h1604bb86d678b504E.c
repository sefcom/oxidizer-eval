void _ZN10uu_hashsum15uu_app_opt_bits17h1604bb86d678b504E(undefined8 param_1,undefined8 param_2)

{
  undefined local_770 [592];
  undefined local_520 [592];
  undefined local_2d0 [712];
  
  (*(code *)PTR_memcpy_0047f5e0)(local_2d0,param_2,0x2c8);
                    /* try { // try from 002db60e to 002db68a has its CatchHandler @ 002db6a9 */
  _ZN12clap_builder7builder3arg3Arg3new17h3b16b83c680bff0dE(local_770,&DAT_00166ae4,4);
  _ZN12clap_builder7builder3arg3Arg4long17h5908e9ea86bf7a3bE(local_520,local_770,&DAT_00166ae4,4);
  _ZN12clap_builder7builder3arg3Arg4help17h7220c48f981ef5b5E
            (local_770,local_520,
             "set the size of the output (only for SHAKE)work with MD5work with SHA1work with SHA3work with SHA3-224work with SHA3-256work with SHA3-384work with SHA3-512work with SHAKE128 using BITS for the output sizework with SHAKE256 using BITS for the output size"
             ,0x2b);
  _ZN12clap_builder7builder3arg3Arg10value_name17h91d0b43819df8b7bE
            (local_520,local_770,&DAT_00168ec8);
  _ZN12clap_builder7builder3arg3Arg12value_parser17h06bfe84f71006afcE(local_770,local_520);
  _ZN12clap_builder7builder7command7Command3arg17h001132be747f46b6E(param_1,local_2d0,local_770);
  return;
}