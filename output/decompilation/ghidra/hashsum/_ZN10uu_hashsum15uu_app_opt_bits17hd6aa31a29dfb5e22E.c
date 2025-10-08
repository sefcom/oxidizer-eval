void _ZN10uu_hashsum15uu_app_opt_bits17hd6aa31a29dfb5e22E(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_7e8 [640];
  undefined local_568 [640];
  undefined local_2e8 [712];
  
  (*(code *)PTR_memcpy_0025ac18)(local_2e8,param_2,0x2c8);
  _ZN12clap_builder7builder3arg3Arg3new17h6aa2bb62d5e3b990E(auStack_7e8,&DAT_00111d38,4);
  _ZN12clap_builder7builder3arg3Arg4long17h400c12573ef6d75cE(local_568,auStack_7e8,&DAT_00111d38,4);
                    /* try { // try from 001833f9 to 00183436 has its CatchHandler @ 00183459 */
  _ZN12clap_builder7builder3arg3Arg4help17h2bc0660901b2ceb5E
            (auStack_7e8,local_568,"set the size of the output (only for SHAKE)",0x2b);
  _ZN12clap_builder7builder3arg3Arg10value_name17h58de39279c54d2faE
            (local_568,auStack_7e8,&DAT_00111dcc);
  _ZN12clap_builder7builder3arg3Arg12value_parser17hdf8697f3f325e074E(auStack_7e8,local_568);
  _ZN12clap_builder7builder7command7Command3arg17h6ab44b22cd7561c2E(param_1,local_2e8,auStack_7e8);
  return;
}